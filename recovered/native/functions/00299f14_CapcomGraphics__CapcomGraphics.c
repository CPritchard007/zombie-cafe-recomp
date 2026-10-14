/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299f14 CapcomGraphics::CapcomGraphics */

/* CapcomGraphics::CapcomGraphics(CFTexture) */

CapcomGraphics * __thiscall CapcomGraphics::CapcomGraphics(CapcomGraphics *this,int *param_2)

{
  undefined4 *puVar1;
  
  Vector<unsigned_short>::Vector((Vector<unsigned_short> *)(this + 0x1c));
  Vector<float>::Vector((Vector<float> *)(this + 0x28));
  Vector<float>::Vector((Vector<float> *)(this + 0x34));
  CFTexture::CFTexture((CFTexture *)(this + 0x40));
  init(this);
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar1[1];
  }
  *(undefined4 *)(this + 0x14) = *puVar1;
  return this;
}


