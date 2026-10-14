/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cfd0 CImage::~CImage */

/* CImage::~CImage() */

CImage * __thiscall CImage::~CImage(CImage *this)

{
  ~CImage(this);
  operator_delete(this);
  return this;
}


