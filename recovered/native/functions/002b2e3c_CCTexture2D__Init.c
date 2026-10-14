/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2e3c CCTexture2D::Init */

/* CCTexture2D::Init(ccTexture2D*) */

ccTexture2D * CCTexture2D::Init(ccTexture2D *param_1)

{
  memset(param_1,0,0x2c);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return param_1;
}


