/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cb80 CFTexture::releaseRefCount */

/* CFTexture::releaseRefCount() */

void __thiscall CFTexture::releaseRefCount(CFTexture *this)

{
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    **(undefined4 **)this = 1;
  }
  return;
}


