/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ca68 CFTexture::~CFTexture */

/* CFTexture::~CFTexture() */

CFTexture * __thiscall CFTexture::~CFTexture(CFTexture *this)

{
  releaseRef(this);
  return this;
}


