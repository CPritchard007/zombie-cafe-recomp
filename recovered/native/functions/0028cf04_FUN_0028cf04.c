/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028cf04 FUN_0028cf04 */

undefined8
FUN_0028cf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(iVar6 + 0x44);
  uVar7 = 0;
  *(undefined4 *)(iVar3 + 0x10) = param_3;
  *(undefined4 *)(iVar3 + 0x14) = param_4;
  uVar1 = param_3;
  iVar3 = sqlite3_step(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 == 100) {
    iVar2 = *(int *)(param_1 + 0xc) * 4;
    uVar4 = *(uint *)(*(int *)(**(int **)(iVar6 + 0x40) + 0x58) + iVar2);
    if (0xb < uVar4) {
      iVar3 = 0;
      *(undefined4 *)(param_1 + 8) =
           *(undefined4 *)(*(int *)(**(int **)(iVar6 + 0x40) + 0x5c) + iVar2);
      uVar1 = FUN_0025c490(uVar4);
      *(undefined4 *)(param_1 + 4) = uVar1;
      puVar5 = *(undefined4 **)**(undefined4 **)(iVar6 + 0x40);
      *(undefined4 **)(param_1 + 0x10) = puVar5;
      FUN_00261f68(*puVar5);
      iVar6 = *(int *)(param_1 + 0x10);
      sqlite3_free(*(undefined4 *)(iVar6 + 0x14));
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined1 *)(iVar6 + 0x5c) = 1;
      FUN_00262002(**(undefined4 **)(param_1 + 0x10));
      goto LAB_0028cfde;
    }
    if (uVar4 == 0) {
      iVar6 = DAT_0028cfec + 0x28cf4c;
    }
    else if (uVar4 == 7) {
      iVar6 = DAT_0028cfe8 + 0x28cf46;
    }
    else {
      iVar6 = DAT_0028cff0 + 0x28cf52;
    }
    iVar3 = 1;
    uVar7 = FUN_0026877c(*(undefined4 *)(param_1 + 0x18),DAT_0028cff4 + 0x28cf58,iVar6);
    sqlite3_finalize(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar3 = sqlite3_finalize();
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    if (iVar3 == 0) {
      uVar7 = FUN_0026877c(uVar7,DAT_0028cff8 + 0x28cfc2,param_3,param_4,param_3,param_4,uVar1);
      iVar3 = 1;
    }
    else {
      uVar1 = sqlite3_errmsg(uVar7);
      uVar7 = FUN_0026877c(uVar7,DAT_0028cffc + 0x28cfda,uVar1);
    }
  }
LAB_0028cfde:
  *param_5 = uVar7;
  return CONCAT44(param_3,iVar3);
}


