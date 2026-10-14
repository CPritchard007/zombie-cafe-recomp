/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001728d8 GameStateMeetLocker::tick */

/* GameStateMeetLocker::tick(long) */

void __thiscall GameStateMeetLocker::tick(GameStateMeetLocker *this,long param_1)

{
  int iVar1;
  int iVar2;
  GameStateLoading *pGVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  String *this_00;
  GameStatePowerup *this_01;
  undefined4 uVar7;
  undefined4 uVar8;
  GameStateCafe *pGVar9;
  long lVar10;
  int extraout_r1;
  int extraout_r1_00;
  long extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar11;
  NoticeDialog *pNVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  CapcomGame *this_02;
  code *pcVar16;
  ConfirmDialog *pCVar17;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float fVar18;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar19;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  CapcomGame *local_138;
  int local_134;
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
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  iVar15 = DAT_00172c48 + 0x1728f2;
  if (*(char *)(*(int *)(this + 0xc) + DAT_00172c44) == '\0') {
    L_PrintLog((char *)(DAT_00172c4c + 0x1728fc),(char *)(DAT_00172c50 + 0x1728fe));
    iVar15 = *(int *)(this + 0xc);
    this = (GameStateMeetLocker *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu((GameStateMainMenu *)this);
    pGVar3 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar3,(GameState *)this);
    FUN_001731fa();
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar4 = ZombieCafe::isLockerPresentFlag(*(ZombieCafe **)(this + 0xc));
  iVar5 = DAT_00172c54;
  if ((iVar4 == 0) && (this[0x408] == (GameStateMeetLocker)0x0)) {
    this[0x408] = (GameStateMeetLocker)0x1;
    pNVar12 = *(NoticeDialog **)(this + DAT_00172c58);
    String::String(aSStack_11c,(char *)(iVar5 + 0x17294c));
    Vector<String>::elementAt((int)aSStack_114);
    NoticeDialog::show(pNVar12,aSStack_11c,aSStack_114,*(undefined4 *)(iVar15 + DAT_00172c60),this);
    String::~String(aSStack_114);
    String::~String(aSStack_11c);
  }
  iVar4 = *(int *)(this + 0x420);
  iVar5 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  uVar6 = extraout_s0;
  uVar11 = extraout_s1;
  if (iVar4 != iVar5) {
    piVar13 = *(int **)(this + DAT_00172c64);
    pcVar16 = *(code **)(*piVar13 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_10c);
    (*pcVar16)(piVar13,aSStack_10c);
    String::~String(aSStack_10c);
    uVar6 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + 0x420) = uVar6;
    uVar6 = extraout_s0_00;
    uVar11 = extraout_s1_00;
  }
  uVar19 = CONCAT44(uVar11,uVar6);
  if ((*(int *)(this + DAT_00172c68) != *(int *)(*(int *)(this + 0xc) + 0x5b8)) ||
     (*(int *)(this + 0x428) != *(int *)(*(int *)(this + 0xc) + 0x5a4) + 1)) {
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_104);
    StringBuffer::append(aSStack_34,aSStack_104);
    String::~String(aSStack_104);
    String::String(aSStack_fc,(char *)(DAT_00172c6c + 0x172a12));
    StringBuffer::append(aSStack_34,aSStack_fc);
    String::~String(aSStack_fc);
    String::valueOf((int)aSStack_f4);
    StringBuffer::append(aSStack_34,aSStack_f4);
    String::~String(aSStack_f4);
    piVar13 = *(int **)(this + 0x38);
    pcVar16 = *(code **)(*piVar13 + 0x44);
    StringBuffer::toString();
    (*pcVar16)(piVar13,aSStack_ec);
    String::~String(aSStack_ec);
    iVar5 = *(int *)(this + 0xc);
    *(undefined4 *)(this + DAT_00172c68) = *(undefined4 *)(iVar5 + 0x5b8);
    *(int *)(this + 0x428) = *(int *)(iVar5 + 0x5a4) + 1;
    uVar19 = CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  iVar5 = 0;
  do {
    piVar13 = *(int **)(this + iVar5 + 0xb8);
    if (piVar13 != (int *)0x0) {
      uVar19 = (**(code **)(*piVar13 + 0x1c))(piVar13,param_1);
    }
    iVar2 = DAT_00172c78;
    iVar1 = DAT_00172c70;
    iVar4 = DAT_00172c58;
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x348);
  iVar5 = *(int *)(this + 0xc);
  if (*(char *)(*(int *)(this + DAT_00172c58) + 0x14) == '\0') {
    if (*(char *)(*(int *)(this + DAT_00172c78) + 0x14) == '\0') {
      lVar10 = *(int *)(iVar5 + DAT_00172c70);
      if (lVar10 == 0) {
        uVar19 = FUN_00173330();
        lVar10 = extraout_r1;
      }
      if (*(int *)(iVar5 + 0x4b8) != 0) {
        uVar19 = FUN_00173330();
        lVar10 = extraout_r1_00;
      }
      if ((int)**(short **)(iVar15 + DAT_00172c7c) < *(int *)(iVar5 + DAT_00172c80)) {
        uVar19 = FUN_00173330();
        lVar10 = extraout_r1_01;
      }
      iVar5 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x8c),lVar10,(float)uVar19,
                         (float)((ulonglong)uVar19 >> 0x20));
      if (iVar5 == 0) {
        iVar5 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x90),*(long *)(*(int *)(this + 0xc) + iVar1),
                           extraout_s0_01,extraout_s1_01);
        if (iVar5 == 0) {
          iVar5 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x98),
                             *(long *)(*(int *)(this + 0xc) + iVar1),extraout_s0_02,extraout_s1_02);
          if (iVar5 == 0) {
            iVar5 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xa0),
                               *(long *)(*(int *)(this + 0xc) + iVar1),extraout_s0_03,extraout_s1_03
                              );
            if (iVar5 != 0) {
              ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
              if (*(int *)(this + 0x2c) == 0) goto LAB_0017303c;
              *(undefined4 *)(*(int *)(this + 0xc) + DAT_00173004) =
                   *(undefined4 *)(*(int *)(this + 0x2c) + 0x8c);
              local_138 = *(CapcomGame **)(this + 0xc);
              this_01 = (GameStatePowerup *)operator_new(0x538);
              GameStatePowerup::GameStatePowerup(this_01);
              pGVar3 = (GameStateLoading *)operator_new(0x2c);
              GameStateLoading::GameStateLoading(pGVar3,(GameState *)this_01);
              goto LAB_00172dc2;
            }
            iVar4 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0xa8),
                               *(long *)(*(int *)(this + 0xc) + iVar1),extraout_s0_04,extraout_s1_04
                              );
            iVar5 = DAT_00173008;
            if (iVar4 == 0) {
              iVar4 = ZCImageButton::contains
                                (*(ZCImageButton **)(this + DAT_00173024),
                                 *(long *)(*(int *)(this + 0xc) + DAT_00173008),extraout_s0_05,
                                 extraout_s1_05);
              if (iVar4 == 0) {
                iVar4 = ZCImageButton::contains
                                  (*(ZCImageButton **)(this + 0xb4),
                                   *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_06,
                                   extraout_s1_06);
                if (iVar4 == 0) {
                  iVar5 = ZCImageButton::contains
                                    (*(ZCImageButton **)(this + 0xb0),
                                     *(long *)(*(int *)(this + 0xc) + iVar5),extraout_s0_07,
                                     extraout_s1_07);
                  if (iVar5 == 0) {
                    iVar5 = 0;
                    local_138 = (CapcomGame *)this;
                    do {
                      piVar13 = *(int **)(local_138 + 0xb8);
                      if ((piVar13 != (int *)0x0) &&
                         (iVar4 = (**(code **)(*piVar13 + 0x10))
                                            (piVar13,*(undefined4 *)(*(int *)(this + 0xc) + iVar1)),
                         iVar4 != 0)) {
                        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_09);
                        selectCharacter(this,iVar5);
                      }
                      iVar5 = iVar5 + 1;
                      local_138 = local_138 + 4;
                    } while (iVar5 != 0xd2);
                    goto LAB_0017303c;
                  }
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
                  iVar5 = 1;
                }
                else {
                  ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
                  iVar5 = 0;
                }
                calcJumpScrollX(this,iVar5);
              }
              else {
                ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
                if (*(int *)(this + 0x2c) != 0) {
                  redrawFavoriteButton(this,true);
                }
              }
              goto LAB_0017303c;
            }
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_05);
            if (*(int *)(this + 0x2c) == 0) goto LAB_0017303c;
            if (*(char *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x34) == '\0') {
              String::String(aSStack_6c,(char *)(DAT_00173010 + 0x172e4a));
              String::String(aSStack_64,(String *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 8));
              String::operator+(aSStack_5c,aSStack_6c,aSStack_64);
              String::String(aSStack_54,(char *)(DAT_00173014 + 0x172e6c));
              String::operator+((String *)aSStack_34,aSStack_5c,aSStack_54);
              String::~String(aSStack_54);
              String::~String(aSStack_5c);
              String::~String(aSStack_64);
              String::~String(aSStack_6c);
              pCVar17 = *(ConfirmDialog **)(this + DAT_00172fe8);
              String::String(aSStack_3c,(String *)aSStack_34);
              Vector<String>::elementAt((int)aSStack_4c);
              Vector<String>::elementAt((int)aSStack_44);
              ConfirmDialog::show(pCVar17,aSStack_3c,aSStack_4c,aSStack_44,
                                  *(undefined4 *)(iVar15 + DAT_00173020),this);
              String::~String(aSStack_44);
              String::~String(aSStack_4c);
              String::~String(aSStack_3c);
              this_00 = (String *)aSStack_34;
            }
            else {
              pNVar12 = *(NoticeDialog **)(this + DAT_00172fe0);
              String::String(aSStack_7c,(char *)(DAT_0017300c + 0x172e16));
              Vector<String>::elementAt((int)aSStack_74);
              NoticeDialog::show(pNVar12,aSStack_7c,aSStack_74,0,0);
              String::~String(aSStack_74);
              this_00 = aSStack_7c;
            }
          }
          else {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
            if (*(int *)(*(ZombieCafe **)(this + 0xc) + 0x5b8) < 200) {
              iVar5 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
              if (iVar5 < 5) {
                pNVar12 = *(NoticeDialog **)(this + DAT_00172fe0);
                String::String(aSStack_c4,(char *)(DAT_00172fdc + 0x172c9e));
                Vector<String>::elementAt((int)aSStack_bc);
                NoticeDialog::show(pNVar12,aSStack_c4,aSStack_bc,0,0);
                String::~String(aSStack_bc);
                this_00 = aSStack_c4;
              }
              else {
                pCVar17 = *(ConfirmDialog **)(this + DAT_00172fe8);
                Vector<String>::elementAt((int)aSStack_b4);
                String::String(aSStack_ac,(char *)(DAT_00172ff0 + 0x172ce6));
                String::operator+(aSStack_a4,aSStack_b4,aSStack_ac);
                Vector<String>::elementAt((int)aSStack_9c);
                String::operator+(aSStack_94,aSStack_a4,aSStack_9c);
                Vector<String>::elementAt((int)aSStack_8c);
                Vector<String>::elementAt((int)aSStack_84);
                ConfirmDialog::show(pCVar17,aSStack_94,aSStack_8c,aSStack_84,
                                    *(undefined4 *)(iVar15 + DAT_00173000),this);
                String::~String(aSStack_84);
                String::~String(aSStack_8c);
                String::~String(aSStack_94);
                String::~String(aSStack_9c);
                String::~String(aSStack_a4);
                String::~String(aSStack_ac);
                this_00 = aSStack_b4;
              }
            }
            else {
              pNVar12 = *(NoticeDialog **)(this + DAT_00172c58);
              String::String(aSStack_d4,(char *)(DAT_00172c88 + 0x172c18));
              Vector<String>::elementAt((int)aSStack_cc);
              NoticeDialog::show(pNVar12,aSStack_d4,aSStack_cc,0,0);
              String::~String(aSStack_cc);
              this_00 = aSStack_d4;
            }
          }
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_02);
          iVar5 = checkStaffNum(this);
          if (iVar5 != 0) {
            putBackCharacter(this,*(int *)(this + 0x28));
            goto LAB_0017303c;
          }
          pNVar12 = *(NoticeDialog **)(this + DAT_00172c58);
          String::String(aSStack_e4,(char *)(DAT_00172c84 + 0x172baa));
          Vector<String>::elementAt((int)aSStack_dc);
          NoticeDialog::show(pNVar12,aSStack_e4,aSStack_dc,0,0);
          String::~String(aSStack_dc);
          this_00 = aSStack_e4;
        }
        String::~String(this_00);
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
        local_138 = *(CapcomGame **)(this + 0xc);
        pGVar9 = (GameStateCafe *)operator_new(0x200);
        GameStateCafe::GameStateCafe(pGVar9);
        pGVar3 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar9);
LAB_00172dc2:
        CapcomGame::setNextState(local_138,(GameState *)pGVar3);
      }
      goto LAB_0017303c;
    }
    *(undefined1 *)(iVar5 + DAT_00172c74) = 0;
    iVar5 = ScreenElement::contains
                      (*(ScreenElement **)(this + iVar2),
                       *(int *)(*(int *)(this + 0xc) + iVar1) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0xc) + iVar1));
    if (iVar5 == 0) goto LAB_0017303c;
    piVar13 = *(int **)(this + DAT_00172c78);
  }
  else {
    *(undefined1 *)(iVar5 + DAT_00172c74) = 0;
    iVar5 = ScreenElement::contains
                      (*(ScreenElement **)(this + iVar4),
                       *(int *)(*(int *)(this + 0xc) + iVar1) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0xc) + iVar1));
    if (iVar5 == 0) goto LAB_0017303c;
    piVar13 = *(int **)(this + DAT_00172c58);
  }
  (**(code **)(*piVar13 + 8))(piVar13,param_1);
LAB_0017303c:
  uVar6 = __addsf3(*(undefined4 *)(this + 0x400),*(undefined4 *)(this + DAT_00173340));
  *(undefined4 *)(this + 0x400) = uVar6;
  uVar6 = __floatsisf(*(undefined4 *)(*(int *)(this + 0xc) + 0x5b8));
  iVar5 = SmDev();
  iVar5 = __mulsf3(uVar6,*(undefined4 *)(iVar5 * 4 + DAT_00173344 + 0x173068));
  iVar4 = __aeabi_fcmplt(*(undefined4 *)(this + 0x400),iVar5 + -0x80000000);
  if (iVar4 != 0) {
    *(int *)(this + 0x400) = iVar5 + -0x80000000;
  }
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x400),0);
  if (iVar5 != 0) {
    *(undefined4 *)(this + 0x400) = 0;
  }
  uVar11 = *(undefined4 *)(this + DAT_00173340);
  puVar14 = *(undefined4 **)(iVar15 + DAT_00173348);
  uVar6 = __floatsisf(param_1);
  uVar6 = __mulsf3(uVar6,*puVar14);
  iVar5 = __aeabi_fcmplt(uVar6,0x3f800000);
  if (iVar5 == 0) {
    uVar6 = 0x3f800000;
  }
  uVar6 = __subsf3(0x3f800000,uVar6);
  iVar5 = __mulsf3(uVar11,uVar6);
  *(int *)(this + DAT_00173340) = iVar5;
  iVar4 = __aeabi_fcmpge(iVar5,0);
  if (iVar4 == 0) {
    iVar5 = iVar5 + -0x80000000;
  }
  iVar15 = __aeabi_fcmplt(iVar5,**(undefined4 **)(iVar15 + DAT_0017334c));
  if (iVar15 != 0) {
    *(undefined4 *)(this + DAT_00173340) = 0;
  }
  uVar6 = __fixsfsi(*(undefined4 *)(this + 0x400));
  iVar5 = SmDev();
  iVar15 = DAT_00173354;
  iVar4 = DAT_00173350 + 0x173116;
  uVar11 = __fixsfsi(*(undefined4 *)(iVar5 * 4 + iVar4));
  __aeabi_idivmod(uVar6,uVar11);
  uVar6 = __floatsisf(extraout_r1_02);
  uVar6 = __mulsf3(uVar6,*(undefined4 *)(this + 0x20));
  iVar5 = SmDev();
  uVar11 = __mulsf3(*(undefined4 *)(iVar4 + iVar5 * 4 + 0x18),*(undefined4 *)(this + 0x20));
  __addsf3(uVar6,uVar11);
  uVar6 = __fixsfsi();
  local_134 = 0;
  local_138 = (CapcomGame *)this;
  do {
    piVar13 = *(int **)(local_138 + 0x58);
    pcVar16 = *(code **)(*piVar13 + 0x14);
    iVar5 = SmDev();
    uVar11 = __floatsisf(uVar6);
    uVar7 = __mulsf3(*(undefined4 *)(iVar5 * 4 + iVar4),*(undefined4 *)(this + 0x20));
    uVar8 = __floatsisf(local_134);
    uVar7 = __mulsf3(uVar7,uVar8);
    __addsf3(uVar11,uVar7);
    uVar11 = __fixsfsi();
    iVar5 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar15 + iVar5 * 4 + 0x1731aa));
    fVar18 = (float)(*pcVar16)(piVar13,uVar11,uVar7);
    local_134 = local_134 + 1;
    local_138 = local_138 + 4;
  } while (local_134 != 10);
  if (*(char *)(*(int *)(this + 0xc) + DAT_00173358) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00173358) = 0;
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar18);
    this_02 = *(CapcomGame **)(this + 0xc);
    pGVar9 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar9);
    pGVar3 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar3,(GameState *)pGVar9);
    CapcomGame::setNextState(this_02,(GameState *)pGVar3);
  }
  return;
}


