/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1de0 StringBuffer::insert */

/* StringBuffer::insert(int, char) */

undefined8 __thiscall StringBuffer::insert(StringBuffer *this,int param_1,char param_2)

{
  undefined4 uVar1;
  StringBuffer *pSStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_10 = (int)param_2;
  pSStack_18 = this;
  iStack_14 = param_1;
  String::valueOf((int)&pSStack_18);
  uVar1 = insert(this,param_1,(String *)&pSStack_18);
  String::~String((String *)&pSStack_18);
  return CONCAT44(pSStack_18,uVar1);
}


