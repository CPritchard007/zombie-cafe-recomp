/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022bc6c Store::unsetTab */

/* Store::unsetTab() */

void Store::unsetTab(void)

{
  int in_r0;
  int *piVar1;
  CapcomOrderableList<FurnitureData*> *this;
  
  if (*(byte *)(in_r0 + 0xbc) < 7) {
    *(undefined1 *)(*(int *)(in_r0 + (*(byte *)(in_r0 + 0xbc) + 0x22) * 4 + 4) + 0x87) = 0;
  }
  while (piVar1 = (int *)(**(code **)(**(int **)(in_r0 + 0xb0) + 0x30))(*(int **)(in_r0 + 0xb0),0),
        piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined1 *)(in_r0 + 0xbc) = 0xff;
  this = *(CapcomOrderableList<FurnitureData*> **)(in_r0 + 0xcc);
  if (this != (CapcomOrderableList<FurnitureData*> *)0x0) {
    CapcomOrderableList<FurnitureData*>::removeAll(this);
    operator_delete(this);
    *(undefined4 *)(in_r0 + 0xcc) = 0;
  }
  piVar1 = *(int **)(in_r0 + 0xb0);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,piVar1[2]);
  piVar1 = *(int **)(in_r0 + 0xb0);
  (**(code **)(*piVar1 + 0x18))(piVar1,0,piVar1[4]);
  return;
}


