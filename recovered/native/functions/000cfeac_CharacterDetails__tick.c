/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cfeac CharacterDetails::tick */

/* CharacterDetails::tick(long) */

void __thiscall CharacterDetails::tick(CharacterDetails *this,long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ScreenElement *this_00;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ProgressBar *pPVar11;
  ZombieCafe *this_01;
  undefined4 uVar12;
  code *pcVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar15;
  int local_d4;
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar14 = DAT_000d0254;
  tickEquip(this);
  iVar14 = iVar14 + 0xcfec0;
  if (this[0x14] == (CharacterDetails)0x0) {
    FUN_000d08a8();
  }
  if (*(int *)(this + 0x88) == 0) {
    FUN_000d08a8();
  }
  if (this[0x188] == (CharacterDetails)0x0) {
    this_01 = *(ZombieCafe **)(this + 0x78);
    iVar6 = ZombieCafe::unhandledPressOrLongEvent(this_01);
    iVar5 = DAT_000d05d0;
    if (iVar6 == 0) {
      if ((this_01[DAT_000d05d0] == (ZombieCafe)0x0) && (*(int *)(this_01 + 0x4b8) != 0)) {
        if ((int)**(short **)(iVar14 + DAT_000d05d4) < *(int *)(this_01 + DAT_000d05d8)) {
          *(int *)(this + 0x184) =
               (int)(short)*(int *)(this_01 + 0x4b8) - (int)*(short *)(this_01 + DAT_000d05dc);
          this_01[iVar5] = (ZombieCafe)0x1;
        }
        else {
          *(undefined4 *)(this + 0x184) = 0;
        }
      }
    }
    else {
      for (local_d4 = 0; local_d4 < *(int *)(this + 300) + 1; local_d4 = local_d4 + 1) {
        puVar10 = *(undefined4 **)(local_d4 * 4 + *(int *)(this + 0x130));
        iVar5 = ScreenElement::contains
                          ((ScreenElement *)*puVar10,*(long *)(*(int *)(this + 0x78) + DAT_000d0258)
                          );
        if (iVar5 != 0) {
          (*(code *)puVar10[1])(puVar10[2],*puVar10);
          break;
        }
      }
      iVar5 = DAT_000d0258;
      iVar1 = ScreenElement::contains
                        ((ScreenElement *)**(undefined4 **)(this + 0x134),
                         *(long *)(*(int *)(this + 0x78) + DAT_000d0258));
      iVar6 = *(int *)(this + 0x78);
      if (iVar1 != 0) {
        ZombieCafe::playEffect(iVar6,extraout_s0);
        puVar10 = *(undefined4 **)(this + 0x134);
        (*(code *)puVar10[1])(puVar10[2],*puVar10);
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(this + 0x78) + DAT_000d025c),'\x12',false);
        iVar6 = DAT_000d0260;
        *(undefined1 *)(*(int *)(this + 0x78) + DAT_000d0260) = 1;
        FUN_000d08a8();
      }
      iVar6 = ScreenElement::contains
                        ((ScreenElement *)**(undefined4 **)(this + 0x138),*(long *)(iVar6 + iVar5));
      if (iVar6 == 0) {
        iVar6 = ScreenElement::contains
                          ((ScreenElement *)**(undefined4 **)(this + 0x13c),
                           *(long *)(*(int *)(this + 0x78) + iVar5));
        if (iVar6 == 0) {
          iVar5 = ScreenElement::contains
                            (*(ScreenElement **)(this + 0x9c),
                             *(long *)(*(int *)(this + 0x78) + iVar5));
          iVar6 = *(int *)(this + 0x78);
          fVar15 = extraout_s0_02;
          if (iVar5 == 0) {
            fVar15 = (float)FUN_000d0848();
          }
          uVar8 = (uint)*(byte *)(*(int *)(this + 0x88) + 5);
          if (uVar8 == 1) {
            fVar15 = (float)FUN_000d0848();
          }
          if (uVar8 == 3) {
            fVar15 = (float)FUN_000d0848();
          }
          if (this[0x84] == (CharacterDetails)0x0) {
            fVar15 = (float)FUN_000d0848();
          }
          ZombieCafe::playEffect(iVar6,fVar15);
          goto LAB_000d03e2;
        }
        ZombieCafe::playEffect(*(int *)(this + 0x78),extraout_s0_01);
        puVar10 = *(undefined4 **)(this + 0x13c);
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0x78),extraout_s0_00);
        puVar10 = *(undefined4 **)(this + 0x138);
      }
      (*(code *)puVar10[1])(puVar10[2],*puVar10);
    }
  }
LAB_000d03e2:
  piVar2 = *(int **)(this + 0x108);
  uVar8 = piVar2[2] + *(int *)(this + 0x184);
  uVar9 = *(int *)(*(int *)(this + 0x104) + 0x10) - piVar2[4];
  uVar9 = uVar9 & (int)(uVar9 - 1 | uVar9) >> 0x1f;
  if ((int)uVar9 <= (int)uVar8) {
    uVar9 = (int)(uVar8 - 1 | uVar8) >> 0x1f & uVar8;
  }
  (**(code **)(*piVar2 + 0x14))(piVar2,0,uVar9);
  uVar3 = __floatsisf(*(undefined4 *)(this + 0x184));
  puVar10 = *(undefined4 **)(iVar14 + DAT_000d05e0);
  uVar4 = __floatsisf(param_1);
  uVar4 = __mulsf3(uVar4,*puVar10);
  iVar5 = __aeabi_fcmplt(uVar4,0x3f800000);
  if (iVar5 == 0) {
    uVar4 = 0x3f800000;
  }
  uVar4 = __subsf3(0x3f800000,uVar4);
  __mulsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  *(undefined4 *)(this + 0x184) = uVar3;
  iVar5 = __floatsisf();
  iVar6 = __aeabi_fcmpge(iVar5,0);
  if (iVar6 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  iVar14 = __aeabi_fcmplt(iVar5,**(undefined4 **)(iVar14 + DAT_000d05e4));
  if (iVar14 != 0) {
    *(undefined4 *)(this + 0x184) = 0;
  }
  *(undefined1 *)(*(int *)(this + 0x78) + DAT_000d05d0) = 1;
  piVar2 = (int *)**(int **)(this + 0x138);
  iVar14 = *(int *)(*(int *)(this + 0x78) + DAT_000d05e8) * piVar2[3];
  uVar8 = iVar14 >> 0x1f;
  uVar8 = (iVar14 >> 0x12) + uVar8 ^ uVar8;
  (**(code **)(*piVar2 + 0x14))(piVar2,uVar8,*(int *)(this + 0x10) / 2);
  (**(code **)(*(int *)**(undefined4 **)(this + 0x13c) + 0x14))
            ((int *)**(undefined4 **)(this + 0x13c),*(int *)(this + 0xc) - uVar8,
             *(int *)(this + 0x10) / 2);
  String::String(aSStack_90);
  String::String(aSStack_88);
  uVar3 = Character::getAdditionEnergy(*(Character **)(this + 0x88));
  uVar4 = Character::getMaxEnergy();
  iVar5 = *(int *)(this + 0x88);
  uVar12 = *(undefined4 *)(iVar5 + 0x40);
  uVar7 = __floatsisf(*(undefined4 *)(this + 0x118));
  iVar14 = __aeabi_fcmpeq(uVar7,uVar12);
  if (iVar14 == 0) {
    uVar7 = __fixsfsi(uVar12);
    *(undefined4 *)(this + 0x118) = uVar7;
    iVar14 = __fixsfsi(*(undefined4 *)(iVar5 + 0x40));
    ProgressBar::setValue(*(ProgressBar **)(this + 0x110),iVar14,false);
  }
  iVar14 = __fixsfsi(uVar3);
  uVar3 = __floatsisf();
  __subsf3(uVar4,uVar3);
  iVar5 = __fixsfsi();
  if (*(int *)(this + 0x11c) < iVar5) {
    *(undefined4 *)(*(int *)(this + 0x114) + 0x8c) = DAT_000d05ec;
    String::valueOf((int)aSStack_80);
    String::operator=(aSStack_90,aSStack_80);
    String::~String(aSStack_80);
    ProgressBar::setMaximumValue(*(ProgressBar **)(this + 0x110),iVar14 + *(int *)(this + 0x11c));
    *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 10;
  }
  else if (*(int *)(this + 0x11c) == iVar5) {
    *(undefined4 *)(*(int *)(this + 0x114) + 0x8c) = 0xffffffff;
    String::valueOf((int)aSStack_78);
    String::operator=(aSStack_90,aSStack_78);
    String::~String(aSStack_78);
    pPVar11 = *(ProgressBar **)(this + 0x110);
    Character::getMaxEnergy();
    iVar14 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar11,iVar14);
    *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 10;
  }
  else {
    Character::getMaxEnergy();
    __fixsfsi();
    String::valueOf((int)aSStack_70);
    String::operator=(aSStack_90,aSStack_70);
    String::~String(aSStack_70);
    uVar3 = Character::getAdditionEnergy(*(Character **)(this + 0x88));
    iVar14 = __aeabi_fcmpeq(uVar3,0);
    if (iVar14 == 0) {
      uVar3 = Character::getMaxEnergy();
      uVar4 = Character::getAdditionEnergy(*(Character **)(this + 0x88));
      __subsf3(uVar3,uVar4);
      __fixsfsi();
      String::valueOf((int)aSStack_68);
      String::String(aSStack_60,(char *)(DAT_000d08ac + 0xd0656));
      String::operator+(aSStack_58,aSStack_68,aSStack_60);
      Character::getAdditionEnergy(*(Character **)(this + 0x88));
      __fixsfsi();
      String::valueOf((int)aSStack_50);
      String::operator+(aSStack_48,aSStack_58,aSStack_50);
      String::operator=(aSStack_90,aSStack_48);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
      String::~String(aSStack_68);
    }
    pPVar11 = *(ProgressBar **)(this + 0x110);
    Character::getMaxEnergy();
    iVar14 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar11,iVar14);
    pPVar11 = *(ProgressBar **)(this + 0x110);
    iVar14 = __fixsfsi(*(undefined4 *)(*(int *)(this + 0x88) + 0x40));
    ProgressBar::setValue(pPVar11,iVar14,false);
  }
  piVar2 = *(int **)(this + 0x114);
  pcVar13 = *(code **)(*piVar2 + 0x44);
  __fixsfsi(*(undefined4 *)(*(int *)(this + 0x88) + 0x40));
  String::valueOf((int)aSStack_40);
  String::String(aSStack_38,(char *)(DAT_000d08b0 + 0xd06fe));
  String::operator+(aSStack_30,aSStack_40,aSStack_38);
  String::String(aSStack_28,aSStack_90);
  String::operator+(aSStack_20,aSStack_30,aSStack_28);
  (*pcVar13)(piVar2,aSStack_20);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  String::~String(aSStack_40);
  this_00 = *(ScreenElement **)(this + 0x110);
  piVar2 = *(int **)(this + 0x114);
  iVar14 = ScreenElement::localToParentCoords
                     (this_00,*(int *)(this_00 + 0xc),*(int *)(this_00 + 0x10));
  (**(code **)(*piVar2 + 0x14))(piVar2,iVar14 >> 0x10,(int)(short)iVar14);
  (**(code **)(**(int **)(this + 0x110) + 8))(*(int **)(this + 0x110),param_1);
  (**(code **)(**(int **)(this + 0x124) + 8))(*(int **)(this + 0x124),param_1);
  String::~String(aSStack_88);
  String::~String(aSStack_90);
  FUN_000d08a8();
  return;
}


