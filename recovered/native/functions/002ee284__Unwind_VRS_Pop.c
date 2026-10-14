/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ee284 _Unwind_VRS_Pop */

undefined4 _Unwind_VRS_Pop(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint in_r12;
  bool bVar12;
  bool bVar13;
  undefined4 auStack_228 [28];
  undefined4 auStack_1b8 [4];
  undefined1 auStack_1a8 [128];
  undefined4 auStack_128 [32];
  undefined4 auStack_a8 [35];
  
  switch(param_2) {
  case 0:
    if (param_4 != 0) {
      return 2;
    }
    uVar10 = 0;
    puVar5 = (uint *)param_1[0xe];
    do {
      puVar2 = (uint *)(param_3 & 0xffff & 1 << (uVar10 & 0xff));
      bVar12 = puVar2 != (uint *)0x0;
      puVar6 = puVar5;
      if (bVar12) {
        puVar2 = param_1 + uVar10;
        puVar6 = puVar5 + 1;
        in_r12 = *puVar5;
      }
      uVar10 = uVar10 + 1;
      if (bVar12) {
        puVar2[1] = in_r12;
      }
      puVar5 = puVar6;
    } while (uVar10 != 0x10);
    if ((param_3 & 0x2000) != 0) {
      return 0;
    }
    param_1[0xe] = (uint)puVar6;
    return 0;
  case 1:
    uVar10 = param_4 - 5;
    if (uVar10 != 0) {
      uVar10 = 1;
    }
    if (param_4 != 1 && param_4 != 5) {
      return 2;
    }
    uVar1 = param_3 >> 0x10;
    param_3 = param_3 & 0xffff;
    uVar7 = param_3 + uVar1;
    if (param_4 == 1) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x20;
    }
    if (uVar3 < uVar7) {
      return 2;
    }
    bVar12 = param_4 == 1;
    if (uVar1 >= 0x10 && bVar12) {
      return 2;
    }
    uVar3 = param_3;
    if ((uVar1 < 0x10) && (uVar3 = 0, 0x10 < uVar7)) {
      uVar3 = uVar7 - 0x10;
    }
    uVar7 = uVar3;
    if (uVar3 != 0) {
      uVar7 = 1;
    }
    if ((uVar7 & uVar10) != 0) {
      return 2;
    }
    if ((uVar1 < 0x10) && (uVar10 = *param_1, (uVar10 & 1) != 0)) {
      *param_1 = uVar10 & 0xfffffffe;
      if (param_4 == 5) {
        *param_1 = uVar10 & 0xfffffffe | 2;
        __gnu_Unwind_Save_VFP_D();
      }
      else {
        *param_1 = uVar10 & 0xfffffffc;
        __gnu_Unwind_Save_VFP(param_1 + 0x12);
      }
    }
    if ((uVar7 != 0) && ((*param_1 & 4) != 0)) {
      *param_1 = *param_1 & 0xfffffffb;
      __gnu_Unwind_Save_VFP_D_16_to_31(param_1 + 0x34);
    }
    if (bVar12) {
      __gnu_Unwind_Save_VFP(auStack_a8);
      if (uVar7 == 0) goto LAB_002ee424;
    }
    else {
      if (uVar1 < 0x10) {
        __gnu_Unwind_Save_VFP_D(auStack_a8);
      }
      if (uVar7 == 0) goto LAB_002ee424;
      __gnu_Unwind_Save_VFP_D_16_to_31(auStack_1a8);
    }
    param_3 = 0x10 - uVar1;
LAB_002ee424:
    puVar8 = (undefined4 *)param_1[0xe];
    if (0 < (int)param_3) {
      iVar11 = param_3 * 2;
      puVar4 = auStack_a8 + uVar1 * 2;
      puVar9 = puVar8;
      while (bVar13 = iVar11 != 0, iVar11 = iVar11 + -1, bVar13) {
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar8 = puVar8 + param_3 * 2;
    }
    if (uVar7 != 0) {
      uVar10 = uVar1;
      if (uVar1 < 0x10) {
        uVar10 = 0x10;
      }
      iVar11 = uVar3 * 2;
      puVar4 = auStack_228 + uVar10 * 2;
      puVar9 = puVar8;
      while (bVar13 = iVar11 != 0, iVar11 = iVar11 + -1, bVar13) {
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar8 = puVar8 + uVar3 * 2;
    }
    if (bVar12) {
      puVar8 = puVar8 + 1;
    }
    param_1[0xe] = (uint)puVar8;
    if (bVar12) {
      __gnu_Unwind_Restore_VFP(auStack_a8);
    }
    else {
      if (uVar1 < 0x10) {
        __gnu_Unwind_Restore_VFP_D(auStack_a8);
      }
      if (uVar7 == 0) {
        return 0;
      }
      __gnu_Unwind_Restore_VFP_D_16_to_31(auStack_1a8);
    }
    return 0;
  case 2:
    return 1;
  case 3:
    if (param_4 == 3) {
      uVar10 = param_3 & 0xffff;
      if (uVar10 + (param_3 >> 0x10) < 0x11) {
        if ((*param_1 & 8) != 0) {
          *param_1 = *param_1 & 0xfffffff7;
          __gnu_Unwind_Save_WMMXD(param_1 + 0x6c);
        }
        __gnu_Unwind_Save_WMMXD(auStack_128);
        puVar9 = (undefined4 *)param_1[0xe];
        puVar8 = puVar9;
        puVar4 = auStack_128 + (param_3 >> 0x10) * 2;
        for (iVar11 = uVar10 * 2; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        param_1[0xe] = (uint)(puVar9 + uVar10 * 2);
        __gnu_Unwind_Restore_WMMXD(auStack_128);
        return 0;
      }
    }
    break;
  case 4:
    bVar12 = param_3 == 0x10;
    if (param_3 < 0x11) {
      bVar12 = param_4 == 0;
    }
    if (bVar12) {
      if ((*param_1 & 0x10) != 0) {
        *param_1 = *param_1 & 0xffffffef;
        __gnu_Unwind_Save_WMMXC(param_1 + 0x8c);
      }
      __gnu_Unwind_Save_WMMXC(auStack_1b8);
      puVar8 = (undefined4 *)param_1[0xe];
      uVar10 = 0;
      do {
        if ((param_3 & 1 << (uVar10 & 0xff)) != 0) {
          auStack_1b8[uVar10] = *puVar8;
          puVar8 = puVar8 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 4);
      param_1[0xe] = (uint)puVar8;
      __gnu_Unwind_Restore_WMMXC(auStack_1b8);
      return 0;
    }
  }
  return 2;
}


