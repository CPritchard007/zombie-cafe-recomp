/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027fb0c FUN_0027fb0c */

int FUN_0027fb0c(int param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_1c [2];
  
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    iVar1 = FUN_0026b4e4(DAT_0027fbe8);
    return iVar1;
  }
  iVar1 = FUN_00274c54(param_1,param_2,local_1c);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_28 = 1;
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(local_1c[0] + 0x10) <= iVar1) break;
    iVar4 = *(int *)(local_1c[0] + 0x38) +
            (uint)(CONCAT11(*(undefined1 *)(iVar1 * 2 + *(int *)(local_1c[0] + 0x40)),
                            *(undefined1 *)(*(int *)(local_1c[0] + 0x40) + local_28)) &
                  *(ushort *)(local_1c[0] + 0x12));
    if (*(char *)(local_1c[0] + 3) == '\0') {
      uVar2 = FUN_0025ba30(iVar4);
      iVar3 = FUN_0027fb0c(param_1,uVar2,1,param_4);
      if (iVar3 != 0) goto LAB_0027fbdc;
    }
    iVar3 = FUN_0027e700(local_1c[0],iVar4);
    local_28 = local_28 + 2;
    if (iVar3 != 0) goto LAB_0027fbdc;
    iVar1 = iVar1 + 1;
  }
  if (*(char *)(local_1c[0] + 3) == '\0') {
    uVar2 = FUN_0025ba30(*(int *)(local_1c[0] + 0x38) + 8);
    iVar3 = FUN_0027fb0c(param_1,uVar2,1,param_4);
    if (iVar3 != 0) goto LAB_0027fbdc;
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + (uint)*(ushort *)(local_1c[0] + 0x10);
  }
  if (param_3 == 0) {
    iVar3 = FUN_002733c4(*(undefined4 *)(local_1c[0] + 0x44));
    if (iVar3 == 0) {
      FUN_0026b790(local_1c[0],**(byte **)(local_1c[0] + 0x38) | 8);
    }
  }
  else {
    iVar3 = FUN_0027e534(*(undefined4 *)(local_1c[0] + 0x34),local_1c[0],
                         *(undefined4 *)(local_1c[0] + 0x48));
  }
LAB_0027fbdc:
  FUN_00274a30(local_1c[0]);
  return iVar3;
}


