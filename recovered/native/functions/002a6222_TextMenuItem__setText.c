/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6222 TextMenuItem::setText */

/* TextMenuItem::setText(String) */

undefined8 __thiscall TextMenuItem::setText(TextMenuItem *this,String *param_2)

{
  TextMenuItem *pTStack_10;
  String *pSStack_c;
  
  pTStack_10 = this;
  pSStack_c = param_2;
  String::String((String *)&pTStack_10,param_2);
  String::operator=((String *)(this + 0x68),(String *)&pTStack_10);
  String::~String((String *)&pTStack_10);
  findBreaks(this);
  return CONCAT44(pSStack_c,pTStack_10);
}


