/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ca28 CFTexture::releaseRef */

/* CFTexture::releaseRef() */

void __thiscall CFTexture::releaseRef(CFTexture *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)this;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_0029c984();
    }
  }
  return;
}


