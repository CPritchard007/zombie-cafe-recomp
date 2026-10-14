/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1c38 CapcomLinkedList<String>::insert */

/* CapcomLinkedList<String>::insert(String, int) */

undefined8 __thiscall
CapcomLinkedList<String>::insert(CapcomLinkedList<String> *this,String *param_2,int param_3)

{
  String *this_00;
  int iVar1;
  CapcomLinkedList<String> *pCVar2;
  CapcomLinkedList<String> *pCStack_20;
  String *pSStack_1c;
  int iStack_18;
  
  pCVar2 = (CapcomLinkedList<String> *)0x0;
  if ((param_3 < 0 == SCARRY4(param_3 + -1,1)) && (param_3 + -1 < *(int *)(this + 0x14))) {
    pCVar2 = this;
    for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
      pCVar2 = *(CapcomLinkedList<String> **)(pCVar2 + 8);
    }
  }
  pCStack_20 = this;
  pSStack_1c = param_2;
  iStack_18 = param_3;
  this_00 = (String *)operator_new(0xc);
  String::String(this_00);
  *(undefined4 *)(this_00 + 8) = 0;
  String::String((String *)&pCStack_20,param_2);
  String::operator=(this_00,(String *)&pCStack_20);
  String::~String((String *)&pCStack_20);
  *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar2 + 8);
  *(String **)(pCVar2 + 8) = this_00;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return CONCAT44(pSStack_1c,pCStack_20);
}


