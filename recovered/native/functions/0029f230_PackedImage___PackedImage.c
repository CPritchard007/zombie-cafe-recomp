/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f230 PackedImage::~PackedImage */

/* PackedImage::~PackedImage() */

PackedImage * __thiscall PackedImage::~PackedImage(PackedImage *this)

{
  ~PackedImage(this);
  operator_delete(this);
  return this;
}


