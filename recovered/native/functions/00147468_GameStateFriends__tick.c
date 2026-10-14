/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00147468 GameStateFriends::tick */

/* GameStateFriends::tick(long) */

void __thiscall GameStateFriends::tick(GameStateFriends *this,long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  GameStateMainMenu *pGVar3;
  NoticeDialog *pNVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  CapcomGame *pCVar10;
  int *piVar11;
  undefined4 *puVar12;
  ZCImageButton *this_00;
  code *pcVar13;
  undefined4 uVar14;
  int iVar15;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  float fVar16;
  undefined8 uVar17;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar7 = DAT_001477b0;
  iVar9 = DAT_001477b4 + 0x14747c;
  if (*(char *)(*(int *)(this + 0xc) + DAT_001477b0) != '\0') {
    updateList(this,false);
    *(undefined1 *)(*(int *)(this + 0xc) + iVar7) = 0;
  }
  uVar17 = (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if ((((*(char *)(*(int *)(this + 0x58) + 0x14) == '\0') &&
       (*(char *)(*(int *)(this + 0x5c) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(this + 0x68) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(this + 0x54) + 0x14) == '\0')) {
    iVar15 = *(int *)(this + 0xc);
    iVar7 = *(int *)(iVar15 + DAT_00147968);
    if (((iVar7 == 0) || (*(int *)(iVar15 + 0x4b8) != 0)) ||
       ((int)**(short **)(iVar9 + DAT_001477b8) < *(int *)(iVar15 + DAT_001477bc))) {
      if ((*(char *)(iVar15 + DAT_0014796c) == '\0') && (*(int *)(iVar15 + 0x4b8) != 0)) {
        if ((int)**(short **)(iVar9 + DAT_001477b8) < *(int *)(iVar15 + DAT_001477bc)) {
          uVar1 = __floatsisf((int)(short)*(int *)(iVar15 + 0x4b8) - (int)(short)iVar7);
          iVar7 = DAT_00147800;
          *(undefined4 *)(this + 0x90) = uVar1;
          *(undefined1 *)(iVar15 + iVar7) = 1;
        }
        else {
          *(undefined4 *)(this + 0x90) = 0;
        }
      }
    }
    else {
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x24),iVar7 >> 0x10,(int)(short)iVar7,
                         (float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
      uVar17 = CONCAT44(extraout_s1,extraout_s0);
      if (iVar7 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
        pCVar10 = *(CapcomGame **)(this + 0xc);
        pGVar3 = (GameStateMainMenu *)operator_new(0x154);
        GameStateMainMenu::GameStateMainMenu(pGVar3);
        uVar17 = CapcomGame::setNextState(pCVar10,(GameState *)pGVar3);
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x2c),
                         *(int *)(*(int *)(this + 0xc) + DAT_001477c0) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001477c0),(float)uVar17,
                         (float)((ulonglong)uVar17 >> 0x20));
      uVar17 = CONCAT44(extraout_s1_00,extraout_s0_00);
      if (iVar7 != 0) {
        uVar17 = FUN_00145f84(*(int *)(this + 0x3c),
                              *(int *)(*(int *)(this + 0x3c) + 8) +
                              *(int *)(*(int *)(this + 0x38) + 0x10));
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x30),
                         *(int *)(*(int *)(this + 0xc) + DAT_001477c0) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001477c0),(float)uVar17,
                         (float)((ulonglong)uVar17 >> 0x20));
      uVar17 = CONCAT44(extraout_s1_01,extraout_s0_01);
      if (iVar7 != 0) {
        uVar17 = FUN_00145f84(*(int *)(this + 0x3c),
                              *(int *)(*(int *)(this + 0x3c) + 8) -
                              *(int *)(*(int *)(this + 0x38) + 0x10));
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x28),
                         *(int *)(*(int *)(this + 0xc) + DAT_001477c0) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001477c0),(float)uVar17,
                         (float)((ulonglong)uVar17 >> 0x20));
      uVar17 = CONCAT44(extraout_s1_02,extraout_s0_02);
      if (iVar7 != 0) {
        fVar16 = (float)L_PrintLog((char *)(DAT_001477c4 + 0x14758c),
                                   (char *)(DAT_001477c8 + 0x14758e));
        if (*(char *)(*(int *)(this + 0x58) + 0x68) == '\0') {
          pNVar4 = *(NoticeDialog **)(this + 0x54);
          Vector<String>::elementAt((int)aSStack_38);
          Vector<String>::elementAt((int)aSStack_30);
          NoticeDialog::show(pNVar4,aSStack_38,aSStack_30,0,0);
          String::~String(aSStack_30);
          uVar17 = String::~String(aSStack_38);
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0xc),fVar16);
          InviteDialog::setFacebookCallback
                    (*(InviteDialog **)(this + 0x58),*(_func_void_void_ptr **)(iVar9 + DAT_001477cc)
                     ,this);
          InviteDialog::setEmailCallback
                    (*(_func_void_void_ptr **)(this + 0x58),*(void **)(iVar9 + DAT_001477d0));
          InviteDialog::setSMSCallback
                    (*(_func_void_void_ptr **)(this + 0x58),*(void **)(iVar9 + DAT_001477d4));
          uVar17 = (**(code **)(**(int **)(this + 0x58) + 0x20))(*(int **)(this + 0x58),1);
          *(int *)(*(int *)(this + 0x58) + 0x6c) = DAT_001477d8 + 0x1475da;
        }
      }
      iVar7 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x34),
                         *(int *)(*(int *)(this + 0xc) + DAT_001477c0) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001477c0),(float)uVar17,
                         (float)((ulonglong)uVar17 >> 0x20));
      uVar17 = CONCAT44(extraout_s1_03,extraout_s0_03);
      if (iVar7 != 0) {
        L_PrintLog((char *)(DAT_001477e4 + 0x147640),(char *)(DAT_001477e8 + 0x147642));
        if (*(char *)(*(int *)(this + 0x58) + 0x68) == '\0') {
          pNVar4 = *(NoticeDialog **)(this + 0x54);
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          NoticeDialog::show(pNVar4,aSStack_28,aSStack_20,0,0);
          String::~String(aSStack_20);
          uVar17 = String::~String(aSStack_28);
        }
        else {
          ReferralCodeDialog::setReferralCallbacks
                    (*(ReferralCodeDialog **)(this + 0x68),
                     *(_func_void_void_ptr **)(iVar9 + DAT_001477ec),
                     *(_func_void_void_ptr_ccServerFailureCode **)(iVar9 + DAT_001477f0),this);
          ReferralCodeDialog::setCancelCallback
                    (*(ReferralCodeDialog **)(this + 0x68),
                     *(_func_void_void_ptr **)(iVar9 + DAT_001477f4),this);
          uVar17 = (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
        }
      }
      iVar7 = 0;
      while( true ) {
        if (*(int *)(this + 0x78) + 1 <= iVar7) break;
        puVar8 = (uint *)(*(int *)(this + 0x7c) + iVar7 * 0x18);
        this_00 = (ZCImageButton *)puVar8[4];
        uVar2 = *puVar8;
        piVar11 = (int *)puVar8[2];
        piVar5 = (int *)puVar8[3];
        if ((this_00[0x86] != (ZCImageButton)0x0) && (this_00[0x14] != (ZCImageButton)0x0)) {
          uVar1 = 0x3f800000;
          iVar15 = ZCImageButton::contains
                             (this_00,*(int *)(*(int *)(this + 0xc) + DAT_001477c0) >> 0x10,
                              (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001477c0),
                              (float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
          uVar17 = CONCAT44(extraout_s1_04,extraout_s0_04);
          if (iVar15 != 0) {
            iVar15 = CCServer::IsFriendBanned(*(void **)(*(int *)(this + 0xc) + DAT_001477f8),uVar2)
            ;
            uVar6 = (uint)(iVar15 == 0);
            if (uVar6 == 0) {
              uVar14 = *(undefined4 *)(this + 0x6c);
            }
            else {
              uVar14 = *(undefined4 *)(this + 0x70);
            }
            *(undefined4 *)(this_00 + 0x60) = uVar14;
            pcVar13 = *(code **)(*piVar11 + 0x24);
            if (uVar6 == 0) {
              uVar14 = 0xffffffff;
              puVar12 = (undefined4 *)0x0;
            }
            else {
              puVar12 = *(undefined4 **)(iVar9 + DAT_001477fc);
              uVar14 = *puVar12;
            }
            (*pcVar13)(piVar11,uVar14,puVar12,pcVar13,uVar1);
            if (uVar6 == 0) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = **(undefined4 **)(iVar9 + DAT_001477fc);
            }
            (**(code **)(*piVar5 + 0x24))(piVar5,uVar1);
            uVar17 = CCServer::SetFriendBanned
                               (*(void **)(*(int *)(this + 0xc) + DAT_001477f8),uVar2,uVar6);
          }
        }
        iVar7 = iVar7 + 1;
      }
    }
    piVar11 = *(int **)(this + 0x3c);
    pcVar13 = *(code **)(*piVar11 + 0x14);
    uVar1 = __floatsisf(piVar11[2]);
    __addsf3(uVar1,*(undefined4 *)(this + 0x90));
    uVar2 = __fixsfsi();
    uVar6 = *(int *)(*(int *)(this + 0x38) + 0x10) - piVar11[4];
    uVar6 = uVar6 & (int)(uVar6 - 1 | uVar6) >> 0x1f;
    if ((int)uVar6 <= (int)uVar2) {
      uVar6 = (int)(uVar2 - 1 | uVar2) >> 0x1f & uVar2;
    }
    (*pcVar13)(piVar11,0,uVar6);
    uVar14 = *(undefined4 *)(this + 0x90);
    puVar12 = *(undefined4 **)(iVar9 + DAT_0014795c);
    uVar1 = __floatsisf(param_1);
    uVar1 = __mulsf3(uVar1,*puVar12);
    iVar7 = __aeabi_fcmplt(uVar1,0x3f800000);
    if (iVar7 == 0) {
      uVar1 = 0x3f800000;
    }
    uVar1 = __subsf3(0x3f800000,uVar1);
    iVar7 = __mulsf3(uVar14,uVar1);
    *(int *)(this + 0x90) = iVar7;
    iVar15 = __aeabi_fcmpge(iVar7,0);
    if (iVar15 == 0) {
      iVar7 = iVar7 + -0x80000000;
    }
    iVar7 = __aeabi_fcmplt(iVar7,**(undefined4 **)(iVar9 + DAT_00147960));
    if (iVar7 != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x20))
              (*(int **)(this + 0x2c),*(uint *)(*(int *)(this + 0x3c) + 8) >> 0x1f);
    fVar16 = (float)(**(code **)(**(int **)(this + 0x30) + 0x20))
                              (*(int **)(this + 0x30),
                               *(int *)(*(int *)(this + 0x38) + 0x10) <
                               *(int *)(*(int *)(this + 0x3c) + 8) +
                               *(int *)(*(int *)(this + 0x3c) + 0x10));
    if (*(char *)(*(int *)(this + 0xc) + DAT_00147964) != '\0') {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00147964) = 0;
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar16);
      pCVar10 = *(CapcomGame **)(this + 0xc);
      pGVar3 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar3);
      CapcomGame::setNextState(pCVar10,(GameState *)pGVar3);
    }
  }
  return;
}


