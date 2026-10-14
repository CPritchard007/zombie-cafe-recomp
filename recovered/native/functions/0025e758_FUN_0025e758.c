/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e758 FUN_0025e758 */

undefined4 FUN_0025e758(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short local_28;
  undefined2 local_26;
  int local_24;
  undefined4 local_20;
  
  FUN_0025bb6c();
  if (1 < *(byte *)(*(int *)(param_1 + 8) + 0xc)) {
    uVar3 = 1;
    uVar4 = 0;
    goto LAB_0025e7c4;
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0xd) == '\0') {
    local_26 = 0;
    local_28 = 1;
    local_24 = *(int *)(FUN_0025e7e8 + DAT_0025e7d4) + 1;
    local_20 = 1;
    iVar1 = (**(code **)(FUN_0025e7e0 + DAT_0025e7d8 + 6))
                      (*(undefined4 *)(param_1 + 0xc),5,&local_28);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)__errno();
      uVar4 = DAT_0025e7dc;
      *(undefined4 *)(param_1 + 0x14) = *puVar2;
      uVar3 = 0;
      goto LAB_0025e7c4;
    }
    uVar4 = 0;
    if (local_28 != 2) {
      uVar3 = 1;
      goto LAB_0025e7c4;
    }
  }
  uVar3 = 0;
  uVar4 = uVar3;
LAB_0025e7c4:
  FUN_0025bb7a();
  *param_2 = uVar3;
  return uVar4;
}


