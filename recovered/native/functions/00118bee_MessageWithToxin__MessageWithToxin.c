/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118bee MessageWithToxin::MessageWithToxin */

/* MessageWithToxin::MessageWithToxin(String, int, int, int) */

undefined8 __thiscall
MessageWithToxin::MessageWithToxin
          (MessageWithToxin *this,String *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  MessageWithToxin *pMStack_20;
  String *pSStack_1c;
  undefined4 uStack_18;
  
  pMStack_20 = this;
  pSStack_1c = param_2;
  uStack_18 = param_3;
  String::String((String *)this);
  String::String((String *)&pMStack_20,param_2);
  String::operator=((String *)this,(String *)&pMStack_20);
  String::~String((String *)&pMStack_20);
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_5;
  return CONCAT44(pMStack_20,this);
}


