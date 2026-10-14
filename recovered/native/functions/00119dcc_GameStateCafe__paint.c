/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119dcc GameStateCafe::paint */

/* GameStateCafe::paint(CapcomGraphics*) */

void __thiscall GameStateCafe::paint(GameStateCafe *this,CapcomGraphics *param_1)

{
  ushort *puVar1;
  FurnitureData FVar2;
  short sVar3;
  Furniture *this_00;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  Furniture FVar12;
  int extraout_r1;
  int extraout_r1_00;
  ushort *puVar13;
  FurnitureData *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  Cafe *pCVar22;
  undefined1 *puVar23;
  int iVar24;
  short *psVar25;
  undefined8 uVar26;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  
  CapcomGraphics::translate((long)param_1);
  glPushMatrix();
  glScalef(*(undefined4 *)(this + 0x1e4),*(undefined4 *)(this + 0x1e4),0x3f800000);
  iVar24 = DAT_0011a0f4;
  Cafe::paint(*(Cafe **)(this + 0x14),param_1);
  iVar24 = iVar24 + 0x119e04;
  if (((*(int *)(this + 0x40) == 0) || (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0')) ||
     ((*(long *)(*(int *)(this + 0xc) + 0x4b8) != 0 &&
      (iVar6 = ScreenElement::contains
                         (*(ScreenElement **)(this + 0x84),*(long *)(*(int *)(this + 0xc) + 0x4b8)),
      iVar6 != 0)))) goto LAB_0011a170;
  CapcomGraphics::setColorModulation(param_1,true);
  pFVar14 = *(FurnitureData **)(*(int *)(this + 0x40) + 0x38);
  FVar2 = pFVar14[0x44];
  if (FVar2 == (FurnitureData)0x6) {
    if (*(long *)(*(int *)(this + 0xc) + 0x4b8) != 0) {
      lVar5 = *(long *)(this + 0x14);
      screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + 0x4b8));
      iVar6 = Cafe::pickWall(lVar5);
      if (iVar6 != 0) {
        if (((*(int *)(*(int *)(this + 0xc) + 0x4b8) == 0) || (*(int *)(iVar6 + 0x44) != 0)) ||
           (iVar4 = DAT_0011a0f8, *(char *)(iVar6 + 0x3b) != '\0')) {
          iVar4 = DAT_0011a528;
        }
        CapcomGraphics::setColor(param_1,**(int **)(iVar24 + iVar4));
        FVar12 = *(Furniture *)(iVar6 + 0x3a);
        piVar11 = (int *)Cafe::getFurnitureImage
                                   (*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0011a0fc),
                                    (uchar)FVar12);
        uVar20 = 0x24;
        if (FVar12 == (Furniture)0x0) {
          uVar20 = 0xc;
        }
        (**(code **)(*piVar11 + 0x10))
                  (piVar11,param_1,*(int *)(iVar6 + 4) >> 0x10,(int)(short)*(int *)(iVar6 + 4),
                   FVar12,uVar20);
        this_00 = *(Furniture **)(this + 0x40);
        goto LAB_00119ee4;
      }
    }
  }
  else {
    iVar6 = (int)*(short *)(*(int *)(this + 0x40) + 0x2c);
    piVar11 = *(int **)(iVar24 + DAT_0011a100);
    if ((FVar2 == (FurnitureData)0xe) || (FVar2 == (FurnitureData)0xf)) {
      iVar4 = isValidFurnitureTile(this,iVar6,pFVar14);
      iVar6 = DAT_0011a104;
      if (iVar4 != 0) {
        iVar6 = DAT_0011a0f8;
      }
      CapcomGraphics::setColor(param_1,**(int **)(iVar24 + iVar6));
      pCVar22 = *(Cafe **)(this + 0x14);
      iVar6 = (int)*(short *)(*(int *)(this + 0x40) + 0x2c);
    }
    else {
      if (FVar2 != (FurnitureData)0x11) {
        iVar4 = isValidFurnitureTile(this,iVar6,pFVar14);
        iVar6 = DAT_0011a104;
        if (iVar4 != 0) {
          iVar6 = DAT_0011a0f8;
        }
        CapcomGraphics::setColor(param_1,**(int **)(iVar24 + iVar6));
        iVar6 = Cafe::indexToWorldCoordsCenter
                          (*(Cafe **)(this + 0x14),(int)*(short *)(*(int *)(this + 0x40) + 0x2c));
        piVar11 = (int *)Cafe::getFurnitureImage(*(Cafe **)(this + 0x14),*piVar11,'\0');
        (**(code **)(*piVar11 + 0x10))(piVar11,param_1,iVar6 >> 0x10,(int)(short)iVar6,0,0x12);
        goto LAB_0011a010;
      }
      pCVar22 = *(Cafe **)(this + 0x14);
    }
    iVar6 = Cafe::indexToWorldCoordsCenter(pCVar22,iVar6);
    piVar11 = (int *)Cafe::getFurnitureImage(*(Cafe **)(this + 0x14),*piVar11,'\0');
    (**(code **)(*piVar11 + 0x10))(piVar11,param_1,iVar6 >> 0x10,(int)(short)iVar6,0,0x12);
    lVar5 = Cafe::indexToStaggeredCoords((int)*(short *)(*(int *)(this + 0x40) + 0x2c));
    iVar6 = Cafe::staggeredToDiamondCoords(lVar5);
    iVar6 = iVar6 >> 0x10;
    lVar5 = Cafe::indexToStaggeredCoords((int)*(short *)(*(int *)(this + 0x40) + 0x2c));
    sVar3 = Cafe::staggeredToDiamondCoords(lVar5);
    this_00 = *(Furniture **)(this + 0x40);
    iVar4 = (int)sVar3;
    FVar12 = this_00[0x34];
    iVar15 = *(int *)(this + 0x14);
    iVar21 = (int)*(short *)(iVar15 + 0x9e) + (uint)*(byte *)(iVar15 + 0xa1);
    if (((iVar4 == iVar21 + 1) && (iVar6 < *(short *)(iVar15 + 0x9c))) &&
       ((int)((int)*(short *)(iVar15 + 0x9c) - (uint)*(byte *)(iVar15 + 0xa0)) <= iVar6)) {
      FVar12 = (Furniture)0x1;
    }
    else if (((iVar6 == ((int)*(short *)(iVar15 + 0x9c) - (uint)*(byte *)(iVar15 + 0xa0)) + -1) &&
             (*(short *)(iVar15 + 0x9e) < iVar4)) && (iVar4 <= iVar21)) {
      FVar12 = (Furniture)0x0;
    }
LAB_00119ee4:
    Furniture::setOrientation(this_00,(uchar)FVar12);
  }
LAB_0011a010:
  if (*(int *)(this + 0x158) != 0) {
    iVar6 = __divsi3(*(short *)(this + 0x160) * 0x168,(int)**(short **)(iVar24 + DAT_0011a108));
    if (iVar6 < 0) {
      __aeabi_idivmod(-iVar6,0x168);
      iVar6 = -*(int *)(DAT_0011a110 + extraout_r1_00 * 4 + 0x11a070);
    }
    else {
      __aeabi_idivmod(iVar6,0x168);
      iVar6 = *(int *)(DAT_0011a10c + extraout_r1 * 4 + 0x11a05a);
    }
    CapcomGraphics::setColor
              (param_1,**(uint **)(iVar24 + DAT_0011a0f8) & 0xffffff |
                       ((int)(((int)((uint)**(byte **)(iVar24 + DAT_0011a114) * iVar6) >> 0x10) +
                             (uint)**(byte **)(iVar24 + DAT_0011a114)) >> 1) << 0x18);
    *(undefined4 *)(*(int *)(this + 0x158) + 0xc) = *(undefined4 *)(*(int *)(this + 0x158) + 4);
    while( true ) {
      puVar13 = *(ushort **)(*(int *)(this + 0x158) + 0xc);
      if (puVar13 != (ushort *)0x0) {
        puVar1 = puVar13 + 2;
        puVar13 = (ushort *)(uint)*puVar13;
        *(undefined4 *)(*(int *)(this + 0x158) + 0xc) = *(undefined4 *)puVar1;
      }
      if ((short)puVar13 == 0) break;
      iVar6 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)puVar13);
      piVar11 = (int *)Cafe::getFurnitureImage
                                 (*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0011a100),'\0');
      (**(code **)(*piVar11 + 0x10))(piVar11,param_1,iVar6 >> 0x10,(int)(short)iVar6,0,0x12);
    }
  }
  if (*(int *)(this + 0x15c) != 0) {
    CapcomGraphics::setColor(param_1,**(int **)(iVar24 + DAT_0011a118));
    *(undefined4 *)(*(int *)(this + 0x15c) + 0xc) = *(undefined4 *)(*(int *)(this + 0x15c) + 4);
    while( true ) {
      puVar13 = *(ushort **)(*(int *)(this + 0x15c) + 0xc);
      if (puVar13 != (ushort *)0x0) {
        puVar1 = puVar13 + 2;
        puVar13 = (ushort *)(uint)*puVar13;
        *(undefined4 *)(*(int *)(this + 0x15c) + 0xc) = *(undefined4 *)puVar1;
      }
      if ((short)puVar13 == 0) break;
      iVar6 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)puVar13);
      piVar11 = (int *)Cafe::getFurnitureImage
                                 (*(Cafe **)(this + 0x14),**(int **)(iVar24 + DAT_0011a3fc),'\0');
      (**(code **)(*piVar11 + 0x10))(piVar11,param_1,iVar6 >> 0x10,(int)(short)iVar6,0,0x12);
    }
  }
  CapcomGraphics::setColorModulation(param_1,false);
  (**(code **)(**(int **)(this + 0x40) + 8))(*(int **)(this + 0x40),param_1);
LAB_0011a170:
  if (this[DAT_0011a400] == (GameStateCafe)0x9) {
    pCVar22 = *(Cafe **)(this + 0x14);
    lVar5 = Cafe::diamondToStaggeredCoords
                      (*(short *)(pCVar22 + 0x9c) + -1,*(short *)(pCVar22 + 0x9e) + 1);
    iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
    uVar7 = Cafe::indexToWorldCoordsCenter(pCVar22,iVar6);
    psVar25 = *(short **)(iVar24 + DAT_0011a404);
    pCVar22 = *(Cafe **)(this + 0x14);
    uVar16 = uVar7 - ((int)*psVar25 >> 1);
    lVar5 = Cafe::diamondToStaggeredCoords
                      ((*(short *)(pCVar22 + 0x9c) + -1) -
                       (uint)*(byte *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x39),
                       *(short *)(pCVar22 + 0x9e) + 1);
    iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
    uVar8 = Cafe::indexToWorldCoordsCenter(pCVar22,iVar6);
    pCVar22 = *(Cafe **)(this + 0x14);
    uVar17 = uVar8 - ((int)*psVar25 >> 1);
    lVar5 = Cafe::diamondToStaggeredCoords
                      (*(short *)(pCVar22 + 0x9c) + -1,
                       *(short *)(pCVar22 + 0x9e) + 1 +
                       (uint)*(byte *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x3a));
    iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
    uVar9 = Cafe::indexToWorldCoordsCenter(pCVar22,iVar6);
    pCVar22 = *(Cafe **)(this + 0x14);
    uVar18 = uVar9 - ((int)*psVar25 >> 1);
    lVar5 = Cafe::diamondToStaggeredCoords
                      ((*(short *)(pCVar22 + 0x9c) + -1) -
                       (uint)*(byte *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x39),
                       *(short *)(pCVar22 + 0x9e) + 1 +
                       (uint)*(byte *)(*(int *)(*(int *)(this + 0x84) + 0xd0) + 0x3a));
    iVar6 = Cafe::staggeredCoordsToIndex(lVar5);
    uVar10 = Cafe::indexToWorldCoordsCenter(pCVar22,iVar6);
    uVar19 = uVar10 - ((int)*psVar25 >> 1);
    iVar6 = CFColor::interpolate
                      (**(long **)(iVar24 + DAT_0011a408),**(long **)(iVar24 + DAT_0011a40c),
                       (*(int *)(*(int *)(this + 0xc) + DAT_0011a410) >> 1) + 0x8000,0);
    CapcomGraphics::setColor(param_1,iVar6);
    __floatsisf((int)(uVar16 & 0xffff | uVar7 & 0xffff0000) >> 0x10);
    __floatsisf((int)(short)uVar16);
    __floatsisf((int)(uVar17 & 0xffff | uVar8 & 0xffff0000) >> 0x10);
    __floatsisf((int)(short)uVar17);
    puVar23 = *(undefined1 **)(iVar24 + DAT_0011a414);
    uVar26 = __floatunsisf(*puVar23);
    CapcomGraphics::drawLine
              (param_1,(float)uVar26,(float)((ulonglong)uVar26 >> 0x20),extraout_s2,extraout_s3,
               extraout_s4);
    __floatsisf((int)(uVar18 & 0xffff | uVar9 & 0xffff0000) >> 0x10);
    __floatsisf((int)(short)uVar18);
    uVar26 = __floatunsisf(*puVar23);
    CapcomGraphics::drawLine
              (param_1,(float)uVar26,(float)((ulonglong)uVar26 >> 0x20),extraout_s2_00,
               extraout_s3_00,extraout_s4_00);
    __floatsisf((int)(uVar19 & 0xffff | uVar10 & 0xffff0000) >> 0x10);
    __floatsisf((int)(short)uVar19);
    uVar26 = __floatunsisf(*puVar23);
    CapcomGraphics::drawLine
              (param_1,(float)uVar26,(float)((ulonglong)uVar26 >> 0x20),extraout_s2_01,
               extraout_s3_01,extraout_s4_01);
    uVar26 = __floatunsisf(*puVar23);
    CapcomGraphics::drawLine
              (param_1,(float)uVar26,(float)((ulonglong)uVar26 >> 0x20),extraout_s2_02,
               extraout_s3_02,extraout_s4_02);
  }
  CapcomGraphics::finishBatch();
  glPopMatrix();
  CapcomGraphics::translate((long)param_1);
  if (*(short *)(this + 0x16c) != 0) {
    psVar25 = *(short **)(iVar24 + DAT_0011a418);
    if (*(short *)(this + 0x16c) < *psVar25) {
      CapcomGraphics::setColorModulation(param_1,true);
      iVar24 = __divsi3(*(short *)(this + 0x16c) * 0xff,(int)*psVar25);
      CapcomGraphics::setColor(param_1,DAT_0011a41c | iVar24 << 0x18);
    }
    if (*(char *)(*(int *)(*(int *)(this + 0x44) + 0x38) + 0x44) == '\x04') {
      uVar20 = *(undefined4 *)(*(int *)(this + 0x1e8) + 0x220);
    }
    else {
      uVar20 = *(undefined4 *)(*(int *)(this + 0x1e8) + 0x154);
    }
    *(undefined4 *)(*(int *)(this + 0x170) + 0x60) = uVar20;
    iVar24 = *(int *)(this + 0x170);
    (**(code **)(**(int **)(iVar24 + 0x60) + 0x10))
              (*(int **)(iVar24 + 0x60),param_1,*(undefined4 *)(iVar24 + 4),
               *(undefined4 *)(iVar24 + 8),0,*(undefined1 *)(iVar24 + 0x15));
    if (*(short *)(this + 0x16c) < *psVar25) {
      CapcomGraphics::setColorModulation(param_1,false);
    }
  }
  iVar24 = DAT_0011a520;
  (**(code **)(**(int **)(this + 0x78) + 0xc))(*(int **)(this + 0x78),param_1);
  if ((((byte)this[iVar24] < 0xe) && ((1 << (uint)(byte)this[iVar24] & DAT_0011a524) != 0)) &&
     ((*(char *)(*(int *)(this + 0x84) + 0x14) == '\0' ||
      (*(char *)(*(int *)(this + 0xbc) + 0x14) == '\0')))) {
    (**(code **)(**(int **)(this + 0xe0) + 0xc))(*(int **)(this + 0xe0),param_1);
  }
  piVar11 = *(int **)(this + 0x7c);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0x80);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0xd0);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0x13c);
  if ((piVar11 != (int *)0x0) && ((char)piVar11[5] != '\0')) {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0xd4);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0x134);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  return;
}


