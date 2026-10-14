/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f4d0 FUN_0025f4d0 */

undefined8 FUN_0025f4d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int local_20;
  
  local_20 = param_1;
  if (param_1 == 0) {
    iVar2 = FUN_0025edc8(param_2);
    goto LAB_0025f5a0;
  }
  if (param_2 < 1) {
    sqlite3_free();
    iVar2 = 0;
    goto LAB_0025f5a0;
  }
  iVar2 = 0;
  if (DAT_0025f5a4 < param_2) goto LAB_0025f5a0;
  iVar3 = FUN_0025aeb8();
  iVar5 = DAT_0025f5a8;
  piVar6 = (int *)(DAT_0025f5a8 + 0x25f504);
  local_20 = (**(code **)(DAT_0025f5a8 + 0x25f530))(param_2);
  iVar1 = DAT_0025f5ac;
  iVar2 = param_1;
  if (iVar3 == local_20) goto LAB_0025f5a0;
  if (*piVar6 == 0) {
    iVar2 = (**(code **)(iVar5 + 0x25f528))(param_1,local_20);
    goto LAB_0025f5a0;
  }
  puVar7 = (uint *)(DAT_0025f5ac + 0x25f51c);
  sqlite3_mutex_enter(*(undefined4 *)(DAT_0025f5ac + 0x25f57c));
  FUN_0025acb4(5,param_2);
  uVar4 = *(uint *)(iVar1 + 0x25f584);
  uVar8 = local_20 - iVar3;
  iVar2 = (*(int *)(iVar1 + 0x25f588) - ((int)uVar8 >> 0x1f)) - (uint)(uVar4 < uVar8);
  iVar5 = (int)*puVar7 >> 0x1f;
  if ((iVar2 <= iVar5) && ((iVar2 != iVar5 || (uVar4 - uVar8 <= *puVar7)))) {
    FUN_0025ae78(uVar8);
  }
  iVar5 = DAT_0025f5b0;
  iVar2 = (**(code **)(DAT_0025f5b0 + 0x25f57c))(param_1,local_20);
  if (iVar2 == 0) {
    if (*(int *)(DAT_0025f5b4 + 0x25f5d4) != 0) {
      FUN_0025ae78(param_2);
      iVar2 = (**(code **)(iVar5 + 0x25f57c))(param_1,local_20);
      if (iVar2 != 0) goto LAB_0025f57a;
    }
  }
  else {
LAB_0025f57a:
    iVar5 = FUN_0025aeb8(iVar2);
    FUN_0025ac94(0,iVar5 - iVar3);
  }
  sqlite3_mutex_leave(*(undefined4 *)(DAT_0025f5b8 + 0x25f5f0));
LAB_0025f5a0:
  return CONCAT44(local_20,iVar2);
}


