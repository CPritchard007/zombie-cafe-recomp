/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f854 CapcomLinkedList<short>::~CapcomLinkedList */

/* CapcomLinkedList<short>::~CapcomLinkedList() */

CapcomLinkedList<short> * __thiscall
CapcomLinkedList<short>::~CapcomLinkedList(CapcomLinkedList<short> *this)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    while (pvVar1 = *(void **)(this + 4), pvVar1 != (void *)0x0) {
      uVar2 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 4) = uVar2;
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(CapcomLinkedList<short> **)(this + 8) = this;
    *(undefined4 *)(this + 0xc) = 0;
  }
  return this;
}


