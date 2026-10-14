/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261988 FUN_00261988 */

void FUN_00261988(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_1[10] != 0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 0x14);
      iVar2 = *(int *)(iVar2 + 0x20);
      if (param_2 < *puVar1) {
        FUN_00261944();
      }
    }
    if ((param_2 == 0) && (param_1[0xb] != 0)) {
      memset(*(void **)(param_1[0xb] + 4),0,param_1[5]);
      param_2 = 1;
    }
    (**(code **)(DAT_002619d0 + 0x261a52))(param_1[10],param_2 + 1);
  }
  return;
}


