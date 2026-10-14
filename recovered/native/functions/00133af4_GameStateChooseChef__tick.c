/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00133af4 GameStateChooseChef::tick */

/* GameStateChooseChef::tick(long) */

void __thiscall GameStateChooseChef::tick(GameStateChooseChef *this,long param_1)

{
  GameStateChooseChef GVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *this_00;
  ZombieCafe *this_01;
  String *this_02;
  GameStateCafe *pGVar4;
  GameStateLoading *pGVar5;
  GameStateMainMenu *pGVar6;
  uchar uVar7;
  uint uVar8;
  ConfirmDialog *pCVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  GameStateChooseChef *pGVar14;
  int iVar15;
  CapcomGame *pCVar16;
  code *pcVar17;
  NoticeDialog *pNVar18;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float fVar19;
  float extraout_s0_08;
  undefined8 uVar20;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
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
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  iVar15 = DAT_00133e5c + 0x133b16;
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar11 = *(int *)(this + 0xb8);
  iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  if (iVar11 != iVar2) {
    piVar12 = *(int **)(this + 0xcc);
    pcVar17 = *(code **)(*piVar12 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_80);
    (*pcVar17)(piVar12,aSStack_80);
    String::~String(aSStack_80);
    uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + 0xb8) = uVar3;
  }
  if (*(int *)(this + 0xbc) != *(int *)(DAT_00133e60 + *(int *)(this + 0xc))) {
    piVar12 = *(int **)(this + 0xd0);
    pcVar17 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_78);
    (*pcVar17)(piVar12,aSStack_78);
    String::~String(aSStack_78);
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(DAT_00133e60 + *(int *)(this + 0xc));
  }
  piVar12 = *(int **)(this + 0x90);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0x1c))(piVar12,param_1);
  }
  uVar13 = *(undefined4 *)(this + 0x34);
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x20),0,
                     *(int *)(*(ScreenElement **)(this + 0x20) + 0x10) >> 1);
  FUN_00131c7c(uVar13,uVar3);
  this_00 = *(ScreenElement **)(this + 0x20);
  uVar13 = *(undefined4 *)(this + 0x38);
  uVar3 = ScreenElement::localToParentCoords
                    (this_00,*(int *)(this_00 + 0xc),*(int *)(this_00 + 0x10) >> 1);
  FUN_00131c7c(uVar13,uVar3);
  piVar12 = *(int **)(this + 0x34);
  iVar2 = *(int *)(*(int *)(this + 0xc) + DAT_00133e64) * piVar12[3];
  uVar8 = iVar2 >> 0x1f;
  uVar8 = (iVar2 >> 0x12) + uVar8 ^ uVar8;
  (**(code **)(*piVar12 + 0x14))(piVar12,uVar8 + piVar12[1],piVar12[2]);
  piVar12 = *(int **)(this + 0x38);
  pGVar14 = this + 0xe8;
  uVar20 = (**(code **)(*piVar12 + 0x14))(piVar12,piVar12[1] - uVar8,piVar12[2]);
  if ((*(ScreenElement **)pGVar14)[0x14] == (ScreenElement)0x0) {
LAB_0013406c:
    iVar2 = DAT_00133e68;
    piVar12 = *(int **)(this + 0xe4);
    if ((char)piVar12[5] == '\0') {
      pGVar14 = this + 0xd4;
      if ((*(ScreenElement **)pGVar14)[0x14] != (ScreenElement)0x0) {
        iVar11 = ScreenElement::contains
                           (*(ScreenElement **)pGVar14,
                            *(int *)(*(int *)(this + 0xc) + DAT_00133e68) >> 0x10,
                            (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00133e68));
        uVar20 = CONCAT44(extraout_s1_00,extraout_s0_00);
        if (iVar11 != 0) goto LAB_00133c46;
      }
      fVar19 = (float)uVar20;
      iVar10 = *(int *)(this + 0xc);
      iVar11 = *(int *)(iVar10 + iVar2);
      if (((iVar11 == 0) || (*(int *)(iVar10 + 0x4b8) != 0)) ||
         ((int)**(short **)(iVar15 + DAT_00133e6c) < *(int *)(iVar10 + DAT_00133e70)))
      goto LAB_00133f7e;
      if ((*(ScreenElement **)(this + 200))[0x14] != (ScreenElement)0x0) {
        iVar11 = ScreenElement::contains
                           (*(ScreenElement **)(this + 200),iVar11 >> 0x10,(int)(short)iVar11);
        uVar20 = CONCAT44(extraout_s1_01,extraout_s0_01);
        if (iVar11 != 0) {
          fVar19 = (float)BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0xe4));
          *(int *)(*(int *)(this + 0xe4) + 100) = DAT_00133e74 + 0x133ca0;
          goto LAB_00133f7e;
        }
      }
      if ((*(ZCImageButton **)(this + 0x34))[0x14] != (ZCImageButton)0x0) {
        iVar11 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x34),
                            *(int *)(*(int *)(this + 0xc) + iVar2) >> 0x10,
                            (int)(short)*(int *)(*(int *)(this + 0xc) + iVar2),(float)uVar20,
                            (float)((ulonglong)uVar20 >> 0x20));
        uVar20 = CONCAT44(extraout_s1_02,extraout_s0_02);
        if (iVar11 == 0) goto LAB_00134096;
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_02);
        uVar7 = (char)this[0x58] + 0xff;
LAB_00133cfa:
        fVar19 = (float)setPage(this,uVar7);
        goto LAB_00133f7e;
      }
LAB_00134096:
      if ((*(ZCImageButton **)(this + 0x38))[0x14] != (ZCImageButton)0x0) {
        iVar11 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x38),
                            *(int *)(*(int *)(this + 0xc) + iVar2) >> 0x10,
                            (int)(short)*(int *)(*(int *)(this + 0xc) + iVar2),(float)uVar20,
                            (float)((ulonglong)uVar20 >> 0x20));
        uVar20 = CONCAT44(extraout_s1_03,extraout_s0_03);
        if (iVar11 != 0) {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
          uVar7 = (char)this[0x58] + '\x01';
          goto LAB_00133cfa;
        }
      }
      iVar11 = ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x3c),
                          *(int *)(*(int *)(this + 0xc) + iVar2) >> 0x10,
                          (int)(short)*(int *)(*(int *)(this + 0xc) + iVar2),(float)uVar20,
                          (float)((ulonglong)uVar20 >> 0x20));
      if (iVar11 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
        pCVar16 = *(CapcomGame **)(this + 0xc);
        if (this[0xb4] == (GameStateChooseChef)0x0) {
          pGVar6 = (GameStateMainMenu *)operator_new(0x154);
          GameStateMainMenu::GameStateMainMenu(pGVar6);
          pGVar5 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar6);
        }
        else {
          pGVar4 = (GameStateCafe *)operator_new(0x200);
          GameStateCafe::GameStateCafe(pGVar4);
          pGVar5 = (GameStateLoading *)operator_new(0x2c);
          GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar4);
        }
        fVar19 = (float)CapcomGame::setNextState(pCVar16,(GameState *)pGVar5);
        goto LAB_00133f7e;
      }
      fVar19 = extraout_s0_08;
      if (((*(ZCImageButton **)(this + 0x9c))[0x14] == (ZCImageButton)0x0) ||
         (iVar11 = *(int *)(*(int *)(this + 0xc) + DAT_00133e68),
         iVar11 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x9c),iVar11 >> 0x10,(int)(short)iVar11,
                             extraout_s0_08,extraout_s1_04), fVar19 = extraout_s0_04, iVar11 == 0))
      {
        iVar11 = *(int *)(*(int *)(this + 0xc) + 0x10);
        GVar1 = this[0x58];
        iVar15 = 0;
        pGVar14 = this;
        do {
          if (((*(ChefHeadButton **)(pGVar14 + 0x60) != (ChefHeadButton *)0x0) &&
              (iVar10 = ChefHeadButton::isLocked(*(ChefHeadButton **)(pGVar14 + 0x60)),
              fVar19 = extraout_s0_06, iVar10 == 0)) &&
             (iVar10 = ScreenElement::contains
                                 (*(ScreenElement **)(pGVar14 + 0x60),
                                  *(int *)(*(int *)(this + 0xc) + iVar2) >> 0x10,
                                  (int)(short)*(int *)(*(int *)(this + 0xc) + iVar2)),
             fVar19 = extraout_s0_07, iVar10 != 0)) {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
            fVar19 = (float)selectChef(this,(uint)(byte)GVar1 *
                                            (9 - ((((int)(short)iVar11 >> 0x1f) - (iVar11 >> 0x1f))
                                                 + (uint)((uint)(iVar11 >> 0x10) <=
                                                         (uint)(int)(short)iVar11))) + iVar15);
            break;
          }
          iVar15 = iVar15 + 1;
          pGVar14 = pGVar14 + 4;
        } while (iVar15 != 9);
        goto LAB_00133f7e;
      }
      pGVar14 = *(GameStateChooseChef **)(this + 0x5c);
      iVar11 = *(int *)((int)pGVar14 * 4 + *(int *)(this + 0xac));
      iVar2 = *(int *)(iVar11 + 0xb20);
      if (iVar2 != 0) {
        this_01 = *(ZombieCafe **)(this + 0xc);
        pGVar14 = (GameStateChooseChef *)(uint)(byte)pGVar14[*(int *)(this_01 + DAT_00133e78)];
        if (pGVar14 == (GameStateChooseChef *)0x0) {
          if (*(char *)(iVar11 + DAT_00133e7c) == '\0') {
            pGVar14 = DAT_00133e60;
            if (iVar2 <= *(int *)(this_01 + (int)DAT_00133e60)) goto LAB_001340e6;
            pNVar18 = *(NoticeDialog **)(this + 0xe8);
            Vector<String>::elementAt((int)aSStack_70);
            Vector<String>::elementAt((int)aSStack_68);
            NoticeDialog::show(pNVar18,aSStack_70,aSStack_68,0,this);
            String::~String(aSStack_68);
            this_02 = aSStack_70;
          }
          else {
            iVar2 = ZombieCafe::getToxin(this_01);
            if (iVar2 < *(int *)(*(int *)(*(int *)(this + 0x5c) * 4 + *(int *)(this + 0xac)) + 0xb20
                                )) {
              pNVar18 = *(NoticeDialog **)(this + 0xe8);
              fVar19 = extraout_s0_05;
              if (pNVar18 == (NoticeDialog *)0x0) goto LAB_00133f7e;
              String::String(aSStack_60,(char *)(DAT_00133e88 + 0x133e2a));
              Vector<String>::elementAt((int)aSStack_58);
              NoticeDialog::show(pNVar18,aSStack_60,aSStack_58,0,this);
              String::~String(aSStack_58);
              this_02 = aSStack_60;
            }
            else {
              pCVar9 = *(ConfirmDialog **)(this + 0xd4);
              Vector<String>::elementAt((int)aSStack_50);
              String::valueOf((int)aSStack_48);
              String::operator+(aSStack_40,aSStack_50,aSStack_48);
              Vector<String>::elementAt((int)aSStack_38);
              String::operator+(aSStack_30,aSStack_40,aSStack_38);
              Vector<String>::elementAt((int)aSStack_28);
              Vector<String>::elementAt((int)aSStack_20);
              ConfirmDialog::show(pCVar9,aSStack_30,aSStack_28,aSStack_20,
                                  *(undefined4 *)(iVar15 + DAT_00134110),this);
              String::~String(aSStack_20);
              String::~String(aSStack_28);
              String::~String(aSStack_30);
              String::~String(aSStack_38);
              String::~String(aSStack_40);
              String::~String(aSStack_48);
              this_02 = aSStack_50;
            }
          }
          fVar19 = (float)String::~String(this_02);
          goto LAB_00133f7e;
        }
      }
LAB_001340e6:
      fVar19 = (float)buyConfirmed(this,pGVar14);
      goto LAB_00133f7e;
    }
  }
  else {
    iVar2 = ScreenElement::contains
                      (*(ScreenElement **)pGVar14,
                       *(int *)(*(int *)(this + 0xc) + DAT_00133e68) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00133e68));
    uVar20 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar2 == 0) goto LAB_0013406c;
LAB_00133c46:
    piVar12 = *(int **)pGVar14;
  }
  fVar19 = (float)(**(code **)(*piVar12 + 8))(piVar12,param_1);
LAB_00133f7e:
  if (*(char *)(*(int *)(this + 0xc) + DAT_00134114) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00134114) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar19);
    pCVar16 = *(CapcomGame **)(this + 0xc);
    if (this[0xb4] == (GameStateChooseChef)0x0) {
      pGVar6 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar6);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar6);
    }
    else {
      pGVar4 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar4);
      pGVar5 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar5,(GameState *)pGVar4);
    }
    CapcomGame::setNextState(pCVar16,(GameState *)pGVar5);
  }
  return;
}


