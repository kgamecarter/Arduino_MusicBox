#pragma once

#define DO0   0
#define DO0_  1
#define RE0   2
#define RE0_  3
#define MI0   4
#define FA0   5
#define FA0_  6
#define SO0   7
#define SO0_  8
#define LA0   9
#define LA0_ 10
#define SI0  11
#define DO1  12
#define DO1_ 13
#define RE1  14
#define RE1_ 15
#define MI1  16
#define FA1  17
#define FA1_ 18
#define SO1  19
#define SO1_ 20
#define LA1  21
#define LA1_ 22
#define SI1  23
#define DO2  24
#define DO2_ 25
#define RE2  26
#define RE2_ 27
#define MI2  28
#define FA2  29
#define FA2_ 30
#define SO2  31
#define SO2_ 32
#define LA2  33
#define LA2_ 34
#define SI2  35
#define DO3  36
#define DO3_ 37
#define RE3  38
#define RE3_ 39
#define MI3  40
#define FA3  41
#define FA3_ 42
#define SO3  43
#define SO3_ 44
#define LA3  45
#define LA3_ 46
#define SI3  47
#define DO4  48
#define DO4_ 49
#define RE4  50
#define RE4_ 51
#define MI4  52
#define FA4  53
#define FA4_ 54
#define SO4  55
#define SO4_ 56
#define LA4  57
#define LA4_ 58
#define SI4  59
#define DO5  60
#define DO5_ 61
#define RE5  62
#define RE5_ 63
#define MI5  64
#define FA5  65
#define FA5_ 66
#define SO5  67
#define SO5_ 68
#define LA5  69
#define LA5_ 70
#define SI5  71
#define DO6  72
#define DO6_ 73
#define RE6  74
#define RE6_ 75
#define MI6  76
#define FA6  77
#define FA6_ 78
#define SO6  79
#define SO6_ 80
#define LA6  81
#define LA6_ 82
#define SI6  83
#define DO7  84
#define DO7_ 85
#define RE7  86
#define RE7_ 87
#define MI7  88
#define FA7  89
#define FA7_ 90
#define SO7  91
#define SO7_ 92
#define LA7  93
#define LA7_ 94
#define SI7  95
#define DO8  96
#define DO8_ 97
#define RE8  98
#define RE8_ 99

#define RES  0xFF
#define SET_TEMPO_TIME 0xFD
#define SET_SCALE_OFFSET 0xFC
#define SET_REPERT_POS 0xFB
#define REPERT 0xFA

const unsigned int FreqTable[] = {
	16, 17, 18, 19, 21, 22, 23, 25, 26, 28, 29, 31,
	33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62,
	65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 123,
	131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247,
	262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494,
	523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988,
	1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976,
	2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951,
	4186, 4435, 4699, 4978
};

typedef struct _note
{
	uint8_t scale;
	uint8_t tempo;
} Node;

const Node unOwen[] = // U.N.オーエンは彼女なのか？
{
	{ SET_TEMPO_TIME, 100 }, { SET_SCALE_OFFSET, 0 }, { SET_REPERT_POS, 3 },
	{ RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { RE6, 1 }, { SI5, 1}, { FA5_, 1 },
	{ RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { SET_TEMPO_TIME, 66 }, { DO6_, 4 }, { DO6_, 4 }, { DO6_, 4 }, { SET_TEMPO_TIME, 100 },
	{ RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { RE6, 1 }, { SI5, 1 }, { FA5_, 1 },
	{ RE6, 1 }, { SI5, 1 }, { FA5_, 1 }, { SET_TEMPO_TIME, 66 }, { MI6, 4 }, { MI6, 4 }, { MI6, 4 }, { SET_TEMPO_TIME, 100 },
	{ REPERT, 0 },
	
	{ RE6, 8 }, { DO6_, 8 }, { FA6, 8 }, { MI6, 8 }, { RES, 2 }, { RE6, 2 }, { RES, 2 }, { RE6, 2 }, { RES, 2 }, { DO6_, 2 },
	{ RES, 2 }, { DO6_, 2 }, { RES, 2 }, { FA6, 2 }, { RES, 2 }, { FA6, 2 }, { RES, 2 }, { MI6, 2 }, { RES, 2 }, { MI6, 2 },
	{ RES, 2 }, { RE6, 2 }, { RES, 2 }, { RE6, 2 }, { RES, 2 }, { DO6_, 2 }, { RES, 2 }, { DO6_, 2 }, { RES, 2 }, { FA6, 2 },
	{ RES, 2 }, { FA6, 2 }, { RES, 2 }, { MI6, 2 }, { RES, 2 }, { MI6, 2 }, 
	
	{ FA6_, 4 }, { RE6, 4 }, { FA6, 4 }, { DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 4 }, { SO6, 4 }, { FA6_, 4 },
	{ RE6, 4 }, { FA6, 4 }, { DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 8 }, { FA6_, 4 }, { RE6, 4 }, { FA6, 4 },
	{ DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 4 }, { SO6, 4 }, { FA6_, 4 }, { RE6, 4 }, { FA6, 4 }, { DO6_, 4 },
	{ SO6_, 4 }, { FA6, 4 }, { MI6, 8 }, 
	
	{ SET_REPERT_POS, 1 },
	{ SI5, 4 }, { FA6_, 4}, { DO6_, 4}, { FA6_, 4}, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 },
	{ SI6, 2 }, { FA6_, 2 }, { DO7_, 2 }, { RE7, 2 }, { DO7_, 2 }, { RE7, 1 }, { DO7_, 1 }, { SI6, 2 }, { LA6, 2 },
	{ FA6_, 2 }, { LA6, 2 }, { MI6, 2 }, { FA6_, 2 }, { RE6,  8 },
	{ SI5, 4 }, { FA6_, 4}, { DO6_, 4 }, { FA6_, 4 }, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 },
	{ SI6, 2 }, { FA6_, 2 }, { DO7_, 2 }, { RE7, 2 }, { DO7_, 2 }, { RE7, 1 }, { DO7_, 1 }, { SI6, 2 }, { LA6, 2 }, { SI6, 16 },
	{ REPERT, 0 },
	
	{ SET_TEMPO_TIME, 66 },
	{ SET_REPERT_POS, 7 }, { LA6_, 2 }, { FA6, 2 }, { DO6_, 2 }, { REPERT, 0 }, 
	{ SET_REPERT_POS, 9 }, { LA6_, 2 }, { FA6, 2 }, { RE6, 2 }, { REPERT, 0 }, { LA6_, 2 }, { FA6, 2 }, { DO6, 2}, { LA6_, 2 }, { FA6, 2 }, { DO6, 2 },
	
	{ SET_TEMPO_TIME, 100 }, { FA6, 4}, { SET_TEMPO_TIME, 66 }, { MI6, 2 }, { FA6, 2 }, { SO6, 2 }, { SET_TEMPO_TIME, 100 }, { RE6, 6 },
	{ LA5, 1 }, { DO6, 1 },  { RE6, 2 }, { LA5, 2 },  { RE6, 2 }, { LA5, 2 }, { MI6, 2 }, { DO6, 2 }, { MI6, 2 }, { DO6, 2 },
	{ FA6, 4 }, { SET_TEMPO_TIME, 66 }, { MI6, 2 }, { FA6, 2 }, { SO6, 2 }, { SET_TEMPO_TIME, 100 }, { LA6, 6 }, { FA6, 1 }, { SO6, 1},
	{ SET_TEMPO_TIME, 66 },  { LA6_, 2 }, { FA6, 2 }, { RE6, 2 }, { LA6_, 2 }, { FA6, 2 }, { RE6, 2 }, { LA6_, 2 }, { FA6, 2 }, { DO6, 2 }, { LA6_, 2 }, { FA6, 2 }, { DO6, 2 },
	{ SET_TEMPO_TIME, 100 }, { FA6, 4}, { SET_TEMPO_TIME, 66 }, { MI6, 2 }, { FA6, 2 }, { SO6, 2 }, { SET_TEMPO_TIME, 100 }, { RE6, 6 },
	{ LA5, 1 }, { DO6, 1 },  { RE6, 2 }, { LA5, 2 },  { RE6, 2 }, { LA5, 2 }, { MI6, 2 }, { DO6, 2 }, { MI6, 2 }, { DO6, 2 },
	{ FA6, 2 }, { DO6_, 2 }, { FA6, 2 }, { DO6_, 2 }, { SET_TEMPO_TIME, 66 }, { LA6, 4 }, { LA6, 4 }, { LA6, 4 }, { SET_TEMPO_TIME, 100 },  
	
	
	{ SET_REPERT_POS, 1 }, { RE5, 8 }, { DO5_, 8 }, { FA5, 8 }, { MI5, 8}, { REPERT, 0 }, 
	
	{ FA6_, 4 }, { RE6, 4 }, { FA6, 4 }, { DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 4 }, { SO6, 4 }, { FA6_, 4 }, { RE6, 4 },
	{ FA6, 4 }, { DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 8 }, { FA6_, 4 }, { RE6, 4 }, { FA6, 4 }, { DO6_, 4 }, { SO6_, 4 },
	{ FA6, 4 }, { MI6, 4 }, { SO6, 4 }, { FA6_, 4 }, { RE6, 4 }, { FA6, 4 }, { DO6_, 4 }, { SO6_, 4 }, { FA6, 4 }, { MI6, 8 }, 
	{ RES, 8 },
	{ SI5, 4 }, { FA6_, 4 }, { DO6_, 4 }, { FA6_, 4 }, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 }, { SI6, 2 },{ FA6_, 2 },
	{ DO7_, 2 }, { RE7, 2 }, { DO7_, 2 }, { RE7, 1 }, { DO7_, 1 }, { SI6, 2 }, { LA6, 2 }, { FA6_, 2 }, { LA6, 2 }, { MI6, 2 }, { FA6_, 2 }, { RE6,  8 },
	{ SI5, 4 }, { FA6_, 4 }, { DO6_, 4 }, { FA6_, 4 }, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 }, { SI6, 2 }, { FA6_, 2 },
	{ DO7_, 2 }, { RE7, 2 }, { DO7_, 2}, { RE7, 1}, { DO7_, 1}, { SI6, 2 }, { LA6, 2 }, { SI6, 16 },
	{ SI5, 4 }, { FA6_, 4 }, { DO6_, 4 }, { FA6_, 4 }, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 }, { SI6, 2 },{ FA6_, 2 },
	{ DO7_, 2 }, { RE7, 2 }, { DO7_, 2 }, { RE7, 1 }, { DO7_, 1 }, { SI6, 2 }, { LA6, 2 }, { FA6_, 2 }, { LA6, 2 }, { MI6, 2 }, { FA6_, 2 }, { RE6,  8 },
	{ SI5, 4 }, { FA6_, 4 }, { DO6_, 4 }, { FA6_, 4 }, { RE6, 4 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 4 }, { LA6, 4 }, { SI6, 2 }, { FA6_, 2 },
	{ DO7_, 2 }, { RE7, 2 }, { DO7_, 2}, { RE7, 1}, { DO7_, 1}, { SI6, 2 }, { LA6, 2 }, { SI6, 32 },
	{0xFE, 0xFE}
};

const Node suimu[] = // 萃夢想
{
	{ SET_TEMPO_TIME, 150 }, { SET_SCALE_OFFSET, (uint8_t)-1 },
	{ MI6, 2 }, { FA6_, 2 }, { LA6, 2 }, { SI6, 2 }, { FA6_, 2 }, { MI6, 2 }, { FA6_, 2 }, { SI5, 2 }, { RE6, 2 }, { MI6, 2 },
	{ DO6_, 2 }, { RE6, 2 }, { DO6_, 2 }, { LA5, 2 }, { SI5, 2 }, { FA5_, 2 }, { RE6, 2 }, { MI6, 2}, { FA6_, 4 }, { SI5, 2 },
	{ FA6_, 2 }, { SET_TEMPO_TIME, 188 }, { MI6, 2 }, { RE6, 2 }, { SET_TEMPO_TIME, 250 }, { DO6_, 4 }, { SET_TEMPO_TIME, 125 }, { SI5, 32 },
	
	{ SI4, 3 }, { SI4, 1 }, { SI4, 2 }, { LA4, 2 }, { SI4, 3 }, { SI4, 1 }, { SI4, 2 }, { LA4, 2 }, { SI4, 3 }, { SI4, 1 }, { SI4, 2 }, { LA4, 2 }, { SI4, 6 },
	
	{ SI5, 2 }, { DO6_, 2 }, { RE6, 6 }, { FA6_, 2 }, { MI6, 2 }, { RE6, 2 }, { DO6_, 2 }, { MI6, 2 }, { SI5, 6 }, { DO6_, 2 },
	{ RE6, 6 }, { SI5, 2 }, { MI6, 6 }, { RE6, 2 }, { MI6, 2 }, { MI6, 1}, { RE6, 1 }, { MI6, 2 }, { FA6_, 2 }, { FA6_, 6 }, { MI6, 2 }, { FA6_, 4 },
	{ SI5, 2 }, { DO6_, 2 }, { RE6, 6 }, { FA6_, 2 }, { MI6, 2 }, { RE6, 2 }, { MI6, 2 }, { FA6_, 2 }, { LA6, 6 }, { SI6, 2 },
	{ RE6, 6 }, { SI5, 2 }, { DO6_, 6 }, { SI5, 2 }, { DO6_, 2 }, { RE6, 2 }, { MI6, 2 }, { DO6_, 2 }, { DO6_, 6 }, { RE6, 1 }, { DO6_, 1 }, { SI5, 4 }, 
	
	{ SET_TEMPO_TIME, 125 },
	{ MI6, 2 }, { FA6_, 2 }, { LA6, 2 }, { SI6, 2 }, { FA6_, 2 }, { MI6, 2 }, { FA6_, 4 }, { RE6, 2 }, { MI6, 2 }, { DO6_, 2 }, { RE6, 2 }, { DO6_, 2 }, { LA5, 2 }, { SI5, 4 },
	{ FA5_, 2 }, { LA5, 2 }, { SI5, 2 }, { RE6, 2 }, { MI6, 2 }, { RE6, 2 }, { MI6, 4 }, { MI6, 2 }, { RE6, 2 }, { MI6, 2 }, { LA6, 2 }, { FA6_, 8 },
	{ FA6_, 2 }, { LA6, 2 }, { SI6, 4 }, { RE7, 2 }, { SI6, 2 }, { MI7, 6 }, { RE6, 2 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 2 }, { RE6, 2 }, { SI5, 4 },
	{ SI5, 2 }, { LA5, 2 }, { SI5, 6 }, { RE6, 2 }, { MI6, 2 }, { RE6, 2 }, { MI6, 2 }, { FA6_, 2 }, { SI5, 12 },
	{ MI6, 2 }, { FA6_, 2 }, { LA6, 2 }, { SI6, 2 }, { FA6_, 2 }, { MI6, 2 }, { FA6_, 4 }, { RE6, 2 }, { MI6, 2 }, { DO6_, 2 }, { RE6, 2 }, { DO6_, 2 }, { FA6_, 1 }, { LA6, 1 }, { SI7, 4 },
	{ FA5_, 2 }, { LA5, 2 }, { SI5, 2 }, { RE6, 2 }, { MI6, 2 }, { RE6, 2 }, { DO6_, 1 }, { RE6, 1 }, { DO6_, 1 }, { RE6, 1 }, { MI6, 2 }, { RE6, 2 }, { MI6, 2 }, { LA6, 2 }, { FA6_, 8 },
	{ FA6_, 2 }, { LA6, 2 }, { SI6, 4 }, { LA6, 2 }, { SI6, 2 }, { MI6, 6 }, { RE6, 2 }, { MI6, 2 }, { FA6_, 2 }, { MI6, 2 }, { RE6, 2 }, { SI5, 4 },
	{ SI5, 2 }, { LA5, 2 }, { SI5, 6 }, { FA5_, 2 }, { LA5, 2 }, { SI5, 4 }, { MI6, 2 }, { FA6_, 2 },
	
	{ SET_TEMPO_TIME, 163 },
	{ SI5, 2 }, { RE6, 2 }, { FA6_, 2 }, { RE6, 2 }, { SI6, 2 }, { RE6, 2 }, { MI6, 2 }, { FA6_, 2 }, 
	
	{0xFE, 0xFE}
};

const Node mahou[] =  // 魔法少女達の百年祭
{
	{ SET_TEMPO_TIME, 100 },
	{ RE7, 2 }, { LA6, 2 }, { DO7, 2 }, { SO6, 2 }, { LA6, 2 }, { FA6, 2 }, { SO6, 2 }, { MI6, 2 }, { FA6, 2 }, { RE6, 2 }, { MI6, 2 }, { DO6, 2 },
	{ RE6, 2 }, { LA5, 2 }, { DO6, 2 }, { SO5, 2 }, { RE7, 2 }, { LA6, 2 }, { DO7, 2 }, { SO6, 2 }, { LA6, 2 }, { FA6, 2 }, { SO6, 2 }, { MI6, 2 },
	{ FA6, 2 }, { RE6, 2 }, { MI6, 2 }, { DO6, 2 }, { RE6, 2 }, { LA5, 2 }, { DO6, 2 }, { SO5, 2 },
	{ LA5, 6 }, { FA6, 16 }, { DO7, 6 }, { LA6_/**/, 4 }, { LA6, 32 },
	{0xFE, 0xFE}
};