/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1c5c EnemyLayouts::Data::getIndex */

/* EnemyLayouts::Data::getIndex() const */

int __thiscall EnemyLayouts::Data::getIndex(Data *this)

{
  int iVar1;
  Data *pDVar2;
  
  iVar1 = 0;
  pDVar2 = (Data *)**(undefined4 **)(DAT_000f1c8c + 0xf1c70);
  while( true ) {
    if (**(short **)(DAT_000f1c88 + 0xf1c64) <= iVar1) {
      return -1;
    }
    if (this == pDVar2) break;
    iVar1 = iVar1 + 1;
    pDVar2 = pDVar2 + 0x14;
  }
  return iVar1;
}


