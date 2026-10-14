/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026123e FUN_0026123e */

undefined8 FUN_0026123e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  
  local_1c = param_2;
  if (param_2 != 0) {
    local_1c = 0;
    iVar2 = param_2;
    while( true ) {
      if (*(int *)(param_2 + 0x1c) <= local_1c) break;
      iVar1 = *(int *)(iVar2 + 0x80);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x1c) != 0) {
          sqlite3_free(*(undefined4 *)(iVar1 + 0x18));
        }
        FUN_0025fbda(param_1,iVar1);
      }
      if (((*(uint *)(iVar2 + 0x38) & 0x20000000) != 0) &&
         (iVar1 = *(int *)(iVar2 + 0x48), iVar1 != 0)) {
        FUN_0025fbda(param_1,*(undefined4 *)(iVar1 + 0x10));
        FUN_0025fbda(param_1,iVar1);
      }
      iVar2 = iVar2 + 0x50;
      local_1c = local_1c + 1;
    }
    FUN_002611e8(*(undefined4 *)(param_2 + 0x20));
    FUN_0025fbda(param_1,param_2);
  }
  return CONCAT44(local_1c,param_1);
}


