/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002587c4 Storage::unsetTab */

/* Storage::unsetTab() */

void Storage::unsetTab(void)

{
  int in_r0;
  int *piVar1;
  CapcomOrderableList<FurnitureData*> *this;
  
  if (*(byte *)(in_r0 + 0xd0) < 7) {
    *(undefined1 *)(*(int *)((*(byte *)(in_r0 + 0xd0) + 0x26) * 4 + in_r0) + 0x87) = 0;
  }
  while (piVar1 = (int *)(**(code **)(**(int **)(in_r0 + 0xc4) + 0x30))(*(int **)(in_r0 + 0xc4),0),
        piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(in_r0 + 0xd0) = 0xff;
  this = *(CapcomOrderableList<FurnitureData*> **)(in_r0 + 0xe0);
  if (this != (CapcomOrderableList<FurnitureData*> *)0x0) {
    CapcomOrderableList<FurnitureData*>::removeAll(this);
    operator_delete(this);
    *(undefined4 *)(in_r0 + 0xe0) = 0;
  }
  piVar1 = *(int **)(in_r0 + 0xc4);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,piVar1[2]);
  piVar1 = *(int **)(in_r0 + 0xc4);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,piVar1[4]);
  return;
}


