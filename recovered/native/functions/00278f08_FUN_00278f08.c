/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278f08 FUN_00278f08 */

void FUN_00278f08(undefined4 *param_1,int param_2,short *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_38 [9];
  
  uVar3 = *param_1;
  memset(local_38,0,0x20);
  local_38[0] = param_1;
  iVar1 = FUN_0026a8f0(local_38,param_5);
  if (((iVar1 == 0) && (iVar1 = FUN_0026a8f0(local_38,param_6), iVar1 == 0)) &&
     (iVar1 = FUN_0026a8f0(local_38,param_7), iVar1 == 0)) {
    if (param_4 != (char *)0x0) {
      uVar4 = 0;
      if (*param_4 == '^') {
        uVar4 = *(undefined4 *)(param_4 + 4);
      }
      iVar1 = FUN_00268e90(param_1,param_2,uVar4,0,0);
      if (iVar1 != 0) goto LAB_00278fde;
    }
    iVar1 = FUN_002662b8(param_1);
    iVar2 = FUN_00262834(param_1,4);
    FUN_002786f4(param_1,param_5,iVar2);
    FUN_002786f4(param_1,param_6,iVar2 + 1);
    FUN_002786f4(param_1,param_7,iVar2 + 2);
    if (iVar1 != 0) {
      FUN_00266266(iVar1,0x12,0,(iVar2 + 3) - (int)*param_3,iVar2 + 3);
      FUN_0025c3b8(iVar1,(char)*param_3);
      FUN_00263832(iVar1,0xffffffff,param_3,0xfffffffb);
      FUN_002665da(iVar1,0x81,param_2 == 0x18);
    }
  }
  else {
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_00278fde:
  FUN_002610aa(uVar3,param_5);
  FUN_002610aa(uVar3,param_6);
  FUN_002610aa(uVar3,param_7);
  return;
}


