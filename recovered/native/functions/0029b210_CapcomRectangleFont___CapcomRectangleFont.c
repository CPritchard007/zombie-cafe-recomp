/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b210 CapcomRectangleFont::~CapcomRectangleFont */

/* CapcomRectangleFont::~CapcomRectangleFont() */

CapcomRectangleFont * __thiscall
CapcomRectangleFont::~CapcomRectangleFont(CapcomRectangleFont *this)

{
  *(int *)this = *(int *)(DAT_0029b228 + 0x29b21a) + 8;
  ResourceManager::Resource::releaseHandle(*(Resource **)(this + 0x10));
  return this;
}


