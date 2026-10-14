/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260e84 FUN_00260e84 */

undefined8 FUN_00260e84(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *local_1c;
  
  local_1c = param_2;
  if ((param_2 != (undefined4 *)0x0) &&
     (((param_1 != 0 && (*(int *)(param_1 + 0x1f0) != 0)) ||
      (sVar1 = *(short *)(param_2 + 8), *(short *)(param_2 + 8) = sVar1 + -1,
      (short)(sVar1 + -1) == 0)))) {
    puVar5 = (undefined4 *)param_2[4];
    while (puVar5 != (undefined4 *)0x0) {
      local_1c = (undefined4 *)puVar5[5];
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
        uVar7 = *puVar5;
        uVar2 = FUN_0025b154(uVar7);
        FUN_00260d1c(puVar5[6] + 0x18,uVar7,uVar2,0);
      }
      FUN_0025fbda(param_1,puVar5[4]);
      FUN_0025fbda(param_1,puVar5);
      puVar5 = local_1c;
    }
    iVar6 = param_2[9];
    while (iVar6 != 0) {
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
        iVar8 = *(int *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0x10) == 0) {
          if (iVar8 == 0) {
            local_1c = *(undefined4 **)(iVar6 + 8);
          }
          else {
            local_1c = *(undefined4 **)(iVar8 + 8);
          }
          uVar2 = FUN_0025b154(local_1c);
          FUN_00260d1c(param_2[0x11] + 0x38,local_1c,uVar2,iVar8);
        }
        else {
          *(int *)(*(int *)(iVar6 + 0x10) + 0xc) = iVar8;
        }
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x10) = *(undefined4 *)(iVar6 + 0x10);
        }
      }
      FUN_0026151c(param_1,*(undefined4 *)(iVar6 + 0x1c));
      FUN_0026151c(param_1,*(undefined4 *)(iVar6 + 0x20));
      iVar8 = *(int *)(iVar6 + 4);
      FUN_0025fbda(param_1,iVar6);
      iVar6 = iVar8;
    }
    FUN_00261144(param_1,param_2);
    FUN_0025fbda(param_1,*param_2);
    FUN_0025fbda(param_1,param_2[10]);
    FUN_00261092(param_1,param_2[7]);
    FUN_00261102(param_1,param_2[0xb]);
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      piVar4 = (int *)param_2[0xd];
      param_2[0xd] = 0;
      while (piVar4 != (int *)0x0) {
        iVar6 = *piVar4;
        piVar3 = (int *)piVar4[6];
        if (iVar6 == 0) {
          param_2[0xd] = piVar4;
          piVar4[6] = 0;
          piVar4 = piVar3;
        }
        else {
          piVar4[6] = *(int *)(iVar6 + 0x13c);
          *(int **)(iVar6 + 0x13c) = piVar4;
          piVar4 = piVar3;
        }
      }
    }
    iVar6 = 0;
    if (param_2[0xf] != 0) {
      for (; iVar6 < (int)param_2[0xe]; iVar6 = iVar6 + 1) {
        FUN_0025fbda(param_1,*(undefined4 *)(param_2[0xf] + iVar6 * 4));
      }
      FUN_0025fbda(param_1);
    }
    FUN_0025fbda(param_1,param_2);
  }
  return CONCAT44(local_1c,param_1);
}


