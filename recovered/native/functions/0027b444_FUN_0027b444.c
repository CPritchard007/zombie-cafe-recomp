/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027b444 FUN_0027b444 */

undefined4 FUN_0027b444(int *param_1,undefined4 *param_2,uint *param_3)

{
  ushort *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  uint local_c8;
  uint local_c4;
  int *local_c0;
  int local_b8;
  int *local_b4;
  int *local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  undefined4 local_80;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_37;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [4];
  uint local_24;
  int local_20;
  int local_1c;
  
  iVar24 = *param_1;
  puVar25 = (undefined4 *)param_2[0xf];
  local_48 = *param_3;
  local_44 = param_3[1];
  uStack_40 = param_3[2];
  local_3c = param_3[3];
  if (puVar25[0xe] == 0) {
    if (puVar25[0x12] != 0) {
      uVar3 = FUN_0025d17c(*(undefined1 *)(param_2 + 1));
      FUN_00268e48(param_1,DAT_0027b790 + 0x27b492,uVar3);
      iVar29 = 0;
      goto LAB_0027b502;
    }
    iVar29 = FUN_002662b8(param_1);
    if ((char)local_48 == '\t') {
      FUN_0026641e(iVar29,0x2a,local_44,*(undefined4 *)*param_2);
      FUN_0025c3b8(iVar29,8);
      local_48 = CONCAT31(local_48._1_3_,8);
    }
    if (*(int *)*param_2 != *(int *)*puVar25) {
      if ((*(ushort *)((int)param_2 + 6) & 0x80) != 0) {
        FUN_00268e48(param_1,DAT_0027b794 + 0x27b4e0);
        goto LAB_0027b4e2;
      }
      goto LAB_0027b4ee;
    }
  }
  else {
    uVar3 = FUN_0025d17c(*(undefined1 *)(param_2 + 1));
    FUN_00268e48(param_1,DAT_0027b78c + 0x27b478,uVar3);
LAB_0027b4e2:
    iVar29 = 1;
    FUN_0027bfd8();
LAB_0027b4ee:
    uVar3 = FUN_0025d17c(*(undefined1 *)(param_2 + 1));
    FUN_00268e48(param_1,DAT_0027b798 + 0x27b4fe,uVar3);
LAB_0027b502:
    puVar25 = (undefined4 *)0x1;
    FUN_0027bfd6();
  }
  iVar4 = param_2[0xe];
  if (iVar4 != 0) {
    iVar29 = param_1[2];
    iVar24 = *param_1;
    uVar3 = FUN_00266020(iVar29);
    uVar16 = FUN_00266020(iVar29);
    uVar21 = (uint)*(byte *)(param_2 + 1);
    puVar25 = (undefined4 *)param_2[0xf];
    piVar27 = (int *)param_2[0xe];
    local_c8 = 1;
    local_b8 = *piVar27;
    if (uVar21 != 0x71) {
      for (; (*(char *)(iVar24 + 0x36) == '\0' && ((int)local_c8 <= *(int *)*param_2));
          local_c8 = local_c8 + 1) {
        iVar23 = piVar27[2];
        for (iVar4 = 0; iVar4 < local_b8; iVar4 = iVar4 + 1) {
          if (*(ushort *)(iVar23 + 0xe) == local_c8) goto LAB_0027b5a0;
          iVar23 = iVar23 + 0x14;
        }
        if (iVar4 == local_b8) {
          iVar4 = FUN_0025f1ba(iVar24,0x81,0);
          if (iVar4 == 0) {
            return 7;
          }
          *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 0x400;
          *(uint *)(iVar4 + 4) = local_c8;
          piVar27 = (int *)FUN_00267228(param_1,piVar27);
          if (piVar27 != (int *)0x0) {
            iVar4 = local_b8 * 0x14;
            local_b8 = local_b8 + 1;
            *(undefined2 *)(piVar27[2] + iVar4 + 0xe) = (undefined2)local_c8;
          }
        }
LAB_0027b5a0:
      }
    }
    piVar5 = (int *)FUN_0025ee10(iVar24,local_b8 << 2);
    local_c0 = piVar5;
    if (piVar5 != (int *)0x0) {
      iVar4 = piVar27[2];
      piVar9 = piVar5;
      for (iVar23 = 0; iVar23 < local_b8; iVar23 = iVar23 + 1) {
        puVar1 = (ushort *)(iVar4 + 0xe);
        iVar4 = iVar4 + 0x14;
        *piVar9 = *puVar1 - 1;
        piVar9 = piVar9 + 1;
      }
      local_c0 = (int *)FUN_0025ee10(iVar24,local_b8 * 5 + 0x10);
      if (local_c0 != (int *)0x0) {
        local_c0[2] = (int)(local_c0 + local_b8 + 3);
        *(undefined2 *)((int)local_c0 + 6) = (undefined2)local_b8;
        *(undefined1 *)(local_c0 + 1) =
             *(undefined1 *)(*(int *)(*(int *)(iVar24 + 0x10) + 0xc) + 0x4d);
        local_b4 = local_c0;
        local_b0 = piVar5;
        for (local_c8 = 0; (int)local_c8 < local_b8; local_c8 = local_c8 + 1) {
          iVar4 = *(int *)(piVar27[2] + local_c8 * 0x14);
          if ((*(ushort *)(iVar4 + 2) & 0x100) == 0) {
            iVar23 = FUN_0026d27c(param_1,param_2,*local_b0);
            *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 0x100;
            *(int *)(iVar4 + 0x14) = iVar23;
          }
          else {
            iVar23 = *(int *)(iVar4 + 0x14);
          }
          local_b4[3] = iVar23;
          *(undefined1 *)(local_c0[2] + local_c8) =
               *(undefined1 *)(piVar27[2] + local_c8 * 0x14 + 0xc);
          local_b4 = local_b4 + 1;
          local_b0 = local_b0 + 1;
        }
      }
    }
    param_2[0xe] = piVar27;
    uVar17 = FUN_002604c0(*param_1,piVar27,0);
    puVar25[0xe] = uVar17;
    if (uVar21 == 0x71) {
      local_c8 = 0;
      local_b0 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)*param_2;
      local_b0 = (int *)FUN_00262834(param_1,iVar4 + 1);
      FUN_0026641e(iVar29,7,0,local_b0);
      local_c8 = FUN_0025f04c(iVar24,iVar4 * 5 + 0x10);
      if (local_c8 != 0) {
        *(uint *)(local_c8 + 8) = local_c8 + (iVar4 + 2) * 4 + 4;
        *(short *)(local_c8 + 6) = (short)iVar4;
        local_b4 = (int *)0x0;
        *(undefined1 *)(local_c8 + 4) =
             *(undefined1 *)(*(int *)(*(int *)(iVar24 + 0x10) + 0xc) + 0x4d);
        local_a4 = local_c8;
        for (; (int)local_b4 < iVar4; local_b4 = (int *)((int)local_b4 + 1)) {
          uVar17 = FUN_0026d27c(param_1,param_2,local_b4);
          *(undefined4 *)(local_a4 + 0xc) = uVar17;
          *(undefined1 *)(*(int *)(local_c8 + 8) + (int)local_b4) = 0;
          local_a4 = local_a4 + 4;
        }
      }
    }
    iVar4 = DAT_0027b79c;
    param_2[0xf] = 0;
    FUN_0026934c(param_1,param_2,param_2[0xe],iVar4 + 0x27b720);
    if (puVar25[0xf] == 0) {
      FUN_0026934c(param_1,puVar25,puVar25[0xe],iVar4 + 0x27b720);
    }
    FUN_00278c6c(param_1,param_2,uVar3);
    if ((uVar21 != 0x71) || (param_2[2] == 0)) {
      iVar4 = 0;
      local_9c = 0;
    }
    else {
      iVar4 = param_1[0x13] + 1;
      local_9c = param_1[0x13] + 2;
      param_1[0x13] = local_9c;
      if (param_2[3] == 0) {
        iVar23 = param_2[2];
      }
      else {
        iVar23 = param_2[3] + 1;
      }
      FUN_0026641e(iVar29,0xe,iVar23,iVar4);
      FUN_0026641e(iVar29,0xe,iVar4,local_9c);
    }
    FUN_002610aa(iVar24,param_2[0x12]);
    param_2[0x12] = 0;
    FUN_002610aa(iVar24,param_2[0x13]);
    param_2[0x13] = 0;
    iVar18 = param_1[0x13];
    iVar14 = iVar18 + 1;
    iVar23 = iVar18 + 2;
    iVar10 = iVar18 + 3;
    iVar15 = iVar18 + 4;
    iVar28 = iVar18 + 5;
    iVar18 = iVar18 + 6;
    param_1[0x13] = iVar18;
    local_38 = 10;
    local_37 = 0;
    local_28[0] = '\n';
    local_28[1] = 0;
    local_30 = 0;
    local_2c = 0;
    local_20 = 0;
    local_1c = 0;
    local_34 = iVar14;
    local_24 = iVar10;
    uVar17 = FUN_002662aa(iVar29,1);
    uVar22 = *(undefined4 *)(iVar29 + 0x1c);
    puVar25[2] = iVar4;
    iVar4 = param_1[0x7a];
    FUN_00276118(param_1,puVar25,&local_38);
    FUN_0026641e(iVar29,7,1,iVar23);
    FUN_002665da(iVar29,4,iVar14);
    uVar19 = *(undefined4 *)(iVar29 + 0x1c);
    uVar6 = param_2[2];
    uVar11 = param_2[3];
    param_2[2] = local_9c;
    param_2[3] = 0;
    iVar26 = param_1[0x7a];
    FUN_00276118(param_1,param_2,local_28);
    param_2[2] = uVar6;
    param_2[3] = uVar11;
    FUN_0026641e(iVar29,7,1,iVar15);
    FUN_002665da(iVar29,4,iVar10);
    uVar6 = FUN_0026699e(param_1,param_2,&local_38,param_3,iVar28,local_b0,local_c8,0xfffffff0,uVar3
                        );
    local_80 = 0;
    if (uVar21 - 0x70 < 2) {
      local_80 = FUN_0026699e(param_1,param_2,local_28,param_3,iVar18,local_b0,local_c8,0xffffffef,
                              uVar3);
    }
    if (uVar21 - 0x72 < 2) {
      local_c8 = FUN_0026641e(iVar29,1,0,uVar3);
    }
    else {
      local_c8 = FUN_0026641e(iVar29,0x1b,iVar15,uVar3);
      FUN_0026641e(iVar29,2,iVar18,local_80);
      FUN_002665da(iVar29,4,iVar10);
      FUN_0026641e(iVar29,1,0,local_c8);
      uVar30 = __adddf3(param_2[8],param_2[9],puVar25[8],puVar25[9]);
      *(undefined8 *)(param_2 + 8) = uVar30;
    }
    if (uVar21 == 0x73) {
      uVar11 = puVar25[8];
      uVar12 = puVar25[9];
      iVar7 = __aeabi_dcmpgt(param_2[8],param_2[9],uVar11,uVar12);
      uVar8 = local_c8;
      if (iVar7 != 0) {
        param_2[8] = uVar11;
        param_2[9] = uVar12;
      }
    }
    else {
      uVar8 = FUN_0026641e(iVar29,0x1b,iVar23,uVar3);
      FUN_0026641e(iVar29,2,iVar28,uVar6);
      FUN_002665da(iVar29,4,iVar14);
      FUN_0026641e(iVar29,1,0,uVar8);
    }
    local_9c = FUN_0026641e(iVar29,2,iVar28,uVar6);
    FUN_002665da(iVar29,4,iVar14);
    FUN_0026641e(iVar29,0x1b,iVar23,local_c8);
    FUN_0026641e(iVar29,1,0,uVar16);
    local_90 = local_9c;
    if (uVar21 != 0x71) {
      if (uVar21 == 0x73) {
        local_9c = local_9c + 1;
      }
      else {
        local_90 = FUN_002665da(iVar29,4,iVar14);
        FUN_0026641e(iVar29,0x1b,iVar23,local_c8);
        FUN_0026641e(iVar29,1,0,uVar16);
      }
    }
    uVar6 = *(undefined4 *)(iVar29 + 0x1c);
    if (uVar21 - 0x70 < 2) {
      FUN_0026641e(iVar29,2,iVar18,local_80);
    }
    FUN_002665da(iVar29,4,iVar10);
    FUN_0026641e(iVar29,0x1b,iVar15,uVar8);
    FUN_0026641e(iVar29,1,0,uVar16);
    FUN_002624c2(iVar29,uVar17);
    FUN_0026641e(iVar29,7,0,iVar23);
    FUN_0026641e(iVar29,7,0,iVar15);
    FUN_0026641e(iVar29,2,iVar14,uVar22);
    FUN_0026641e(iVar29,2,iVar10,uVar19);
    FUN_0026641e(iVar29,0x1b,iVar23,local_c8);
    FUN_0026641e(iVar29,0x1b,iVar15,uVar8);
    FUN_0025c384(iVar29,uVar16);
    FUN_002662da(iVar29,0x17,0,0,0,piVar5,0xfffffff1);
    FUN_002662da(iVar29,0x18,local_30,local_20,local_b8,local_c0,0xfffffff0);
    FUN_00266266(iVar29,0x19,local_9c,local_90,uVar6);
    if (local_b0 != (int *)0x0) {
      FUN_0025cbb8(param_1,local_b0,local_b8 + 1);
    }
    FUN_0025c384(iVar29,uVar3);
    puVar13 = puVar25;
    if ((char)*param_3 == '\x05') {
      do {
        puVar20 = puVar13;
        puVar13 = (undefined4 *)puVar20[0xf];
      } while (puVar13 != (undefined4 *)0x0);
      FUN_00268b90(param_1,0,*puVar20);
    }
    if (param_2[0xf] != 0) {
      FUN_00261092(iVar24);
    }
    param_2[0xf] = puVar25;
    if ((char)param_1[0x75] != '\x02') {
      return 0;
    }
    FUN_00268af4(param_1,*(undefined1 *)(param_2 + 1),iVar4,iVar26,0);
    return 0;
  }
  cVar2 = *(char *)(param_2 + 1);
  if (cVar2 == 'q') {
    puVar25[0x12] = param_2[0x12];
    puVar25[0x13] = param_2[0x13];
    local_a0 = param_1[0x7a];
    iVar4 = FUN_00276118(param_1,puVar25,&local_48);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (iVar4 != 0) {
      uVar3 = FUN_0027bfd8();
      return uVar3;
    }
    param_2[0xf] = 0;
    local_c4 = puVar25[2];
    param_2[2] = local_c4;
    param_2[3] = puVar25[3];
    if (local_c4 != 0) {
      local_c4 = FUN_002665da(iVar29,0x7a,local_c4);
    }
    local_98 = param_1[0x7a];
    local_b8 = FUN_00276118(param_1,param_2,&local_48);
    local_c8 = param_2[0xf];
    param_2[0xf] = puVar25;
    uVar30 = __adddf3(param_2[8],param_2[9],puVar25[8],puVar25[9]);
    *(undefined8 *)(param_2 + 8) = uVar30;
    if ((puVar25[0x12] != 0) && (iVar4 = FUN_00262644(puVar25[0x12],&local_4c), iVar4 != 0)) {
      uVar30 = __floatsidf(local_4c);
      iVar4 = __aeabi_dcmpgt(param_2[8],param_2[9],(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
      if (iVar4 != 0) {
        *(undefined8 *)(param_2 + 8) = uVar30;
      }
    }
    if (local_c4 != 0) {
      FUN_002624c2(iVar29,local_c4);
    }
  }
  else {
    if ((cVar2 == 'r') || (cVar2 == 'p')) {
      if (((char)local_48 == '\x01') && ((param_2[0x12] == 0 && (param_2[0x13] == 0)))) {
        local_c4 = local_44;
      }
      else {
        local_c4 = param_1[0x12];
        param_1[0x12] = local_c4 + 1;
        uVar3 = FUN_0026641e(iVar29,0x2a,local_c4,0);
        param_2[4] = uVar3;
        *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
      }
      local_24 = local_c4;
      local_a0 = param_1[0x7a];
      local_28[0] = '\x01';
      local_28[1] = 0;
      local_20 = 0;
      local_1c = 0;
      iVar4 = FUN_00276118(param_1,puVar25,local_28);
      if (iVar4 != 0) {
        uVar3 = FUN_0027bfd8();
        return uVar3;
      }
      param_2[0xf] = 0;
      local_28[0] = (*(char *)(param_2 + 1) == 'r') + '\x01';
      uVar3 = param_2[0x12];
      uVar16 = param_2[0x13];
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      local_98 = param_1[0x7a];
      local_b8 = FUN_00276118(param_1,param_2,local_28);
      FUN_00261102(iVar24,param_2[0xe]);
      local_c8 = param_2[0xf];
      param_2[0xe] = 0;
      param_2[0xf] = puVar25;
      if (*(char *)(param_2 + 1) == 'p') {
        uVar30 = __adddf3(param_2[8],param_2[9],puVar25[8],puVar25[9]);
        *(undefined8 *)(param_2 + 8) = uVar30;
      }
      FUN_002610aa(iVar24,param_2[0x12]);
      param_2[2] = 0;
      param_2[0x12] = uVar3;
      param_2[3] = 0;
      param_2[0x13] = uVar16;
      if ((local_48 & 0xff) == 1) goto LAB_0027befa;
      puVar25 = param_2;
      if ((local_48 & 0xff) == 5) {
        do {
          puVar13 = puVar25;
          puVar25 = (undefined4 *)puVar13[0xf];
        } while (puVar25 != (undefined4 *)0x0);
        FUN_00268b90(param_1,0,*puVar13);
      }
      uVar3 = FUN_00266020(iVar29);
      uVar16 = FUN_00266020(iVar29);
      FUN_00278c6c(param_1,param_2,uVar3);
      FUN_0026641e(iVar29,0x48,local_c4,uVar3);
      uVar17 = *(undefined4 *)(iVar29 + 0x1c);
      FUN_00278436(param_1,param_2,(undefined4 *)*param_2,local_c4,*(undefined4 *)*param_2,0,
                   0xffffffff,&local_48,uVar16,uVar3);
      FUN_0025c384(iVar29,uVar16);
      FUN_0026641e(iVar29,0x5f,local_c4,uVar17);
      FUN_0025c384(iVar29,uVar3);
    }
    else {
      local_c4 = param_1[0x12];
      param_1[0x12] = local_c4 + 2;
      uVar3 = FUN_0026641e(iVar29,0x2a,local_c4,0);
      param_2[4] = uVar3;
      *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
      local_28[0] = '\x01';
      local_a0 = param_1[0x7a];
      local_28[1] = 0;
      local_24 = local_c4;
      local_20 = iVar4;
      local_1c = iVar4;
      iVar4 = FUN_00276118(param_1,puVar25,local_28);
      if (iVar4 != 0) {
        uVar3 = FUN_0027bfd8();
        return uVar3;
      }
      uVar21 = local_c4 + 1;
      uVar3 = FUN_0026641e(iVar29,0x2a,uVar21,0);
      param_2[5] = uVar3;
      uVar3 = param_2[0x12];
      uVar16 = param_2[0x13];
      param_2[0xf] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      local_98 = param_1[0x7a];
      local_24 = uVar21;
      local_b8 = FUN_00276118(param_1,param_2,local_28);
      local_c8 = param_2[0xf];
      param_2[0xf] = puVar25;
      uVar17 = puVar25[8];
      uVar22 = puVar25[9];
      iVar4 = __aeabi_dcmpgt(param_2[8],param_2[9]);
      if (iVar4 != 0) {
        param_2[8] = uVar17;
        param_2[9] = uVar22;
      }
      FUN_002610aa(iVar24,param_2[0x12]);
      param_2[0x12] = uVar3;
      param_2[0x13] = uVar16;
      puVar25 = param_2;
      if ((char)local_48 == '\x05') {
        do {
          puVar13 = puVar25;
          puVar25 = (undefined4 *)puVar13[0xf];
        } while (puVar25 != (undefined4 *)0x0);
        FUN_00268b90(param_1,0,*puVar13);
      }
      uVar3 = FUN_00266020(iVar29);
      uVar16 = FUN_00266020(iVar29);
      FUN_00278c6c(param_1,param_2,uVar3);
      FUN_0026641e(iVar29,0x48,local_c4,uVar3);
      uVar17 = FUN_002627dc(param_1);
      uVar22 = FUN_0026641e(iVar29,0x3f,local_c4,uVar17);
      FUN_00266944(iVar29,0x33,uVar21,uVar16,uVar17,0);
      FUN_002627fe(param_1,uVar17);
      FUN_00278436(param_1,param_2,(undefined4 *)*param_2,local_c4,*(undefined4 *)*param_2,0,
                   0xffffffff,&local_48,uVar16,uVar3);
      FUN_0025c384(iVar29,uVar16);
      FUN_0026641e(iVar29,0x5f,local_c4,uVar22);
      FUN_0025c384(iVar29,uVar3);
      FUN_0026641e(iVar29,0x2d,uVar21,0);
    }
    FUN_0026641e(iVar29,0x2d,local_c4,0);
  }
LAB_0027befa:
  if ((char)param_1[0x75] == '\x02') {
    FUN_00268af4(param_1,*(char *)(param_2 + 1),local_a0,local_98,*(char *)(param_2 + 1) != 'q');
  }
  if ((int)((uint)*(ushort *)((int)param_2 + 6) << 0x1c) < 0) {
    iVar23 = *(int *)*param_2;
    iVar4 = FUN_0025f04c(iVar24,iVar23 * 5 + 0x10);
    if (iVar4 != 0) {
      local_a0 = 0;
      *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(*(int *)(*(int *)(iVar24 + 0x10) + 0xc) + 0x4d);
      local_c0._0_2_ = (undefined2)iVar23;
      *(undefined2 *)(iVar4 + 6) = local_c0._0_2_;
      piVar27 = (int *)(iVar4 + 0xc);
      for (; local_a0 < iVar23; local_a0 = local_a0 + 1) {
        iVar28 = FUN_0026d27c(param_1,param_2,local_a0);
        *piVar27 = iVar28;
        if (iVar28 == 0) {
          *piVar27 = *(int *)(iVar24 + 8);
        }
        piVar27 = piVar27 + 1;
      }
      for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[0xf]) {
        iVar28 = param_2[4];
        if (-1 < iVar28) {
          FUN_0025c3a6(iVar29,iVar28,iVar23);
          FUN_00263832(iVar29,iVar28,iVar4,0xfffffffa);
          iVar28 = param_2[5];
          param_2[4] = 0xffffffff;
          if (-1 < iVar28) {
            FUN_0025c3a6(iVar29,iVar28,iVar23);
            FUN_00263832(iVar29,iVar28,iVar4,0xfffffffa);
            param_2[5] = 0xffffffff;
          }
        }
      }
      FUN_0025fbda(iVar24,iVar4);
      uVar3 = FUN_0027bfd8();
      return uVar3;
    }
    local_b8 = 7;
  }
  param_3[2] = uStack_40;
  param_3[3] = local_3c;
  FUN_00261092(iVar24,local_c8);
  return local_b8;
}


