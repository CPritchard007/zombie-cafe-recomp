/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf360 Cafe::generateTileGeometry */

/* Cafe::generateTileGeometry() */

void __thiscall Cafe::generateTileGeometry(Cafe *this)

{
  Cafe CVar1;
  Cafe CVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  void *pvVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  CFPathFinder *this_00;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  short sVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  short *psVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 *puVar30;
  int iVar31;
  int *piVar32;
  int iVar33;
  int *piVar34;
  float __x;
  float extraout_s0;
  float extraout_s0_00;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_78;
  int local_64;
  int local_60;
  int local_5c;
  short local_58;
  short asStack_38 [9];
  short asStack_26 [9];
  
  iVar28 = DAT_000bf684 + 0xbf370;
  L_PrintLog((char *)(DAT_000bf688 + 0xbf374),(char *)(DAT_000bf68c + 0xbf372));
  piVar34 = *(int **)(iVar28 + DAT_000bf690);
  piVar32 = *(int **)(iVar28 + DAT_000bf694);
  iVar29 = *piVar32 * *piVar34;
  *(short *)(this + 4) = (short)iVar29 * 6 + -2;
  pvVar8 = operator_new__(iVar29 * 0x10);
  *(void **)(this + 0xc) = pvVar8;
  pvVar8 = operator_new__((int)*(short *)(this + 4) << 1);
  *(void **)(this + 8) = pvVar8;
  pvVar8 = operator_new__(iVar29 * 0x20);
  *(void **)(this + 0x10) = pvVar8;
  pvVar8 = operator_new__(iVar29 * 0x10);
  iVar29 = DAT_000bf698;
  *(void **)(this + 0x14) = pvVar8;
  psVar19 = *(short **)(iVar28 + iVar29);
  sVar18 = *psVar19;
  psVar20 = *(short **)(iVar28 + DAT_000bf69c);
  sVar4 = *psVar20;
  memset(asStack_38,0,0x10);
  psVar21 = *(short **)(iVar28 + DAT_000bf6a0);
  sVar3 = *psVar21;
  asStack_38[3] = sVar3;
  asStack_38[4] = sVar18;
  asStack_38[6] = sVar18;
  asStack_38[7] = sVar3;
  memset(asStack_38 + 8,0,0x10);
  uVar9 = __floatsisf((int)sVar3);
  __mulsf3(uVar9,0x3f400000);
  uVar7 = __fixsfsi();
  asStack_26[2] = uVar7;
  uVar9 = __floatsisf((int)sVar18);
  __mulsf3(uVar9,0x3f400000);
  asStack_26[3] = __fixsfsi();
  asStack_26[5] = asStack_26[3];
  asStack_26[6] = uVar7;
  iVar29 = CapcomApp::getInstance();
  iVar29 = *(int *)(iVar29 + 4);
  local_80 = -1;
  local_98 = -1;
  local_78 = 0;
  for (local_84 = 0; (int)local_84 < *piVar34; local_84 = local_84 + 1) {
    local_58 = (short)(local_84 & 1);
    if ((local_84 & 1) != 0) {
      local_58 = (short)((int)sVar18 + (int)sVar4 >> 1);
    }
    local_5c = local_78;
    iVar22 = local_78 * 2 - local_80;
    for (local_90 = 0; local_90 < *piVar32; local_90 = local_90 + 1) {
      iVar23 = local_84 * *piVar32 + local_90;
      iVar33 = iVar23 * 4;
      if (**(char **)(*(int *)this + iVar33) == -1) {
        sVar3 = *(short *)(this + 0x9e);
        CVar1 = this[0xa1];
        sVar5 = *(short *)(this + 0x9c);
        CVar2 = this[0xa0];
        lVar10 = indexToStaggeredCoords(iVar23);
        iVar11 = staggeredToDiamondCoords(lVar10);
        if (iVar11 >> 0x10 < (int)((int)sVar5 - (uint)(byte)CVar2)) {
          puVar30 = *(undefined1 **)(*(int *)this + iVar33);
          uVar6 = resetFieldTile(this,iVar23,true);
          *puVar30 = uVar6;
          *(undefined4 *)(*(int *)(*(int *)this + iVar33) + 4) = 0xffffffff;
        }
        else if ((int)((int)sVar3 + (uint)(byte)CVar1) < (int)(short)iVar11) {
          puVar30 = *(undefined1 **)(*(int *)this + iVar33);
          uVar6 = resetFieldTile(this,iVar23,true);
          *puVar30 = uVar6;
          *(undefined4 *)(*(int *)(*(int *)this + iVar33) + 4) = 0xffffffff;
        }
      }
      local_64 = iVar22 + local_80;
      iVar17 = *(int *)((uint)**(byte **)(*(int *)this + iVar33) * 4 + *(int *)(this + 0x84));
      local_60 = (local_90 * 8 + local_78) * 4;
      iVar31 = 0;
      local_8c = 0;
      psVar24 = *(short **)(iVar28 + DAT_000bf6a4);
      iVar11 = local_80;
      do {
        *(char *)(*(int *)(this + 0x14) + iVar11 + 1) =
             (char)((uint)*(undefined4 *)(*(int *)(*(int *)this + iVar33) + 4) >> 0x10);
        *(char *)(*(int *)(this + 0x14) + iVar11 + 2) =
             (char)((uint)*(undefined4 *)(*(int *)(*(int *)this + iVar33) + 4) >> 8);
        iVar25 = *(int *)(this + 0x14) + iVar11;
        iVar11 = iVar11 + 4;
        *(char *)(iVar25 + 3) = (char)*(undefined4 *)(*(int *)(*(int *)this + iVar33) + 4);
        *(undefined1 *)(*(int *)(this + 0x14) + iVar11) =
             *(undefined1 *)(*(int *)(*(int *)this + iVar33) + 7);
        local_88 = local_8c;
        if ((*(char *)(*(int *)(*(int *)this + iVar33) + 8) != '\0') &&
           (local_88 = local_8c + -4, local_8c < 4)) {
          local_88 = local_8c + 4;
        }
        *(short *)(*(int *)(this + 0xc) + local_64) =
             (short)local_90 * (*psVar19 + *psVar20) + local_58 +
             *(short *)((int)asStack_38 + iVar31);
        iVar26 = *(int *)(this + 0x10);
        uVar9 = __floatsisf((int)*(short *)(iVar17 + 0x1c));
        __mulsf3(uVar9,*(undefined4 *)(iVar17 + 0x2c));
        iVar25 = __fixsfsi();
        uVar9 = __floatsisf(iVar25 + asStack_38[local_88 + 8]);
        iVar27 = *(int *)(iVar29 + DAT_000bf6a8);
        iVar25 = *(int *)(iVar27 + 0x14);
        if (iVar25 == 0) {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = *(undefined4 *)(iVar25 + 8);
        }
        uVar12 = __mulsf3(uVar12,*(undefined4 *)(iVar27 + 0x30));
        uVar9 = __mulsf3(uVar9,uVar12);
        *(undefined4 *)(iVar26 + local_60) = uVar9;
        *(short *)(local_64 + *(int *)(this + 0xc) + 2) =
             *(short *)((int)asStack_38 + iVar31 + 2) +
             (short)((int)(local_84 * ((int)*psVar21 + (int)*psVar24)) >> 1);
        iVar26 = *(int *)(this + 0x10);
        uVar9 = __floatsisf((int)*(short *)(iVar17 + 0x1e));
        __mulsf3(uVar9,*(undefined4 *)(iVar17 + 0x2c));
        iVar25 = __fixsfsi();
        uVar9 = __floatsisf(iVar25 + *(short *)((int)asStack_38 + iVar31 + 0x12));
        iVar27 = *(int *)(iVar29 + DAT_000bf6a8);
        iVar25 = *(int *)(iVar27 + 0x14);
        if (iVar25 == 0) {
          uVar12 = 0x3f800000;
        }
        else {
          uVar12 = *(undefined4 *)(iVar25 + 0xc);
        }
        uVar12 = __mulsf3(uVar12,*(undefined4 *)(iVar27 + 0x30));
        uVar9 = __mulsf3(uVar9,uVar12);
        *(undefined4 *)(iVar26 + local_60 + 4) = uVar9;
        local_8c = local_8c + 2;
        local_64 = local_64 + 4;
        local_60 = local_60 + 8;
        iVar31 = iVar31 + 4;
      } while (iVar31 != 0x10);
      local_80 = local_80 + 0x10;
      local_5c = local_5c + 8;
      if (local_98 != -1) {
        local_98 = local_98 + 1;
        *(short *)(local_98 * 2 + *(int *)(this + 8)) = (short)iVar23 * 4;
      }
      sVar3 = (short)((uint)(iVar23 * 0x40000) >> 0x10);
      *(short *)((local_98 + 1) * 2 + *(int *)(this + 8)) = sVar3;
      *(short *)((local_98 + 2) * 2 + *(int *)(this + 8)) = sVar3 + 1;
      *(short *)((local_98 + 3) * 2 + *(int *)(this + 8)) = sVar3 + 2;
      *(short *)((local_98 + 4) * 2 + *(int *)(this + 8)) = sVar3 + 3;
      iVar23 = local_98 + 5;
      local_98 = local_98 + 4;
      if (iVar23 < *(short *)(this + 4)) {
        *(short *)(iVar23 * 2 + *(int *)(this + 8)) = sVar3 + 3;
        local_98 = iVar23;
      }
    }
    local_78 = local_5c;
  }
  L_PrintLog((char *)(DAT_000bf9ac + 0xbf780),(char *)(DAT_000bf9b0 + 0xbf782));
  uVar13 = indexToWorldCoordsCenter(this,*piVar32);
  uVar14 = indexToWorldCoordsCenter(this,(*piVar32 * *piVar34 + -1) - *piVar32);
  *(uint *)(this + 0x18) =
       ((uVar14 >> 0x10) - (uVar13 >> 0x10)) * 0x10000 | uVar14 - uVar13 & 0xffff;
  *(uint *)(this + 0x1c) = uVar13;
  this_00 = (CFPathFinder *)operator_new(0x1c);
  CFPathFinder::CFPathFinder(this_00,*piVar32 * *piVar34,4);
  *(CFPathFinder **)(this + 0x5c) = this_00;
  if (this_00 == (CFPathFinder *)0x0) {
    pcVar15 = (char *)(DAT_000bf9bc + 0xbf7de);
    pcVar16 = (char *)(DAT_000bf9c0 + 0xbf7e0);
  }
  else {
    pcVar15 = (char *)(DAT_000bf9b4 + 0xbf7d4);
    pcVar16 = (char *)(DAT_000bf9b8 + 0xbf7d6);
  }
  L_PrintLog(pcVar15,pcVar16);
  iVar29 = (int)*psVar21 + (int)**(short **)(iVar28 + DAT_000bf9c4);
  uVar9 = __floatsisf(((int)*psVar19 + (int)*psVar20) * ((int)*psVar19 + (int)*psVar20) +
                      iVar29 * iVar29);
  sqrtf(__x);
  *(undefined4 *)(this + 0x60) = uVar9;
  for (iVar29 = 0; iVar29 < *piVar34 * *piVar32; iVar29 = iVar29 + 1) {
    iVar28 = iVar29 * 8;
    CFPathFinder::setNodePosition
              (*(CFPathFinder **)(this + 0x5c),iVar29,
               ((int)*(short *)((iVar28 + 6) * 2 + *(int *)(this + 0xc)) +
                (int)*(short *)(iVar29 * 0x10 + *(int *)(this + 0xc)) >> 1) << 0x10 |
               (int)*(short *)((iVar28 + 7) * 2 + *(int *)(this + 0xc)) +
               (int)*(short *)((iVar28 + 1) * 2 + *(int *)(this + 0xc)) >> 1 & 0xffffU);
    lVar10 = indexToStaggeredCoords(iVar29);
    iVar28 = staggeredToDiamondCoords(lVar10);
    iVar22 = isWalkableTile(this,iVar29);
    iVar23 = iVar28 >> 0x10;
    sVar18 = (short)iVar28;
    if ((iVar22 != 0) ||
       ((iVar23 <= *(short *)(this + 0x9c) && ((short)(ushort)(byte)this[0xa1] <= sVar18)))) {
      iVar28 = getNextTile(iVar29,1);
      if (((-1 < iVar28) &&
          ((iVar22 = *(int *)(*(int *)(iVar28 * 4 + *(int *)this) + 0x10), iVar22 == 0 ||
           ((*(char *)(iVar22 + 0x3b) != '\0' && (this[100] != (Cafe)0x0)))))) &&
         ((iVar22 = isWalkableTile(this,iVar28), iVar22 != 0 ||
          (((int)((int)*(short *)(this + 0x9e) + (uint)(byte)this[0xa1]) < (int)sVar18 &&
           ((int)((int)*(short *)(this + 0x9c) - (uint)(byte)this[0xa0]) < iVar23)))))) {
        CFPathFinder::linkNodes(*(CFPathFinder **)(this + 0x5c),iVar29,iVar28,extraout_s0);
      }
      iVar28 = getNextTile(iVar29,0);
      if (((-1 < iVar28) &&
          ((iVar22 = *(int *)(*(int *)(iVar28 * 4 + *(int *)this) + 0xc), iVar22 == 0 ||
           ((*(char *)(iVar22 + 0x3b) != '\0' && (this[100] != (Cafe)0x0)))))) &&
         ((iVar22 = isWalkableTile(this,iVar28), iVar22 != 0 ||
          (((int)((int)*(short *)(this + 0x9e) + (uint)(byte)this[0xa1]) < (int)sVar18 &&
           ((int)((int)*(short *)(this + 0x9c) - (uint)(byte)this[0xa0]) <= iVar23)))))) {
        CFPathFinder::linkNodes(*(CFPathFinder **)(this + 0x5c),iVar29,iVar28,extraout_s0_00);
      }
    }
    if (*(int *)(*(int *)(iVar29 * 4 + *(int *)this) + 0x14) != 0) {
      CFPathFinder::setNodeEnabled(*(CFPathFinder **)(this + 0x5c),iVar29,false);
    }
  }
  L_PrintLog((char *)(DAT_000bf9c8 + 0xbf998),(char *)(DAT_000bf9cc + 0xbf99a));
  return;
}


