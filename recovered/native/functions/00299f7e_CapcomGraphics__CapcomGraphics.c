/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299f7e CapcomGraphics::CapcomGraphics */

/* CapcomGraphics::CapcomGraphics() */

CapcomGraphics * __thiscall CapcomGraphics::CapcomGraphics(CapcomGraphics *this)

{
  Vector<unsigned_short>::Vector((Vector<unsigned_short> *)(this + 0x1c));
  Vector<float>::Vector((Vector<float> *)(this + 0x28));
  Vector<float>::Vector((Vector<float> *)(this + 0x34));
  CFTexture::CFTexture((CFTexture *)(this + 0x40));
  init(this);
  return this;
}


