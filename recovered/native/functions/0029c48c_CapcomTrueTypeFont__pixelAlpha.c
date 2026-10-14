/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c48c CapcomTrueTypeFont::pixelAlpha */

/* CapcomTrueTypeFont::pixelAlpha(unsigned long*, int, int, int) */

uint CapcomTrueTypeFont::pixelAlpha(ulong *param_1,int param_2,int param_3,int param_4)

{
  return param_1[param_3 + param_4 * param_2] >> 0x18;
}


