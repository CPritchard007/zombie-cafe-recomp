/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026613c FUN_0026613c */

void FUN_0026613c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *local_30;
  byte abStack_2c [16];
  int local_1c;
  
  uVar7 = param_2[10];
  piVar4 = *(int **)(DAT_002661cc + 0x266148);
  local_1c = *piVar4;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = uVar7;
  __aeabi_ldivmod();
  uVar6 = uVar2;
  if ((uVar2 == 0) || (uVar6 = 0, (int)(uVar7 - uVar2) < 9)) {
    do {
      iVar5 = FUN_00266050(param_1,param_2,1,&local_30);
      if (iVar5 != 0) goto LAB_002661b8;
      uVar2 = uVar6 & 0xf;
      uVar6 = uVar6 + 1;
      abStack_2c[uVar2] = *local_30;
    } while (0x7f < *local_30);
    FUN_0025b924(abStack_2c,param_3);
  }
  else {
    iVar5 = 0;
    uVar2 = FUN_0025b924(param_2[9] + uVar2,param_3);
    *param_2 = uVar2 + uVar1;
    param_2[1] = uVar3 + CARRY4(uVar2,uVar1);
  }
LAB_002661b8:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


