
#include "vgl.h"
#include "vgl_internals.h"


#define	CLUT1
/*
  #define      CLUT2
*/



/* Default CLUT where the CLUT index has some relationship to the RGB values 
   Red = bits 5-7 of the index
   Green = bits 2-4
   Blue = bits 0-1
 */
#ifdef	CLUT1
struct vgl_color vgl_default_clut[256] =
{
  {0, 0, 0},			/*   0 */
  {0, 0, 85},			/*   1 */
  {0, 0, 170},			/*   2 */
  {0, 0, 255},			/*   3 */
  {0, 36, 0},			/*   4 */
  {0, 36, 85},			/*   5 */
  {0, 36, 170},			/*   6 */
  {0, 36, 255},			/*   7 */
  {0, 72, 0},			/*   8 */
  {0, 72, 85},			/*   9 */
  {0, 72, 170},			/*  10 */
  {0, 72, 255},			/*  11 */
  {0, 109, 0},			/*  12 */
  {0, 109, 85},			/*  13 */
  {0, 109, 170},		/*  14 */
  {0, 109, 255},		/*  15 */
  {0, 145, 0},			/*  16 */
  {0, 145, 85},			/*  17 */
  {0, 145, 170},		/*  18 */
  {0, 145, 255},		/*  19 */
  {0, 182, 0},			/*  20 */
  {0, 182, 85},			/*  21 */
  {0, 182, 170},		/*  22 */
  {0, 182, 255},		/*  23 */
  {0, 218, 0},			/*  24 */
  {0, 218, 85},			/*  25 */
  {0, 218, 170},		/*  26 */
  {0, 218, 255},		/*  27 */
  {0, 255, 0},			/*  28 */
  {0, 255, 85},			/*  29 */
  {0, 255, 170},		/*  30 */
  {0, 255, 255},		/*  31 */
  {36, 0, 0},			/*  32 */
  {36, 0, 85},			/*  33 */
  {36, 0, 170},			/*  34 */
  {36, 0, 255},			/*  35 */
  {36, 36, 0},			/*  36 */
  {36, 36, 85},			/*  37 */
  {36, 36, 170},		/*  38 */
  {36, 36, 255},		/*  39 */
  {36, 72, 0},			/*  40 */
  {36, 72, 85},			/*  41 */
  {36, 72, 170},		/*  42 */
  {36, 72, 255},		/*  43 */
  {36, 109, 0},			/*  44 */
  {36, 109, 85},		/*  45 */
  {36, 109, 170},		/*  46 */
  {36, 109, 255},		/*  47 */
  {36, 145, 0},			/*  48 */
  {36, 145, 85},		/*  49 */
  {36, 145, 170},		/*  50 */
  {36, 145, 255},		/*  51 */
  {36, 182, 0},			/*  52 */
  {36, 182, 85},		/*  53 */
  {36, 182, 170},		/*  54 */
  {36, 182, 255},		/*  55 */
  {36, 218, 0},			/*  56 */
  {36, 218, 85},		/*  57 */
  {36, 218, 170},		/*  58 */
  {36, 218, 255},		/*  59 */
  {36, 255, 0},			/*  60 */
  {36, 255, 85},		/*  61 */
  {36, 255, 170},		/*  62 */
  {36, 255, 255},		/*  63 */
  {72, 0, 0},			/*  64 */
  {72, 0, 85},			/*  65 */
  {72, 0, 170},			/*  66 */
  {72, 0, 255},			/*  67 */
  {72, 36, 0},			/*  68 */
  {72, 36, 85},			/*  69 */
  {72, 36, 170},		/*  70 */
  {72, 36, 255},		/*  71 */
  {72, 72, 0},			/*  72 */
  {72, 72, 85},			/*  73 */
  {72, 72, 170},		/*  74 */
  {72, 72, 255},		/*  75 */
  {72, 109, 0},			/*  76 */
  {72, 109, 85},		/*  77 */
  {72, 109, 170},		/*  78 */
  {72, 109, 255},		/*  79 */
  {72, 145, 0},			/*  80 */
  {72, 145, 85},		/*  81 */
  {72, 145, 170},		/*  82 */
  {72, 145, 255},		/*  83 */
  {72, 182, 0},			/*  84 */
  {72, 182, 85},		/*  85 */
  {72, 182, 170},		/*  86 */
  {72, 182, 255},		/*  87 */
  {72, 218, 0},			/*  88 */
  {72, 218, 85},		/*  89 */
  {72, 218, 170},		/*  90 */
  {72, 218, 255},		/*  91 */
  {72, 255, 0},			/*  92 */
  {72, 255, 85},		/*  93 */
  {72, 255, 170},		/*  94 */
  {72, 255, 255},		/*  95 */
  {109, 0, 0},			/*  96 */
  {109, 0, 85},			/*  97 */
  {109, 0, 170},		/*  98 */
  {109, 0, 255},		/*  99 */
  {109, 36, 0},			/* 100 */
  {109, 36, 85},		/* 101 */
  {109, 36, 170},		/* 102 */
  {109, 36, 255},		/* 103 */
  {109, 72, 0},			/* 104 */
  {109, 72, 85},		/* 105 */
  {109, 72, 170},		/* 106 */
  {109, 72, 255},		/* 107 */
  {109, 109, 0},		/* 108 */
  {109, 109, 85},		/* 109 */
  {109, 109, 170},		/* 110 */
  {109, 109, 255},		/* 111 */
  {109, 145, 0},		/* 112 */
  {109, 145, 85},		/* 113 */
  {109, 145, 170},		/* 114 */
  {109, 145, 255},		/* 115 */
  {109, 182, 0},		/* 116 */
  {109, 182, 85},		/* 117 */
  {109, 182, 170},		/* 118 */
  {109, 182, 255},		/* 119 */
  {109, 218, 0},		/* 120 */
  {109, 218, 85},		/* 121 */
  {109, 218, 170},		/* 122 */
  {109, 218, 255},		/* 123 */
  {109, 255, 0},		/* 124 */
  {109, 255, 85},		/* 125 */
  {109, 255, 170},		/* 126 */
  {109, 255, 255},		/* 127 */
  {145, 0, 0},			/* 128 */
  {145, 0, 85},			/* 129 */
  {145, 0, 170},		/* 130 */
  {145, 0, 255},		/* 131 */
  {145, 36, 0},			/* 132 */
  {145, 36, 85},		/* 133 */
  {145, 36, 170},		/* 134 */
  {145, 36, 255},		/* 135 */
  {145, 72, 0},			/* 136 */
  {145, 72, 85},		/* 137 */
  {145, 72, 170},		/* 138 */
  {145, 72, 255},		/* 139 */
  {145, 109, 0},		/* 140 */
  {145, 109, 85},		/* 141 */
  {145, 109, 170},		/* 142 */
  {145, 109, 255},		/* 143 */
  {145, 145, 0},		/* 144 */
  {145, 145, 85},		/* 145 */
  {145, 145, 170},		/* 146 */
  {145, 145, 255},		/* 147 */
  {145, 182, 0},		/* 148 */
  {145, 182, 85},		/* 149 */
  {145, 182, 170},		/* 150 */
  {145, 182, 255},		/* 151 */
  {145, 218, 0},		/* 152 */
  {145, 218, 85},		/* 153 */
  {145, 218, 170},		/* 154 */
  {145, 218, 255},		/* 155 */
  {145, 255, 0},		/* 156 */
  {145, 255, 85},		/* 157 */
  {145, 255, 170},		/* 158 */
  {145, 255, 255},		/* 159 */
  {182, 0, 0},			/* 160 */
  {182, 0, 85},			/* 161 */
  {182, 0, 170},		/* 162 */
  {182, 0, 255},		/* 163 */
  {182, 36, 0},			/* 164 */
  {182, 36, 85},		/* 165 */
  {182, 36, 170},		/* 166 */
  {182, 36, 255},		/* 167 */
  {182, 72, 0},			/* 168 */
  {182, 72, 85},		/* 169 */
  {182, 72, 170},		/* 170 */
  {182, 72, 255},		/* 171 */
  {182, 109, 0},		/* 172 */
  {182, 109, 85},		/* 173 */
  {182, 109, 170},		/* 174 */
  {182, 109, 255},		/* 175 */
  {182, 145, 0},		/* 176 */
  {182, 145, 85},		/* 177 */
  {182, 145, 170},		/* 178 */
  {182, 145, 255},		/* 179 */
  {182, 182, 0},		/* 180 */
  {182, 182, 85},		/* 181 */
  {182, 182, 170},		/* 182 */
  {182, 182, 255},		/* 183 */
  {182, 218, 0},		/* 184 */
  {182, 218, 85},		/* 185 */
  {182, 218, 170},		/* 186 */
  {182, 218, 255},		/* 187 */
  {182, 255, 0},		/* 188 */
  {182, 255, 85},		/* 189 */
  {182, 255, 170},		/* 190 */
  {182, 255, 255},		/* 191 */
  {218, 0, 0},			/* 192 */
  {218, 0, 85},			/* 193 */
  {218, 0, 170},		/* 194 */
  {218, 0, 255},		/* 195 */
  {218, 36, 0},			/* 196 */
  {218, 36, 85},		/* 197 */
  {218, 36, 170},		/* 198 */
  {218, 36, 255},		/* 199 */
  {218, 72, 0},			/* 200 */
  {218, 72, 85},		/* 201 */
  {218, 72, 170},		/* 202 */
  {218, 72, 255},		/* 203 */
  {218, 109, 0},		/* 204 */
  {218, 109, 85},		/* 205 */
  {218, 109, 170},		/* 206 */
  {218, 109, 255},		/* 207 */
  {218, 145, 0},		/* 208 */
  {218, 145, 85},		/* 209 */
  {218, 145, 170},		/* 210 */
  {218, 145, 255},		/* 211 */
  {218, 182, 0},		/* 212 */
  {218, 182, 85},		/* 213 */
  {218, 182, 170},		/* 214 */
  {218, 182, 255},		/* 215 */
  {218, 218, 0},		/* 216 */
  {218, 218, 85},		/* 217 */
  {218, 218, 170},		/* 218 */
  {218, 218, 255},		/* 219 */
  {218, 255, 0},		/* 220 */
  {218, 255, 85},		/* 221 */
  {218, 255, 170},		/* 222 */
  {218, 255, 255},		/* 223 */
  {255, 0, 0},			/* 224 */
  {255, 0, 85},			/* 225 */
  {255, 0, 170},		/* 226 */
  {255, 0, 255},		/* 227 */
  {255, 36, 0},			/* 228 */
  {255, 36, 85},		/* 229 */
  {255, 36, 170},		/* 230 */
  {255, 36, 255},		/* 231 */
  {255, 72, 0},			/* 232 */
  {255, 72, 85},		/* 233 */
  {255, 72, 170},		/* 234 */
  {255, 72, 255},		/* 235 */
  {255, 109, 0},		/* 236 */
  {255, 109, 85},		/* 237 */
  {255, 109, 170},		/* 238 */
  {255, 109, 255},		/* 239 */
  {255, 145, 0},		/* 240 */
  {255, 145, 85},		/* 241 */
  {255, 145, 170},		/* 242 */
  {255, 145, 255},		/* 243 */
  {255, 182, 0},		/* 244 */
  {255, 182, 85},		/* 245 */
  {255, 182, 170},		/* 246 */
  {255, 182, 255},		/* 247 */
  {255, 218, 0},		/* 248 */
  {255, 218, 85},		/* 249 */
  {255, 218, 170},		/* 250 */
  {255, 218, 255},		/* 251 */
  {255, 255, 0},		/* 252 */
  {255, 255, 85},		/* 253 */
  {255, 255, 170},		/* 254 */
  {255, 255, 255}		/* 255 */
};


#endif

/* Default clut, random colors based on "sine waves" */
#ifdef	CLUT2
struct vgl_color vgl_default_clut[256] =
{
  {0, 0, 0},			/*   0 */
  {1, 1, 2},			/*   1 */
  {3, 4, 6},			/*   2 */
  {6, 9, 13},			/*   3 */
  {10, 16, 22},			/*   4 */
  {16, 24, 34},			/*   5 */
  {22, 34, 47},			/*   6 */
  {30, 45, 63},			/*   7 */
  {38, 57, 80},			/*   8 */
  {47, 71, 97},			/*   9 */
  {57, 85, 116},		/*  10 */
  {68, 100, 134},		/*  11 */
  {80, 116, 152},		/*  12 */
  {91, 131, 171},		/*  13 */
  {104, 146, 188},		/*  14 */
  {116, 162, 204},		/*  15 */
  {128, 176, 218},		/*  16 */
  {140, 191, 230},		/*  17 */
  {152, 204, 240},		/*  18 */
  {165, 216, 248},		/*  19 */
  {176, 226, 253},		/*  20 */
  {188, 236, 255},		/*  21 */
  {199, 243, 255},		/*  22 */
  {209, 249, 252},		/*  23 */
  {218, 253, 246},		/*  24 */
  {226, 255, 237},		/*  25 */
  {234, 255, 226},		/*  26 */
  {240, 254, 213},		/*  27 */
  {246, 250, 199},		/*  28 */
  {250, 245, 182},		/*  29 */
  {253, 237, 165},		/*  30 */
  {255, 228, 146},		/*  31 */
  {255, 218, 128},		/*  32 */
  {255, 206, 110},		/*  33 */
  {253, 193, 91},		/*  34 */
  {250, 179, 74},		/*  35 */
  {246, 165, 57},		/*  36 */
  {240, 149, 43},		/*  37 */
  {234, 134, 30},		/*  38 */
  {226, 119, 19},		/*  39 */
  {218, 104, 10},		/*  40 */
  {209, 88, 4},			/*  41 */
  {199, 74, 1},			/*  42 */
  {188, 60, 1},			/*  43 */
  {176, 47, 3},			/*  44 */
  {165, 36, 8},			/*  45 */
  {152, 26, 16},		/*  46 */
  {140, 17, 26},		/*  47 */
  {128, 10, 38},		/*  48 */
  {116, 5, 52},			/*  49 */
  {104, 2, 68},			/*  50 */
  {91, 1, 85},			/*  51 */
  {80, 1, 104},			/*  52 */
  {68, 4, 122},			/*  53 */
  {57, 8, 140},			/*  54 */
  {47, 14, 159},		/*  55 */
  {38, 22, 176},		/*  56 */
  {30, 32, 193},		/*  57 */
  {22, 43, 209},		/*  58 */
  {16, 55, 222},		/*  59 */
  {10, 68, 234},		/*  60 */
  {6, 82, 243},			/*  61 */
  {3, 97, 250},			/*  62 */
  {1, 113, 254},		/*  63 */
  {0, 128, 255},		/*  64 */
  {1, 143, 254},		/*  65 */
  {3, 159, 250},		/*  66 */
  {6, 174, 243},		/*  67 */
  {10, 188, 234},		/*  68 */
  {16, 201, 222},		/*  69 */
  {22, 213, 209},		/*  70 */
  {30, 224, 193},		/*  71 */
  {38, 234, 176},		/*  72 */
  {47, 242, 159},		/*  73 */
  {57, 248, 140},		/*  74 */
  {68, 252, 122},		/*  75 */
  {80, 255, 104},		/*  76 */
  {91, 255, 85},		/*  77 */
  {104, 254, 68},		/*  78 */
  {116, 251, 52},		/*  79 */
  {128, 246, 38},		/*  80 */
  {140, 239, 26},		/*  81 */
  {152, 230, 16},		/*  82 */
  {165, 220, 8},		/*  83 */
  {176, 209, 3},		/*  84 */
  {188, 196, 1},		/*  85 */
  {199, 182, 1},		/*  86 */
  {209, 168, 4},		/*  87 */
  {218, 152, 10},		/*  88 */
  {226, 137, 19},		/*  89 */
  {234, 122, 30},		/*  90 */
  {240, 107, 43},		/*  91 */
  {246, 91, 57},		/*  92 */
  {250, 77, 74},		/*  93 */
  {253, 63, 91},		/*  94 */
  {255, 50, 110},		/*  95 */
  {255, 38, 128},		/*  96 */
  {255, 28, 146},		/*  97 */
  {253, 19, 165},		/*  98 */
  {250, 11, 182},		/*  99 */
  {246, 6, 199},		/* 100 */
  {240, 2, 213},		/* 101 */
  {234, 1, 226},		/* 102 */
  {226, 1, 237},		/* 103 */
  {218, 3, 246},		/* 104 */
  {209, 7, 252},		/* 105 */
  {199, 13, 255},		/* 106 */
  {188, 20, 255},		/* 107 */
  {176, 30, 253},		/* 108 */
  {165, 40, 248},		/* 109 */
  {152, 52, 240},		/* 110 */
  {140, 65, 230},		/* 111 */
  {128, 80, 218},		/* 112 */
  {116, 94, 204},		/* 113 */
  {104, 110, 188},		/* 114 */
  {91, 125, 171},		/* 115 */
  {80, 140, 152},		/* 116 */
  {68, 156, 134},		/* 117 */
  {57, 171, 116},		/* 118 */
  {47, 185, 97},		/* 119 */
  {38, 199, 80},		/* 120 */
  {30, 211, 63},		/* 121 */
  {22, 222, 47},		/* 122 */
  {16, 232, 34},		/* 123 */
  {10, 240, 22},		/* 124 */
  {6, 247, 13},			/* 125 */
  {3, 252, 6},			/* 126 */
  {1, 255, 2},			/* 127 */
  {0, 255, 0},			/* 128 */
  {1, 255, 2},			/* 129 */
  {3, 252, 6},			/* 130 */
  {6, 247, 13},			/* 131 */
  {10, 240, 22},		/* 132 */
  {16, 232, 34},		/* 133 */
  {22, 222, 47},		/* 134 */
  {30, 211, 63},		/* 135 */
  {38, 199, 80},		/* 136 */
  {47, 185, 97},		/* 137 */
  {57, 171, 116},		/* 138 */
  {68, 156, 134},		/* 139 */
  {80, 140, 152},		/* 140 */
  {91, 125, 171},		/* 141 */
  {104, 110, 188},		/* 142 */
  {116, 94, 204},		/* 143 */
  {128, 80, 218},		/* 144 */
  {140, 65, 230},		/* 145 */
  {152, 52, 240},		/* 146 */
  {165, 40, 248},		/* 147 */
  {176, 30, 253},		/* 148 */
  {188, 20, 255},		/* 149 */
  {199, 13, 255},		/* 150 */
  {209, 7, 252},		/* 151 */
  {218, 3, 246},		/* 152 */
  {226, 1, 237},		/* 153 */
  {234, 1, 226},		/* 154 */
  {240, 2, 213},		/* 155 */
  {246, 6, 199},		/* 156 */
  {250, 11, 182},		/* 157 */
  {253, 19, 165},		/* 158 */
  {255, 28, 146},		/* 159 */
  {255, 38, 128},		/* 160 */
  {255, 50, 110},		/* 161 */
  {253, 63, 91},		/* 162 */
  {250, 77, 74},		/* 163 */
  {246, 91, 57},		/* 164 */
  {240, 107, 43},		/* 165 */
  {234, 122, 30},		/* 166 */
  {226, 137, 19},		/* 167 */
  {218, 152, 10},		/* 168 */
  {209, 168, 4},		/* 169 */
  {199, 182, 1},		/* 170 */
  {188, 196, 1},		/* 171 */
  {176, 209, 3},		/* 172 */
  {165, 220, 8},		/* 173 */
  {152, 230, 16},		/* 174 */
  {140, 239, 26},		/* 175 */
  {128, 246, 38},		/* 176 */
  {116, 251, 52},		/* 177 */
  {104, 254, 68},		/* 178 */
  {91, 255, 85},		/* 179 */
  {80, 255, 104},		/* 180 */
  {68, 252, 122},		/* 181 */
  {57, 248, 140},		/* 182 */
  {47, 242, 159},		/* 183 */
  {38, 234, 176},		/* 184 */
  {30, 224, 193},		/* 185 */
  {22, 213, 209},		/* 186 */
  {16, 201, 222},		/* 187 */
  {10, 188, 234},		/* 188 */
  {6, 174, 243},		/* 189 */
  {3, 159, 250},		/* 190 */
  {1, 143, 254},		/* 191 */
  {0, 128, 255},		/* 192 */
  {1, 113, 254},		/* 193 */
  {3, 97, 250},			/* 194 */
  {6, 82, 243},			/* 195 */
  {10, 68, 234},		/* 196 */
  {16, 55, 222},		/* 197 */
  {22, 43, 209},		/* 198 */
  {30, 32, 193},		/* 199 */
  {38, 22, 176},		/* 200 */
  {47, 14, 159},		/* 201 */
  {57, 8, 140},			/* 202 */
  {68, 4, 122},			/* 203 */
  {80, 1, 104},			/* 204 */
  {91, 1, 85},			/* 205 */
  {104, 2, 68},			/* 206 */
  {116, 5, 52},			/* 207 */
  {128, 10, 38},		/* 208 */
  {140, 17, 26},		/* 209 */
  {152, 26, 16},		/* 210 */
  {165, 36, 8},			/* 211 */
  {176, 47, 3},			/* 212 */
  {188, 60, 1},			/* 213 */
  {199, 74, 1},			/* 214 */
  {209, 88, 4},			/* 215 */
  {218, 104, 10},		/* 216 */
  {226, 119, 19},		/* 217 */
  {234, 134, 30},		/* 218 */
  {240, 149, 43},		/* 219 */
  {246, 165, 57},		/* 220 */
  {250, 179, 74},		/* 221 */
  {253, 193, 91},		/* 222 */
  {255, 206, 110},		/* 223 */
  {255, 218, 128},		/* 224 */
  {255, 228, 146},		/* 225 */
  {253, 237, 165},		/* 226 */
  {250, 245, 182},		/* 227 */
  {246, 250, 199},		/* 228 */
  {240, 254, 213},		/* 229 */
  {234, 255, 226},		/* 230 */
  {226, 255, 237},		/* 231 */
  {218, 253, 246},		/* 232 */
  {209, 249, 252},		/* 233 */
  {199, 243, 255},		/* 234 */
  {188, 236, 255},		/* 235 */
  {176, 226, 253},		/* 236 */
  {165, 216, 248},		/* 237 */
  {152, 204, 240},		/* 238 */
  {140, 191, 230},		/* 239 */
  {128, 176, 218},		/* 240 */
  {116, 162, 204},		/* 241 */
  {104, 146, 188},		/* 242 */
  {91, 131, 171},		/* 243 */
  {80, 116, 152},		/* 244 */
  {68, 100, 134},		/* 245 */
  {57, 85, 116},		/* 246 */
  {47, 71, 97},			/* 247 */
  {38, 57, 80},			/* 248 */
  {30, 45, 63},			/* 249 */
  {22, 34, 47},			/* 250 */
  {16, 24, 34},			/* 251 */
  {10, 16, 22},			/* 252 */
  {6, 9, 13},			/* 253 */
  {3, 4, 6},			/* 254 */
  {1, 1, 2}			/* 255 */
};
#endif
