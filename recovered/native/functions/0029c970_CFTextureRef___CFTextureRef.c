/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c970 CFTextureRef::~CFTextureRef */

/* CFTextureRef::~CFTextureRef() */

CFTextureRef * __thiscall CFTextureRef::~CFTextureRef(CFTextureRef *this)

{
  CCTexture2D::Free(*(ccTexture2D **)(this + 4));
  free(*(void **)(this + 4));
  return this;
}


