/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3444 QuestData::Data::getIndex */

/* QuestData::Data::getIndex() const */

int __thiscall QuestData::Data::getIndex(Data *this)

{
  int iVar1;
  Data *pDVar2;
  
  iVar1 = 0;
  pDVar2 = (Data *)**(undefined4 **)(DAT_001d3474 + 0x1d3458);
  while( true ) {
    if (**(short **)(DAT_001d3470 + 0x1d344c) <= iVar1) {
      return -1;
    }
    if (this == pDVar2) break;
    iVar1 = iVar1 + 1;
    pDVar2 = pDVar2 + 0x5c;
  }
  return iVar1;
}


