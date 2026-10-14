/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e390 FUN_0026e390 */

void FUN_0026e390(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8,uint *param_9,uint *param_10,int *param_11)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar6 = *(undefined4 **)(param_3 + 0xc);
  memset(param_10,0,0x28);
  *param_10 = 0x8000000;
  piVar7 = (int *)*param_11;
  if (piVar7 == (int *)0x0) {
    iVar5 = *(int *)(param_2 + 0x20);
    local_50 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(param_2 + 0x18); iVar4 = iVar4 + 1) {
      if (*(int *)(iVar5 + 8) == *(int *)(param_3 + 0x20)) {
        local_50 = local_50 + (uint)((*(ushort *)(iVar5 + 0x10) & 0x81) == 0);
      }
      iVar5 = iVar5 + 0x28;
    }
    puVar9 = param_9;
    if (param_9 != (uint *)0x0) {
      iVar4 = 0;
      for (uVar8 = 0; (int)uVar8 < (int)*param_9; uVar8 = uVar8 + 1) {
        puVar1 = (undefined4 *)(param_9[2] + iVar4);
        if ((*(char *)*puVar1 != -0x68) ||
           (iVar4 = iVar4 + 0x14, *(int *)((char *)*puVar1 + 0x18) != *(int *)(param_3 + 0x20))) {
          puVar9 = (uint *)0x0;
          goto LAB_0026e42a;
        }
      }
      puVar9 = (uint *)(uVar8 & -(uint)(uVar8 == *param_9));
    }
LAB_0026e42a:
    piVar7 = (int *)FUN_0025f04c(*param_1,local_50 * 0x14 + 0x30 + (int)puVar9 * 8);
    if (piVar7 == (int *)0x0) {
      FUN_00268e48(param_1,DAT_0026e708 + 0x26e44e);
    }
    else {
      piVar10 = piVar7 + 0xc;
      piVar11 = piVar10 + local_50 * 3;
      piVar7[1] = (int)piVar10;
      *piVar7 = local_50;
      piVar7[3] = (int)piVar11;
      piVar7[2] = (int)puVar9;
      piVar7[4] = (int)(piVar11 + (int)puVar9 * 2);
      iVar12 = *(int *)(param_2 + 0x20);
      iVar4 = 0;
      for (iVar5 = 0; iVar5 < *(int *)(param_2 + 0x18); iVar5 = iVar5 + 1) {
        iVar3 = iVar4;
        if ((*(int *)(iVar12 + 8) == *(int *)(param_3 + 0x20)) &&
           ((*(ushort *)(iVar12 + 0x10) & 0x81) == 0)) {
          iVar3 = iVar4 + 1;
          piVar2 = piVar10 + iVar4 * 3;
          iVar4 = *(int *)(iVar12 + 0xc);
          piVar2[2] = iVar5;
          *piVar2 = iVar4;
          *(char *)(piVar2 + 1) = (char)*(undefined2 *)(iVar12 + 0x10);
        }
        iVar12 = iVar12 + 0x28;
        iVar4 = iVar3;
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < (int)puVar9; iVar4 = iVar4 + 1) {
        *piVar11 = (int)*(short *)(*(int *)(param_9[2] + iVar5) + 0x1c);
        iVar12 = param_9[2] + iVar5;
        iVar5 = iVar5 + 0x14;
        *(undefined1 *)(piVar11 + 1) = *(undefined1 *)(iVar12 + 0xc);
        piVar11 = piVar11 + 2;
      }
    }
    *param_11 = (int)piVar7;
    if (piVar7 == (int *)0x0) {
      return;
    }
  }
  piVar10 = (int *)piVar7[4];
  iVar5 = piVar7[1];
  for (iVar4 = 0; iVar4 < *piVar7; iVar4 = iVar4 + 1) {
    iVar12 = *(int *)(iVar5 + 8) * 0x28 + *(int *)(param_2 + 0x20);
    *(bool *)(iVar5 + 5) =
         (*(uint *)(iVar12 + 0x1c) & param_6) == 0 && (param_5 & *(uint *)(iVar12 + 0x18)) == 0;
    iVar5 = iVar5 + 0xc;
  }
  memset(piVar10,0,*piVar7 << 3);
  if (piVar7[7] != 0) {
    sqlite3_free(piVar7[6]);
  }
  iVar5 = piVar7[2];
  piVar7[6] = 0;
  piVar7[5] = 0;
  piVar7[7] = 0;
  piVar7[8] = 0;
  iVar4 = DAT_0026e6f4;
  piVar7[10] = DAT_0026e6f0;
  piVar7[0xb] = iVar4;
  if (param_9 == (uint *)0x0) {
    piVar7[2] = 0;
  }
  iVar4 = FUN_0025d364(*param_1,puVar6);
  piVar11 = *(int **)(iVar4 + 8);
  iVar4 = (**(code **)(*piVar11 + 0xc))(piVar11,piVar7);
  if (iVar4 != 0) {
    if (iVar4 == 7) {
      *(undefined1 *)(*param_1 + 0x36) = 1;
    }
    else {
      iVar4 = piVar11[2];
      if (iVar4 == 0) {
        iVar4 = FUN_0026311c();
        iVar12 = DAT_0026e70c + 0x26e592;
      }
      else {
        iVar12 = DAT_0026e710 + 0x26e598;
      }
      FUN_00268e48(param_1,iVar12,iVar4);
    }
  }
  sqlite3_free(piVar11[2]);
  iVar4 = DAT_0026e714;
  piVar11[2] = 0;
  for (iVar12 = 0; iVar12 < *piVar7; iVar12 = iVar12 + 1) {
    if ((*(char *)(piVar7[1] + iVar12 * 0xc + 5) == '\0') && (0 < *(int *)(iVar12 * 8 + piVar7[4])))
    {
      FUN_00268e48(param_1,iVar4 + 0x26e5ac,*puVar6);
    }
  }
  if (param_1[0x11] == 0) {
    iVar12 = piVar7[1];
    for (iVar4 = 0; iVar4 < *piVar7; iVar4 = iVar4 + 1) {
      if (0 < *piVar10) {
        iVar3 = *(int *)(param_2 + 0x20) + *(int *)(iVar12 + 8) * 0x28;
        param_10[8] = *(uint *)(iVar3 + 0x18) | param_10[8];
        param_10[9] = param_10[9] | *(uint *)(iVar3 + 0x1c);
      }
      piVar10 = piVar10 + 2;
      iVar12 = iVar12 + 0xc;
    }
    piVar10 = piVar7 + 10;
    iVar4 = *piVar10;
    iVar12 = piVar7[0xb];
    uVar14 = *(undefined8 *)piVar10;
    if ((param_9 != (uint *)0x0) && (uVar14 = *(undefined8 *)piVar10, piVar7[8] == 0)) {
      uVar13 = CONCAT44(DAT_0026e6fc,DAT_0026e6f8);
      uVar14 = CONCAT44(DAT_0026e704,DAT_0026e700);
      while( true ) {
        local_34 = (undefined4)((ulonglong)uVar13 >> 0x20);
        local_38 = (undefined4)uVar13;
        local_44 = (undefined4)((ulonglong)uVar14 >> 0x20);
        local_48 = (undefined4)uVar14;
        iVar3 = __aeabi_dcmpgt(iVar4,iVar12,local_38,local_34);
        if (iVar3 == 0) break;
        uVar14 = __adddf3(local_48,local_44,DAT_0026e700,DAT_0026e704);
        uVar13 = __muldf3(local_38,local_34,DAT_0026e6f8,DAT_0026e6fc);
      }
      uVar14 = __muldf3(local_48,local_44,iVar4,iVar12);
      uVar14 = __adddf3(iVar4,iVar12,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    }
    local_4c = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_50 = (int)uVar14;
    iVar4 = __aeabi_dcmpgt(local_50,local_4c,DAT_0026e6f0,DAT_0026e6f4);
    if (iVar4 != 0) {
      uVar14 = CONCAT44(DAT_0026e6f4,DAT_0026e6f0);
    }
    *(undefined8 *)(param_10 + 6) = uVar14;
    param_10[4] = (uint)piVar7;
    if (piVar7[8] != 0) {
      *param_10 = *param_10 | 0x1000000;
    }
    param_10[1] = 0;
    piVar7[2] = iVar5;
    FUN_0026e168(param_1,param_2,param_3,param_8,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}


