/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f15c8 EnemyItems::Data::getIndex */

/* EnemyItems::Data::getIndex() const */

int __thiscall EnemyItems::Data::getIndex(Data *this)

{
  int iVar1;
  Data *pDVar2;
  
  iVar1 = 0;
  pDVar2 = (Data *)**(undefined4 **)(DAT_000f15f8 + 0xf15dc);
  while( true ) {
    if (**(short **)(DAT_000f15f4 + 0xf15d0) <= iVar1) {
      return -1;
    }
    if (this == pDVar2) break;
    iVar1 = iVar1 + 1;
    pDVar2 = pDVar2 + 0x88;
  }
  return iVar1;
}


