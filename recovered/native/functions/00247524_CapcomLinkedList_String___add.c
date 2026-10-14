/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247524 CapcomLinkedList<String>::add */

/* CapcomLinkedList<String>::add(String) */

undefined8 __thiscall CapcomLinkedList<String>::add(CapcomLinkedList<String> *this,String *param_2)

{
  String *this_00;
  CapcomLinkedList<String> *pCStack_18;
  String *pSStack_14;
  
  pCStack_18 = this;
  pSStack_14 = param_2;
  this_00 = (String *)operator_new(0xc);
  String::String(this_00);
  *(undefined4 *)(this_00 + 8) = 0;
  *(String **)(*(int *)(this + 0xc) + 8) = this_00;
  *(String **)(this + 0xc) = this_00;
  String::String((String *)&pCStack_18,param_2);
  String::operator=(this_00,(String *)&pCStack_18);
  String::~String((String *)&pCStack_18);
  *(undefined4 *)(*(int *)(this + 0xc) + 8) = 0;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(pSStack_14,pCStack_18);
}


