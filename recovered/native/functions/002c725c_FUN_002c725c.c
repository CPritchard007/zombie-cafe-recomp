/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c725c FUN_002c725c */

int FUN_002c725c(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x6e] != 0) || (iVar1 = FUN_002c71aa(), iVar1 != 0)) {
    if (param_1[0x6e] == *(int *)(param_1[0x74] + 0x14) + 0xd0) {
      *(undefined4 *)(*param_1 + 0x14) = 100;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x74] + 0x14);
      (**(code **)(*param_1 + 4))(param_1,3);
      param_1[0x6e] = 0;
    }
    else {
      iVar1 = (**(code **)(param_1[6] + 0x14))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = 1;
    *(uint *)(param_1[0x74] + 0x14) = *(int *)(param_1[0x74] + 0x14) + 1U & 7;
  }
  return iVar1;
}


