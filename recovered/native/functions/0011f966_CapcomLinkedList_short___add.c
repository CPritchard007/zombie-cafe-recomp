/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f966 CapcomLinkedList<short>::add */

/* CapcomLinkedList<short>::add(short) */

void __thiscall CapcomLinkedList<short>::add(CapcomLinkedList<short> *this,short param_1)

{
  short *psVar1;
  
  psVar1 = (short *)operator_new(8);
  psVar1[2] = 0;
  psVar1[3] = 0;
  *(short **)(*(int *)(this + 8) + 4) = psVar1;
  *(short **)(this + 8) = psVar1;
  *psVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


