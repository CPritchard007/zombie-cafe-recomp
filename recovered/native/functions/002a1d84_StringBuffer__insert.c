/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1d84 StringBuffer::insert */

/* StringBuffer::insert(int, long) */

undefined8 __thiscall StringBuffer::insert(StringBuffer *this,int param_1,long param_2)

{
  undefined4 uVar1;
  StringBuffer *pSStack_18;
  int iStack_14;
  long lStack_10;
  
  pSStack_18 = this;
  iStack_14 = param_1;
  lStack_10 = param_2;
  String::valueOf((long)&pSStack_18);
  uVar1 = insert(this,param_1,(String *)&pSStack_18);
  String::~String((String *)&pSStack_18);
  return CONCAT44(pSStack_18,uVar1);
}


