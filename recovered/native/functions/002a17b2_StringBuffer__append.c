/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a17b2 StringBuffer::append */

/* StringBuffer::append(int) */

int StringBuffer::append(int param_1)

{
  undefined4 in_r1;
  int iStack_18;
  short sStack_12;
  String aSStack_10 [8];
  
  sStack_12 = (short)((uint)in_r1 >> 0x10);
  iStack_18 = param_1;
  String::valueOf((int)&iStack_18);
  String::String(aSStack_10,(String *)&iStack_18);
  CapcomLinkedList<String>::add((CapcomLinkedList<String> *)param_1,aSStack_10);
  String::~String(aSStack_10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)sStack_12;
  String::~String((String *)&iStack_18);
  return param_1;
}


