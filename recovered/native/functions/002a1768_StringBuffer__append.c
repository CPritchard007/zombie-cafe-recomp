/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1768 StringBuffer::append */

/* StringBuffer::append(long) */

long StringBuffer::append(long param_1)

{
  undefined4 in_r1;
  long lStack_18;
  short sStack_12;
  String aSStack_10 [8];
  
  sStack_12 = (short)((uint)in_r1 >> 0x10);
  lStack_18 = param_1;
  String::valueOf((long)&lStack_18);
  String::String(aSStack_10,(String *)&lStack_18);
  CapcomLinkedList<String>::add((CapcomLinkedList<String> *)param_1,aSStack_10);
  String::~String(aSStack_10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)sStack_12;
  String::~String((String *)&lStack_18);
  return param_1;
}


