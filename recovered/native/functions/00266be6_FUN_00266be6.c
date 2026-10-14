/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266be6 FUN_00266be6 */

void FUN_00266be6(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar6 = *param_1;
  iVar10 = param_1[2];
  for (puVar11 = (undefined4 *)param_1[0x6b]; puVar11 != (undefined4 *)0x0;
      puVar11 = (undefined4 *)*puVar11) {
    iVar9 = puVar11[2];
    iVar7 = *(int *)(iVar6 + 0x10);
    iVar8 = puVar11[3];
    uVar1 = FUN_002627dc(param_1);
    FUN_002663cc(param_1,0,puVar11[2],*(undefined4 *)(*(int *)(iVar7 + iVar9 * 0x10 + 0xc) + 0x48),
                 0x28);
    iVar7 = iVar8 + 1;
    uVar2 = FUN_002665da(iVar10,0x4a,iVar7);
    uVar3 = FUN_002662aa(iVar10,0x48);
    uVar4 = FUN_00266266(iVar10,0x1d,0,0,uVar1);
    iVar8 = iVar8 + -1;
    uVar5 = FUN_00266266(iVar10,0x4c,iVar8,0,uVar1);
    FUN_0026641e(iVar10,0x5f,0,uVar4);
    FUN_002624c2(iVar10,uVar3);
    FUN_0026641e(iVar10,0x38,0,iVar7);
    uVar3 = FUN_002662aa(iVar10,1);
    FUN_002624c2(iVar10,uVar5);
    FUN_0026641e(iVar10,0x41,0,iVar7);
    FUN_002624c2(iVar10,uVar2);
    FUN_002624c2(iVar10,uVar3);
    FUN_00266266(iVar10,0x1f,iVar8,2,uVar1);
    FUN_00266266(iVar10,0x39,0,uVar1,iVar7);
    FUN_0025c3b8(iVar10,8);
    FUN_002662aa(iVar10,0x2d);
    FUN_002627fe(param_1,uVar1);
  }
  return;
}


