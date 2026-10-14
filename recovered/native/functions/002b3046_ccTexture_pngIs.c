/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3046 ccTexture_pngIs */

/* ccTexture_pngIs(unsigned char const*) */

bool ccTexture_pngIs(uchar *param_1)

{
  int iVar1;
  
  iVar1 = png_sig_cmp(param_1,0,8);
  return iVar1 == 0;
}


