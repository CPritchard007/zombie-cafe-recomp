/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7200 ComponentAnimation::createAnimation */

/* ComponentAnimation::createAnimation(String, int) */

undefined8 __thiscall
ComponentAnimation::createAnimation(ComponentAnimation *this,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  ComponentAnimationData *this_00;
  ComponentAnimation *this_01;
  ComponentAnimation *pCStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pCStack_18 = this;
  uStack_14 = param_2;
  uStack_10 = param_3;
  String::String((String *)&pCStack_18,(String *)this);
  this_00 = (ComponentAnimationData *)createAnimationData((String *)&pCStack_18,param_2);
  String::~String((String *)&pCStack_18);
  this_01 = (ComponentAnimation *)operator_new(0x24);
  ComponentAnimation(this_01,this_00);
  sVar1 = *(short *)(this_00 + 6);
  *(short *)(this_00 + 6) = sVar1 + -1;
  if ((short)(sVar1 + -1) < 1) {
    ComponentAnimationData::~ComponentAnimationData(this_00);
    operator_delete(this_00);
  }
  return CONCAT44(pCStack_18,this_01);
}


