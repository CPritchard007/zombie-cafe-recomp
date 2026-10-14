/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1846 StringBuffer::append */

/* StringBuffer::append(bool) */

CapcomLinkedList<String> * StringBuffer::append(bool param_1)

{
  CapcomLinkedList<String> *pCVar1;
  undefined4 in_r1;
  CapcomLinkedList<String> *pCStack_18;
  undefined4 uStack_14;
  String aSStack_10 [8];
  
  pCVar1 = (CapcomLinkedList<String> *)(uint)param_1;
  pCStack_18 = pCVar1;
  uStack_14 = in_r1;
  String::valueOf((String *)&pCStack_18,SUB41(in_r1,0));
  String::String(aSStack_10,(String *)&pCStack_18);
  CapcomLinkedList<String>::add(pCVar1,aSStack_10);
  String::~String(aSStack_10);
  *(int *)(pCVar1 + 0x18) = *(int *)(pCVar1 + 0x18) + (int)uStack_14._2_2_;
  String::~String((String *)&pCStack_18);
  return pCVar1;
}


