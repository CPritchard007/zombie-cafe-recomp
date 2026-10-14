/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b494 FUN_0026b494 */

undefined8 FUN_0026b494(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  uint local_20;
  int local_1c;
  uint uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  FUN_0025ad28();
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_20);
  if ((iVar1 == 0) && ((param_4 < local_1c || ((local_1c == param_4 && (param_3 < local_20)))))) {
    pcVar2 = *(code **)(**(int **)(param_1 + 8) + 0x10);
    iVar1 = (*pcVar2)(*(int **)(param_1 + 8),pcVar2,param_3,param_4);
  }
  FUN_0025ad3c();
  if (iVar1 != 0) {
    sqlite3_log(iVar1,DAT_0026b4e0 + 0x26b4dc,*(undefined4 *)(param_1 + 100));
  }
  return CONCAT44(local_1c,local_20);
}


