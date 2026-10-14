/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7904 CharacterInstance::draw */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c79f4) */
/* WARNING: Removing unreachable block (ram,0x000c79f4) */
/* CharacterInstance::draw(CapcomGraphics*) */

void __thiscall CharacterInstance::draw(CharacterInstance *this,CapcomGraphics *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar8;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  
  uVar11 = DAT_000c7c70;
  iVar15 = DAT_000c7c6c + 0xc7914;
  if (*(int *)(this + 0x90) == 0) goto LAB_000c7a68;
  if (this[0xb0] == (CharacterInstance)0x0) {
    uVar11 = 0xffffffff;
  }
  else {
    iVar5 = __divsi3(*(int *)(this + 0xb4) * 0xff,**(undefined4 **)(iVar15 + DAT_000c7c74));
    uVar11 = uVar11 | iVar5 << 0x18;
  }
  if ((this[0xb8] == (CharacterInstance)0x0) ||
     (iVar5 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(this + 0x8c) + 0x40),0), iVar5 == 0)) {
switchD_000c79f4_default:
    if (uVar11 != 0xffffffff) goto LAB_000c7a10;
  }
  else {
    if (this[0xd4] == (CharacterInstance)0x0) {
      iVar5 = CapcomApp::getInstance();
      sVar4 = *(short *)(*(int *)(iVar5 + 4) + 0x930);
      iVar5 = __divsi3(*(undefined4 *)(this + 0xbc),10);
      iVar5 = __divsi3((int)sVar4 * (iVar5 + 0x5a),1000);
      if (iVar5 < 0) {
        __aeabi_idivmod(-iVar5,0x168);
        iVar5 = -*(int *)(DAT_000c7c7c + extraout_r1_00 * 4 + 0xc7a2a);
      }
      else {
        __aeabi_idivmod(iVar5,0x168);
        iVar5 = *(int *)(DAT_000c7c78 + extraout_r1 * 4 + 0xc7a14);
      }
      iVar5 = iVar5 * 200 + 0x37;
      uVar8 = iVar5 >> 0x1f;
      uVar8 = (iVar5 >> 0x10) + uVar8 ^ uVar8;
      *(uint *)(this + 0xd0) = uVar8;
      switch(*(undefined4 *)(this + 0xc0)) {
      case 1:
      case 3:
        uVar12 = uVar8 << 8;
        uVar11 = DAT_000c7c80;
        break;
      case 2:
      case 4:
        uVar12 = uVar8 << 0x10;
        uVar11 = DAT_000c7c84;
        break;
      default:
        goto switchD_000c79f4_default;
      }
      uVar11 = uVar11 | uVar8 | uVar12;
      goto switchD_000c79f4_default;
    }
    iVar5 = *(int *)(this + 0xd8);
    uVar11 = DAT_000c7dcc;
    if ((0x8b < iVar5) && (uVar11 = DAT_000c7dd0, 200 < iVar5)) {
      *(int *)(this + 0xd8) = iVar5 + -200;
      uVar11 = DAT_000c7dd0;
    }
LAB_000c7a10:
    CapcomGraphics::setColor(param_1,uVar11);
    CapcomGraphics::setColorModulation(param_1,true);
  }
  (**(code **)(**(int **)(this + 0x90) + 0x34))
            (*(int **)(this + 0x90),param_1,*(int *)(this + 4) >> 0x10,
             (int)(short)*(int *)(this + 4),*(undefined4 *)(this + 0x38),
             *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44),
             *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c));
  if (uVar11 != 0xffffffff) {
    CapcomGraphics::setColorModulation(param_1,false);
  }
LAB_000c7a68:
  if (this[0x84] != (CharacterInstance)0x0) {
    CapcomGraphics::setColor(param_1,0x80,0xff,0xff,0xff);
    iVar9 = *(int *)(this + 4);
    piVar14 = *(int **)(iVar15 + DAT_000c7c88);
    __floatsisf(((iVar9 >> 0x10) - *piVar14 / 2) + -2);
    sVar4 = getBoundingBox(this);
    piVar13 = *(int **)(iVar15 + DAT_000c7c8c);
    iVar5 = *piVar13;
    __floatsisf((((int)(short)iVar9 - (int)sVar4) - iVar5) + -4);
    __floatsisf(*piVar14 + 4);
    uVar17 = __floatsisf(iVar5 + 4);
    CapcomGraphics::fillRect
              (param_1,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2,extraout_s3);
    iVar5 = 0;
    if (*(char *)(*(int *)(this + 0x8c) + 5) == '\x02') {
      iVar9 = 0xff;
    }
    else {
      iVar9 = 0;
      iVar5 = 0xff;
    }
    CapcomGraphics::setColor(param_1,0x80,iVar9,iVar5,0);
    iVar5 = *(int *)(this + 4);
    __floatsisf((iVar5 >> 0x10) - *piVar14 / 2);
    sVar4 = getBoundingBox(this);
    __floatsisf((((int)(short)iVar5 - (int)sVar4) - *piVar13) + -2);
    iVar5 = *(int *)(this + 0x8c);
    uVar6 = __floatsisf(*piVar14);
    uVar6 = __mulsf3(uVar6,*(undefined4 *)(iVar5 + 0x40));
    uVar7 = Character::getMaxEnergy();
    __divsf3(uVar6,uVar7);
    uVar17 = __floatsisf(*piVar13);
    CapcomGraphics::fillRect
              (param_1,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2_00,
               extraout_s3_00);
  }
  if (this[0xc6] == (CharacterInstance)0x0) {
    piVar14 = *(int **)(this + 200);
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 4))();
      *(undefined4 *)(this + 200) = 0;
    }
  }
  else {
    sVar4 = *(short *)(this + 4);
    sVar3 = getBoundingBox(this);
    sVar2 = *(short *)(this + 6);
    iVar5 = CapcomApp::getInstance();
    iVar9 = *(int *)(*(int *)(iVar5 + 4) + DAT_000c7c94);
    bVar1 = **(byte **)(iVar15 + DAT_000c7c90);
    if (*(int *)(this + 200) == 0) {
      uVar6 = PackedImage::getImage
                        (*(PackedImage **)(*(int *)(iVar5 + 4) + DAT_000c7c98),0x1e,false);
      *(undefined4 *)(this + 200) = uVar6;
    }
    (**(code **)(**(int **)(this + 200) + 0x10))
              (*(int **)(this + 200),param_1,(int)sVar2,
               ((int)sVar4 - (int)sVar3) + ((int)(iVar9 * (uint)bVar1) >> 0x11),0,0x14);
  }
  if (this[199] == (CharacterInstance)0x0) {
    piVar14 = *(int **)(this + 0xcc);
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 4))();
      *(undefined4 *)(this + 0xcc) = 0;
    }
  }
  else {
    iVar9 = *(int *)(this + 4);
    iVar5 = CapcomApp::getInstance();
    iVar16 = *(int *)(*(int *)(iVar5 + 4) + DAT_000c7c94);
    bVar1 = **(byte **)(iVar15 + DAT_000c7c90);
    if (*(int *)(this + 0xcc) == 0) {
      uVar6 = PackedImage::getImage
                        (*(PackedImage **)(*(int *)(iVar5 + 4) + DAT_000c7c98),0xe1,false);
      *(undefined4 *)(this + 0xcc) = uVar6;
      iVar15 = SmDev();
      if ((iVar15 == 4) || (iVar15 = SmDev(), iVar15 == 3)) {
        iVar15 = *(int *)(this + 0xcc);
        *(undefined4 *)(iVar15 + 0x2c) = 0x40000000;
        *(undefined4 *)(iVar15 + 0x30) = 0x3f000000;
      }
    }
    (**(code **)(**(int **)(this + 0xcc) + 0x10))
              (*(int **)(this + 0xcc),param_1,iVar9 >> 0x10,
               (int)(short)iVar9 + ((int)((uint)bVar1 * iVar16) >> 0x11),0,0x14);
  }
  piVar14 = *(int **)(this + 0x9c);
  if (piVar14 != (int *)0x0) {
    iVar5 = piVar14[0xb];
    pcVar10 = *(code **)(*piVar14 + 0x20);
    uVar6 = __floatsisf((int)(short)piVar14[8]);
    uVar6 = __mulsf3(uVar6,iVar5);
    uVar7 = __floatsisf((int)*(short *)((int)piVar14 + 0x2a));
    uVar6 = __addsf3(uVar6,uVar7);
    uVar7 = __floatsisf((int)*(short *)((int)piVar14 + 0x26));
    __addsf3(uVar6,uVar7);
    iVar15 = __fixsfsi();
    uVar6 = __floatsisf((int)*(short *)((int)piVar14 + 0x22));
    uVar6 = __mulsf3(uVar6,iVar5);
    uVar7 = __floatsisf((int)(short)piVar14[9]);
    uVar6 = __addsf3(uVar6,uVar7);
    uVar7 = __floatsisf((int)(short)piVar14[10]);
    __addsf3(uVar6,uVar7);
    iVar5 = __fixsfsi();
    iVar16 = *(int *)(this + 4);
    sVar4 = getBoundingBox(this);
    iVar9 = __divsi3(*(short *)(this + 0xa0) * 0x24,100);
    if (iVar9 < 0) {
      __aeabi_idivmod(-iVar9,0x168);
      iVar9 = -*(int *)(DAT_000c7dc8 + extraout_r1_02 * 4 + 0xc7de4);
    }
    else {
      __aeabi_idivmod(iVar9,0x168);
      iVar9 = *(int *)((int)&DAT_000c7dcc + DAT_000c7dc4 + extraout_r1_01 * 4 + 2);
    }
    (*pcVar10)(piVar14,param_1,1,1,iVar15 + -2,iVar5 + -2,iVar16 >> 0x10,
               ((int)(short)iVar16 - (sVar4 * 5 >> 2)) + (iVar9 >> 0xe),0,0x14);
  }
  return;
}


