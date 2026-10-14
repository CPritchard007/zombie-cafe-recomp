/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fbb54 ObjectiveDialog::tick */

/* ObjectiveDialog::tick(long) */

void ObjectiveDialog::tick(long param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  String *this;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  ZombieCafe *this_00;
  ConfirmDialog *pCVar12;
  int *piVar13;
  ProgressBar *pPVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s0_03;
  float fVar18;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar19;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  int local_1c0;
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  String aSStack_19c [8];
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [6];
  short sStack_b6;
  StringUtil aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  char acStack_9c [128];
  undefined4 local_1c;
  
  iVar11 = DAT_001fbe74 + 0x1fbb60;
  local_1c = **(undefined4 **)(iVar11 + DAT_001fbe78);
  lVar2 = param_1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    lVar2 = FUN_001fc5bc();
  }
  ScreenElement::tick(lVar2);
  this_00 = *(ZombieCafe **)(param_1 + 0x60);
  iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if (iVar3 != 0) {
    iVar3 = *(int *)(this_00 + DAT_001fbe7c);
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0xe0),iVar3 >> 0x10,(int)(short)iVar3,
                       extraout_s0,extraout_s1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x60) + DAT_001fbe7c);
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0xe4),iVar3 >> 0x10,(int)(short)iVar3,
                         extraout_s0_00,extraout_s1_00);
      uVar19 = CONCAT44(extraout_s1_01,extraout_s0_01);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0x60),extraout_s0_01);
        iVar3 = DAT_001fbe84;
        iVar16 = ObjectiveSystem::isSetComplete
                           (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fbe84));
        if (iVar16 == 0) {
          iVar16 = ObjectiveSystem::getObjectiveCount
                             (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
          iVar6 = ObjectiveSystem::getSetProgressCompletion
                            (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
          iVar7 = **(int **)(iVar11 + DAT_001fbe88);
          iVar4 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x60));
          if (iVar4 < (iVar16 - iVar6) * iVar7) {
            pCVar12 = *(ConfirmDialog **)(param_1 + 0xb0);
            Vector<String>::elementAt((int)aSStack_1ac);
            Vector<String>::elementAt((int)aSStack_1a4);
            Vector<String>::elementAt((int)aSStack_19c);
            ConfirmDialog::show(pCVar12,aSStack_1ac,aSStack_1a4,aSStack_19c,
                                *(undefined4 *)(iVar11 + DAT_001fbe98),param_1);
            String::~String(aSStack_19c);
            String::~String(aSStack_1a4);
            this = aSStack_1ac;
          }
          else {
            uVar5 = ObjectiveSystem::getBonusTimeRemaining
                              (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
            uVar8 = **(uint **)(iVar11 + DAT_001fbea0);
            uVar9 = **(uint **)(iVar11 + DAT_001fbe9c);
            iVar3 = ((*(uint **)(iVar11 + DAT_001fbe9c))[1] - ((int)uVar8 >> 0x1f)) -
                    (uint)(uVar9 < uVar8);
            uVar15 = *(undefined4 *)(iVar11 + DAT_001fbeb0);
            if ((iVar3 < (int)uVar5 >> 0x1f) ||
               (((int)uVar5 >> 0x1f == iVar3 && (uVar9 - uVar8 < uVar5)))) {
              pCVar12 = *(ConfirmDialog **)(param_1 + 0xb0);
              Vector<String>::elementAt((int)aSStack_194);
              String::String(aSStack_18c,(char *)(DAT_001fbeb8 + 0x1fbd1e));
              String::operator+(aSStack_184,aSStack_194,aSStack_18c);
              Vector<String>::elementAt((int)aSStack_17c);
              String::operator+(aSStack_174,aSStack_184,aSStack_17c);
              String::valueOf((int)aSStack_16c);
              String::operator+(aSStack_164,aSStack_174,aSStack_16c);
              Vector<String>::elementAt((int)aSStack_15c);
              String::operator+(aSStack_154,aSStack_164,aSStack_15c);
              Vector<String>::elementAt((int)aSStack_14c);
              Vector<String>::elementAt((int)aSStack_144);
              ConfirmDialog::show(pCVar12,aSStack_154,aSStack_14c,aSStack_144,uVar15,param_1);
              String::~String(aSStack_144);
              String::~String(aSStack_14c);
              String::~String(aSStack_154);
              String::~String(aSStack_15c);
              String::~String(aSStack_164);
              String::~String(aSStack_16c);
              String::~String(aSStack_174);
              String::~String(aSStack_17c);
              String::~String(aSStack_184);
              String::~String(aSStack_18c);
              this = aSStack_194;
            }
            else {
              pCVar12 = *(ConfirmDialog **)(param_1 + 0xb0);
              Vector<String>::elementAt((int)aSStack_13c);
              String::valueOf((int)aSStack_134);
              String::operator+(aSStack_12c,aSStack_13c,aSStack_134);
              Vector<String>::elementAt((int)aSStack_124);
              String::operator+(aSStack_11c,aSStack_12c,aSStack_124);
              Vector<String>::elementAt((int)aSStack_114);
              Vector<String>::elementAt((int)aSStack_10c);
              ConfirmDialog::show(pCVar12,aSStack_11c,aSStack_114,aSStack_10c,uVar15,param_1);
              String::~String(aSStack_10c);
              String::~String(aSStack_114);
              String::~String(aSStack_11c);
              String::~String(aSStack_124);
              String::~String(aSStack_12c);
              String::~String(aSStack_134);
              this = aSStack_13c;
            }
          }
          uVar19 = String::~String(this);
        }
        else {
          ObjectiveSystem::completeSet(*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
          updateObjective((ObjectiveDialog *)param_1);
          uVar19 = ObjectiveCompleteDialog::show(*(ObjectiveCompleteDialog **)(param_1 + 0x15c));
        }
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(param_1 + 0x60),extraout_s0_00);
      uVar19 = (**(code **)(*(int *)param_1 + 0x20))(param_1,0);
      *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_001fbe80) = 1;
    }
    iVar11 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x134) + 1 <= iVar11) break;
      iVar16 = iVar11 * 4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x60) + DAT_001fc224);
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(*(int *)(param_1 + 0x138) + iVar16),iVar3 >> 0x10,
                         (int)(short)iVar3,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      uVar19 = CONCAT44(extraout_s1_02,extraout_s0_02);
      if (iVar3 != 0) {
        ZombieCafe::playEffect(*(int *)(param_1 + 0x60),extraout_s0_02);
        iVar3 = DAT_001fc228;
        ObjectiveSystem::completeObjective
                  (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc228),iVar11);
        piVar13 = *(int **)(*(int *)(param_1 + 0x120) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,1);
        piVar13 = *(int **)(*(int *)(param_1 + 300) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,1);
        iVar3 = ObjectiveSystem::isSetComplete
                          (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
        uVar19 = CONCAT44(extraout_s1_03,extraout_s0_03);
        if (iVar3 != 0) {
          piVar13 = *(int **)(param_1 + 0xd4);
          pcVar10 = *(code **)(*piVar13 + 0x44);
          Vector<String>::elementAt((int)aSStack_104);
          (*pcVar10)(piVar13,aSStack_104);
          uVar19 = String::~String(aSStack_104);
        }
      }
      iVar11 = iVar11 + 1;
    }
  }
  iVar11 = DAT_001fc228;
  piVar13 = *(int **)(param_1 + 0xe4);
  uVar15 = 1;
  pcVar10 = *(code **)(*piVar13 + 0x20);
  iVar3 = ObjectiveSystem::isSetProgressComplete
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc228));
  if ((iVar3 != 0) &&
     (iVar3 = ObjectiveSystem::isSetComplete
                        (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11)), iVar3 == 0)) {
    uVar15 = 0;
  }
  (*pcVar10)(piVar13,uVar15);
  piVar13 = *(int **)(param_1 + 0x7c);
  pcVar10 = *(code **)(*piVar13 + 0x20);
  bVar1 = ObjectiveSystem::isSetProgressComplete
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
  (*pcVar10)(piVar13,bVar1 ^ 1);
  piVar13 = *(int **)(param_1 + 0xd8);
  pcVar10 = *(code **)(*piVar13 + 0x20);
  bVar1 = ObjectiveSystem::isSetProgressComplete
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
  (*pcVar10)(piVar13,bVar1 ^ 1);
  *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_001fc230) = 1;
  for (local_1c0 = 0; iVar3 = DAT_001fc5d0, local_1c0 < *(int *)(param_1 + 0xec) + 1;
      local_1c0 = local_1c0 + 1) {
    iVar3 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11),local_1c0);
    iVar16 = local_1c0 * 4;
    if (iVar3 != *(int *)(*(int *)(param_1 + 0xf0) + iVar16)) {
      pPVar14 = *(ProgressBar **)(*(int *)(param_1 + 0x108) + iVar16);
      iVar3 = ObjectiveSystem::getObjectiveCompletion
                        (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc228),local_1c0);
      ProgressBar::setValue(pPVar14,iVar3,true);
      piVar13 = *(int **)(*(int *)(param_1 + 0x114) + iVar16);
      pcVar10 = *(code **)(*piVar13 + 0x44);
      ObjectiveSystem::getObjectiveCompletion
                (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc228),local_1c0);
      String::valueOf((int)aSStack_fc);
      String::operator+(aSStack_f4,(char *)aSStack_fc);
      ObjectiveSystem::getObjectiveGoal
                (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11),local_1c0);
      String::valueOf((int)aSStack_ec);
      String::operator+(aSStack_e4,aSStack_f4,aSStack_ec);
      (*pcVar10)(piVar13,aSStack_e4);
      String::~String(aSStack_e4);
      String::~String(aSStack_ec);
      String::~String(aSStack_f4);
      String::~String(aSStack_fc);
      iVar3 = ObjectiveSystem::getSetCompletion
                        (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
      uVar15 = ObjectiveSystem::getObjectiveCount
                         (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
      __divsi3(iVar3 * 100,uVar15);
      String::valueOf((int)aSStack_d4);
      Vector<String>::elementAt((int)aSStack_cc);
      String::operator+(aSStack_dc,aSStack_d4,aSStack_cc);
      String::~String(aSStack_cc);
      String::~String(aSStack_d4);
      piVar13 = *(int **)(param_1 + 200);
      pcVar10 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_c4,aSStack_dc);
      (*pcVar10)(piVar13,aSStack_c4);
      String::~String(aSStack_c4);
      iVar3 = ObjectiveSystem::getObjectiveCompletion
                        (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11),local_1c0);
      iVar6 = ObjectiveSystem::getObjectiveGoal
                        (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11),local_1c0);
      if (iVar3 == iVar6) {
        free(*(void **)(param_1 + 0x164));
        *(undefined4 *)(param_1 + 0x164) = 0;
        ObjectiveSystem::getObjectiveCount(*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11))
        ;
        ObjectiveSystem::getSetProgressCompletion
                  (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
        String::valueOf((int)aSStack_bc);
        StringUtil::getEncodingString(aSStack_b4,'\0');
        uVar15 = String::getBytes(aSStack_bc,aSStack_b4,0,0,0);
        *(undefined4 *)(param_1 + 0x164) = uVar15;
        String::~String((String *)aSStack_b4);
        *(int *)(param_1 + 0x168) = (int)sStack_b6;
        piVar13 = *(int **)(param_1 + 0xd8);
        pcVar10 = *(code **)(*piVar13 + 0x44);
        String::String(aSStack_ac,*(char **)(param_1 + 0x164));
        (*pcVar10)(piVar13,aSStack_ac);
        String::~String(aSStack_ac);
        iVar3 = ObjectiveSystem::getObjectiveCompleted
                          (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc228),local_1c0)
        ;
        piVar13 = *(int **)(*(int *)(param_1 + 0x114) + iVar16);
        pcVar10 = *(code **)(*piVar13 + 0x20);
        if (iVar3 == 0) {
          (*pcVar10)();
          piVar13 = *(int **)(*(int *)(param_1 + 0x120) + iVar16);
          (**(code **)(*piVar13 + 0x20))(piVar13,0);
          piVar13 = *(int **)(*(int *)(param_1 + 300) + iVar16);
          (**(code **)(*piVar13 + 0x20))(piVar13,0);
          piVar13 = *(int **)(*(int *)(param_1 + 0x138) + iVar16);
          pcVar10 = *(code **)(*piVar13 + 0x20);
        }
        else {
          (*pcVar10)(piVar13,0);
          piVar13 = *(int **)(*(int *)(param_1 + 0x120) + iVar16);
          (**(code **)(*piVar13 + 0x20))(piVar13,1);
          piVar13 = *(int **)(*(int *)(param_1 + 300) + iVar16);
          (**(code **)(*piVar13 + 0x20))(piVar13,1);
          piVar13 = *(int **)(*(int *)(param_1 + 0x138) + iVar16);
          pcVar10 = *(code **)(*piVar13 + 0x20);
        }
        (*pcVar10)(piVar13,iVar3 == 0);
        String::~String(aSStack_bc);
      }
      else {
        piVar13 = *(int **)(*(int *)(param_1 + 0x114) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,1);
        piVar13 = *(int **)(*(int *)(param_1 + 0x120) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,0);
        piVar13 = *(int **)(*(int *)(param_1 + 300) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,0);
        piVar13 = *(int **)(*(int *)(param_1 + 0x138) + iVar16);
        (**(code **)(*piVar13 + 0x20))(piVar13,0);
      }
      String::~String(aSStack_dc);
    }
  }
  iVar16 = ObjectiveSystem::getBonusTimeRemaining
                     (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
  if (iVar16 < 1) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x20))(*(int **)(param_1 + 0xdc),0);
    (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(*(int **)(param_1 + 0xcc),0);
    piVar13 = *(int **)(param_1 + 0xd0);
    uVar15 = 0;
    pcVar10 = *(code **)(*piVar13 + 0x20);
  }
  else {
    uVar15 = ObjectiveSystem::getBonusTimeRemaining
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
    uVar15 = __divsi3(uVar15,1000);
    __aeabi_idivmod(uVar15,0x3c);
    uVar15 = ObjectiveSystem::getBonusTimeRemaining
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
    uVar15 = __divsi3(uVar15,DAT_001fc5d4);
    __aeabi_idivmod(uVar15,0x3c);
    uVar15 = ObjectiveSystem::getBonusTimeRemaining
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
    iVar3 = __divsi3(uVar15,DAT_001fc5d8);
    if (((extraout_r1 != *(int *)(param_1 + 0x140)) || (extraout_r1_00 != *(int *)(param_1 + 0x144))
        ) || (iVar3 != *(int *)(param_1 + 0x148))) {
      *(int *)(param_1 + 0x144) = extraout_r1_00;
      *(int *)(param_1 + 0x148) = iVar3;
      *(int *)(param_1 + 0x140) = extraout_r1;
      snprintf(acStack_9c,0x80,(char *)(DAT_001fc5dc + 0x1fc31a),iVar3,extraout_r1_00,extraout_r1);
      piVar13 = *(int **)(param_1 + 0xd0);
      pcVar10 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_a4,acStack_9c);
      (*pcVar10)(piVar13,aSStack_a4);
      String::~String(aSStack_a4);
    }
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x20))(*(int **)(param_1 + 0xdc),1);
    (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(*(int **)(param_1 + 0xcc),1);
    piVar13 = *(int **)(param_1 + 0xd0);
    uVar15 = 1;
    pcVar10 = *(code **)(*piVar13 + 0x20);
  }
  (*pcVar10)(piVar13,uVar15);
  uVar17 = *(undefined4 *)(param_1 + 0x14c);
  uVar15 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_1 + 0x60));
  iVar3 = __aeabi_fcmpeq(uVar17,uVar15);
  if (iVar3 == 0) {
    uVar15 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x14c) = uVar15;
    fVar18 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_1 + 0x60));
    RatingBar::setValue(fVar18);
  }
  uVar17 = *(undefined4 *)(param_1 + 0x150);
  uVar15 = ObjectiveSystem::getRatingBonus();
  iVar3 = __aeabi_fcmpeq(uVar17,uVar15);
  if (iVar3 == 0) {
    uVar15 = ObjectiveSystem::getRatingBonus();
    *(undefined4 *)(param_1 + 0x150) = uVar15;
    fVar18 = (float)ObjectiveSystem::getRatingBonus();
    RatingBar::setBonusValue(fVar18);
  }
  iVar6 = *(int *)(param_1 + 0x154);
  iVar16 = ObjectiveSystem::getTotalBonusTime
                     (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
  iVar3 = DAT_001fc5d0;
  if (iVar6 != iVar16) {
    uVar15 = ObjectiveSystem::getTotalBonusTime
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc5d0));
    uVar15 = __divsi3(uVar15,1000);
    *(undefined4 *)(param_1 + 0x154) = uVar15;
    pPVar14 = *(ProgressBar **)(param_1 + 0xdc);
    uVar15 = ObjectiveSystem::getTotalBonusTime
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar3));
    iVar3 = __divsi3(uVar15,1000);
    ProgressBar::setMaximumValue(pPVar14,iVar3);
  }
  iVar16 = *(int *)(param_1 + 0x158);
  iVar3 = ObjectiveSystem::getBonusTimeRemaining
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
  iVar11 = DAT_001fc5d0;
  if (iVar16 != iVar3) {
    uVar15 = ObjectiveSystem::getBonusTimeRemaining
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001fc5d0));
    uVar15 = __divsi3(uVar15,1000);
    *(undefined4 *)(param_1 + 0x158) = uVar15;
    pPVar14 = *(ProgressBar **)(param_1 + 0xdc);
    uVar15 = ObjectiveSystem::getBonusTimeRemaining
                       (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar11));
    iVar11 = __divsi3(uVar15,1000);
    ProgressBar::setValue(pPVar14,iVar11,true);
  }
  if (*(char *)(*(int *)(param_1 + 0x60) + DAT_001fc5e0) != '\0') {
    backClose((ObjectiveDialog *)param_1);
    FUN_001fc5bc();
    return;
  }
  FUN_001fc5bc();
  return;
}


