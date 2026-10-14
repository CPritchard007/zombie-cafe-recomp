/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118a70 Furniture::canRotate */

/* Furniture::canRotate() */

bool __thiscall Furniture::canRotate(Furniture *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(this + 0x38);
  bVar2 = true;
  if ((*(short *)(iVar1 + 0x3e) == *(short *)(iVar1 + 0x3c)) &&
     (*(short *)(iVar1 + 0x40) == *(short *)(iVar1 + 0x3e))) {
    bVar2 = *(short *)(iVar1 + 0x42) != *(short *)(iVar1 + 0x40);
  }
  return bVar2;
}


