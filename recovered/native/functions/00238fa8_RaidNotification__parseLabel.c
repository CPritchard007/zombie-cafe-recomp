/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238fa8 RaidNotification::parseLabel */

/* RaidNotification::parseLabel(String) */

undefined8 __thiscall RaidNotification::parseLabel(RaidNotification *this,String *param_2)

{
  undefined4 uVar1;
  RaidNotification *pRStack_10;
  String *pSStack_c;
  
  pRStack_10 = this;
  pSStack_c = param_2;
  String::String((String *)&pRStack_10,param_2);
  uVar1 = StringUtil::parseInt((String *)&pRStack_10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  String::~String((String *)&pRStack_10);
  return CONCAT44(pSStack_c,pRStack_10);
}


