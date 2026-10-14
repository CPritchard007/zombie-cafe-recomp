/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022bc20 CapcomOrderableList<FurnitureData*>::removeAll */

/* CapcomOrderableList<FurnitureData*>::removeAll() */

void __thiscall
CapcomOrderableList<FurnitureData*>::removeAll(CapcomOrderableList<FurnitureData*> *this)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(int *)(this + 0x14) != 0) {
    pvVar1 = *(void **)(this + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((int)pvVar1 + 8);
      if (*(void **)(this + 0x10) == pvVar1) {
        *(undefined4 *)(this + 0x10) = *(undefined4 *)((int)pvVar1 + 4);
      }
      if (*(void **)(this + 0xc) == pvVar1) {
        *(undefined4 *)(this + 0xc) = *(undefined4 *)((int)pvVar1 + 4);
      }
      else {
        *(undefined4 *)(*(int *)((int)pvVar1 + 8) + 4) = *(undefined4 *)((int)pvVar1 + 4);
      }
      *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 8) = *(undefined4 *)((int)pvVar1 + 8);
      operator_delete(pvVar1);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      pvVar1 = pvVar2;
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(CapcomOrderableList<FurnitureData*> **)(this + 0xc) = this;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  }
  return;
}


