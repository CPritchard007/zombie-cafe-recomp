/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c553c CensoredSign::CensoredSign */

/* CensoredSign::CensoredSign(CafeObject*) */

CensoredSign * __thiscall CensoredSign::CensoredSign(CensoredSign *this,CafeObject *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  CafeUIElement::CafeUIElement((CafeUIElement *)this,param_1);
  *(int *)this = *(int *)(DAT_000c557c + 0xc554c) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(iVar1 + 4) + DAT_000c5580),0x33,false);
  *(undefined4 *)(this + 8) = uVar2;
  *(CafeObject **)(this + 4) = param_1;
  *(CafeObject **)(this + 0x10) = param_1;
  this[0xc] = (CensoredSign)0x0;
  return this;
}


