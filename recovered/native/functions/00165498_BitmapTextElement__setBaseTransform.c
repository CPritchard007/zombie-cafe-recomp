/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165498 BitmapTextElement::setBaseTransform */

/* BitmapTextElement::setBaseTransform(ccMat2x3 const&) */

void __thiscall BitmapTextElement::setBaseTransform(BitmapTextElement *this,ccMat2x3 *param_1)

{
  *(undefined4 *)(this + 0x98) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0x14);
  this[0xb0] = (BitmapTextElement)0x1;
  return;
}


