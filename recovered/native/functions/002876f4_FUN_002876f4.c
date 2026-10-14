/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002876f4 FUN_002876f4 */

int FUN_002876f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_20;
  undefined4 local_1c;
  
  for (puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x10) + param_2 * 0x10 + 0xc) + 0x20);
      puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    FUN_0025cd74(puVar3[2]);
  }
  local_1c = *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
  local_20 = param_1;
  iVar1 = FUN_0026460e(param_1,DAT_00287768 + 0x287720);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_0026877c(param_1,DAT_0028776c + 0x287734,local_1c);
    if (iVar1 != 0) {
      iVar2 = sqlite3_exec(param_1,iVar1,DAT_00287770 + 0x287744,&local_20,0);
      FUN_0025fbda(param_1,iVar1);
      if (iVar2 != 7) {
        return iVar2;
      }
    }
    *(undefined1 *)(param_1 + 0x36) = 1;
    iVar2 = 7;
  }
  return iVar2;
}


