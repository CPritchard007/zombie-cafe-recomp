/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf9d0 CapcomOrderableList<Furniture*>::nextItem */

/* CapcomOrderableList<Furniture*>::nextItem() */

int __thiscall CapcomOrderableList<Furniture*>::nextItem(CapcomOrderableList<Furniture*> *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x10);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    piVar2 = (int *)*piVar2;
    *(int *)(this + 0x10) = *piVar1;
  }
  return (int)piVar2;
}


