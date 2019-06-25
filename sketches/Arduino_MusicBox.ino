#include <JC_Button.h>

#include "Note.h"

#define TONE_PIN PA5
#define BUTTON_PIN PA0

Button btn(BUTTON_PIN);

void setup()
{
	pinMode(TONE_PIN, OUTPUT_OPEN_DRAIN);
	digitalWrite(TONE_PIN, HIGH);
	pinMode(BUTTON_PIN, INPUT);
}

int sel = -1;
void loop()
{
	btn.read();
	if (btn.pressedFor(500))
	{
		switch (sel)
		{
		case 1:
			Play(suimu);
			break;
		case 2:
			Play(mahou);
			break;
		default:
			Play(unOwen);
			break;
		}
		btn.read();
	}
	else if (btn.wasReleased())
	{
		sel = (sel + 1) % 3;
		for (int i = sel + 1; i > 0; i--)
		{
			tone(TONE_PIN, 2048, 100);
			delay(150);
		}
	}
}

#define DELAY_TIME 5
void Play(const Node* ptrNode)
{
	uint8_t tempoTime = 150, repeatTimes;
	const Node* repeatPos;
	int8_t scaleOffset = 0; // 移調變數
	for (; ptrNode->tempo != 0xFE ; ptrNode++)
	{
		switch (ptrNode->scale)
		{
		case SET_TEMPO_TIME: // 設定16分音符節拍時間
			tempoTime = ptrNode->tempo;
			continue;
		case SET_SCALE_OFFSET: // 設定移調
			scaleOffset = ptrNode->tempo;
			continue;
		case SET_REPERT_POS: // 設置反覆起點, 反覆次數
			repeatPos = ptrNode;
			repeatTimes =  ptrNode->tempo;
			continue;
		case REPERT: // 反覆終點
			if (repeatTimes--) // 反覆次數0前跳回反覆起點
				ptrNode = repeatPos;
			continue;
		case RES: // 休止符
			break;
		default: // 普通音符
			tone(TONE_PIN, FreqTable[(int8_t)ptrNode->scale + (int8_t)scaleOffset]);
			break;
		}
		for (uint8_t tempo = ptrNode->tempo - 1; tempo > 0; tempo--) // (延遲節拍長度-1) *  節拍時間
			delay(tempoTime);
		delay(tempoTime - DELAY_TIME); // 保留DELAYTIME ms作為節拍間隔
		noTone(TONE_PIN);
		delay(DELAY_TIME); // 節拍間隔
	}
}