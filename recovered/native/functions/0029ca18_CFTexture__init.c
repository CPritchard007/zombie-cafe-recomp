/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ca18 CFTexture::init */

/* CFTexture::init(CFTexture const&) */

void __thiscall CFTexture::init(CFTexture *this,CFTexture *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  *(int **)this = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return;
}


