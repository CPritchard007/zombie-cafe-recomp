/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1e0e StringBuffer::insert */

/* StringBuffer::insert(int, bool) */

undefined8 __thiscall StringBuffer::insert(StringBuffer *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  StringBuffer *pSStack_18;
  int iStack_14;
  uint uStack_10;
  
  uStack_10 = (uint)param_2;
  pSStack_18 = this;
  iStack_14 = param_1;
  String::valueOf((String *)&pSStack_18,param_2);
  uVar1 = insert(this,param_1,(String *)&pSStack_18);
  String::~String((String *)&pSStack_18);
  return CONCAT44(pSStack_18,uVar1);
}


