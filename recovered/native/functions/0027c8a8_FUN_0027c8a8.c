/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c8a8 FUN_0027c8a8 */

undefined4 FUN_0027c8a8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  FUN_00261fe0(param_1);
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar5 * 0x10 + 0xc);
    if (iVar3 != 0) {
      for (puVar4 = *(undefined4 **)(iVar3 + 0x10); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        piVar2 = (int *)(puVar4[2] + 0x34);
        if ((*(byte *)(puVar4[2] + 0x22) & 0x10) != 0) {
          while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
            if (*piVar1 == param_1) {
              *piVar2 = piVar1[6];
              FUN_00260036();
              break;
            }
            piVar2 = piVar1 + 6;
          }
        }
      }
    }
  }
  FUN_00262022(param_1);
  FUN_00260082(param_1,0x44);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
LAB_0027c93c:
      FUN_00268578(param_1,5,DAT_0027c960 + 0x27c946);
      sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
      return 5;
    }
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar5 * 0x10 + 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) goto LAB_0027c93c;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = DAT_0027c964;
  FUN_0027c6ec(param_1);
  return 0;
}


