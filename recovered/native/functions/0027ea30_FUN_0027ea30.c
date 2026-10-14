/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027ea30 FUN_0027ea30 */

/* WARNING: Removing unreachable block (ram,0x0027f5ce) */

void FUN_0027ea30(int param_1)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t sVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  size_t sVar12;
  int *piVar13;
  undefined4 extraout_r1;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  void *pvVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ushort *puVar27;
  size_t *psVar28;
  int iVar29;
  int *piVar30;
  byte *pbVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  bool bVar41;
  uint uStack_140;
  uint uStack_13c;
  int iStack_138;
  uint uStack_134;
  undefined4 *puStack_130;
  uint uStack_12c;
  size_t *psStack_128;
  int *piStack_124;
  int *piStack_120;
  uint uStack_11c;
  undefined1 *puStack_118;
  uint uStack_114;
  undefined4 *puStack_10c;
  int iStack_108;
  uint uStack_104;
  uint uStack_fc;
  uint uStack_ec;
  ushort uStack_be;
  int iStack_bc;
  int iStack_b8;
  byte *pbStack_b4;
  byte *pbStack_b0;
  int aiStack_ac [13];
  uint auStack_78 [5];
  size_t asStack_64 [5];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_2c [4];
  byte abStack_28 [12];
  int local_1c;
  
  piVar30 = *(int **)(DAT_0027ed70 + 0x27ea3c);
  local_1c = *piVar30;
  iVar5 = __udivsi3(*(int *)(*(int *)(param_1 + 4) + 0x24) << 1,3);
  while( true ) {
    pbVar31 = (byte *)(int)*(short *)(param_1 + 0x5e);
    iVar39 = *(int *)((int)(pbVar31 + 0x22) * 4 + param_1);
    if (pbVar31 != (byte *)0x0) break;
    if (*(char *)(iVar39 + 1) == '\0') {
      FUN_0027f5f4();
    }
    iVar32 = *(int *)(iVar39 + 0x34);
    pbStack_b4 = pbVar31;
    pbStack_b0 = pbVar31;
    iStack_b8 = FUN_002733c4(*(undefined4 *)(iVar39 + 0x44));
    if (iStack_b8 == 0) {
      iStack_b8 = FUN_0027daa4(iVar32,&pbStack_b4,&pbStack_b0,*(undefined4 *)(iVar39 + 0x48),0);
      if (iStack_b8 == 0) {
        FUN_0027e092(iVar39,pbStack_b4,&iStack_b8);
      }
      if (*(char *)(iVar32 + 0x11) != '\0') {
        FUN_0027df1c(iVar32,pbStack_b0,5,*(undefined4 *)(iVar39 + 0x48),&iStack_b8);
      }
    }
    if (iStack_b8 == 0) {
      memcpy(pbStack_b4 + 0x14,(void *)(iVar39 + 0x14),(uint)*(byte *)(iVar39 + 1) << 1);
      memcpy(pbStack_b4 + 0x20,(void *)(iVar39 + 0x20),(uint)*(byte *)(iVar39 + 1) << 2);
      pbStack_b4[1] = *(byte *)(iVar39 + 1);
      FUN_0026b790(iVar39,**(byte **)(pbStack_b4 + 0x38) & 0xf7);
      FUN_0025ba48(*(int *)(iVar39 + 0x38) + *(byte *)(iVar39 + 5) + 8,pbStack_b0);
      *(byte **)(param_1 + 0x8c) = pbStack_b4;
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      FUN_00274a30();
      if (iStack_b8 != 0) {
        FUN_0027f5f4();
      }
    }
    *(undefined2 *)(param_1 + 0x5e) = 1;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
  }
  if ((*(char *)(iVar39 + 1) == '\0') && ((int)(uint)*(ushort *)(iVar39 + 0xe) <= iVar5)) {
    FUN_0027f5f4();
  }
  iVar32 = *(int *)((int)(pbVar31 + 0x21) * 4 + param_1);
  uVar19 = (uint)*(ushort *)((int)(pbVar31 + 0x2f) * 2 + param_1);
  iVar5 = FUN_002733c4(*(undefined4 *)(iVar32 + 0x44));
  if (iVar5 != 0) {
    FUN_0027f5d8();
  }
  if ((((*(char *)(iVar39 + 4) != '\0') && (*(char *)(iVar39 + 1) == '\x01')) &&
      (*(short *)(iVar39 + 0x10) == *(short *)(iVar39 + 0x14))) &&
     ((*(int *)(iVar32 + 0x48) != 1 && (*(ushort *)(iVar32 + 0x10) == uVar19)))) {
    iVar40 = *(int *)(iVar39 + 0x34);
    if (*(short *)(iVar39 + 0x10) == 0) {
      iVar5 = FUN_0026b4e4(DAT_0027ed74);
      FUN_0027f5d8();
    }
    iStack_b8 = FUN_0027daa4(iVar40,&iStack_bc,&pbStack_b4,iVar5,iVar5);
    if (iStack_b8 == 0) {
      pbStack_b0 = *(byte **)(iVar39 + 0x20);
      uStack_be = FUN_00260b9e(iVar39);
      FUN_0026b790(iStack_bc,0xd);
      FUN_0025e360(iStack_bc,1,&pbStack_b0,&uStack_be);
      if (((*(char *)(iVar40 + 0x11) != '\0') &&
          (FUN_0027df1c(iVar40,pbStack_b4,5,*(undefined4 *)(iVar32 + 0x48),&iStack_b8),
          *(ushort *)(iStack_bc + 10) < uStack_be)) && (iStack_b8 == 0)) {
        FUN_0027dfbc(iStack_bc,pbStack_b0,&iStack_b8);
      }
      iVar5 = (*(ushort *)(iVar39 + 0x10) - 1) * 2;
      pbVar20 = (byte *)(*(int *)(iVar39 + 0x38) +
                        (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar39 + 0x40) + iVar5),
                                        *(undefined1 *)(*(int *)(iVar39 + 0x40) + iVar5 + 1)) &
                              *(ushort *)(iVar39 + 0x12)));
      pbVar6 = pbVar20;
      do {
        pbStack_b0 = pbVar6;
        pbVar6 = pbStack_b0 + 1;
        if (-1 < (int)((uint)*pbStack_b0 << 0x18)) break;
      } while (pbVar6 < pbVar20 + 9);
      pbVar7 = pbStack_b0 + 10;
      pbVar20 = abStack_28;
      pbStack_b0 = pbVar6;
      do {
        bVar1 = *pbStack_b0;
        pbStack_b0 = pbStack_b0 + 1;
        *pbVar20 = bVar1;
        pbVar20 = pbVar20 + 1;
        if (-1 < (int)((uint)bVar1 << 0x18)) break;
      } while (pbStack_b0 < pbVar7);
      FUN_0027e7d4(iVar32,*(undefined2 *)(iVar32 + 0x10),auStack_2c,(int)pbVar20 - (int)auStack_2c,0
                   ,*(undefined4 *)(iVar39 + 0x48),&iStack_b8);
      FUN_0025ba48(*(int *)(iVar32 + 0x38) + *(byte *)(iVar32 + 5) + 8,pbStack_b4);
      FUN_00274a30(iStack_bc);
    }
    FUN_0027f5d8();
  }
  iVar5 = FUN_0025f320(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
  uVar21 = (uint)*(byte *)(param_1 + 0x5d);
  uStack_11c = 0;
  iStack_b8 = 0;
  iVar40 = *(int *)(iVar32 + 0x34);
  if (iVar5 == 0) {
    FUN_0027f5c8();
  }
  uStack_114 = (uint)*(byte *)(iVar32 + 1) + (uint)*(ushort *)(iVar32 + 0x10);
  if (1 < uStack_114) {
    bVar41 = uVar19 != uStack_11c;
    uStack_11c = uVar19;
    if ((bVar41) && (uStack_11c = uVar19 - 1, uVar19 == uStack_114)) {
      uStack_11c = (uVar19 - 2) + uVar21;
    }
    uStack_114 = 2 - uVar21;
  }
  iVar33 = uStack_114 + 1;
  uVar19 = (uStack_114 + uStack_11c) - (uint)*(byte *)(iVar32 + 1);
  if (uVar19 == *(ushort *)(iVar32 + 0x10)) {
    uVar19 = *(byte *)(iVar32 + 5) + 8;
  }
  else {
    iVar22 = uVar19 * 2;
    uVar19 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar32 + 0x40) + iVar22),
                             *(undefined1 *)(*(int *)(iVar32 + 0x40) + iVar22 + 1)) &
                   *(ushort *)(iVar32 + 0x12));
  }
  iVar22 = *(int *)(iVar32 + 0x38) + uVar19;
  pbStack_b4 = (byte *)FUN_0025ba30(iVar22);
  psStack_128 = asStack_64 + (uStack_114 - 1);
  piVar37 = aiStack_ac + (uStack_114 - 1);
  uStack_12c = uStack_114;
  uStack_140 = 0;
  do {
    iStack_b8 = FUN_00274c54(iVar40,pbStack_b4,aiStack_ac + uStack_12c + 2);
    if (iStack_b8 != 0) {
      iStack_138 = 0;
      memset(aiStack_ac + 2,0,(uStack_12c + 1) * 4);
      puStack_130 = (undefined4 *)0x0;
LAB_0027f598:
      FUN_0025b000(puStack_130);
      piVar37 = aiStack_ac + 2;
      for (iVar32 = 0; iVar32 < iVar33; iVar32 = iVar32 + 1) {
        iVar40 = *piVar37;
        piVar37 = piVar37 + 1;
        FUN_00274a30(iVar40);
      }
      piVar37 = aiStack_ac + 8;
      for (iVar32 = 0; iVar40 = iStack_b8, iVar32 < iStack_138; iVar32 = iVar32 + 1) {
        iVar40 = *piVar37;
        piVar37 = piVar37 + 1;
        FUN_00274a30(iVar40);
      }
      *(undefined1 *)(iVar39 + 1) = 0;
      FUN_00274a30(iVar39);
      *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
      if (iVar40 == 0) {
        FUN_0027ea54();
      }
      if (iVar5 != 0) {
        FUN_0025f6b8(iVar5);
      }
      if (local_1c == *piVar30) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar40);
    }
    uStack_140 = uStack_140 +
                 *(ushort *)(aiStack_ac[uStack_12c + 2] + 0x10) + 1 +
                 (uint)*(byte *)(aiStack_ac[uStack_12c + 2] + 1);
    if (uStack_12c == 0) {
      iVar14 = *(int *)(iVar40 + 0x20) + 0x50;
      uVar19 = uStack_140 + 3 & 0xfffffffc;
      puStack_130 = (undefined4 *)
                    FUN_0025af60(iVar14 * iVar33 + *(int *)(iVar40 + 0x20) + uVar19 * 6);
      if (puStack_130 != (undefined4 *)0x0) {
        psStack_128 = puStack_130 + uVar19;
        uVar15 = (uint)*(byte *)(aiStack_ac[2] + 3);
        iVar16 = uVar15 * 4;
        uVar24 = (uint)*(byte *)(aiStack_ac[2] + 4);
        uStack_ec = uStack_12c;
        uStack_140 = uStack_12c;
        uStack_104 = uStack_12c;
        uStack_134 = uStack_12c;
        for (piStack_120 = (int *)uStack_12c; (int)piStack_120 < iVar33;
            piStack_120 = (int *)((int)piStack_120 + 1)) {
          pvVar23 = (void *)((int)psStack_128 + uStack_ec + *(int *)(iVar40 + 0x20) + uVar19 * 2);
          *(void **)((int)aiStack_ac + uStack_140 + 0x14) = pvVar23;
          memcpy(pvVar23,*(void **)((int)aiStack_ac + uStack_140 + 8),0x4c);
          iVar25 = *(int *)((int)aiStack_ac + uStack_140 + 8);
          *(void **)((int)pvVar23 + 0x38) = (void *)((int)pvVar23 + 0x4c);
          memcpy((void *)((int)pvVar23 + 0x4c),*(void **)(iVar25 + 0x38),*(size_t *)(iVar40 + 0x20))
          ;
          uVar17 = (uint)*(ushort *)((int)pvVar23 + 0x10) + (uint)*(byte *)((int)pvVar23 + 1);
          uStack_13c = 0;
          if (*(byte *)((int)pvVar23 + 1) == 0) {
            iVar25 = *(int *)((int)pvVar23 + 0x38);
            uVar3 = *(ushort *)((int)pvVar23 + 0x12);
            puStack_118 = (undefined1 *)(iVar25 + (uint)*(ushort *)((int)pvVar23 + 0xc));
            for (uStack_13c = 0; (int)uStack_13c < (int)uVar17; uStack_13c = uStack_13c + 1) {
              puStack_130[uStack_134 + uStack_13c] =
                   iVar25 + (uint)(CONCAT11(*puStack_118,puStack_118[1]) & uVar3);
              uVar4 = FUN_00260b9e(pvVar23);
              *(ushort *)((int)psStack_128 + (uStack_134 + uStack_13c) * 2) = uVar4;
              puStack_118 = puStack_118 + 2;
            }
          }
          else {
            while ((int)uStack_13c < (int)uVar17) {
              iVar25 = 0;
              uVar26 = uStack_13c;
              uVar2 = (uint)*(byte *)((int)pvVar23 + 1);
              while (uVar2 - 1 != 0xffffffff) {
                uVar9 = (uint)*(ushort *)
                               ((int)pvVar23 + iVar25 + (uint)*(byte *)((int)pvVar23 + 1) * 2 + 0x12
                               );
                if ((int)uVar9 <= (int)uVar26) {
                  if (uVar9 == uVar26) {
                    iVar25 = *(int *)((uVar2 + 7) * 4 + (int)pvVar23);
                    goto LAB_0027ef58;
                  }
                  uVar26 = uVar26 - 1;
                }
                iVar25 = iVar25 + -2;
                uVar2 = uVar2 - 1;
              }
              iVar25 = *(int *)((int)pvVar23 + 0x38) +
                       (uint)(CONCAT11(*(undefined1 *)(*(int *)((int)pvVar23 + 0x40) + uVar26 * 2),
                                       *(undefined1 *)
                                        (*(int *)((int)pvVar23 + 0x40) + uVar26 * 2 + 1)) &
                             *(ushort *)((int)pvVar23 + 0x12));
LAB_0027ef58:
              puStack_130[uStack_134 + uStack_13c] = iVar25;
              uVar3 = FUN_00260b9e(pvVar23);
              *(ushort *)((int)psStack_128 + (uStack_134 + uStack_13c) * 2) = uVar3;
              uStack_13c = uStack_13c + 1;
            }
          }
          uStack_134 = uStack_134 + ((int)~uVar17 >> 0x1f & uVar17);
          if (((int)piStack_120 < (int)uStack_114) && (uVar24 == 0)) {
            uVar3 = *(ushort *)((int)asStack_64 + uStack_140);
            puVar27 = (ushort *)((int)psStack_128 + uStack_134 * 2);
            *puVar27 = uVar3;
            pvVar10 = (void *)((int)psStack_128 + uStack_104 + uVar19 * 2);
            uStack_104 = uStack_104 + uVar3;
            memcpy(pvVar10,*(void **)((int)aiStack_ac + uStack_140),(uint)uVar3);
            puStack_130[uStack_134] = (void *)((int)pvVar10 + iVar16);
            uVar17 = (uint)*puVar27 + uVar15 * -4;
            *puVar27 = (ushort)uVar17;
            if (*(char *)((int)pvVar23 + 3) == '\0') {
              memcpy((void *)puStack_130[uStack_134],(void *)(*(int *)((int)pvVar23 + 0x38) + 8),4);
            }
            else if ((uVar17 & 0xffff) < 4) {
              *puVar27 = 4;
            }
            uStack_134 = uStack_134 + 1;
          }
          uStack_140 = uStack_140 + 4;
          uStack_ec = uStack_ec + iVar14;
        }
        iVar14 = *(int *)(iVar40 + 0x24);
        sVar8 = 0;
        uStack_140 = 0;
        for (uVar19 = 0; (int)uVar19 < (int)uStack_134; uVar19 = uVar19 + 1) {
          sVar8 = sVar8 + *(ushort *)((int)psStack_128 + uVar19 * 2) + 2;
          if (iVar14 + -0xc + iVar16 < (int)sVar8) {
            asStack_64[uStack_140] = sVar8 - *(ushort *)((int)psStack_128 + uVar19 * 2);
            auStack_78[uStack_140] = uVar19;
            uVar19 = uVar19 - (uVar24 != 0);
            if (4 < (int)(uStack_140 + 1)) {
              iStack_b8 = FUN_0026b4e4(DAT_0027f134);
              iStack_138 = 0;
              goto LAB_0027f598;
            }
            sVar8 = 0;
            uStack_140 = uStack_140 + 1;
          }
        }
        asStack_64[uStack_140] = sVar8;
        auStack_78[uStack_140] = uStack_134;
        puVar18 = auStack_78 + uStack_140 + -1;
        for (psVar28 = asStack_64 + uStack_140; asStack_64 != psVar28; psVar28 = psVar28 + -1) {
          uStack_13c = *puVar18 - 1;
          sVar8 = psVar28[-1];
          iStack_138 = *puVar18 - uVar24;
          for (sVar12 = *psVar28;
              (sVar12 == 0 ||
              ((uVar21 == 0 &&
               ((int)(sVar12 + *(ushort *)((int)psStack_128 + iStack_138 * 2) + 1) <
                (int)(sVar8 + (-2 - (uint)*(ushort *)((int)psStack_128 + uStack_13c * 2)))))));
              sVar12 = sVar12 + uVar3 + 2) {
            uVar3 = *(ushort *)((int)psStack_128 + iStack_138 * 2);
            sVar8 = sVar8 + (-2 - (uint)*(ushort *)((int)psStack_128 + uStack_13c * 2));
            iStack_138 = *puVar18 - 1;
            uStack_13c = *puVar18 - 2;
            *puVar18 = iStack_138;
            iStack_138 = iStack_138 - uVar24;
          }
          puVar18 = puVar18 + -1;
          *psVar28 = sVar12;
          psVar28[-1] = sVar8;
        }
        if (1 < *(uint *)(aiStack_ac[2] + 0x48)) {
          iVar14 = 0;
          uStack_13c = 0;
          bVar1 = **(byte **)(aiStack_ac[2] + 0x38);
          iStack_138 = uStack_13c;
          do {
            uStack_13c = iStack_138;
            if ((int)uStack_13c < iVar33) {
              pbStack_b0 = *(byte **)((int)aiStack_ac + iVar14 + 8);
              *(byte **)((int)aiStack_ac + iVar14 + 0x20) = pbStack_b0;
              uVar11 = *(undefined4 *)(pbStack_b0 + 0x44);
              *(undefined4 *)((int)aiStack_ac + iVar14 + 8) = 0;
              iStack_b8 = FUN_002733c4(uVar11);
joined_r0x0027f23a:
              iStack_138 = uStack_13c + 1;
              if (iStack_b8 != 0) goto LAB_0027f598;
            }
            else {
              pbVar6 = (byte *)0x1;
              if (uVar21 == 0) {
                pbVar6 = pbStack_b4;
              }
              iStack_b8 = FUN_0027daa4(iVar40,&pbStack_b0,&pbStack_b4,pbVar6,0);
              iStack_138 = uStack_13c;
              if (iStack_b8 != 0) goto LAB_0027f598;
              *(byte **)((int)aiStack_ac + iVar14 + 0x20) = pbStack_b0;
              if (*(char *)(iVar40 + 0x11) != '\0') {
                FUN_0027df1c(iVar40,*(undefined4 *)(pbStack_b0 + 0x48),5,
                             *(undefined4 *)(iVar32 + 0x48),&iStack_b8);
                goto joined_r0x0027f23a;
              }
            }
            iVar14 = iVar14 + 4;
            iStack_138 = uStack_13c + 1;
          } while (iStack_138 <= (int)uStack_140);
          piStack_124 = aiStack_ac + uStack_13c + 3;
          for (piStack_120 = (int *)iStack_138; (int)piStack_120 < iVar33;
              piStack_120 = (int *)((int)piStack_120 + 1)) {
            iVar14 = *piStack_124;
            if (iStack_b8 == 0) {
              iStack_b8 = FUN_0027e534(*(undefined4 *)(iVar14 + 0x34),iVar14,
                                       *(undefined4 *)(iVar14 + 0x48));
            }
            if (iStack_b8 != 0) goto LAB_0027f598;
            FUN_00274a30(*piStack_124);
            *piStack_124 = 0;
            piStack_124 = piStack_124 + 1;
          }
          piStack_120 = aiStack_ac + 8;
          piVar37 = piStack_120;
          iVar14 = 0;
          while (piVar13 = piVar37, iVar14 < (int)uStack_140) {
            iVar38 = *piVar13;
            iVar34 = iVar14 + 1;
            piVar37 = piStack_120 + iVar34;
            iVar25 = iVar14;
            iVar36 = iVar14;
            uStack_fc = *(uint *)(iVar38 + 0x48);
            while (iVar29 = iVar36 + 1, iVar36 != uStack_140) {
              iVar35 = *piVar37;
              piVar37 = piVar37 + 1;
              iVar36 = iVar29;
              if (*(uint *)(iVar35 + 0x48) < uStack_fc) {
                iVar25 = iVar29;
                uStack_fc = *(uint *)(iVar35 + 0x48);
              }
            }
            bVar41 = iVar14 < iVar25;
            piVar37 = piVar13 + 1;
            iVar14 = iVar34;
            if (bVar41) {
              *piVar13 = piStack_120[iVar25];
              piStack_120[iVar25] = iVar38;
            }
          }
          FUN_0025ba48(iVar22,*(undefined4 *)(aiStack_ac[uStack_13c + 8] + 0x48));
          uStack_140 = 0;
          iStack_108 = 0;
          uVar19 = 0;
          do {
            iVar22 = aiStack_ac[uStack_140 + 8];
            FUN_0026b790(iVar22,(uint)bVar1);
            uVar21 = auStack_78[uStack_140];
            FUN_0025e360(iVar22,uVar21 - uVar19,puStack_130 + uVar19,
                         (ushort *)((int)psStack_128 + uVar19 * 2));
            if ((int)uVar21 < (int)uStack_134) {
              pvVar23 = (void *)puStack_130[uVar21];
              piStack_124 = (int *)((uint)*(ushort *)((int)psStack_128 + uVar21 * 2) + iVar16);
              pvVar10 = (void *)(iVar5 + iStack_108);
              puStack_118 = (undefined1 *)pvVar10;
              if (*(char *)(iVar22 + 3) == '\0') {
                memcpy((void *)(*(int *)(iVar22 + 0x38) + 8),pvVar23,4);
              }
              else if (uVar24 == 0) {
                pvVar23 = (void *)((int)pvVar23 + -4);
                if (*(ushort *)((int)psStack_128 + uVar21 * 2) == 4) {
                  piStack_124 = (int *)FUN_00260b9e(iVar32,pvVar23);
                }
              }
              else {
                uVar21 = uVar21 - 1;
                FUN_00260a6c(iVar22,puStack_130[uVar21],&uStack_50);
                iVar14 = FUN_00260960((int)pvVar10 + 4,extraout_r1,uStack_50,uStack_4c);
                piStack_124 = (int *)(iVar14 + 4);
                puStack_118 = (undefined1 *)0x0;
                pvVar23 = pvVar10;
              }
              FUN_0027e7d4(iVar32,uStack_11c,pvVar23,piStack_124,puStack_118,
                           *(undefined4 *)(iVar22 + 0x48),&iStack_b8);
              if (iStack_b8 != 0) goto LAB_0027f598;
              uVar21 = uVar21 + 1;
              iStack_108 = iStack_108 + (int)piStack_124;
              uStack_11c = uStack_11c + 1;
            }
            uStack_140 = uStack_140 + 1;
            uVar19 = uVar21;
          } while ((int)uStack_140 < iStack_138);
          if (-1 < (int)((uint)bVar1 << 0x1c)) {
            memcpy((void *)(*(int *)(aiStack_ac[uStack_13c + 8] + 0x38) + 8),
                   (void *)(*(int *)(aiStack_ac[uStack_114 + 5] + 0x38) + 8),4);
          }
          if (((pbVar31 == (byte *)0x1) && (*(short *)(iVar32 + 0x10) == 0)) &&
             ((ushort)*(byte *)(iVar32 + 5) <= *(ushort *)(aiStack_ac[8] + 0xe))) {
            if (iStack_b8 == 0) {
              FUN_0027e092(aiStack_ac[8],iVar32,&iStack_b8);
            }
            if (iStack_b8 == 0) {
              iStack_b8 = FUN_0027e534(*(undefined4 *)(aiStack_ac[8] + 0x34),aiStack_ac[8],
                                       *(undefined4 *)(aiStack_ac[8] + 0x48));
            }
            goto LAB_0027f598;
          }
          if (*(char *)(iVar40 + 0x11) == '\0') goto LAB_0027f598;
          uStack_11c = (uint)*(byte *)(aiStack_ac[5] + 1);
          puStack_118 = (undefined1 *)(*(ushort *)(aiStack_ac[5] + 0x10) + uStack_11c);
          if (uStack_11c == 0) {
            uStack_13c = 0xffffffff;
          }
          else {
            uStack_13c = (uint)*(ushort *)(aiStack_ac[5] + 0x14);
          }
          uStack_114 = 0;
          piStack_124 = (int *)0x0;
          uStack_140 = 0;
          uVar19 = (uint)(uVar24 == 0);
          iVar32 = aiStack_ac[5];
          iVar22 = aiStack_ac[8];
          puStack_10c = puStack_130;
          do {
            if ((int)uStack_134 <= (int)uStack_140) {
              if (uVar15 == 0) {
                for (; (int)uStack_12c < iStack_138; uStack_12c = uStack_12c + 1) {
                  iVar32 = *piStack_120;
                  piStack_120 = piStack_120 + 1;
                  uVar11 = FUN_0025ba30(*(int *)(iVar32 + 0x38) + 8);
                  FUN_0027df1c(iVar40,uVar11,5,*(undefined4 *)(iVar32 + 0x48),&iStack_b8);
                }
              }
              goto LAB_0027f598;
            }
            uVar21 = 0;
            while ((undefined1 *)uStack_140 == puStack_118) {
              iVar14 = (int)piStack_124 + 1;
              iVar32 = aiStack_ac[(int)piStack_124 + 6];
              uVar17 = (uint)*(byte *)(iVar32 + 1);
              puStack_118 = (undefined1 *)
                            (uStack_140 + uVar19 + (uint)*(ushort *)(iVar32 + 0x10) + uVar17);
              uVar21 = uVar19;
              piStack_124 = (int *)iVar14;
              if (uVar17 != 0) {
                uStack_13c = uStack_140 + uVar19 + (uint)*(ushort *)(iVar32 + 0x14);
                uStack_11c = uVar17;
              }
            }
            if (uStack_140 == uStack_13c) {
              uStack_11c = uStack_11c - 1;
              if ((int)uStack_11c < 1) {
                uStack_13c = uStack_140;
              }
              else {
                uStack_13c = uStack_140 + 1;
              }
              uVar21 = 1;
            }
            if (uStack_140 == auStack_78[uStack_114]) {
              iVar14 = uStack_114 + 1;
              iVar22 = aiStack_ac[uStack_114 + 9];
              uStack_114 = iVar14;
              if (uVar24 != 0) goto LAB_0027f4fc;
            }
            else {
LAB_0027f4fc:
              if ((uVar21 != 0) || (*(int *)(iVar32 + 0x48) != *(int *)(iVar22 + 0x48))) {
                if (uVar15 == 0) {
                  uVar11 = FUN_0025ba30(*puStack_10c);
                  FUN_0027df1c(iVar40,uVar11,5,*(undefined4 *)(iVar22 + 0x48),&iStack_b8);
                }
                if ((*(ushort *)(iVar22 + 10) < (ushort)*psStack_128) && (iStack_b8 == 0)) {
                  FUN_0027dfbc(iVar22,*puStack_10c,&iStack_b8);
                }
              }
            }
            uStack_140 = uStack_140 + 1;
            psStack_128 = (size_t *)((int)psStack_128 + 2);
            puStack_10c = puStack_10c + 1;
          } while( true );
        }
        iStack_b8 = FUN_0026b4e4(DAT_0027f4d4);
LAB_0027f1b6:
        iStack_138 = 0;
        goto LAB_0027f598;
      }
      iStack_b8 = 7;
      iStack_138 = 0;
      goto LAB_0027f598;
    }
    uVar19 = (uStack_12c - 1) + uStack_11c;
    if ((uVar19 == *(ushort *)(iVar32 + 0x14)) && (*(byte *)(iVar32 + 1) != 0)) {
      iVar14 = *(int *)(iVar32 + 0x20);
      *piVar37 = iVar14;
      pbStack_b4 = (byte *)FUN_0025ba30(iVar14);
      sVar8 = FUN_00260b9e(iVar32,iVar14);
      *psStack_128 = sVar8;
      *(undefined1 *)(iVar32 + 1) = 0;
    }
    else {
      iVar14 = (uVar19 - *(byte *)(iVar32 + 1)) * 2;
      pvVar23 = (void *)(*(int *)(iVar32 + 0x38) +
                        (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar32 + 0x40) + iVar14),
                                        *(undefined1 *)(*(int *)(iVar32 + 0x40) + iVar14 + 1)) &
                              *(ushort *)(iVar32 + 0x12)));
      *piVar37 = (int)pvVar23;
      pbStack_b4 = (byte *)FUN_0025ba30(pvVar23);
      sVar8 = FUN_00260b9e(iVar32,pvVar23);
      *psStack_128 = sVar8;
      if ((*(ushort *)(iVar40 + 0x16) & 4) != 0) {
        if (*(int *)(iVar40 + 0x24) < (int)((int)pvVar23 + (sVar8 - *(int *)(iVar32 + 0x38)))) {
          iStack_b8 = FUN_0026b4e4(DAT_0027f130);
          memset(aiStack_ac + 2,0,uStack_12c << 2);
          puStack_130 = (undefined4 *)0x0;
          goto LAB_0027f1b6;
        }
        memcpy((void *)((int)pvVar23 + (iVar5 - *(int *)(iVar32 + 0x38))),pvVar23,sVar8);
        *piVar37 = (int)pvVar23 + (iVar5 - *(int *)(iVar32 + 0x38));
      }
      if (iStack_b8 == 0) {
        FUN_0026b9bc(iVar32,uVar19 - *(byte *)(iVar32 + 1),sVar8,&iStack_b8);
      }
    }
    piVar37 = piVar37 + -1;
    psStack_128 = psStack_128 + -1;
    uStack_12c = uStack_12c - 1;
  } while( true );
}


