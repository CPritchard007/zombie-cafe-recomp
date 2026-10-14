/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdd94 ObjectiveSystem::tick */

/* ObjectiveSystem::tick(long) */

void __thiscall ObjectiveSystem::tick(ObjectiveSystem *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x14) != -1) {
    iVar3 = **(int **)(DAT_001fddf4 + 0x1fdda4);
    while (0 < param_1) {
      iVar1 = *(int *)(this + 0x14);
      if (param_1 < iVar1) {
        *(int *)(this + 0x14) = iVar1 - param_1;
        param_1 = 0;
      }
      else {
        param_1 = param_1 - iVar1;
        *(undefined4 *)(this + 0x14) = 0;
      }
      if (*(int *)(this + 0x14) < 1) {
        iVar1 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar1 + -1;
        if (iVar1 + -1 < 0) {
          *(undefined4 *)(this + 0x18) = 0;
        }
        iVar1 = *(int *)(this + 0x18);
        if (iVar1 == 0) {
          *(undefined4 *)(this + 0x14) = 0xffffffff;
          *(undefined4 *)(this + 0x10) = 0xffffffff;
          return;
        }
        if (2 < iVar1) {
          iVar1 = 3;
        }
        uVar2 = *(undefined4 *)(iVar3 + (iVar1 + -1) * 8);
        *(undefined4 *)(this + 0x14) = uVar2;
        *(undefined4 *)(this + 0x10) = uVar2;
      }
    }
  }
  return;
}


