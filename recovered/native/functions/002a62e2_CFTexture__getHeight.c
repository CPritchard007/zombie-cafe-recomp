/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a62e2 CFTexture::getHeight */

/* CFTexture::getHeight() const */

int __thiscall CFTexture::getHeight(CFTexture *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x18);
  }
  return iVar1;
}


