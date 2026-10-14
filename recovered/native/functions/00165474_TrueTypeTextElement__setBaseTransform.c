/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165474 TrueTypeTextElement::setBaseTransform */

/* TrueTypeTextElement::setBaseTransform(ccMat2x3 const&) */

void __thiscall TrueTypeTextElement::setBaseTransform(TrueTypeTextElement *this,ccMat2x3 *param_1)

{
  *(undefined4 *)(this + 200) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0x14);
  this[0xe0] = (TrueTypeTextElement)0x1;
  return;
}


