/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dfd98 colosseumLayouts::Data::getIndex */

/* colosseumLayouts::Data::getIndex() const */

int __thiscall colosseumLayouts::Data::getIndex(Data *this)

{
  int iVar1;
  Data *pDVar2;
  
  iVar1 = 0;
  pDVar2 = (Data *)**(undefined4 **)(DAT_000dfdc8 + 0xdfdac);
  while( true ) {
    if (**(short **)(DAT_000dfdc4 + 0xdfda0) <= iVar1) {
      return -1;
    }
    if (this == pDVar2) break;
    iVar1 = iVar1 + 1;
    pDVar2 = pDVar2 + 0x14;
  }
  return iVar1;
}


