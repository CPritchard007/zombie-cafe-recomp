/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002682b8 FUN_002682b8 */

uint FUN_002682b8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) <= param_2) {
    iVar4 = param_2 + 1;
    iVar1 = sqlite3_realloc(*(undefined4 *)(param_1 + 0x20),iVar4 * 4);
    if (iVar1 == 0) {
      *param_3 = 0;
      return 7;
    }
    memset((void *)(iVar1 + *(int *)(param_1 + 0x18) * 4),0,(iVar4 - *(int *)(param_1 + 0x18)) * 4);
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x18) = iVar4;
  }
  iVar1 = param_2 * 4;
  uVar2 = 0;
  piVar3 = (int *)(*(int *)(param_1 + 0x20) + iVar1);
  if (*piVar3 == 0) {
    if (*(char *)(param_1 + 0x2b) == '\x02') {
      iVar4 = FUN_0025f3a8(0x8000);
      *piVar3 = iVar4;
      uVar2 = -(uint)(*(int *)(*(int *)(param_1 + 0x20) + iVar1) == 0) & 7;
    }
    else {
      uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x34))
                        (*(int **)(param_1 + 4),param_2,0x8000,*(undefined1 *)(param_1 + 0x2c),
                         piVar3);
      if (uVar2 == 8) {
        *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 2;
        uVar2 = 0;
      }
    }
  }
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1);
  return uVar2;
}


