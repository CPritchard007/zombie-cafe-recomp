/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dc24 CImage::forceDelete */

/* CImage::forceDelete() */

void __thiscall CImage::forceDelete(CImage *this)

{
  CFTexture::releaseRefCount((CFTexture *)(this + 0x14));
  return;
}


