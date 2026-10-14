/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002302f4 TutorialStep::set */

/* TutorialStep::set(unsigned char, String, short, short, bool) */

undefined8 __thiscall
TutorialStep::set(TutorialStep *this,undefined4 param_2,String *param_3,undefined2 param_4,
                 undefined2 param_5,TutorialStep param_6)

{
  TutorialStep *pTStack_20;
  undefined4 uStack_1c;
  String *pSStack_18;
  
  *this = SUB41(param_2,0);
  pTStack_20 = this;
  uStack_1c = param_2;
  pSStack_18 = param_3;
  String::String((String *)&pTStack_20,param_3);
  String::operator=((String *)(this + 4),(String *)&pTStack_20);
  String::~String((String *)&pTStack_20);
  *(undefined2 *)(this + 0xc) = param_4;
  *(undefined2 *)(this + 0xe) = param_5;
  this[0x11] = param_6;
  this[0x10] = (TutorialStep)0x0;
  return CONCAT44(uStack_1c,pTStack_20);
}


