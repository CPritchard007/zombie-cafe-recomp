/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4f70 CafeWall::draw */

/* CafeWall::draw(CapcomGraphics*) */

void __thiscall CafeWall::draw(CafeWall *this,CapcomGraphics *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  code *pcVar16;
  CafeWall CVar17;
  int local_6c;
  int local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  CapcomGraphics::setColorModulation(param_1,true);
  local_64 = *(int *)(this + 0x40);
  iVar15 = DAT_000c5308 + 0xc4f90;
  if (this[0x3a] == (CafeWall)0x0) {
    iVar6 = -1;
  }
  else {
    local_64 = CFColor::changeBrightness(local_64,-0x33);
    iVar6 = DAT_000c530c;
  }
  iVar9 = *(int *)(*(short *)(this + 0x38) * 4 + *(int *)(this + 0x34));
  *(undefined4 *)(iVar9 + 0x2c) = DAT_000c5310;
  *(undefined4 *)(iVar9 + 0x30) = 0x3f400000;
  if (this[0x3b] == (CafeWall)0x0) {
    CapcomGraphics::setColor(param_1,local_64);
    piVar5 = *(int **)(*(short *)(this + 0x38) * 4 + *(int *)(this + 0x34));
    uVar8 = 0x24;
    if (this[0x3a] == (CafeWall)0x0) {
      uVar8 = 0xc;
    }
    (**(code **)(*piVar5 + 0x10))
              (piVar5,param_1,*(int *)(this + 4) >> 0x10,(int)(short)*(int *)(this + 4),this[0x3a],
               uVar8);
    if ((this[0x3c] == (CafeWall)0x0) ||
       ((iVar6 = CapcomApp::getInstance(),
        *(char *)(*(int *)(*(int *)(iVar6 + 4) + 0x7e8) + 100) == '\0' &&
        (iVar6 = CapcomApp::getInstance(),
        *(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x7e8) + 0xe0) == 0)))) goto LAB_000c53ae;
    iVar6 = *(int *)(this + 0x34);
    CImage::getWidth(*(CImage **)(*(short *)(this + 0x38) * 4 + iVar6));
    uVar8 = __floatsisf();
    uVar7 = __floatsisf((int)**(short **)(iVar15 + DAT_000c532c));
    __subsf3(uVar8,uVar7);
    local_6c = __fixsfsi();
    if (this[0x3a] == (CafeWall)0x0) {
      local_6c = local_6c + **(int **)(iVar15 + DAT_000c5314);
      iVar9 = **(int **)(iVar15 + DAT_000c5318);
    }
    else {
      local_6c = -local_6c - **(int **)(iVar15 + DAT_000c5314);
      iVar9 = -**(int **)(iVar15 + DAT_000c5318);
    }
    uVar7 = __floatsisf(iVar9);
    uVar8 = __mulsf3(uVar8,**(undefined4 **)(iVar15 + DAT_000c53f0));
    uVar8 = __addsf3(uVar7,uVar8);
    uVar7 = __floatsisf((int)**(short **)(iVar15 + DAT_000c53f4));
    __addsf3(uVar8,uVar7);
    iVar9 = __fixsfsi();
    uVar8 = DAT_000c53fc;
    iVar13 = **(int **)(iVar15 + DAT_000c53f8) * 4;
    iVar15 = *(int *)(iVar6 + iVar13);
    *(undefined4 *)(iVar15 + 0x30) = 0x3f400000;
    *(undefined4 *)(iVar15 + 0x2c) = uVar8;
    piVar5 = *(int **)(*(int *)(this + 0x34) + iVar13);
    pcVar16 = *(code **)(*piVar5 + 0x10);
    puVar14 = (undefined4 *)((short)*(int *)(this + 4) + iVar9);
    puVar11 = (undefined4 *)((*(int *)(this + 4) >> 0x10) + local_6c);
    CVar17 = this[0x3a];
  }
  else {
    CapcomGraphics::setColor(param_1,iVar6);
    CImage::getWidth(*(CImage **)(*(short *)(this + 0x38) * 4 + *(int *)(this + 0x34)));
    iVar6 = __floatsisf();
    if (this[0x3a] == (CafeWall)0x0) {
      iVar9 = **(int **)(iVar15 + DAT_000c5314);
    }
    else {
      iVar9 = -**(int **)(iVar15 + DAT_000c5314);
    }
    iVar12 = **(int **)(iVar15 + DAT_000c5318);
    iVar13 = CapcomApp::getInstance();
    piVar5 = *(int **)(iVar15 + DAT_000c531c);
    if ((*(char *)(*(int *)(*(int *)(iVar13 + 4) + 0x7e8) + 100) == '\0') &&
       (iVar13 = CapcomApp::getInstance(),
       *(int *)(*(int *)(*(int *)(iVar13 + 4) + 0x7e8) + 0xe0) == 0)) {
      piVar1 = *(int **)(*piVar5 * 4 + *(int *)(this + 0x34));
      uVar8 = 0x24;
      if (this[0x3a] == (CafeWall)0x0) {
        uVar8 = 0xc;
      }
      (**(code **)(*piVar1 + 0x10))
                (piVar1,param_1,(*(int *)(this + 4) >> 0x10) + iVar9,
                 (short)*(int *)(this + 4) + iVar12,this[0x3a],uVar8);
    }
    uVar8 = DAT_000c5310;
    iVar13 = *piVar5 * 4;
    iVar9 = *(int *)(*(int *)(this + 0x34) + iVar13);
    *(undefined4 *)(iVar9 + 0x30) = 0x3f400000;
    *(undefined4 *)(iVar9 + 0x2c) = uVar8;
    iVar12 = *(int *)(this + 0x34);
    piVar5 = (int *)(iVar12 + *(short *)(this + 0x38) * 4);
    iVar9 = CImage::getHeight((CImage *)*piVar5);
    iVar13 = CImage::getHeight(*(CImage **)(iVar12 + iVar13));
    uVar8 = __floatsisf((iVar9 - iVar13) + **(int **)(iVar15 + DAT_000c5320));
    uVar7 = __mulsf3(iVar6,**(undefined4 **)(iVar15 + DAT_000c5324));
    uVar7 = __subsf3(uVar8,uVar7);
    uVar2 = __floatsisf(**(undefined4 **)(iVar15 + DAT_000c5328));
    uVar7 = __addsf3(uVar7,uVar2);
    iVar15 = *(int *)(this + 4);
    uVar2 = __floatsisf(iVar15 >> 0x10);
    uVar3 = __floatsisf((short)iVar15 - iVar9);
    iVar15 = iVar6;
    if (this[0x3a] != (CafeWall)0x0) {
      iVar15 = iVar6 + -0x80000000;
    }
    uVar4 = __addsf3(uVar2,iVar15);
    local_58 = uVar2;
    local_54 = uVar3;
    local_50 = uVar4;
    local_4c = uVar3;
    local_48 = uVar2;
    local_44 = __addsf3(uVar3,uVar7);
    local_40 = uVar4;
    local_3c = __addsf3(uVar3,uVar8);
    iVar9 = *piVar5;
    uVar3 = *(undefined4 *)(iVar9 + 0x2c);
    uVar2 = __floatsisf((int)*(short *)(iVar9 + 0x1c));
    __mulsf3(uVar2,uVar3);
    __fixsfsi();
    uVar2 = __floatsisf();
    iVar15 = *(int *)(iVar9 + 0x14);
    if (iVar15 == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = *(undefined4 *)(iVar15 + 8);
    }
    uVar10 = *(undefined4 *)(iVar9 + 0x30);
    uVar4 = __mulsf3(uVar4,uVar10);
    uVar2 = __mulsf3(uVar2,uVar4);
    uVar4 = __floatsisf((int)*(short *)(iVar9 + 0x1e));
    __mulsf3(uVar4,uVar3);
    __fixsfsi();
    uVar3 = __floatsisf();
    if (iVar15 == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = *(undefined4 *)(iVar15 + 0xc);
    }
    uVar4 = __mulsf3(uVar4,uVar10);
    uVar3 = __mulsf3(uVar3,uVar4);
    if (iVar15 == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = *(undefined4 *)(iVar15 + 8);
    }
    uVar4 = __mulsf3(uVar4,uVar10);
    uVar4 = __mulsf3(iVar6,uVar4);
    local_30 = __addsf3(uVar2,uVar4);
    if (iVar15 == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = *(undefined4 *)(iVar15 + 0xc);
    }
    uVar4 = __mulsf3(uVar4,uVar10);
    uVar7 = __mulsf3(uVar7,uVar4);
    local_24 = __addsf3(uVar3,uVar7);
    if (iVar15 == 0) {
      uVar7 = 0x3f800000;
    }
    else {
      uVar7 = *(undefined4 *)(iVar15 + 0xc);
    }
    local_38 = uVar2;
    local_34 = uVar3;
    local_2c = uVar3;
    local_28 = uVar2;
    local_20 = local_30;
    uVar7 = __mulsf3(uVar7,uVar10);
    uVar8 = __mulsf3(uVar8,uVar7);
    local_1c = __addsf3(uVar3,uVar8);
    CapcomGraphics::setColor(param_1,local_64);
    piVar5 = *(int **)(*(short *)(this + 0x38) * 4 + *(int *)(this + 0x34));
    CVar17 = (CafeWall)0x4;
    puVar11 = &local_58;
    pcVar16 = *(code **)(*piVar5 + 0x28);
    puVar14 = &local_38;
  }
  (*pcVar16)(piVar5,param_1,puVar11,puVar14,CVar17);
LAB_000c53ae:
  CapcomGraphics::setColorModulation(param_1,false);
  if (*(int *)(this + 0x44) != 0) {
    getTopLeft(this);
    CapcomGraphics::translate((long)param_1);
    (**(code **)(**(int **)(this + 0x44) + 8))(*(int **)(this + 0x44),param_1);
    CapcomGraphics::translate((long)param_1);
  }
  return;
}


