/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c2ad0 Cafe::deserialize */

/* Cafe::deserialize(InputStream*, bool, ZombieCafe*) */

void Cafe::deserialize(InputStream *param_1,bool param_2,ZombieCafe *param_3)

{
  Cafe CVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  DataInputStream *this;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  CafeTile *this_00;
  int iVar9;
  long lVar10;
  CapcomOrderableList<Furniture*> *this_01;
  FoodStack *this_02;
  Food *this_03;
  ServingCounter *this_04;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined1 *puVar19;
  code *pcVar20;
  int *piVar21;
  int iVar22;
  Cafe *this_05;
  int iVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  int local_148;
  int local_144;
  int local_140;
  char acStack_11c [256];
  int local_1c;
  
  iVar23 = DAT_000c2dd0 + 0xc2ae0;
  piVar21 = *(int **)(iVar23 + DAT_000c2dd4);
  local_1c = *piVar21;
  L_PrintLog((char *)(DAT_000c2dd8 + 0xc2aec),(char *)(DAT_000c2ddc + 0xc2aee));
  if (param_2) {
    pcVar4 = (char *)(DAT_000c2de0 + 0xc2b00);
    pcVar11 = (char *)(DAT_000c2de4 + 0xc2b02);
  }
  else {
    pcVar4 = (char *)(DAT_000c2de8 + 0xc2b0a);
    pcVar11 = (char *)(DAT_000c2dec + 0xc2b0c);
  }
  L_PrintLog(pcVar4,pcVar11);
  this = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this,param_1);
  if (this == (DataInputStream *)0x0) {
    L_PrintLog((char *)(DAT_000c2df0 + 0xc2b28),(char *)(DAT_000c2df4 + 0xc2b2a));
  }
  iVar5 = DataInputStream::readByte(this);
  iVar16 = iVar5;
  snprintf(acStack_11c,0x100,(char *)(DAT_000c2df8 + 0xc2b3c),iVar5,iVar5);
  L_PrintLog((char *)(DAT_000c2dfc + 0xc2b4e),acStack_11c);
  piVar15 = *(int **)(iVar23 + DAT_000c2e00);
  *piVar15 = iVar5;
  if (iVar5 - 0x17U < 0x66) {
    L_PrintLog((char *)(DAT_000c2e0c + 0xc2b96),acStack_11c);
    if (param_2) {
      local_144 = **(int **)(iVar23 + DAT_000c2e10);
      iVar16 = DAT_000c2e14;
    }
    else {
      local_144 = **(int **)(iVar23 + DAT_000c2e18);
      iVar16 = DAT_000c2e1c;
    }
    iVar16 = **(int **)(iVar23 + iVar16);
    this_05 = (Cafe *)operator_new(0x108);
    Cafe(this_05);
    L_PrintLog((char *)(DAT_000c2e20 + 0xc2bd0),(char *)(DAT_000c2e24 + 0xc2bd2));
    if (param_3 == (ZombieCafe *)0x0) {
      iVar5 = CapcomApp::getInstance();
      *(Cafe **)(*(int *)(iVar5 + 4) + 0x7e8) = this_05;
    }
    else {
      *(Cafe **)(param_3 + 0x7e8) = this_05;
    }
    if (0x24 < *piVar15) {
      uVar27 = DataInputStream::readDouble();
      *(undefined8 *)(this_05 + 0xd8) = uVar27;
    }
    CVar1 = (Cafe)DataInputStream::readByte(this);
    this_05[0xa0] = CVar1;
    CVar1 = (Cafe)DataInputStream::readByte(this);
    this_05[0xa1] = CVar1;
    uVar3 = DataInputStream::readShort(this);
    *(undefined2 *)(this_05 + 0x9c) = uVar3;
    uVar3 = DataInputStream::readShort(this);
    *(undefined2 *)(this_05 + 0x9e) = uVar3;
    if (*piVar15 < 0x31) {
      *(undefined4 *)(this_05 + 0xe8) = 0x14;
      *(undefined4 *)(this_05 + 0xec) = 0x28;
    }
    else {
      uVar6 = DataInputStream::readInt(this);
      *(undefined4 *)(this_05 + 0xe8) = uVar6;
      uVar6 = DataInputStream::readInt(this);
      *(undefined4 *)(this_05 + 0xec) = uVar6;
    }
    *(int *)(this_05 + 0xf0) = *(int *)(this_05 + 0xec) * *(int *)(this_05 + 0xe8);
    uVar7 = diamondToStaggeredCoords
                      ((int)*(short *)(this_05 + 0x9c),(int)*(short *)(this_05 + 0x9e));
    uVar8 = diamondToStaggeredCoords(local_144,iVar16);
    *(int *)(this_05 + 0xf4) =
         (int)(uVar8 - uVar7 & 0xffff | ((uVar8 >> 0x10) - (uVar7 >> 0x10)) * 0x10000) >> 0x10;
    *(int *)(this_05 + 0xf8) = (int)(short)(uVar8 - uVar7);
    iVar5 = DAT_000c2e28;
    *(short *)(this_05 + 0x9c) = (short)local_144;
    local_148._0_2_ = (short)iVar16;
    *(short *)(this_05 + 0x9e) = (short)local_148;
    local_140 = 0;
    piVar17 = *(int **)(iVar23 + iVar5);
    piVar18 = *(int **)(iVar23 + DAT_000c2e2c);
    for (; local_140 < *piVar18 * *piVar17; local_140 = local_140 + 1) {
      this_00 = (CafeTile *)operator_new(0x18);
      CafeTile::CafeTile(this_00);
      iVar22 = local_140 * 4;
      *(CafeTile **)(*(int *)this_05 + iVar22) = this_00;
      iVar5 = indexToStaggeredCoords(local_140);
      iVar9 = staggeredToDiamondCoords(iVar5);
      if (iVar5 >> 0x10 < *(int *)(this_05 + 0xf4)) {
LAB_000c2d34:
        iVar13 = *(int *)this_05;
        iVar12 = iVar9 >> 0x10;
        iVar5 = (int)(short)iVar9;
        piVar14 = *(int **)(iVar23 + DAT_000c2e30);
        if (((local_144 < iVar12) && (iVar12 <= local_144 + *piVar14)) ||
           ((iVar5 < iVar16 && (iVar16 - *piVar14 <= iVar5)))) {
          iVar9 = *piVar14;
          if ((iVar5 == (iVar16 - (iVar9 >> 1)) + -1) &&
             ((iVar12 <= local_144 || (local_144 + iVar9 < iVar12)))) {
            puVar19 = *(undefined1 **)(iVar13 + iVar22);
            iVar5 = DAT_000c2e34;
          }
          else {
            if (iVar12 == local_144 + (iVar9 >> 1) + 1 &&
                (iVar16 <= iVar5 || iVar5 < iVar16 - iVar9)) {
              **(undefined1 **)(iVar13 + iVar22) = (char)**(undefined2 **)(iVar23 + DAT_000c2e34);
              *(undefined1 *)(*(int *)(*(int *)this_05 + iVar22) + 8) = 1;
              goto LAB_000c2f22;
            }
            puVar19 = *(undefined1 **)(iVar13 + iVar22);
            iVar5 = DAT_000c2e38;
          }
          *puVar19 = (char)**(undefined2 **)(iVar23 + iVar5);
        }
        else {
          bVar24 = iVar12 != local_144 + *piVar14 + 1;
          bVar25 = iVar5 == iVar16;
          if ((bVar24) || (!bVar25)) {
            bVar26 = iVar5 == (iVar16 - *piVar14) + -1;
            if ((iVar12 == local_144) && (bVar26)) goto LAB_000c2e8e;
            if ((bVar24) && (!bVar26)) {
              if ((iVar12 == local_144) || (bVar25)) {
                **(undefined1 **)(iVar13 + iVar22) = (char)**(undefined2 **)(iVar23 + DAT_000c31fc);
                bVar24 = true;
                if (!bVar25) {
                  bVar24 = iVar5 == (iVar16 - *piVar14) + -1;
                }
                *(bool *)(*(int *)(*(int *)this_05 + iVar22) + 8) = bVar24;
              }
              else {
                puVar19 = *(undefined1 **)(iVar13 + iVar22);
                iVar9 = **(int **)(iVar23 + DAT_000c3200);
                iVar5 = CapcomMath::random((uint)**(byte **)(iVar23 + DAT_000c3204));
                *puVar19 = (char)*(undefined2 *)(iVar9 + iVar5 * 2);
                iVar5 = *(int *)(*(int *)this_05 + iVar22);
                uVar2 = CapcomMath::random(2);
                *(undefined1 *)(iVar5 + 8) = uVar2;
              }
              goto LAB_000c2f22;
            }
            puVar19 = *(undefined1 **)(iVar13 + iVar22);
            iVar9 = DAT_000c31f8;
          }
          else {
LAB_000c2e8e:
            puVar19 = *(undefined1 **)(iVar13 + iVar22);
            iVar9 = DAT_000c31f4;
          }
          *puVar19 = (char)**(undefined2 **)(iVar23 + iVar9);
          *(char *)(*(int *)(*(int *)this_05 + iVar22) + 8) =
               '\x01' - (iVar5 == (iVar16 - *piVar14) + -1);
        }
      }
      else if ((((int)(short)iVar5 < *(int *)(this_05 + 0xf8)) ||
               (*(int *)(this_05 + 0xf4) + *(int *)(this_05 + 0xe8) <= iVar5 >> 0x10)) ||
              (*(int *)(this_05 + 0xf8) + *(int *)(this_05 + 0xec) <= (int)(short)iVar5))
      goto LAB_000c2d34;
LAB_000c2f22:
    }
    lVar10 = diamondToStaggeredCoords(-iVar16,iVar16);
    uVar3 = staggeredCoordsToIndex(lVar10);
    iVar16 = *piVar17;
    *(undefined2 *)(this_05 + 0x98) = uVar3;
    lVar10 = diamondToStaggeredCoords(local_144,(iVar16 * 2 - local_144) + -1);
    uVar3 = staggeredCoordsToIndex(lVar10);
    *(undefined2 *)(this_05 + 0x9a) = uVar3;
    CVar1 = (Cafe)DataInputStream::readBoolean(this);
    iVar16 = DAT_000c3208;
    this_05[100] = CVar1;
    sprintf(acStack_11c,(char *)(iVar16 + 0xc2f88),*(undefined4 *)(this_05 + 0xf0));
    L_PrintLog((char *)(DAT_000c320c + 0xc2f94),acStack_11c);
    for (local_148 = 0; local_148 < *(int *)(this_05 + 0xf0); local_148 = local_148 + 1) {
      uVar6 = CafeTile::deserialize
                        (this,*(CImage ***)(this_05 + 0x84),*(FurnitureData ***)(this_05 + 0x94));
      iVar5 = *(int *)(this_05 + 0xe8);
      iVar16 = __divsi3(local_148,iVar5);
      iVar16 = ((local_148 - iVar16 * iVar5) + *(int *)(this_05 + 0xf4) +
               *piVar17 * (iVar16 + *(int *)(this_05 + 0xf8))) * 4;
      operator_delete(*(void **)(*(int *)this_05 + iVar16));
      *(undefined4 *)(*(int *)this_05 + iVar16) = uVar6;
    }
    if (0x3b < *piVar15) {
      while (-1 < *(int *)(this_05 + 0x100)) {
        **(undefined4 **)(this_05 + 0x104) = 0;
        Vector<int>::move((Vector<int> *)(this_05 + 0xfc),1,-1);
        *(int *)(this_05 + 0x100) = *(int *)(this_05 + 0x100) + -1;
      }
      iVar5 = DataInputStream::readInt(this);
      iVar16 = DAT_000c3210;
      for (local_148 = 0; local_148 < iVar5; local_148 = local_148 + 1) {
        iVar9 = DataInputStream::readInt(this);
        if ((iVar9 < 0) || (*(int *)(this_05 + 0x90) <= iVar9)) {
          printf((char *)(iVar16 + 0xc308c),iVar9);
          if ((-1 < iVar9) && (iVar9 <= *(int *)(this_05 + 0x100))) {
            *(undefined4 *)(iVar9 * 4 + *(int *)(this_05 + 0x104)) = 0;
            Vector<int>::move((Vector<int> *)(this_05 + 0xfc),iVar9 + 1,-1);
            *(int *)(this_05 + 0x100) = *(int *)(this_05 + 0x100) + -1;
          }
        }
        else {
          iVar22 = *(int *)(this_05 + 0xfc);
          iVar12 = *(int *)(this_05 + 0x100) + 2;
          if (iVar22 < iVar12) {
            iVar22 = iVar22 * 2;
            if (iVar22 < iVar12) {
              iVar22 = iVar12;
            }
            Vector<int>::resize((Vector<int> *)(this_05 + 0xfc),iVar22,-1);
          }
          iVar22 = *(int *)(this_05 + 0x100);
          *(int *)(this_05 + 0x100) = iVar22 + 1;
          *(int *)((iVar22 + 1) * 4 + *(int *)(this_05 + 0x104)) = iVar9;
        }
      }
    }
    if (this != (DataInputStream *)0x0) {
      (**(code **)(*(int *)this + 4))(this);
    }
    generateTileGeometry(this_05);
    local_148 = 8;
    for (iVar16 = 0; iVar5 = DAT_000c3214, iVar16 < *piVar18 * *piVar17; iVar16 = iVar16 + 1) {
      iVar22 = iVar16 * 4;
      iVar9 = *(int *)(*(int *)(*(int *)this_05 + iVar22) + 0xc);
      if (iVar9 != 0) {
        *(short *)(iVar9 + 0x2c) = (short)iVar16;
        piVar15 = *(int **)(*(int *)(*(int *)this_05 + iVar22) + 0xc);
        (**(code **)(*piVar15 + 0xc))
                  (piVar15,((int)**(short **)(iVar23 + DAT_000c321c) >> 1) + 1 +
                           (uint)*(ushort *)(*(int *)(this_05 + 0xc) + local_148 + -6) & 0xffff |
                           ((uint)*(ushort *)(iVar16 * 0x10 + *(int *)(this_05 + 0xc)) +
                           (~(uint)**(byte **)(iVar23 + iVar5) -
                           (int)**(short **)(iVar23 + DAT_000c3218)) + -1) * 0x10000);
        Vector<CafeWall*>::addElement
                  ((Vector<CafeWall*> *)(this_05 + 0x48),
                   *(CafeWall **)(*(int *)(*(int *)this_05 + iVar22) + 0xc));
        CapcomOrderableList<CafeObject*>::addOrdered
                  ((CapcomOrderableList<CafeObject*> *)(this_05 + 0x20),
                   *(CafeObject **)(*(int *)(*(int *)this_05 + iVar22) + 0xc));
      }
      iVar5 = *(int *)(*(int *)(*(int *)this_05 + iVar22) + 0x10);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 0x2c) = (short)iVar16;
        piVar15 = *(int **)(*(int *)(*(int *)this_05 + iVar22) + 0x10);
        (**(code **)(*piVar15 + 0xc))
                  (piVar15,((uint)*(ushort *)(*(int *)(this_05 + 0xc) + local_148) +
                           ((uint)**(byte **)(iVar23 + DAT_000c3214) -
                           (int)**(short **)(iVar23 + DAT_000c3218)) + -1) * 0x10000 |
                           ((int)**(short **)(iVar23 + DAT_000c321c) >> 1) + 1 +
                           (uint)*(ushort *)(*(int *)(this_05 + 0xc) + local_148 + 2) & 0xffff);
        Vector<CafeWall*>::addElement
                  ((Vector<CafeWall*> *)(this_05 + 0x48),
                   *(CafeWall **)(*(int *)(*(int *)this_05 + iVar22) + 0x10));
        CapcomOrderableList<CafeObject*>::addOrdered
                  ((CapcomOrderableList<CafeObject*> *)(this_05 + 0x20),
                   *(CafeObject **)(*(int *)(*(int *)this_05 + iVar22) + 0x10));
      }
      local_148 = local_148 + 0x10;
    }
    for (iVar16 = 0; iVar16 < *piVar18 * *piVar17; iVar16 = iVar16 + 1) {
      iVar9 = iVar16 * 4;
      iVar5 = *(int *)(*(int *)(*(int *)this_05 + iVar9) + 0x14);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 0x2c) = (short)iVar16;
        piVar15 = *(int **)(*(int *)(*(int *)this_05 + iVar9) + 0x14);
        pcVar20 = *(code **)(*piVar15 + 0xc);
        uVar6 = indexToWorldCoordsCenter(this_05,iVar16);
        (*pcVar20)(piVar15,uVar6);
        addFurniture(this_05,*(Furniture **)(*(int *)(*(int *)this_05 + iVar9) + 0x14));
      }
    }
    this_01 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this_05,'\x02',0)
    ;
    *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
    while (this_04 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_01),
          this_04 != (ServingCounter *)0x0) {
      this_02 = (FoodStack *)ServingCounter::getNewRandomFoodServing(this_04,false);
      (**(code **)(*(int *)this_04 + 0x20))(this_04);
      if (this_02 != (FoodStack *)0x0) {
        pcVar20 = *(code **)(*(int *)this_04 + 0x1c);
        this_03 = (Food *)operator_new(0x70);
        Food::Food(this_03,*(FurnitureData **)
                            (**(int **)(iVar23 + DAT_000c3318) * 4 + *(int *)(this_05 + 0x94)),
                   this_02,'\0');
        (*pcVar20)(this_04,this_03);
        FoodStack::~FoodStack(this_02);
        operator_delete(this_02);
      }
    }
    CapcomOrderableList<Furniture*>::removeAll(this_01);
    operator_delete(this_01);
    L_PrintLog((char *)(DAT_000c331c + 0xc32ea),(char *)(DAT_000c3320 + 0xc32ec));
  }
  else {
    snprintf(acStack_11c,0x100,(char *)(DAT_000c2e04 + 0xc2b6a),iVar5,iVar16);
    L_PrintLog((char *)(DAT_000c2e08 + 0xc2b7a),acStack_11c);
    if (this == (DataInputStream *)0x0) {
      this_05 = (Cafe *)0x0;
    }
    else {
      this_05 = (Cafe *)0x0;
      (**(code **)(*(int *)this + 4))(this);
    }
  }
  if (local_1c == *piVar21) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_05);
}


