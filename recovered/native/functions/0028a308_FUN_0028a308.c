/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028a308 FUN_0028a308 */

void FUN_0028a308(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_30;
  
  iVar5 = param_1[2];
  uVar1 = FUN_00266020(iVar5);
  FUN_00266266(iVar5,0x36,param_3,uVar1,param_4);
  iVar2 = FUN_00264918(param_1,param_2,0,0);
  if ((iVar2 != 0) || (local_30 = param_6, param_6 != 0)) {
    uVar3 = FUN_00289d88(param_1,param_6,0,0,3,param_2,param_7);
    uVar4 = *(uint *)(*param_1 + 0x18) & 0x4000000;
    if (uVar4 != 0) {
      uVar4 = FUN_0026a868(param_1,param_2);
    }
    iVar2 = param_1[0x13];
    local_30 = iVar2 + 1;
    param_1[0x13] = iVar2 + param_2[2] + 1;
    FUN_0026641e(iVar5,0xe,param_4,local_30);
    for (uVar6 = 0; (int)uVar6 < (int)param_2[2]; uVar6 = uVar6 + 1) {
      if (((uVar4 | uVar3) == 0xffffffff) || (((uVar4 | uVar3) & 1 << (uVar6 & 0xff)) != 0)) {
        FUN_002706fc(iVar5,param_2,param_3,uVar6,iVar2 + 2 + uVar6);
      }
    }
    FUN_0028a2ac(param_1,param_6,0x6a,0,1,param_2,local_30,param_7,uVar1);
    FUN_00266266(iVar5,0x36,param_3,uVar1,param_4);
    FUN_002888e0(param_1,param_2,local_30,0);
  }
  if (param_2[7] == 0) {
    FUN_002708b2(param_1,param_2,param_3,0);
    FUN_0026641e(iVar5,0x3b,param_3,param_5 != 0);
    if (param_5 != 0) {
      FUN_00263832(iVar5,0xffffffff,*param_2,0);
    }
  }
  if ((*(uint *)(*param_1 + 0x18) & 0x4000000) != 0) {
    FUN_00289eb4(param_1,param_2,0,local_30);
  }
  FUN_0028a2ac(param_1,param_6,0x6a,0,2,param_2,local_30,param_7,uVar1);
  FUN_0025c384(iVar5,uVar1);
  return;
}


