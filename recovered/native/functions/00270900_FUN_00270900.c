/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00270900 FUN_00270900 */

void FUN_00270900(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_30;
  
  iVar1 = param_1[0x12];
  iVar8 = *param_1;
  puVar7 = (undefined4 *)param_2[3];
  param_1[0x12] = iVar1 + 2;
  iVar2 = FUN_0025d12c(iVar8,param_2[6]);
  iVar8 = FUN_00268e90(param_1,0x1b,*param_2,0,
                       *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar8 + 0x10)));
  if (iVar8 == 0) {
    FUN_00265f96(param_1,iVar2,puVar7[5],1,*puVar7);
    iVar8 = FUN_002662b8(param_1);
    if (iVar8 != 0) {
      local_30 = param_3;
      if (param_3 < 0) {
        local_30 = param_2[10];
        FUN_0026641e(iVar8,0x67,local_30,iVar2);
      }
      iVar5 = iVar1 + 1;
      uVar3 = FUN_0026e770(param_1,param_2);
      FUN_002662da(iVar8,0x28,iVar5,local_30,iVar2,uVar3,0xfffffff0);
      uVar4 = 1;
      if (-1 < param_3) {
        uVar4 = 3;
      }
      FUN_0025c3b8(iVar8,uVar4);
      iVar6 = param_1[0x12];
      param_1[0x12] = iVar6 + 1;
      FUN_002662da(iVar8,0x2b,iVar6,0,0,uVar3,0xfffffffa);
      FUN_002663cc(param_1,iVar1,iVar2,puVar7,0x27);
      iVar2 = FUN_0026641e(iVar8,0x48,iVar1,0);
      uVar3 = FUN_002627dc(param_1);
      FUN_002707d4(param_1,param_2,iVar1,uVar3,1);
      FUN_0026641e(iVar8,0x60,iVar6,uVar3);
      FUN_0026641e(iVar8,0x5f,iVar1,iVar2 + 1);
      FUN_002624c2(iVar8,iVar2);
      uVar4 = FUN_0026641e(iVar8,0x46,iVar6,0);
      iVar2 = *(int *)(iVar8 + 0x1c);
      if (*(char *)(param_2 + 0xb) != '\0') {
        iVar9 = iVar2 + 3;
        FUN_0026641e(iVar8,1,0,iVar9);
        iVar2 = *(int *)(iVar8 + 0x1c);
        FUN_00266266(iVar8,0x3d,iVar6,iVar9,uVar3);
        FUN_002662fa(param_1,2,DAT_00270acc + 0x270a64,0xfffffffe);
      }
      FUN_0026641e(iVar8,0x3e,iVar6,uVar3);
      FUN_00266266(iVar8,0x61,iVar5,uVar3,1);
      FUN_0025c3b8(iVar8,0x10);
      FUN_002627fe(param_1,uVar3);
      FUN_0026641e(iVar8,0x51,iVar6,iVar2);
      FUN_002624c2(iVar8,uVar4);
      FUN_002665da(iVar8,0x2d,iVar1);
      FUN_002665da(iVar8,0x2d,iVar5);
      FUN_002665da(iVar8,0x2d,iVar6);
    }
  }
  return;
}


