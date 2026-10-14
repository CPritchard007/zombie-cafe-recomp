/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298e72 CapcomGraphics::~CapcomGraphics */

/* CapcomGraphics::~CapcomGraphics() */

CapcomGraphics * __thiscall CapcomGraphics::~CapcomGraphics(CapcomGraphics *this)

{
  CFTexture::~CFTexture((CFTexture *)(this + 0x40));
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3c));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x24) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x24));
  }
  return this;
}


