/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275f2c FUN_00275f2c */

void FUN_00275f2c(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x1b0) == 0) {
    iVar1 = param_1;
  }
  FUN_00275ec4(param_1,param_3);
  *(uint *)(iVar1 + 0x154) = 1 << (param_3 & 0xff) | *(uint *)(iVar1 + 0x154);
  *(byte *)(iVar1 + 0x17) = param_2 | *(byte *)(iVar1 + 0x17);
  return;
}


