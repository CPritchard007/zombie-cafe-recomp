/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1890 StringBuffer::append */

/* StringBuffer::append(String) */

undefined8
StringBuffer::append(CapcomLinkedList<String> *param_1,String *param_2,undefined4 param_3)

{
  CapcomLinkedList<String> *pCStack_18;
  String *pSStack_14;
  undefined4 uStack_10;
  
  pCStack_18 = param_1;
  pSStack_14 = param_2;
  uStack_10 = param_3;
  String::String((String *)&pCStack_18,param_2);
  CapcomLinkedList<String>::add(param_1,(String *)&pCStack_18);
  String::~String((String *)&pCStack_18);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)*(short *)(param_2 + 6);
  return CONCAT44(pCStack_18,param_1);
}


