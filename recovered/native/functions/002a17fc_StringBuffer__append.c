/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a17fc StringBuffer::append */

/* StringBuffer::append(char) */

CapcomLinkedList<String> * StringBuffer::append(char param_1)

{
  CapcomLinkedList<String> *pCVar1;
  undefined4 in_r1;
  CapcomLinkedList<String> *pCStack_18;
  short sStack_12;
  String aSStack_10 [8];
  
  sStack_12 = (short)((uint)in_r1 >> 0x10);
  pCVar1 = (CapcomLinkedList<String> *)(int)param_1;
  pCStack_18 = pCVar1;
  String::valueOf((int)&pCStack_18);
  String::String(aSStack_10,(String *)&pCStack_18);
  CapcomLinkedList<String>::add(pCVar1,aSStack_10);
  String::~String(aSStack_10);
  *(int *)(pCVar1 + 0x18) = *(int *)(pCVar1 + 0x18) + (int)sStack_12;
  String::~String((String *)&pCStack_18);
  return pCVar1;
}


