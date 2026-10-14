/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118b6c MessageWithToxin::MessageWithToxin */

/* MessageWithToxin::MessageWithToxin(String, int) */

undefined8 __thiscall
MessageWithToxin::MessageWithToxin(MessageWithToxin *this,String *param_2,undefined4 param_3)

{
  MessageWithToxin *pMStack_18;
  String *pSStack_14;
  
  pMStack_18 = this;
  pSStack_14 = param_2;
  String::String((String *)this);
  String::String((String *)&pMStack_18,param_2);
  String::operator=((String *)this,(String *)&pMStack_18);
  String::~String((String *)&pMStack_18);
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return CONCAT44(pMStack_18,this);
}


