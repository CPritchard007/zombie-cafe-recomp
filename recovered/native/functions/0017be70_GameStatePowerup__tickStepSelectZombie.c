/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017be70 GameStatePowerup::tickStepSelectZombie */

/* GameStatePowerup::tickStepSelectZombie(long) */

void GameStatePowerup::tickStepSelectZombie(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  GameStateCafe *this;
  GameStateLoading *this_00;
  Character *this_01;
  String *this_02;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  ConfirmDialog *pCVar12;
  int iVar13;
  ZombieCafe *this_03;
  CapcomGame *this_04;
  NoticeDialog *pNVar14;
  long lVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
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
  
  iVar8 = DAT_0017c1c4;
  iVar13 = DAT_0017c1c8 + 0x17be82;
  if (*(int *)(param_1 + 0x4f8) != *(int *)(param_1 + DAT_0017c1c4)) {
    calcGainXP((GameStatePowerup *)param_1);
    *(undefined4 *)(param_1 + iVar8) = *(undefined4 *)(param_1 + 0x4f8);
  }
  this_03 = *(ZombieCafe **)(param_1 + 0xc);
  iVar6 = ZombieCafe::touchUpEvent(this_03);
  iVar11 = DAT_0017c3d8;
  iVar7 = DAT_0017c3d4;
  iVar8 = DAT_0017c1d4;
  if ((iVar6 == 0) || ((int)**(short **)(iVar13 + DAT_0017c1cc) < *(int *)(this_03 + DAT_0017c1d0)))
  {
    if ((this_03[DAT_0017c3d8] == (ZombieCafe)0x0) && (*(int *)(this_03 + 0x4b8) != 0)) {
      if ((int)**(short **)(iVar13 + DAT_0017c3cc) < *(int *)(this_03 + DAT_0017c3d0)) {
        uVar10 = __floatsisf((*(int *)(this_03 + 0x4b8) >> 0x10) -
                             (*(int *)(this_03 + DAT_0017c3c0) >> 0x10));
        *(undefined4 *)(param_1 + iVar7) = uVar10;
        this_03[iVar11] = (ZombieCafe)0x1;
      }
      else {
        *(undefined4 *)(param_1 + DAT_0017c3d4) = 0;
      }
    }
  }
  else {
    iVar7 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0xf0),*(long *)(this_03 + DAT_0017c1d4),
                       extraout_s0,extraout_s1);
    if (iVar7 == 0) {
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0xf4),
                         *(long *)(*(int *)(param_1 + 0xc) + iVar8),extraout_s0_00,extraout_s1_00);
      if (iVar7 == 0) {
        iVar13 = ZCImageButton::contains
                           (*(ZCImageButton **)(param_1 + 0x110),
                            *(long *)(*(int *)(param_1 + 0xc) + iVar8),extraout_s0_01,extraout_s1_01
                           );
        if (iVar13 == 0) {
          iVar8 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0x10c),
                             *(long *)(*(int *)(param_1 + 0xc) + iVar8),extraout_s0_02,
                             extraout_s1_02);
          if (iVar8 == 0) {
            iVar8 = 0;
            lVar15 = param_1;
            do {
              piVar9 = *(int **)(lVar15 + 0x114);
              if ((piVar9 != (int *)0x0) &&
                 (iVar13 = (**(code **)(*piVar9 + 0x10))
                                     (piVar9,*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_0017c3c0)
                                     ), iVar13 != 0)) {
                ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_04);
                selectCharacter((GameStatePowerup *)param_1,iVar8);
                *(undefined1 *)(param_1 + DAT_0017c3c4) = 0;
                *(undefined1 *)(param_1 + DAT_0017c3c8) = 0;
              }
              iVar8 = iVar8 + 1;
              lVar15 = lVar15 + 4;
            } while (iVar8 != 0xde);
            return;
          }
          ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_03);
          iVar8 = 1;
        }
        else {
          ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_02);
          iVar8 = 0;
        }
        calcJumpScrollX((GameStatePowerup *)param_1,iVar8);
      }
      else {
        ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_01);
        if (*(int *)(param_1 + 0x4f8) < 1) {
          pNVar14 = *(NoticeDialog **)(param_1 + DAT_0017c3b8);
          String::String(aSStack_28,(char *)(DAT_0017c3b4 + 0x17c226));
          Vector<String>::elementAt((int)aSStack_20);
          NoticeDialog::show(pNVar14,aSStack_28,aSStack_20,0,0);
          String::~String(aSStack_20);
          this_02 = aSStack_28;
        }
        else {
          this_01 = *(Character **)(*(int *)(param_1 + 0xc) + DAT_0017c1d8);
          bVar1 = true;
          iVar7 = *(int *)(this_01 + 0x28);
          iVar11 = *(int *)(DAT_0017c1dc + (uint)*(byte *)(*(int *)this_01 + 0xb40) * 4 + 0x17bfbc);
          iVar8 = Character::getSameZombiePowerupNum(this_01);
          bVar3 = false;
          if (iVar8 < 4) {
            iVar8 = 0;
            do {
              iVar6 = *(int *)(param_1 + iVar8 + 0x4d0);
              if ((iVar6 != 0) &&
                 (*(short *)(**(int **)(iVar6 + 0x8c) + DAT_0017c1e0) ==
                  *(short *)(**(int **)(*(int *)(param_1 + 0xc) + DAT_0017c1d8) + DAT_0017c1e0))) {
                bVar3 = true;
              }
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0x28);
            bVar1 = false;
          }
          iVar8 = 0;
          do {
            iVar6 = *(int *)(param_1 + iVar8 + 0x4d0);
            if ((iVar6 != 0) &&
               (iVar6 = Character::getSameZombiePowerupNum(*(Character **)(iVar6 + 0x8c)),
               iVar6 != 0)) {
              bVar2 = true;
              goto LAB_0017bfba;
            }
            iVar8 = iVar8 + 4;
          } while (iVar8 != 0x28);
          bVar2 = false;
LAB_0017bfba:
          bVar5 = false;
          bVar4 = false;
          lVar15 = param_1;
          do {
            iVar8 = *(int *)(lVar15 + 0x4d0);
            if ((iVar8 != 0) &&
               (iVar8 = isSelectTomoguiZombie
                                  ((GameStatePowerup *)param_1,
                                   (uint)*(ushort *)(**(int **)(iVar8 + 0x8c) + DAT_0017c1e0)),
               iVar8 != 0)) {
              iVar8 = isSelectTomoguiZombie_LvUp
                                ((GameStatePowerup *)param_1,
                                 *(Character **)(*(int *)(param_1 + 0xc) + DAT_0017c1d8),
                                 *(Character **)(*(int *)(lVar15 + 0x4d0) + 0x8c));
              if (iVar8 == 0) {
                bVar5 = true;
                bVar4 = true;
              }
              else {
                bVar4 = true;
                bVar3 = true;
              }
            }
            iVar8 = DAT_0017c1f4;
            lVar15 = lVar15 + 4;
          } while (lVar15 != param_1 + 0x28);
          if ((iVar7 < iVar11) || ((!bVar1 && (bVar3)))) {
            if ((bVar2) && (*(char *)(param_1 + DAT_0017c1f0) == '\0')) {
              *(undefined1 *)(param_1 + DAT_0017c1f0) = 1;
              pNVar14 = *(NoticeDialog **)(param_1 + DAT_0017c1e8);
              String::String(aSStack_78,(char *)(iVar8 + 0x17c098));
              Vector<String>::elementAt((int)aSStack_70);
              NoticeDialog::show(pNVar14,aSStack_78,aSStack_70,0,0);
              String::~String(aSStack_70);
              this_02 = aSStack_78;
            }
            else if ((bVar4) && (*(char *)(param_1 + DAT_0017c1f8) == '\0')) {
              *(undefined1 *)(param_1 + DAT_0017c1f8) = 1;
              if (bVar5) {
                pNVar14 = *(NoticeDialog **)(param_1 + DAT_0017c1e8);
                String::String(aSStack_68,(char *)(DAT_0017c1fc + 0x17c0e8));
                Vector<String>::elementAt((int)aSStack_60);
                NoticeDialog::show(pNVar14,aSStack_68,aSStack_60,0,0);
                String::~String(aSStack_60);
                this_02 = aSStack_68;
              }
              else {
                pCVar12 = *(ConfirmDialog **)(param_1 + DAT_0017c200);
                String::String(aSStack_58,(char *)(DAT_0017c204 + 0x17c11c));
                Vector<String>::elementAt((int)aSStack_50);
                Vector<String>::elementAt((int)aSStack_48);
                ConfirmDialog::show(pCVar12,aSStack_58,aSStack_50,aSStack_48,0,
                                    *(undefined4 *)(iVar13 + DAT_0017c20c),param_1,0,0);
                String::~String(aSStack_48);
                String::~String(aSStack_50);
                this_02 = aSStack_58;
              }
            }
            else {
              pCVar12 = *(ConfirmDialog **)(param_1 + DAT_0017c200);
              String::String(aSStack_40,(char *)(DAT_0017c210 + 0x17c174));
              Vector<String>::elementAt((int)aSStack_38);
              Vector<String>::elementAt((int)aSStack_30);
              ConfirmDialog::show(pCVar12,aSStack_40,aSStack_38,aSStack_30,
                                  *(undefined4 *)(iVar13 + DAT_0017c214),
                                  *(undefined4 *)(iVar13 + DAT_0017c218),param_1,0,0);
              String::~String(aSStack_30);
              String::~String(aSStack_38);
              this_02 = aSStack_40;
            }
          }
          else {
            pNVar14 = *(NoticeDialog **)(param_1 + DAT_0017c1e8);
            iVar8 = *(int *)(*(int *)(param_1 + 0xc) + DAT_0017c1d8);
            String::String(aSStack_90,(char *)(DAT_0017c1ec + 0x17c040));
            String::operator+(aSStack_88,iVar8 + 8,aSStack_90);
            Vector<String>::elementAt((int)aSStack_80);
            NoticeDialog::show(pNVar14,aSStack_88,aSStack_80,0,0);
            String::~String(aSStack_80);
            String::~String(aSStack_88);
            this_02 = aSStack_90;
          }
        }
        String::~String(this_02);
      }
    }
    else {
      ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0_00);
      this_04 = *(CapcomGame **)(param_1 + 0xc);
      this = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this);
      this_00 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(this_00,(GameState *)this);
      CapcomGame::setNextState(this_04,(GameState *)this_00);
    }
  }
  return;
}


