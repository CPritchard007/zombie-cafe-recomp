/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278240 FUN_00278240 */

undefined4 FUN_00278240(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  uVar4 = param_1[2];
  pcVar5 = (char *)*param_2;
  if (*pcVar5 == 'L') {
    param_4 = FUN_00277a30(param_1,*(undefined4 *)(pcVar5 + 0xc),param_4);
  }
  else if (*pcVar5 == 'I') {
    FUN_0026641e(uVar4,10,0,param_4);
  }
  else {
    iVar1 = FUN_002777d0(param_1,pcVar5,0);
    uVar6 = *(undefined4 *)(pcVar5 + 0x18);
    FUN_0026641e(uVar4,0x48,uVar6,0);
    if (*(int *)(param_3 + 0x40) == 0) {
      uVar2 = FUN_00266020(uVar4);
      *(undefined4 *)(param_3 + 0x28) = uVar2;
    }
    iVar3 = *(int *)(param_3 + 0x40) + 1;
    *(int *)(param_3 + 0x40) = iVar3;
    iVar3 = FUN_00265252(*param_1,*(undefined4 *)(param_3 + 0x44),iVar3 * 8);
    *(int *)(param_3 + 0x44) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_3 + 0x40) = 0;
    }
    else {
      puVar7 = (undefined4 *)(iVar3 + (*(int *)(param_3 + 0x40) + -1) * 8);
      *puVar7 = uVar6;
      if (iVar1 == 1) {
        uVar6 = FUN_0026641e(uVar4,0x41,uVar6,param_4);
      }
      else {
        uVar6 = FUN_00266266(uVar4,0x1d,uVar6,0,param_4);
      }
      puVar7[1] = uVar6;
      FUN_002665da(uVar4,0x49,param_4);
    }
  }
  FUN_0025d578(param_3,param_2);
  return param_4;
}


