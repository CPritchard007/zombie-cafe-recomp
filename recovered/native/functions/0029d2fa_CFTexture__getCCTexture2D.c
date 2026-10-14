/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d2fa CFTexture::getCCTexture2D */

/* CFTexture::getCCTexture2D() const */

int __thiscall CFTexture::getCCTexture2D(CFTexture *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}


