/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002472d6 CapcomLinkedList<unsigned_int>::add */

/* CapcomLinkedList<unsigned int>::add(unsigned int) */

void __thiscall
CapcomLinkedList<unsigned_int>::add(CapcomLinkedList<unsigned_int> *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)operator_new(8);
  puVar1[1] = 0;
  *(uint **)(*(int *)(this + 8) + 4) = puVar1;
  *(uint **)(this + 8) = puVar1;
  *puVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


