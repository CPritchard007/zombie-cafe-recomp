/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000df6f8 colosseumItems::Data::getIndex */

/* colosseumItems::Data::getIndex() const */

int __thiscall colosseumItems::Data::getIndex(Data *this)

{
  int iVar1;
  Data *pDVar2;
  
  iVar1 = 0;
  pDVar2 = (Data *)**(undefined4 **)(DAT_000df728 + 0xdf70c);
  while( true ) {
    if (**(short **)(DAT_000df724 + 0xdf700) <= iVar1) {
      return -1;
    }
    if (this == pDVar2) break;
    iVar1 = iVar1 + 1;
    pDVar2 = pDVar2 + 0x88;
  }
  return iVar1;
}


