/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c895c CapcomLinkedList<Task*>::get */

/* CapcomLinkedList<Task*>::get(int) */

undefined4 __thiscall CapcomLinkedList<Task*>::get(CapcomLinkedList<Task*> *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x10))) {
    do {
      this = *(CapcomLinkedList<Task*> **)(this + 4);
      bVar2 = param_1 != 0;
      param_1 = param_1 + -1;
    } while (bVar2);
    uVar1 = *(undefined4 *)this;
  }
  return uVar1;
}


