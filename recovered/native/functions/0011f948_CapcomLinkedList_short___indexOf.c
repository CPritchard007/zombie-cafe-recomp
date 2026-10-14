/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f948 CapcomLinkedList<short>::indexOf */

/* CapcomLinkedList<short>::indexOf(short) */

int __thiscall CapcomLinkedList<short>::indexOf(CapcomLinkedList<short> *this,short param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    this = *(CapcomLinkedList<short> **)(this + 4);
    if (this == (CapcomLinkedList<short> *)0x0) {
      return -1;
    }
    if (*(short *)this == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


