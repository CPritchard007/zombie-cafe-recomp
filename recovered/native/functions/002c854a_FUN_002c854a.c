/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c854a FUN_002c854a */

void FUN_002c854a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1e4) + 8))();
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}


