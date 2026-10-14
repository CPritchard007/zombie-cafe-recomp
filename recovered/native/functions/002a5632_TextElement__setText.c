/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5632 TextElement::setText */

/* TextElement::setText(String) */

undefined8 __thiscall TextElement::setText(TextElement *this,String *param_2)

{
  TextElement *pTStack_10;
  String *pSStack_c;
  
  pTStack_10 = this;
  pSStack_c = param_2;
  String::String((String *)&pTStack_10,param_2);
  String::operator=((String *)(this + 0x60),(String *)&pTStack_10);
  String::~String((String *)&pTStack_10);
  this[0x85] = (TextElement)0x0;
  (**(code **)(*(int *)this + 0x50))(this);
  return CONCAT44(pSStack_c,pTStack_10);
}


