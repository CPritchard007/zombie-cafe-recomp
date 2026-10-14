/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a62d6 CFTexture::getWidth */

/* CFTexture::getWidth() const */

int __thiscall CFTexture::getWidth(CFTexture *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x14);
  }
  return iVar1;
}


