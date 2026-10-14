/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028a2ac FUN_0028a2ac */

void FUN_0028a2ac(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x20)) {
    if ((*(byte *)(param_2 + 8) == param_3) && (*(byte *)(param_2 + 9) == param_5)) {
      if ((param_4 == 0) ||
         ((*(int *)(param_2 + 0x10) == 0 ||
          (iVar1 = FUN_002647d0(*(int *)(param_2 + 0x10),param_4), iVar1 != 0)))) {
        FUN_00289e20(param_1,param_2,param_6,param_7,param_8,param_9);
      }
    }
  }
  return;
}


