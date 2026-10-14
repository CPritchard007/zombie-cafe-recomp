/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00279b98 FUN_00279b98 */

void FUN_00279b98(int *param_1,short *param_2,int param_3,uint *param_4,uint param_5,ushort param_6,
                 uint param_7)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  int *piVar15;
  uint uVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  short *psVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  int *piVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int unaff_r7;
  int *piVar34;
  uint uVar35;
  int *piVar36;
  uint *puVar37;
  int *piVar38;
  bool bVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint *local_100;
  int *piStack_fc;
  uint local_f8;
  uint uStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  int iStack_e8;
  uint *puStack_e0;
  uint uStack_dc;
  undefined2 *local_d8;
  int *local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int *local_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  int *local_8c;
  uint local_88;
  int local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_6c;
  uint auStack_68 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_40;
  uint local_3c;
  int *local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_88 = (uint)param_6;
  uVar29 = param_1[2];
  local_90 = param_2;
  if (*param_2 < 0x41) {
    local_8c = (int *)(local_88 & 0x40);
    local_84 = 1;
    if ((param_6 & 0x40) == 0) {
      local_84 = (int)*param_2;
    }
    local_d8 = (undefined2 *)*param_1;
    local_98 = local_84 + -1;
    unaff_r7 = local_98 * 0x50 + 0x88;
    local_d4 = (int *)FUN_0025f04c(local_d8,local_98 * 0x50 + 0x2f4);
    uVar18 = (uint)*(byte *)((int)local_d8 + 0x36);
    if (uVar18 != 0) {
      FUN_0025fbda(local_d8,local_d4);
      goto LAB_00279c0e;
    }
  }
  else {
    FUN_00268e48(param_1,DAT_00279ef8 + 0x279bc4,0x40);
    uVar18 = uVar29;
LAB_00279c0e:
    param_3 = 0;
    local_d4 = (int *)0x0;
    FUN_0027b244();
  }
  local_d4[7] = local_84;
  *local_d4 = (int)param_1;
  local_d4[3] = (int)local_90;
  iVar6 = FUN_00266020(uVar29);
  piVar34 = (int *)((int)local_d4 + unaff_r7);
  *(undefined2 *)(local_d4 + 1) = (undefined2)local_88;
  local_d4[6] = iVar6;
  local_d4[8] = (int)piVar34;
  iVar6 = param_1[0x6f];
  local_d4[10] = param_1[0x6e];
  local_d4[0xb] = iVar6;
  piVar7 = (int *)(param_5 & -(uint)((*(uint *)((int)local_d8 + 0x18) & 0x80) == 0));
  piVar36 = piVar34 + 0x5a;
  memset(piVar36,uVar18,0x104);
  piVar34[7] = 8;
  piVar34[1] = (int)piVar36;
  piVar34[8] = (int)(piVar34 + 10);
  piVar34[2] = 0;
  piVar34[3] = 0;
  piVar34[4] = uVar18;
  *piVar34 = (int)param_1;
  *(undefined2 *)((int)piVar34 + 0x16) = (undefined2)local_88;
  piVar34[6] = uVar18;
  if ((param_1[0x57] == 0) && (uVar18 = *(uint *)(*param_1 + 0x18) & 0x40, uVar18 == 0)) {
    local_40 = DAT_00279efc + 0x279cb0;
    local_3c = uVar18;
    local_38 = param_1;
    FUN_0025c882(&local_40,param_3);
  }
  FUN_0026147a(piVar34,param_3,0x45);
  if (param_3 != 0) {
    if (local_84 != 0) {
      local_30 = 3;
      local_40 = DAT_00279f00 + 0x279cda;
      local_3c = DAT_00279f04 + 0x279ce0;
      FUN_0025c882(&local_40,param_3);
      if (local_30 == 0) goto LAB_00279cf8;
    }
    FUN_00278ac2(param_1,param_3,local_d4[6],8);
  }
LAB_00279cf8:
  psVar23 = local_90;
  for (iVar6 = 0; iVar6 < *local_90; iVar6 = iVar6 + 1) {
    iVar22 = piVar34[0x5a];
    piVar34[iVar22 + 0x5b] = *(int *)(psVar23 + 0x14);
    piVar34[0x5a] = iVar22 + 1;
    if ((*(int *)(psVar23 + 10) != 0) && ((*(byte *)(*(int *)(psVar23 + 10) + 0x22) & 0x10) != 0)) {
      uVar40 = __ashldi3(1,0,iVar6);
      piVar34[2] = (uint)uVar40 | piVar34[2];
      piVar34[3] = (uint)((ulonglong)uVar40 >> 0x20) | piVar34[3];
    }
    psVar23 = psVar23 + 0x20;
  }
  iVar6 = piVar34[6];
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    FUN_002790dc(local_90,piVar34,iVar6);
  }
  uVar18 = (uint)*(byte *)((int)local_d8 + 0x36);
  if (uVar18 != 0) {
    FUN_0027b228();
  }
  if ((piVar7 != (int *)0x0) && (*local_90 == 1)) {
    iVar22 = *(int *)(local_90 + 0x14);
    iVar33 = *(int *)(local_90 + 10);
    iVar6 = *piVar7;
    uVar19 = uVar18;
    for (; (int)uVar18 < iVar6; uVar18 = uVar18 + 1) {
      pcVar14 = *(char **)(piVar7[2] + uVar19);
      if (((*pcVar14 == -0x68) && (*(int *)(pcVar14 + 0x18) == iVar22)) &&
         (*(short *)(pcVar14 + 0x1c) < 0)) {
        iVar6 = FUN_0027b24a();
      }
      uVar19 = uVar19 + 0x14;
    }
    for (iVar6 = *(int *)(iVar33 + 0x10); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
      iVar25 = 0;
      if (*(char *)(iVar6 + 0x2c) != '\0') {
        for (; iVar25 < *(int *)(iVar6 + 0x24); iVar25 = iVar25 + 1) {
          iVar21 = FUN_0026d44c(piVar34,iVar22,*(undefined4 *)(*(int *)(iVar6 + 4) + iVar25 * 4),
                                *(int *)(iVar6 + 4),0xffffffff,0xffffffff,2,iVar6);
          if ((iVar21 == 0) &&
             ((iVar21 = FUN_0026d54e(param_1,piVar7,iVar22,iVar6,iVar25), iVar21 < 0 ||
              (*(char *)(*(int *)(iVar33 + 0xc) + *(int *)(*(int *)(iVar6 + 4) + iVar25 * 4) * 0x18
                        + 0x14) == '\0')))) break;
        }
        if (iVar25 == *(int *)(iVar6 + 0x24)) {
          FUN_0027b24a();
        }
      }
    }
  }
  local_100 = (uint *)(local_d4 + 0xe);
  piStack_fc = (int *)0x0;
  local_f8 = 0xffffffff;
  uStack_f4 = 0xffffffff;
  uStack_ac = 0xffffffff;
  puStack_e0 = local_100;
  for (iStack_a4 = 0; iStack_a4 < local_84; iStack_a4 = iStack_a4 + 1) {
    memset(auStack_68,0,0x28);
    uStack_50 = DAT_00279ef0;
    uStack_4c = DAT_00279ef4;
    piStack_f0 = (int *)0x0;
    uStack_ec = 0;
    iStack_a8 = 0;
    iStack_e8 = -1;
    uStack_7c = CONCAT31(uStack_7c._1_3_,iStack_a4 == 0);
    for (uStack_c8 = (uint)((int)piStack_fc < (int)local_98);
        (uVar18 = auStack_68[0], iStack_e8 < 0 && (-1 < (int)uStack_c8)); uStack_c8 = uStack_c8 - 1)
    {
      psVar23 = local_90 + (int)piStack_fc * 0x20 + 4;
      for (piVar30 = piStack_fc;
          ((int)piVar30 < local_84 &&
          ((bVar39 = (*(byte *)(psVar23 + 0xe) & 10) != 0, !bVar39 || (piVar30 == piStack_fc))));
          piVar30 = (int *)((int)piVar30 + 1)) {
        uVar40 = FUN_0025d3f8(piVar36,*(undefined4 *)(psVar23 + 0x10));
        uVar19 = (uint)((ulonglong)uVar40 >> 0x20);
        uVar18 = (uint)uVar40;
        if ((uVar19 & uStack_f4) == 0 && (uVar18 & local_f8) == 0) {
          if (piVar30 == piStack_fc) {
            piStack_fc = (int *)((int)piVar30 + 1);
          }
        }
        else {
          uVar41 = CONCAT44(uStack_f4,local_f8);
          if (uStack_c8 != 0) {
            uVar41 = uVar40;
          }
          piVar15 = (int *)(uStack_7c & 0xff);
          piVar38 = piVar15;
          if ((piVar15 != (int *)0x0) &&
             (piVar15 = (int *)(uint)(param_4 != (uint *)0x0), piVar38 = piVar7,
             piVar15 != (int *)0x0)) {
            piVar15 = (int *)*param_4;
          }
          iStack_a8 = iStack_a8 + (uint)(*(int *)(psVar23 + 0x1e) == 0);
          if ((int)((uint)*(byte *)(*(int *)(psVar23 + 6) + 0x22) << 0x1b) < 0) {
            FUN_0026e390(param_1,piVar34,psVar23);
          }
          else {
            FUN_0026d5b8(param_1,piVar34,psVar23,&local_40,uVar41,local_f8,uStack_f4,piVar15,piVar38
                         ,&local_40);
          }
          uVar5 = uStack_24;
          uVar4 = uStack_28;
          uVar9 = uStack_4c;
          uVar8 = uStack_50;
          if ((uStack_c8 != 0) && ((local_40 & DAT_0027a290) == 0)) {
            piStack_f0 = (int *)((uint)piStack_f0 | uVar18);
            uStack_ec = uStack_ec | uVar19;
          }
          if (((((uStack_1c & uStack_f4) == 0 && (uStack_20 & local_f8) == 0) &&
               ((((iStack_e8 < 0 || ((uVar18 & (uint)piStack_f0) != 0 || (uVar19 & uStack_ec) != 0))
                 || ((auStack_68[0] & DAT_0027a290) == 0)) || ((local_40 & DAT_0027a290) != 0)))) &&
              (((iStack_a8 == 0 || (*(int *)(psVar23 + 0x1e) == 0)) ||
               ((local_40 & DAT_0027a290) != 0)))) &&
             (((iStack_e8 < 0 ||
               (iVar6 = __aeabi_dcmplt(uStack_28,uStack_24,uStack_50,uStack_4c), iVar6 != 0)) ||
              ((iVar6 = __aeabi_dcmple(uVar4,uVar5,uVar8,uVar9), iVar6 != 0 &&
               (iVar6 = __aeabi_dcmplt(local_38,uStack_34,uStack_60,uStack_5c), iVar6 != 0)))))) {
            memcpy(auStack_68,&local_40,0x28);
            iStack_e8 = (int)piVar30;
          }
          if (bVar39) break;
        }
        psVar23 = psVar23 + 0x20;
      }
    }
    if ((param_4 != (uint *)0x0) && ((int)(auStack_68[0] << 7) < 0)) {
      *param_4 = 0;
    }
    if ((int)(auStack_68[0] << 1) < 0) {
      *(undefined1 *)(local_d4 + 2) = 2;
    }
    memcpy(puStack_e0,auStack_68,0x18);
    if ((auStack_68[0] & DAT_0027a294) == 0) {
      puStack_e0[8] = 0xffffffff;
    }
    else if ((local_8c == (int *)0x0) || ((int)(auStack_68[0] << 2) < 0)) {
      uVar19 = param_1[0x12];
      puStack_e0[8] = uVar19;
      param_1[0x12] = uVar19 + 1;
    }
    else {
      puStack_e0[8] = param_7;
    }
    uVar40 = FUN_0025d3f8(piVar36,*(undefined4 *)(local_90 + iStack_e8 * 0x20 + 0x14));
    uVar9 = uStack_5c;
    uVar8 = uStack_60;
    *(char *)(puStack_e0 + 0xd) = (char)iStack_e8;
    iVar6 = __aeabi_dcmpge(uStack_60,uStack_5c,DAT_0027a288,DAT_0027a28c);
    if (iVar6 != 0) {
      uVar41 = __muldf3(param_1[0x6e],param_1[0x6f],uVar8,uVar9);
      *(undefined8 *)(param_1 + 0x6e) = uVar41;
    }
    if ((*(undefined4 **)(local_90 + (iStack_e8 + 1) * 0x20 + 2) != (undefined4 *)0x0) &&
       ((auStack_68[0] & 0xf0000) == 0)) {
      FUN_00268e48(param_1,DAT_0027a298 + 0x27a11a,
                   **(undefined4 **)(local_90 + (iStack_e8 + 1) * 0x20 + 2));
      FUN_0027b228();
    }
    uStack_ac = uStack_ac & uVar18;
    local_f8 = local_f8 & ~(uint)uVar40;
    uStack_f4 = uStack_f4 & ~(uint)((ulonglong)uVar40 >> 0x20);
    puStack_e0 = puStack_e0 + 0x14;
  }
  if (param_1[0x11] != 0) {
    FUN_0027b228();
  }
  uVar18 = (uint)*(byte *)((int)local_d8 + 0x36);
  if (uVar18 != 0) {
    FUN_0027b228();
  }
  bVar39 = (uStack_ac & 0x4000000) != 0;
  if ((bVar39) && (param_4 != (uint *)0x0)) {
    *param_4 = uVar18;
  }
  if (((int)(local_88 << 0x1d) < 0) && (bVar39)) {
    *(undefined1 *)((int)local_d4 + 6) = 1;
    local_d4[0xe] = DAT_0027a29c & local_d4[0xe];
  }
  FUN_00275ec4(param_1,0xffffffff);
  iVar6 = DAT_0027a28c;
  local_d4[0xc] = DAT_0027a288;
  local_d4[0xd] = iVar6;
  uStack_d0 = 0xffffffff;
  uStack_cc = 0xffffffff;
  for (local_b0 = (int *)0x0; psVar23 = local_90, (int)local_b0 < local_84;
      local_b0 = (int *)((int)local_b0 + 1)) {
    uVar18 = (uint)(byte)local_100[0xd];
    puVar24 = *(undefined4 **)(local_90 + uVar18 * 0x20 + 10);
    local_100[7] = *(uint *)(local_90 + uVar18 * 0x20 + 0x14);
    uVar40 = __muldf3(local_d4[0xc],local_d4[0xd],local_100[2],local_100[3]);
    *(undefined8 *)(local_d4 + 0xc) = uVar40;
    uVar8 = FUN_0025d12c(local_d8,puVar24[0x11]);
    if (((*(byte *)((int)puVar24 + 0x22) & 2) == 0) && (puVar24[7] == 0)) {
      if ((int)(*local_100 << 4) < 0) {
        uVar9 = FUN_0025d364(local_d8,puVar24);
        FUN_002662da(uVar29,0x87,*(undefined4 *)(psVar23 + uVar18 * 0x20 + 0x14),0,0,uVar9,
                     0xfffffff6);
      }
      else if (((int)(*local_100 << 8) < 0) || ((int)(local_88 << 0x1b) < 0)) {
        FUN_00265f96(param_1,uVar8,puVar24[5],0,*puVar24);
      }
      else {
        FUN_002663cc(param_1,*(undefined4 *)(psVar23 + uVar18 * 0x20 + 0x14),uVar8,puVar24,
                     0x28 - (uint)(*(char *)((int)local_d4 + 6) == '\0'));
        if ((*(char *)((int)local_d4 + 6) == '\0') && ((int)puVar24[2] < 0x40)) {
          uVar16 = *(uint *)(psVar23 + uVar18 * 0x20 + 0x1e);
          iVar6 = 0;
          for (uVar19 = *(uint *)(psVar23 + uVar18 * 0x20 + 0x1c); uVar19 != 0 || uVar16 != 0;
              uVar19 = uVar19 >> 1 | uVar20) {
            uVar20 = uVar16 << 0x1f;
            uVar16 = uVar16 >> 1;
            iVar6 = iVar6 + 1;
          }
          FUN_00263832(uVar29,*(int *)(uVar29 + 0x1c) + -1,iVar6,0xfffffff2);
        }
      }
    }
    if ((int)(*local_100 << 2) < 0) {
      iVar6 = param_1[2];
      uStack_80 = FUN_002665e6(param_1);
      iVar22 = *(int *)(psVar23 + uVar18 * 0x20 + 10);
      puStack_e0 = (uint *)0x0;
      uStack_dc = 0;
      piVar7 = (int *)piVar34[8];
      local_f8 = 0;
      local_8c = piVar7 + piVar34[6] * 10;
      for (; piVar7 < local_8c; piVar7 = piVar7 + 10) {
        if (((piVar7[2] == *(int *)(psVar23 + uVar18 * 0x20 + 0x14)) && ((short)piVar7[4] == 2)) &&
           ((piVar7[7] & uStack_cc) == 0 && (piVar7[6] & uStack_d0) == 0)) {
          iVar25 = piVar7[3];
          bVar1 = *(byte *)(*(int *)(iVar22 + 0xc) + iVar25 * 0x18 + 0x16);
          iVar33 = FUN_0025cd42(*piVar7);
          if (iVar33 == 0x61) {
LAB_0027a32e:
            bVar39 = bVar1 == 0x61;
          }
          else {
            if (iVar33 == 0x62) {
              FUN_0027b258();
              goto LAB_0027a32e;
            }
            bVar39 = 0x62 < bVar1;
          }
          if (bVar39) {
            FUN_0027b258();
            uVar40 = __ashldi3(1,0,iVar25);
            uVar19 = (uint)((ulonglong)uVar40 >> 0x20);
            if ((uStack_dc & uVar19) == 0 && ((uint)puStack_e0 & (uint)uVar40) == 0) {
              puStack_e0 = (uint *)((uint)puStack_e0 | (uint)uVar40);
              local_f8 = local_f8 + 1;
              uStack_dc = uStack_dc | uVar19;
            }
          }
        }
      }
      local_100[1] = local_f8;
      uVar16 = *(uint *)(psVar23 + uVar18 * 0x20 + 0x1c);
      uVar35 = *(uint *)(psVar23 + uVar18 * 0x20 + 0x1e);
      iVar33 = *(int *)(iVar22 + 8);
      uVar20 = (~uStack_dc | 0x80000000) & uVar35;
      uVar19 = ~(uint)puStack_e0;
      iStack_b8 = iVar33;
      if (0x3f < iVar33) {
        iStack_b8 = 0x3f;
      }
      for (iVar25 = 0; iVar25 < iStack_b8; iVar25 = iVar25 + 1) {
        uVar10 = __lshrdi3(uVar16 & uVar19,uVar20,iVar25);
        local_f8 = local_f8 + (uVar10 & 1);
      }
      if ((int)uVar35 < 0) {
        local_f8 = local_f8 + iVar33 + -0x3f;
      }
      *local_100 = *local_100 | DAT_0027a734;
      piVar7 = (int *)FUN_0025f04c(*param_1,local_f8 * 9 + 0x30);
      if (piVar7 != (int *)0x0) {
        piVar36 = piVar7 + 0xc;
        local_100[4] = (uint)piVar7;
        piVar7[8] = (int)piVar36;
        piVar7[7] = (int)(piVar36 + local_f8 + local_f8);
        piVar7[1] = (int)(piVar36 + local_f8);
        iVar33 = DAT_0027a738;
        piVar7[9] = local_f8;
        *piVar7 = iVar33 + 0x27a41a;
        piVar7[3] = iVar22;
        puStack_e0 = (uint *)0x0;
        uStack_dc = 0;
        piVar36 = (int *)piVar34[8];
        piStack_f0 = (int *)0x0;
        iVar33 = DAT_0027a73c + 0x27a432;
        for (; piVar36 < local_8c; piVar36 = piVar36 + 10) {
          if (((piVar36[2] == *(int *)(psVar23 + uVar18 * 0x20 + 0x14)) && ((short)piVar36[4] == 2))
             && ((piVar36[7] & uStack_cc) == 0 && (piVar36[6] & uStack_d0) == 0)) {
            iVar26 = piVar36[3];
            iVar25 = *piVar36;
            bVar1 = *(byte *)(*(int *)(*(int *)(psVar23 + uVar18 * 0x20 + 10) + 0xc) + iVar26 * 0x18
                             + 0x16);
            iVar21 = FUN_0025cd42();
            if (iVar21 == 0x61) {
LAB_0027a476:
              bVar39 = bVar1 == 0x61;
            }
            else {
              if (iVar21 == 0x62) {
                FUN_0027b26c();
                goto LAB_0027a476;
              }
              bVar39 = 0x62 < bVar1;
            }
            if (bVar39) {
              FUN_0027b26c();
              uVar40 = __ashldi3(1,0,iVar26);
              uVar35 = (uint)((ulonglong)uVar40 >> 0x20);
              if ((uStack_dc & uVar35) == 0 && ((uint)puStack_e0 & (uint)uVar40) == 0) {
                uStack_dc = uStack_dc | uVar35;
                puStack_e0 = (uint *)((uint)puStack_e0 | (uint)uVar40);
                *(int *)(piVar7[1] + (int)piStack_f0 * 4) = iVar26;
                piVar30 = (int *)FUN_0026d3c4(param_1,*(undefined4 *)(iVar25 + 8),
                                              *(undefined4 *)(iVar25 + 0xc));
                iVar25 = iVar33;
                if (piVar30 != (int *)0x0) {
                  iVar25 = *piVar30;
                }
                *(int *)(piVar7[8] + (int)piStack_f0 * 4) = iVar25;
                piStack_f0 = (int *)((int)piStack_f0 + 1);
              }
            }
          }
        }
        iVar25 = DAT_0027a740 + 0x27a4f2;
        for (iVar33 = 0; iVar33 < iStack_b8; iVar33 = iVar33 + 1) {
          uVar35 = __lshrdi3(uVar16 & uVar19,uVar20,iVar33);
          if ((uVar35 & 1) != 0) {
            *(int *)(piVar7[1] + (int)piStack_f0 * 4) = iVar33;
            *(int *)(piVar7[8] + (int)piStack_f0 * 4) = iVar25;
            piStack_f0 = (int *)((int)piStack_f0 + 1);
          }
        }
        if (*(int *)(psVar23 + uVar18 * 0x20 + 0x1e) < 0) {
          iVar25 = (int)piStack_f0 << 2;
          iVar33 = DAT_0027a744 + 0x27a52e;
          for (iVar21 = 0x3f; iVar21 < *(int *)(iVar22 + 8); iVar21 = iVar21 + 1) {
            *(int *)(piVar7[1] + iVar25) = iVar21;
            *(int *)(piVar7[8] + iVar25) = iVar33;
            iVar25 = iVar25 + 4;
          }
        }
        uVar9 = FUN_0026e770(param_1,piVar7);
        FUN_002662da(iVar6,0x29,local_100[8],local_f8 + 1,0,uVar9,0xfffffff0);
        iVar22 = FUN_002665da(iVar6,0x48,local_100[7]);
        uVar9 = FUN_002627dc(param_1);
        FUN_002707d4(param_1,piVar7,local_100[7],uVar9,1);
        FUN_0026641e(iVar6,0x61,local_100[8],uVar9);
        FUN_0025c3b8(iVar6,0x10);
        FUN_0026641e(iVar6,0x5f,local_100[7],iVar22 + 1);
        FUN_0025c3b8(iVar6,3);
        FUN_002624c2(iVar6,iVar22);
        FUN_002627fe(param_1,uVar9);
        FUN_002624c2(iVar6,uStack_80);
      }
    }
    else if ((*local_100 & 0xf0000) != 0) {
      uVar19 = local_100[4];
      uVar9 = FUN_0026e770(param_1,uVar19);
      FUN_002662da(uVar29,0x27,local_100[8],*(undefined4 *)(uVar19 + 0x28),uVar8,uVar9,0xfffffff0);
    }
    FUN_00275ec4(param_1,uVar8);
    uVar40 = FUN_0025d3f8(piVar34[1],*(undefined4 *)(psVar23 + uVar18 * 0x20 + 0x14));
    uStack_d0 = uStack_d0 & ~(uint)uVar40;
    uStack_cc = uStack_cc & ~(uint)((ulonglong)uVar40 >> 0x20);
    local_100 = local_100 + 0x14;
  }
  local_d4[4] = *(int *)(uVar29 + 0x1c);
  uVar29 = (uint)*(byte *)((int)local_d8 + 0x36);
  if (uVar29 != 0) {
    FUN_0027b228();
  }
  uStack_74 = local_88 & 0x20;
  FUN_0027b21a();
  puVar37 = (uint *)(local_d4 + uVar29 * 0x14 + 0xe);
  if ((char)param_1[0x75] == '\x02') {
    FUN_0026aa30(param_1,local_90,puVar37,uVar29,(char)puVar37[0xd],local_88);
  }
  piVar7 = (int *)*local_d4;
  iVar6 = local_d4[8];
  iVar22 = piVar7[2];
  piStack_f0 = (int *)(local_d4[3] + (uint)(byte)puVar37[0xd] * 0x40 + 8);
  piStack_fc = (int *)*puVar37;
  uVar18 = *(uint *)((int)piStack_f0 + 0x20);
  local_8c = (int *)((uint)piStack_fc & 0x800000);
  if (local_8c != (int *)0x0) {
    local_8c = (int *)(uint)(uStack_74 == 0);
  }
  local_d8 = (undefined2 *)FUN_00266020(iVar22);
  puVar37[10] = (uint)local_d8;
  puVar37[9] = (uint)local_d8;
  uVar19 = FUN_00266020(iVar22);
  puVar37[0xb] = uVar19;
  if (((char)puVar37[0xd] != '\0') && ((int)((uint)*(byte *)((int)piStack_f0 + 0x1c) << 0x1c) < 0))
  {
    iVar33 = piVar7[0x13];
    piVar7[0x13] = iVar33 + 1U;
    puVar37[6] = iVar33 + 1U;
    FUN_0026641e(iVar22,7,0);
  }
  uVar16 = *puVar37;
  if ((uVar16 & 0x8000000) == 0) {
    uVar20 = 0;
  }
  else {
    puVar27 = (uint *)puVar37[4];
    piStack_fc = (int *)*puVar27;
    piVar36 = (int *)puVar27[4];
    uVar16 = puVar27[1];
    piVar7[0x17] = piVar7[0x17] + 1;
    iVar33 = FUN_00262834(piVar7,(int)piStack_fc + 2U);
    for (iVar25 = 1; iVar25 <= (int)piStack_fc; iVar25 = iVar25 + 1) {
      piStack_f0 = (int *)0x0;
      piVar34 = piVar36;
      do {
        if (*piVar34 == iVar25) {
          FUN_002786f4(piVar7,*(undefined4 *)
                               (*(int *)(*(int *)(uVar16 + (int)piStack_f0 * 0xc + 8) * 0x28 +
                                        *(int *)(iVar6 + 0x20)) + 0xc),iVar33 + 1 + iVar25);
          break;
        }
        piVar34 = piVar34 + 2;
        piStack_f0 = (int *)((int)piStack_f0 + 1);
      } while ((int)piStack_f0 < (int)piStack_fc);
      if (piStack_f0 == piStack_fc) break;
    }
    FUN_0026641e(iVar22,7,puVar27[5],iVar33);
    FUN_0026641e(iVar22,7,iVar25 + -1,iVar33 + 1);
    if (puVar27[7] == 0) {
      iVar25 = 2;
    }
    else {
      iVar25 = 0xb;
    }
    FUN_002662da(iVar22,0x88,uVar18,local_d8,iVar33,puVar27[6],-iVar25);
    puVar27[7] = 0;
    for (local_d8 = (undefined2 *)0x0; (int)local_d8 < (int)piStack_fc;
        local_d8 = (undefined2 *)((int)local_d8 + 1)) {
      if ((char)piVar36[1] != '\0') {
        FUN_0025d578(puVar37,*(int *)(iVar6 + 0x20) + *(int *)(uVar16 + 8) * 0x28);
      }
      piVar36 = piVar36 + 2;
      uVar16 = uVar16 + 0xc;
    }
    *(undefined1 *)((int)puVar37 + 0x35) = 0x8a;
    puVar37[0xe] = uVar18;
    uVar16 = *(uint *)(iVar22 + 0x1c);
    puVar37[0xf] = uVar16;
    FUN_0025cbb8(piVar7,iVar33,(int)piStack_fc + 2U);
    FUN_002644ac(piVar7);
    FUN_0027b12e();
    uVar20 = uVar18;
  }
  uVar35 = uVar16 & 0x1000;
  if (uVar35 != 0) {
    uVar35 = FUN_002627dc(piVar7);
    uVar8 = FUN_0026d44c(iVar6,uVar18,0xffffffff,3,0xffffffff,0xffffffff,3,uVar20);
    uVar8 = FUN_00278240(piVar7,uVar8,puVar37,uVar35);
    local_d8 = (undefined2 *)puVar37[10];
    FUN_0026641e(iVar22,0x15,uVar8,local_d8);
    FUN_00266266(iVar22,0x36,uVar18,local_d8,uVar8);
    uVar40 = FUN_00262718(piVar7,uVar18,0xffffffff,uVar8);
    uVar16 = (int)puVar37 + 0x35;
    FUN_0027b12c((int)uVar40,(int)((ulonglong)uVar40 >> 0x20),0x95);
  }
  iVar25 = DAT_0027b290;
  iVar33 = ((int)piStack_fc << 6) >> 0x1f;
  uVar20 = -iVar33;
  if ((int)(uVar16 << 0x12) < 0) {
    puVar11 = (undefined4 *)
              FUN_0026d44c(iVar6,uVar18,0xffffffff,0x24,0xffffffff,0xffffffff,0x24,uVar35);
    puVar12 = (undefined4 *)
              FUN_0026d44c(iVar6,uVar18,0xffffffff,0x18,0xffffffff,0xffffffff,0x18,uVar35);
    puVar24 = puVar11;
    if (uVar20 == 0) {
      puVar24 = puVar12;
      puVar12 = puVar11;
    }
    if (puVar12 == (undefined4 *)0x0) {
      uVar8 = 0x48;
      if (uVar20 != 0) {
        uVar8 = 0x43;
      }
      FUN_0026641e(iVar22,uVar8,uVar18,local_d8);
    }
    else {
      memcpy(&local_40,(void *)(DAT_0027abf8 + 0x27a97d),4);
      pbVar13 = (byte *)*puVar12;
      uVar8 = FUN_002786c2(piVar7,*(undefined4 *)(pbVar13 + 0xc),&uStack_6c);
      FUN_00266266(iVar22,*(undefined1 *)((int)&local_90 + *pbVar13 + 3),uVar18,local_d8,uVar8);
      FUN_0025cb14(piVar7,uVar8,1);
      FUN_002627fe(piVar7,uStack_6c);
      FUN_0025d578(puVar37,puVar12);
    }
    if (puVar24 == (undefined4 *)0x0) {
      piStack_fc = (int *)0x95;
      piStack_f0 = (int *)0x0;
    }
    else {
      pcVar14 = (char *)*puVar24;
      piStack_f0 = (int *)(piVar7[0x13] + 1);
      piVar7[0x13] = (int)piStack_f0;
      FUN_002786f4(piVar7,*(undefined4 *)(pcVar14 + 0xc),piStack_f0);
      cVar2 = *pcVar14;
      if ((cVar2 == 'M') || (cVar2 == 'O')) {
        piStack_fc = (int *)0x50;
        if (uVar20 != 0) {
          piStack_fc = (int *)0x4e;
        }
      }
      else {
        piStack_fc = (int *)0x4d;
        if (uVar20 != 0) {
          piStack_fc = (int *)0x4f;
        }
      }
      FUN_0025d578(puVar37,puVar24);
    }
    uVar29 = *(uint *)(iVar22 + 0x1c);
    uVar17 = 0x5f;
    if (uVar20 != 0) {
      uVar17 = 0x5c;
    }
    *(undefined1 *)((int)puVar37 + 0x35) = uVar17;
    puVar37[0xe] = uVar18;
    puVar37[0xf] = uVar29;
    if ((puVar24 == (undefined4 *)0x0) && (puVar12 == (undefined4 *)0x0)) {
      *(undefined1 *)((int)puVar37 + 0x36) = 1;
    }
    if (piStack_fc == (int *)0x95) {
      FUN_0027b12e();
      return;
    }
    uVar8 = FUN_002627dc(piVar7);
    FUN_0026641e(iVar22,0x41,uVar18,uVar8);
    FUN_00262718(piVar7,uVar18,0xffffffff,uVar8);
    FUN_00266266(iVar22,piStack_fc,piStack_f0,local_d8,uVar8);
    FUN_0025c3b8(iVar22,0x6b);
    FUN_0027b12e();
    return;
  }
  if ((uVar16 & 0x30000) != 0) {
    uVar35 = puVar37[1];
    uVar29 = puVar37[4];
    uVar10 = puVar37[8];
    if (uVar35 == *(uint *)(uVar29 + 0x24)) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(uVar35 * 4 + *(int *)(uVar29 + 4));
    }
    uStack_ac = local_88 & 1;
    if (((uStack_ac != 0) && (uStack_ac = uVar16 & 0x1000000, uStack_ac != 0)) &&
       (uStack_ac = 1, (int)*(uint *)(uVar29 + 0x24) <= (int)uVar35)) {
      uStack_ac = 0;
    }
    if ((uVar16 & 0x100000) == 0) {
      piStack_fc = (int *)0x0;
      uVar16 = uStack_ac;
    }
    else {
      piStack_fc = (int *)FUN_0026d44c(iVar6,uVar18,uVar8,0x18,0xffffffff,0xffffffff,0x18,uVar29);
      uVar16 = 1;
    }
    piVar36 = piStack_fc;
    piStack_f0 = (int *)(*puVar37 & 0x200000);
    if (piStack_f0 != (int *)0x0) {
      piStack_f0 = (int *)FUN_0026d44c(iVar6,uVar18,uVar8,0x24,0xffffffff,0xffffffff,0x24,uVar29);
      uVar16 = 1;
    }
    iVar21 = piVar7[2];
    uStack_80 = puVar37[1];
    uVar32 = puVar37[4];
    uStack_78 = puVar37[7];
    local_bc = piVar7[0x13] + 1;
    uStack_7c = uVar16 + uStack_80;
    piVar7[0x13] = piVar7[0x13] + uStack_7c;
    iVar25 = *piVar7;
    uVar8 = FUN_0025ef9c(iVar21,uVar32);
    iVar25 = FUN_0025f25a(iVar25,uVar8);
    if (iVar25 == 0) {
      *(undefined1 *)(*piVar7 + 0x36) = 1;
    }
    local_c0 = 0;
    while ((local_c0 < (int)uStack_80 &&
           (piVar34 = (int *)FUN_0026d44c(iVar6,uStack_78,
                                          *(undefined4 *)(local_c0 * 4 + *(int *)(uVar32 + 4)),
                                          *puVar37,0xffffffff,0xffffffff,*puVar37,uVar32),
           piVar34 != (int *)0x0))) {
      iVar31 = local_bc + local_c0;
      iVar26 = FUN_00278240(piVar7,piVar34,puVar37,iVar31);
      if (iVar26 != iVar31) {
        if (uStack_7c == 1) {
          FUN_002627fe(piVar7,local_bc);
          local_bc = iVar26;
        }
        else {
          FUN_0026641e(iVar21,0xf,iVar26,iVar31);
        }
      }
      if ((*(ushort *)(piVar34 + 4) & 0x81) == 0) {
        uVar8 = *(undefined4 *)(*piVar34 + 0xc);
        FUN_002664d8(iVar21,uVar8,local_bc + local_c0,puVar37[9]);
        if (iVar25 != 0) {
          iVar26 = FUN_0025cd0e(uVar8,*(undefined1 *)(iVar25 + local_c0));
          if (iVar26 == 0x62) {
            *(undefined1 *)(iVar25 + local_c0) = 0x62;
          }
          iVar26 = FUN_0025ca94(uVar8,*(undefined1 *)(iVar25 + local_c0));
          if (iVar26 != 0) {
            *(undefined1 *)(iVar25 + local_c0) = 0x62;
          }
        }
      }
      local_c0 = local_c0 + 1;
    }
    iVar6 = FUN_0025f25a(*piVar7,iVar25);
    uVar16 = puVar37[10];
    if ((((int)*(uint *)(uVar29 + 0x24) <= (int)uVar35) ||
        (uVar20 != (*(char *)(*(int *)(uVar29 + 0x1c) + uVar35) == '\0'))) &&
       ((uVar20 == 0 || (*(uint *)(uVar29 + 0x24) != uVar35)))) {
      piStack_fc = piStack_f0;
      piStack_f0 = piVar36;
    }
    local_b0 = (int *)0x1;
    if (piStack_fc != (int *)0x0) {
      local_b0 = (int *)(uint)((*(ushort *)(piStack_fc + 4) & 0x28) != 0);
    }
    uStack_94 = 1;
    if (piStack_f0 != (int *)0x0) {
      uStack_94 = (uint)((*(ushort *)(piStack_f0 + 4) & 0x28) != 0);
    }
    local_98 = (uint)(piStack_fc != (int *)0x0) | ((int)uVar35 >> 0x1f) - uVar35 >> 0x1f;
    if (piStack_fc == (int *)0x0) {
      uVar29 = uVar35;
      if (uStack_ac != 0) {
        FUN_0026641e(iVar22,10,0,local_bc + uVar35);
        local_98 = 1;
        uVar29 = uVar35 + 1;
        local_b0 = piStack_fc;
      }
    }
    else {
      uVar8 = *(undefined4 *)(*piStack_fc + 0xc);
      FUN_002786f4(piVar7,uVar8,local_bc + uVar35);
      FUN_002664d8(iVar22,uVar8,local_bc + uVar35,uVar16);
      if (iVar25 != 0) {
        puVar28 = (undefined1 *)(iVar25 + uVar35);
        iVar21 = FUN_0025cd0e(uVar8,*puVar28);
        if (iVar21 == 0x62) {
          *puVar28 = 0x62;
        }
        iVar21 = FUN_0025ca94(uVar8,*puVar28);
        if (iVar21 != 0) {
          *puVar28 = 0x62;
        }
      }
      uVar29 = uVar35 + 1;
    }
    FUN_0026650c(piVar7,local_bc,uVar29,iVar25);
    FUN_00266944(iVar22,*(undefined1 *)
                         (DAT_0027af9c + 0x27ad51 + uVar20 + local_98 * 4 + (int)local_b0 * 2),
                 uVar10,uVar16,local_bc,uVar29);
    uVar29 = uVar35;
    if (piStack_f0 != (int *)0x0) {
      uVar8 = *(undefined4 *)(*piStack_f0 + 0xc);
      iVar21 = local_bc + uVar35;
      FUN_0025cb14(piVar7,iVar21,1);
      FUN_002786f4(piVar7,uVar8,iVar21);
      FUN_002664d8(iVar22,uVar8,iVar21,uVar16);
      if (iVar6 != 0) {
        puVar28 = (undefined1 *)(iVar6 + uVar35);
        iVar21 = FUN_0025cd0e(uVar8,*puVar28);
        if (iVar21 == 0x62) {
          *puVar28 = 0x62;
        }
        iVar21 = FUN_0025ca94(uVar8,*puVar28);
        if (iVar21 != 0) {
          *puVar28 = 0x62;
        }
      }
      uVar29 = uVar35 + 1;
      FUN_0026650c(piVar7,local_bc,uVar29,iVar6);
    }
    FUN_0025fbda(*piVar7,iVar25);
    FUN_0025fbda(*piVar7,iVar6);
    puVar37[0xf] = *(uint *)(iVar22 + 0x1c);
    cVar2 = *(char *)(DAT_0027afa0 + 0x27ad77 +
                     (uVar20 + 1) * (uint)(uVar35 != 0 || piStack_f0 != (int *)0x0));
    if (cVar2 != -0x6b) {
      FUN_00266944(iVar22,cVar2,uVar10,uVar16,local_bc,uVar29);
      FUN_0025c3b8(iVar22,uStack_94 + iVar33 != 0);
    }
    uVar8 = FUN_002627dc(piVar7);
    if ((*puVar37 & 0x300000) != 0) {
      FUN_00266266(iVar22,0x1d,uVar10,uVar35,uVar8);
      FUN_0026641e(iVar22,0x49,uVar8,uVar19);
    }
    FUN_002627fe(piVar7,uVar8);
    FUN_0025d578(puVar37,piStack_fc);
    FUN_0025d578(puVar37,piStack_f0);
    if (local_8c == (int *)0x0) {
      uVar8 = FUN_002627dc(piVar7);
      FUN_0026641e(iVar22,99,uVar10,uVar8);
      FUN_00262718(piVar7,uVar18,0xffffffff,uVar8);
      FUN_0026641e(iVar22,0x32,uVar18,uVar8);
    }
    if ((*puVar37 & 0x4000000) == 0) {
      uVar17 = 0x5c;
      if (uVar20 == 0) {
        uVar17 = 0x5f;
      }
    }
    else {
      uVar17 = 0x95;
    }
    *(undefined1 *)((int)puVar37 + 0x35) = uVar17;
    puVar37[0xe] = uVar10;
    FUN_0027b12e();
    return;
  }
  if ((uVar16 & 0x10000000) == 0) {
    *(undefined1 *)((int)puVar37 + 0x35) = *(undefined1 *)(DAT_0027b290 + uVar20 + 0x27b110);
    puVar37[0xe] = uVar18;
    iVar33 = FUN_0026641e(iVar22,*(undefined1 *)(iVar25 + 0x27b112 + uVar20),uVar18,local_d8);
    puVar37[0xf] = iVar33 + 1;
    *(undefined1 *)((int)puVar37 + 0x36) = 1;
  }
  else {
    uVar35 = piVar7[0x12];
    piVar7[0x12] = uVar35 + 1;
    uVar16 = piVar7[0x13] + 1;
    piVar7[0x13] = uVar16;
    uVar8 = FUN_00266020(iVar22);
    uVar20 = puVar37[4];
    iVar33 = *(int *)(uVar20 + 0xc);
    *(undefined1 *)((int)puVar37 + 0x35) = 3;
    puVar37[0xe] = uVar16;
    if (local_d4[7] < 2) {
      local_d8 = (undefined2 *)local_d4[3];
    }
    else {
      iVar25 = local_d4[7] - uVar29;
      iVar21 = iVar25 + -1;
      local_d8 = (undefined2 *)FUN_0025ee10(*piVar7,iVar21 * 0x40 + 0x48);
      if (local_d8 == (undefined2 *)0x0) goto LAB_0027b20e;
      uVar3 = (undefined2)iVar25;
      local_d8[1] = uVar3;
      *local_d8 = uVar3;
      memcpy(local_d8 + 4,piStack_f0,0x40);
      iVar25 = local_d4[3];
      puVar27 = puVar37;
      for (iVar26 = 1; iVar26 <= iVar21; iVar26 = iVar26 + 1) {
        memcpy(local_d8 + iVar26 * 0x20 + 4,(void *)(iVar25 + (uint)(byte)puVar27[0x21] * 0x40 + 8),
               0x40);
        puVar27 = puVar27 + 0x14;
      }
    }
    uVar10 = local_88 & 8;
    if (uVar10 == 0) {
      local_b0 = (int *)(piVar7[0x13] + 1);
      uStack_c8 = piVar7[0x13] + 2;
      piVar7[0x13] = uStack_c8;
      FUN_0026641e(iVar22,10,0,local_b0);
    }
    else {
      uStack_c8 = 0;
      local_b0 = (int *)0x0;
    }
    uStack_80 = FUN_0026641e(iVar22,7,0,uVar16);
    iVar25 = 0;
    if (1 < *(int *)(iVar6 + 0x18)) {
      iVar25 = 0;
      for (iVar21 = 0; iVar21 < *(int *)(iVar6 + 0x18); iVar21 = iVar21 + 1) {
        piVar36 = (int *)(*(int *)(iVar6 + 0x20) + iVar21 * 0x28);
        if ((((*(ushort *)(*piVar36 + 2) & 1) == 0) &&
            ((*(byte *)((int)piVar36 + 0x12) & 0x12) == 0)) &&
           ((*(ushort *)(piVar36 + 4) & 0xfff) != 0)) {
          uVar9 = FUN_002606fc(*piVar7,*piVar36);
          iVar25 = FUN_00262684(*piVar7,iVar25,uVar9);
        }
      }
      if (iVar25 != 0) {
        iVar25 = FUN_00269118(piVar7,0x45,0,iVar25,0);
      }
    }
    bVar39 = false;
    piStack_fc = (int *)0x0;
    for (uVar32 = 0; (int)uVar32 < *(int *)(iVar33 + 0x18); uVar32 = uVar32 + 1) {
      piVar36 = (int *)(*(int *)(iVar33 + 0x20) + uVar32 * 0x28);
      if ((piVar36[2] == uVar18) || ((short)piVar36[4] == 0x200)) {
        iVar21 = *piVar36;
        if (iVar25 != 0) {
          *(int *)(iVar25 + 8) = *piVar36;
          iVar21 = iVar25;
        }
        iVar21 = FUN_00279b98(piVar7,local_d8,iVar21,0,0,0xf0,uVar35);
        if (iVar21 != 0) {
          if ((char)piVar7[0x75] == '\x02') {
            FUN_0026aa30(piVar7,local_d8,iVar21 + 0x38,uVar29,(char)puVar37[0xd],0);
          }
          if (uVar10 == 0) {
            local_8c = (int *)uVar32;
            if (uVar32 == *(int *)(iVar33 + 0x18) - 1U) {
              local_8c = (int *)0xffffffff;
            }
            uVar9 = FUN_0027074a(piVar7,*(undefined4 *)((int)piStack_f0 + 0xc),0xffffffff,uVar18,
                                 uStack_c8,0);
            FUN_00266944(iVar22,0x72,local_b0,*(int *)(iVar22 + 0x1c) + 2,uVar9,local_8c);
          }
          FUN_0026641e(iVar22,2,uVar16,uVar8);
          if (*(char *)(iVar21 + 7) != '\0') {
            bVar39 = true;
          }
          piVar36 = (int *)(*(uint *)(iVar21 + 0x38) & 0xf0000);
          if (piVar36 != (int *)0x0) {
            if ((*(uint *)(iVar21 + 0x38) & 0x20000000) == 0) {
              piVar36 = *(int **)(iVar21 + 0x48);
              if ((uVar32 != 0) && (piVar36 != piStack_fc)) {
                piVar36 = (int *)0;
              }
            }
            else {
              piStack_fc = (int *)0x0;
              piVar36 = piStack_fc;
            }
          }
          piStack_fc = piVar36;
          FUN_0026663a(iVar21);
        }
      }
    }
    puVar37[0x10] = (uint)piStack_fc;
    puVar37[8] = uVar35;
    if (iVar25 != 0) {
      *(undefined4 *)(iVar25 + 8) = 0;
      FUN_002610aa(*piVar7,iVar25);
    }
    FUN_0025c394(iVar22,uStack_80,*(undefined4 *)(iVar22 + 0x1c));
    FUN_0026641e(iVar22,1,0,puVar37[9]);
    FUN_0025c384(iVar22,uVar8);
    if (1 < local_d4[7]) {
      FUN_0025fbda(*piVar7,local_d8);
    }
    if (!bVar39) {
      FUN_0025d578(puVar37,uVar20);
      FUN_0027b12e();
      return;
    }
  }
  uVar40 = FUN_0025d3f8(*(undefined4 *)(iVar6 + 4),uVar18);
  uVar18 = ~(uint)((ulonglong)uVar40 >> 0x20);
  piVar36 = *(int **)(iVar6 + 0x20);
  for (local_f8 = *(int *)(iVar6 + 0x18); 0 < (int)local_f8; local_f8 = local_f8 + -1) {
    if ((*(byte *)((int)piVar36 + 0x12) & 6) == 0) {
      if ((piVar36[9] & uVar18) == 0 && (piVar36[8] & ~(uint)uVar40) == 0) {
        if ((puVar37[6] == 0) || ((int)((uint)*(ushort *)(*piVar36 + 2) << 0x1f) < 0)) {
          FUN_00278ac2(piVar7,*piVar36,uVar19,8);
          *(byte *)((int)piVar36 + 0x12) = *(byte *)((int)piVar36 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)local_d4 + 7) = 1;
      }
    }
    piVar36 = piVar36 + 10;
  }
  if (puVar37[6] != 0) {
    puVar37[0xc] = *(uint *)(iVar22 + 0x1c);
    FUN_0026641e(iVar22,7,1);
    FUN_0025cb7c(piVar7);
    puVar24 = *(undefined4 **)(iVar6 + 0x20);
    for (local_100 = (uint *)0x0; (int)local_100 < *(int *)(iVar6 + 0x18);
        local_100 = (uint *)((int)local_100 + 1)) {
      if (((*(byte *)((int)puVar24 + 0x12) & 6) == 0) &&
         ((puVar24[9] & uVar18) == 0 && (puVar24[8] & ~(uint)uVar40) == 0)) {
        FUN_00278ac2(piVar7,*puVar24,uVar19,8);
        *(byte *)((int)puVar24 + 0x12) = *(byte *)((int)puVar24 + 0x12) | 4;
      }
      puVar24 = puVar24 + 10;
    }
  }
  FUN_002627fe(piVar7,0);
LAB_0027b20e:
  local_d4[5] = puVar37[0xb];
  if ((int)(uVar29 + 1) < local_84) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


