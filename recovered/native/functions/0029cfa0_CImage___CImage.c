/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cfa0 CImage::~CImage */

/* CImage::~CImage() */

CImage * __thiscall CImage::~CImage(CImage *this)

{
  *(int *)this = *(int *)(DAT_0029cfcc + 0x29cfac) + 8;
  CFTexture::~CFTexture((CFTexture *)(this + 0x14));
  String::~String((String *)(this + 4));
  return this;
}


