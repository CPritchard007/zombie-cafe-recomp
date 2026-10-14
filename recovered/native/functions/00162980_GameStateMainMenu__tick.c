/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00162980 GameStateMainMenu::tick */

/* GameStateMainMenu::tick(long) */

void __thiscall GameStateMainMenu::tick(GameStateMainMenu *this,long param_1)

{
  ZombieCafe ZVar1;
  int iVar2;
  LoadingGameState *this_00;
  size_t sVar3;
  int *piVar4;
  SaveDataConfirmDialog *pSVar5;
  GameStateChangeHard *this_01;
  GameStateFriends *this_02;
  uint uVar6;
  undefined1 uVar7;
  ZombieCafe *pZVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  GameStateMainMenu GVar9;
  _func_void_void_ptr *p_Var10;
  int iVar11;
  char *pcVar12;
  code *pcVar13;
  _func_void_void_ptr *p_Var14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  GameStateMainMenu *pGVar18;
  undefined4 *puVar19;
  SaveDataConfirmDialog *this_03;
  ConfirmDialog *pCVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  GameStateMainMenu *pGVar24;
  undefined4 uVar25;
  CapcomGame *pCVar26;
  NoticeDialog *pNVar27;
  GameStateMainMenu *pGVar28;
  undefined4 *puVar29;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar39;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float __x;
  undefined4 extraout_s1;
  undefined8 uVar40;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  uint uStack_4;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  
  iVar2 = DAT_00162ba8;
  iVar23 = DAT_00162ba4 + 0x16298c;
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_00162ba8);
  puVar19 = *(undefined4 **)(iVar23 + DAT_00162bac);
  *(undefined4 *)(&stack0x000003c0 + DAT_00162ba8) = *puVar19;
  ZombieCafeGameState::tick((long)this);
  GVar9 = this[DAT_00162bb0];
  *(undefined4 **)(&stack0x00000038 + iVar2) = puVar19;
  if (GVar9 != (GameStateMainMenu)0x0) {
    param_1 = *(long *)(this + 0xc);
    iVar11 = DAT_00162bb0;
    if (*(ZombieCafe *)(param_1 + 0xba0) == (ZombieCafe)0x0) {
      if ((*(int *)(param_1 + 0x690) < 0) ||
         ((int)(uint)*(ushort *)(param_1 + DAT_00162bb4) <= *(int *)(param_1 + 0x690))) {
        ZVar1 = *(ZombieCafe *)(param_1 + DAT_00162bbc);
        iVar11 = DAT_00162bbc;
        if (ZVar1 != (ZombieCafe)0x0) {
          FUN_00163a1a();
        }
        this_00 = (LoadingGameState *)operator_new(0xec);
        GameStateChooseChef::GameStateChooseChef((GameStateChooseChef *)this_00,(bool)ZVar1);
        this = (GameStateMainMenu *)this_00;
      }
      else {
        ZombieCafe::unloadDialogImages((ZombieCafe *)param_1,false);
        ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
        param_1 = *(long *)(this + 0xc);
        this = (GameStateMainMenu *)operator_new(0x200);
        GameStateCafe::GameStateCafe((GameStateCafe *)this);
        this_00 = (LoadingGameState *)operator_new(0x2c);
        LoadingGameState::LoadingGameState(this_00,(GameState *)this,(CapcomFont *)0x0,0);
        *(int *)this_00 = *(int *)(iVar23 + DAT_00162bb8) + 8;
        iVar11 = 0;
        this_00[0x14] = (LoadingGameState)0x0;
        *(undefined4 *)(this_00 + 0x28) = 0;
      }
      CapcomGame::setNextState((CapcomGame *)param_1,(GameState *)this_00);
      FUN_00163a1a();
    }
    this[iVar11] = (GameStateMainMenu)0x0;
    (**(code **)(*(int *)this + 0x28))(this,1);
    FUN_00163a1a();
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  this_03 = *(SaveDataConfirmDialog **)(this + 0x68);
  if (((this_03[0x14] == (SaveDataConfirmDialog)0x0) &&
      (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00162bc0) + 0x408) == 0)) &&
     (**(char **)(iVar23 + DAT_00162bc4) != '\0')) {
    pcVar12 = *(char **)(iVar23 + DAT_00162bc8);
    *(char **)((int)&uStack_4 + iVar2) = pcVar12;
    iVar11 = strncmp(pcVar12,(char *)(DAT_00162bcc + 0x162a78),0x20);
    if ((iVar11 != 0) || (sVar3 = strlen(*(char **)((int)&uStack_4 + iVar2)), 2 < sVar3)) {
      (**(code **)(*(int *)this_03 + 0x20))(this_03,1);
    }
  }
  piVar4 = *(int **)(this + 0x70);
  if ((char)piVar4[5] == '\0') {
    if (**(char **)(iVar23 + DAT_00162bd0) != '\0') {
      uVar7 = 1;
      pcVar13 = *(code **)(*piVar4 + 0x20);
LAB_00162aba:
      (*pcVar13)(piVar4,uVar7);
    }
  }
  else if (**(char **)(iVar23 + DAT_00162bd0) == '\0') {
    pcVar13 = *(code **)(*piVar4 + 0x20);
    uVar7 = 0;
    goto LAB_00162aba;
  }
  pSVar5 = *(SaveDataConfirmDialog **)(this + 0x90);
  if (pSVar5[0x14] != (SaveDataConfirmDialog)0x0) goto LAB_00162aee;
  pSVar5 = *(SaveDataConfirmDialog **)(this + 0x140);
  this_03 = pSVar5;
  if (pSVar5[0x14] == (SaveDataConfirmDialog)0x0) goto LAB_00162ae2;
  pcVar13 = *(code **)(*(int *)pSVar5 + 8);
  while( true ) {
    (*pcVar13)(pSVar5,param_1);
    FUN_00163a1a();
LAB_00162ae2:
    pSVar5 = *(SaveDataConfirmDialog **)(this + 0x84);
    if (pSVar5[0x14] == (SaveDataConfirmDialog)0x0) break;
LAB_00162aee:
    pcVar13 = *(code **)(*(int *)pSVar5 + 8);
  }
  iVar11 = __divsi3(param_1,10);
  *(int *)(&stack0x00000020 + iVar2) = iVar11;
  if (4 < iVar11) {
    *(undefined4 *)(&stack0x00000020 + iVar2) = 5;
  }
  uVar40 = CONCAT44(extraout_s1,extraout_s0);
  if ((**(char **)(iVar23 + DAT_00162bd4) != '\0') &&
     (pZVar8 = (ZombieCafe *)**(undefined4 **)(iVar23 + DAT_00162bd8),
     uVar40 = CONCAT44(extraout_s1,extraout_s0), pZVar8 != (ZombieCafe *)0x0)) {
    p_Var10 = *(_func_void_void_ptr **)(iVar23 + DAT_00162bdc);
    p_Var14 = *(_func_void_void_ptr **)(iVar23 + DAT_00162be0);
    *puVar29 = this;
    SaveDataConfirmDialog::show(this_03,pZVar8,p_Var10,p_Var14,(void *)*puVar30);
    uVar40 = SaveDataConfirmDialog::layout(*(SaveDataConfirmDialog **)(this + 0x140));
  }
  iVar11 = *(int *)(this + 0xc);
  if (*(int *)(iVar11 + 0x24) == 1) {
    if ((*(char **)(iVar11 + 0x20) != (char *)0x0) &&
       (pCVar20 = *(ConfirmDialog **)(this + 0x74), pCVar20[0x14] == (ConfirmDialog)0x0)) {
      String::String((String *)(&stack0x00000050 + iVar2),*(char **)(iVar11 + 0x20));
      String::String((String *)(&stack0x00000040 + iVar2),(char *)(DAT_00162be4 + 0x162b5c));
      String::String((String *)(&stack0x00000048 + iVar2),(char *)(DAT_00162be8 + 0x162b66));
      uVar15 = *(undefined4 *)(iVar23 + DAT_00162bec);
      *(GameStateMainMenu **)(&stack0xfffffff0 + iVar2) = this;
      *puVar31 = uVar15;
      ConfirmDialog::show(pCVar20,&stack0x00000050 + iVar2,&stack0x00000040 + iVar2,
                          &stack0x00000048 + iVar2);
      String::~String((String *)(&stack0x00000048 + iVar2));
      String::~String((String *)(&stack0x00000040 + iVar2));
      String::~String((String *)(&stack0x00000050 + iVar2));
      *(undefined4 *)(*(int *)(this + 0x74) + 0x98) = 1;
      uVar40 = ConfirmDialog::layout();
      *(undefined4 *)(*(int *)(this + 0xc) + 0x24) = 0;
    }
  }
  else if (((*(int *)(iVar11 + 0x24) == 2) && (*(char **)(iVar11 + 0x20) != (char *)0x0)) &&
          (pCVar20 = *(ConfirmDialog **)(this + 0x74), pCVar20[0x14] == (ConfirmDialog)0x0)) {
    String::String((String *)(&stack0x00000068 + iVar2),*(char **)(iVar11 + 0x20));
    String::String((String *)(&stack0x00000058 + iVar2),(char *)(DAT_00162f28 + 0x162c10));
    String::String((String *)(&stack0x00000060 + iVar2),(char *)(DAT_00162f2c + 0x162c1a));
    uVar15 = *(undefined4 *)(iVar23 + DAT_00162f30);
    *(GameStateMainMenu **)(&stack0xfffffff0 + iVar2) = this;
    *puVar32 = uVar15;
    ConfirmDialog::show(pCVar20,&stack0x00000068 + iVar2,&stack0x00000058 + iVar2,
                        &stack0x00000060 + iVar2);
    String::~String((String *)(&stack0x00000060 + iVar2));
    String::~String((String *)(&stack0x00000058 + iVar2));
    String::~String((String *)(&stack0x00000068 + iVar2));
    *(undefined4 *)(*(int *)(this + 0x74) + 0x98) = 2;
    uVar40 = ConfirmDialog::layout();
  }
  iVar11 = *(int *)(this + 0x44);
  uVar25 = *(undefined4 *)(iVar11 + 8);
  *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(iVar11 + 4);
  uVar21 = *(undefined4 *)(iVar11 + 0xc);
  uVar15 = *(undefined4 *)(iVar11 + 0x10);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar25;
  *(undefined4 *)(&stack0x0000000c + iVar2) = uVar21;
  *(undefined4 *)(&stack0x00000004 + iVar2) = uVar15;
  iVar11 = *(int *)(this + 0x4c);
  uVar21 = *(undefined4 *)(iVar11 + 8);
  *(undefined4 *)(&stack0x00000010 + iVar2) = *(undefined4 *)(iVar11 + 4);
  uVar25 = *(undefined4 *)(iVar11 + 0xc);
  uVar15 = *(undefined4 *)(iVar11 + 0x10);
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar21;
  *(undefined4 *)(&stack0x00000018 + iVar2) = uVar25;
  *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
  if (*(int *)(*(int *)(this + 0xc) + DAT_00162f34) != 0) {
    uVar40 = L_PrintLog((char *)(DAT_00162f38 + 0x162c86),(char *)(DAT_00162f3c + 0x162c88));
  }
  iVar11 = DAT_00162f48;
  if ((*(int *)(*(int *)(this + 0xc) + DAT_00162f34) != 0) &&
     (*(int *)(*(int *)(this + 0xc) + 0x4b8) == 0)) {
    pcVar12 = (char *)(DAT_00162f40 + 0x162ca8);
    L_PrintLog(pcVar12,(char *)(DAT_00162f44 + 0x162caa));
    uVar15 = *(undefined4 *)(&stack0x00000004 + iVar2);
    uVar21 = *(undefined4 *)(&stack0x00000000 + iVar2);
    *puVar33 = *(undefined4 *)(&stack0x0000000c + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar15;
    sprintf(&stack0x000000c0 + iVar2,(char *)(iVar11 + 0x162cb6),
            *(undefined4 *)((int)&uStack_4 + iVar2),uVar21);
    L_PrintLog((char *)(DAT_00162f4c + 0x162ccc),&stack0x000000c0 + iVar2);
    uVar15 = *(undefined4 *)(&stack0x00000008 + iVar2);
    *puVar34 = *(undefined4 *)(&stack0x00000018 + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar15;
    sprintf(&stack0x000000c0 + iVar2,(char *)(iVar11 + 0x162cb6),
            *(undefined4 *)(&stack0x00000010 + iVar2),*(undefined4 *)(&stack0x00000014 + iVar2));
    L_PrintLog((char *)(DAT_00162f50 + 0x162cea),&stack0x000000c0 + iVar2);
    uVar40 = L_PrintLog(pcVar12,(char *)(DAT_00162f54 + 0x162cf4));
  }
  if ((*(int *)(*(int *)(this + 0xc) + DAT_00162f34) != 0) &&
     (*(int *)(*(int *)(this + 0xc) + 0x4b8) == 0)) {
    uVar40 = L_PrintLog((char *)(DAT_00162f58 + 0x162d12),(char *)(DAT_00162f5c + 0x162d14));
  }
  iVar11 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x44),
                      *(long *)(*(int *)(this + 0xc) + DAT_00162f34),(float)uVar40,
                      (float)((ulonglong)uVar40 >> 0x20));
  fVar39 = extraout_s0_00;
  if (iVar11 != 0) {
    fVar39 = (float)L_PrintLog((char *)(DAT_00162f60 + 0x162d34),(char *)(DAT_00162f64 + 0x162d36));
  }
  iVar11 = DAT_00162f34;
  iVar16 = *(int *)(this + 0xc);
  if (((*(int *)(iVar16 + DAT_00162f34) != 0) && (*(int *)(iVar16 + 0x4b8) == 0)) &&
     (*(int *)(iVar16 + DAT_00162f6c) <= (int)**(short **)(iVar23 + DAT_00162f68))) {
    iVar16 = SmDev();
    iVar22 = DAT_00162f70 + 0x162d6e;
    *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(iVar16 * 4 + iVar22);
    iVar16 = SmDev();
    *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(iVar22 + iVar16 * 4 + 0x18);
    uVar40 = __extendsfdf2(*(undefined4 *)((int)&uStack_4 + iVar2));
    *puVar35 = (int)uVar40;
    *(int *)(&stack0xfffffff0 + iVar2) = (int)((ulonglong)uVar40 >> 0x20);
    uVar40 = __extendsfdf2(*(undefined4 *)(&stack0x00000000 + iVar2));
    *(int *)(&stack0xfffffff4 + iVar2) = (int)uVar40;
    *(int *)(&stack0xfffffff8 + iVar2) = (int)((ulonglong)uVar40 >> 0x20);
    snprintf(&stack0x00000080 + iVar2,0x40,(char *)(DAT_00162f74 + 0x162d96));
    uVar40 = L_PrintLog((char *)(DAT_00162f78 + 0x162da6),&stack0x00000080 + iVar2);
    iVar16 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0x68),*(long *)(*(int *)(this + 0xc) + iVar11),
                        (float)uVar40,(float)((ulonglong)uVar40 >> 0x20));
    iVar22 = *(int *)(this + 0xc);
    *(int *)(&stack0x0000000c + iVar2) = iVar16;
    if (iVar16 == 0) {
      iVar16 = ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x70),*(long *)(iVar22 + iVar11),extraout_s0_01
                          ,extraout_s1_00);
      if (iVar16 == 0) {
        iVar16 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x6c),
                            *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_02,extraout_s1_01);
        if (iVar16 == 0) {
          iVar16 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0x44),
                              *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_03,extraout_s1_02
                             );
          if (iVar16 == 0) {
            iVar16 = ZCImageButton::contains
                               (*(ZCImageButton **)(this + 0x4c),
                                *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_05,
                                extraout_s1_03);
            *(int *)(&stack0x0000000c + iVar2) = iVar16;
            if (iVar16 != 0) {
              javaHideWebViewRanking(0,0,1);
              fVar39 = (float)InfoBarClass::end_infobar();
              ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
              CCMarketing_ShowPage(*(undefined4 *)(*(int *)(this + 0xc) + DAT_001632fc),0);
              pCVar26 = *(CapcomGame **)(this + 0xc);
              this_01 = (GameStateChangeHard *)operator_new(0xac);
              GameStateOptions::GameStateOptions((GameStateOptions *)this_01);
              goto LAB_00163274;
            }
            iVar16 = ZCImageButton::contains
                               (*(ZCImageButton **)(this + 0x50),
                                *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_07,
                                extraout_s1_04);
            if (iVar16 == 0) {
              iVar11 = ZCImageButton::contains
                                 (*(ZCImageButton **)(this + 0x48),
                                  *(long *)(*(int *)(this + 0xc) + iVar11),extraout_s0_08,
                                  extraout_s1_05);
              if (iVar11 == 0) {
                iVar11 = ZCImageButton::contains
                                   (*(ZCImageButton **)(this + 0x54),
                                    *(long *)(*(int *)(this + 0xc) + DAT_0016330c),extraout_s0_09,
                                    extraout_s1_06);
                fVar39 = extraout_s0_10;
                if (iVar11 != 0) {
                  javaHideWebViewRanking(0,0,1);
                  InfoBarClass::end_infobar();
                  fVar39 = (float)CCMarketing_ShowPage
                                            (*(undefined4 *)(*(int *)(this + 0xc) + DAT_001632fc),0)
                  ;
                  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
                  pCVar26 = *(CapcomGame **)(this + 0xc);
                  this_01 = (GameStateChangeHard *)operator_new(0x58);
                  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this_01);
                  *(int *)this_01 = *(int *)(iVar23 + DAT_00163310) + 8;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x14) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x18) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x1c) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x20) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x24) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x28) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x2c) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x30) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x34) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x38) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x3c) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x40) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x44) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x48) = 0;
                  *(undefined4 *)((ZombieCafeGameState *)this_01 + 0x4c) = 0;
                  goto LAB_00163274;
                }
              }
              else {
                javaHideWebViewRanking(0,0,1);
                fVar39 = (float)InfoBarClass::end_infobar();
                ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
                pCVar26 = *(CapcomGame **)(this + 0xc);
                this_02 = (GameStateFriends *)operator_new(0x9c);
                GameStateFriends::GameStateFriends(this_02);
                CapcomGame::setNextState(pCVar26,(GameState *)this_02);
                fVar39 = (float)CCMarketing_ShowPage
                                          (*(undefined4 *)(*(int *)(this + 0xc) + DAT_001632fc),0);
              }
            }
            else {
              javaHideWebViewRanking
                        (*(undefined4 *)(&stack0x0000000c + iVar2),
                         *(undefined4 *)(&stack0x0000000c + iVar2),1);
              fVar39 = (float)InfoBarClass::end_infobar();
              ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
              iVar11 = javaIsConnected();
              if (iVar11 == 0) {
                pNVar27 = *(NoticeDialog **)(this + 0x84);
                String::String((String *)(&stack0x00000070 + iVar2),
                               (String *)
                               (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                               **(int **)(iVar23 + DAT_00163304) * 8));
                String::String((String *)(&stack0x00000078 + iVar2),
                               (String *)
                               (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                               **(int **)(iVar23 + DAT_00163308) * 8));
                *puVar38 = 0;
                NoticeDialog::show(pNVar27,&stack0x00000070 + iVar2,&stack0x00000078 + iVar2);
                String::~String((String *)(&stack0x00000078 + iVar2));
                fVar39 = (float)String::~String((String *)(&stack0x00000070 + iVar2));
              }
              else {
                fVar39 = (float)javaLaunchURL2(DAT_00163300 + 0x163156);
              }
            }
          }
          else {
            if (**(char **)(iVar23 + DAT_001632b4) != '\0') {
              L_PrintLog((char *)(DAT_001632b8 + 0x162fe0),(char *)(DAT_001632bc + 0x162fe2));
              iVar11 = ZombieCafe::checkNickNameEntry
                                 (*(void **)(*(int *)(this + 0xc) + DAT_001632c0));
              if (iVar11 == 0) {
                javaShowWebViewNickName();
                javaHideWebViewRanking(0,0,1);
                InfoBarClass::end_infobar();
                FUN_00163a1a();
              }
              pcVar12 = *(char **)(iVar23 + DAT_001632c8);
              strcpy(*(char **)(iVar23 + DAT_001632c4),pcVar12);
              L_PrintLog((char *)(DAT_001632cc + 0x163024),pcVar12);
              pcVar12 = *(char **)(iVar23 + DAT_001632d4);
              strcpy(*(char **)(iVar23 + DAT_001632d0),pcVar12);
              L_PrintLog((char *)(DAT_001632d8 + 0x16303c),pcVar12);
              if (**(char **)(iVar23 + DAT_001632dc) == '\0') {
                L_PrintLog((char *)(DAT_001632e0 + 0x163050),(char *)(DAT_001632e4 + 0x163052));
                javaWebNickNameError();
              }
            }
            L_PrintLog((char *)(DAT_001632e8 + 0x163064),*(char **)(iVar23 + DAT_001632c4));
            L_PrintLog((char *)(DAT_001632ec + 0x163072),*(char **)(iVar23 + DAT_001632d0));
            javaHideWebViewRanking(0,0,1);
            InfoBarClass::end_infobar();
            fVar39 = (float)sendDAU(this);
            fVar39 = (float)ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
            iVar11 = DAT_001632f4;
            this[DAT_001632f0] = (GameStateMainMenu)0x1;
            iVar16 = *(int *)(this + 0xc);
            if ((*(char *)(iVar16 + iVar11) == '\0') && (*(char *)(iVar16 + DAT_001632f8) == '\0'))
            {
              *(undefined1 *)(iVar16 + iVar11) = 1;
              iVar16 = CCServer::GetServerTime
                                 (*(void **)((int)*(void **)(this + 0xc) + DAT_001632c0),
                                  *(void **)(this + 0xc),-1);
              fVar39 = extraout_s0_06;
              if (iVar16 == 0) {
                *(undefined1 *)(*(int *)(this + 0xc) + iVar11) = 0;
              }
            }
          }
        }
        else {
          iVar11 = javaIsConnected();
          fVar39 = extraout_s0_04;
          if (iVar11 != 0) {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
            iVar11 = ZombieCafe::getTitleNewsId();
            ZombieCafe::setNewsId_basicEventInfo(*(ZombieCafe **)(this + 0xc),iVar11);
            InfoBarClass::start_infobarOpen
                      ((InfoBarClass *)(this + 0x150),(char *)(DAT_00162fb4 + 0x162f18));
            fVar39 = (float)(**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),0);
          }
        }
      }
      else {
        javaHideWebViewRanking
                  (*(undefined4 *)(&stack0x0000000c + iVar2),
                   *(undefined4 *)(&stack0x0000000c + iVar2),1);
        fVar39 = (float)InfoBarClass::end_infobar();
        ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
        pCVar26 = *(CapcomGame **)(this + 0xc);
        this_01 = (GameStateChangeHard *)operator_new(0xd0);
        memset(this_01,*(int *)(&stack0x0000000c + iVar2),0xd0);
        GameStateChangeHard::GameStateChangeHard(this_01);
LAB_00163274:
        fVar39 = (float)CapcomGame::setNextState(pCVar26,(GameState *)this_01);
      }
    }
    else {
      iVar11 = ZombieCafe::checkNickNameEntry(*(void **)(iVar22 + DAT_00162f7c));
      *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(iVar23 + DAT_00162f80);
      *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(iVar23 + DAT_00162f84);
      if (iVar11 == 0) {
        pcVar12 = *(char **)(iVar23 + DAT_00162f88);
        strcpy(*(char **)((int)&uStack_4 + iVar2),pcVar12);
        L_PrintLog((char *)(DAT_00162f8c + 0x162dec),pcVar12);
        pcVar12 = *(char **)(iVar23 + DAT_00162f90);
        strcpy(*(char **)(&stack0x00000000 + iVar2),pcVar12);
        L_PrintLog((char *)(DAT_00162f94 + 0x162e02),pcVar12);
      }
      iVar11 = DAT_00162f9c;
      L_PrintLog((char *)(DAT_00162f98 + 0x162e0e),*(char **)((int)&uStack_4 + iVar2));
      L_PrintLog((char *)(DAT_00162fa0 + 0x162e1a),*(char **)(&stack0x00000000 + iVar2));
      L_PrintLog((char *)(iVar11 + 0x162e18),(char *)(DAT_00162fa4 + 0x162e26));
      javaHideFixWebView(0,0,1);
      fVar39 = (float)InfoBarClass::end_infobar();
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
      pcVar12 = &stack0x000001c0 + iVar2;
      memset(pcVar12,0,0x200);
      uVar15 = CCGetDeviceID();
      *puVar36 = *(undefined4 *)(&stack0x00000000 + iVar2);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar15;
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)((int)&uStack_4 + iVar2);
      snprintf(pcVar12,0x200,(char *)(DAT_00162fa8 + 0x162e66),DAT_00162fac + 0x162e6c);
      *puVar37 = pcVar12;
      javaShowWebViewRanking(10,0x14,0x50,0x50);
      fVar39 = (float)L_PrintLog((char *)(iVar11 + 0x162e18),(char *)(DAT_00162fb0 + 0x162e88));
    }
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00163314) = 1;
  }
  uVar6 = *(uint *)(this + 0x138);
  iVar11 = (int)(short)(uVar6 >> 0x10);
  if (iVar11 < *(short *)(this + 0x96)) {
    iVar16 = (uVar6 >> 0x10) + 1;
    if (iVar11 < (*(int *)(this + 0x130) >> 0x10) + *(int *)(this + 0x134)) {
LAB_00163320:
      *(uint *)(this + 0x138) = iVar16 << 0x10 | uVar6 & 0xffff;
      fVar39 = (float)FUN_0016105c(*(undefined4 *)(this + 0x28));
    }
  }
  else if ((*(int *)(this + 0x130) >> 0x10) - *(int *)(this + 0x134) < iVar11) {
    iVar16 = (uVar6 >> 0x10) - 1;
    goto LAB_00163320;
  }
  iVar11 = *(int *)(this + 0x128);
  *(int *)(this + 0x128) = iVar11 + 1;
  if (0x168 < iVar11 + 1) {
    *(undefined4 *)(this + 0x128) = 0;
  }
  uVar6 = *(uint *)(this + 0x128);
  if ((uVar6 - 0x65 < 0x17) || (uVar6 - 0x33 < 0xf)) {
    uVar6 = uVar6 & DAT_00163604;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    if ((int)uVar6 < 5) goto LAB_001633ea;
    if (this[300] == (GameStateMainMenu)0x0) goto LAB_001633cc;
    *(undefined4 *)(*(int *)(this + 0x30) + 100) = *(undefined4 *)(this + 0x40);
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar39);
    piVar4 = *(int **)(this + 0x30);
    *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(*piVar4 + 0x14);
    iVar11 = SmDev();
    uVar15 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar23 + DAT_00163608)));
    iVar11 = SmDev();
    uVar21 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar23 + DAT_0016360c)));
    (**(code **)((int)&uStack_4 + iVar2))(piVar4,uVar15,uVar21);
    GVar9 = (GameStateMainMenu)0x0;
  }
  else {
LAB_001633ea:
    if (this[300] != (GameStateMainMenu)0x0) goto LAB_001633cc;
    *(undefined4 *)(*(int *)(this + 0x30) + 100) = *(undefined4 *)(this + 0x3c);
    ZombieCafe::stopEffect(*(ZombieCafe **)(this + 0xc),99,fVar39);
    piVar4 = *(int **)(this + 0x30);
    *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(*piVar4 + 0x14);
    iVar11 = SmDev();
    uVar15 = *(undefined4 *)(iVar11 * 4 + *(int *)(iVar23 + DAT_00163608));
    iVar11 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar11 * 4 + *(int *)(iVar23 + DAT_00163610)));
    uVar15 = __fixsfsi();
    iVar11 = SmDev();
    uVar21 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar23 + DAT_0016360c)));
    (**(code **)((int)&uStack_4 + iVar2))(piVar4,uVar15,uVar21);
    GVar9 = (GameStateMainMenu)0x1;
  }
  this[300] = GVar9;
LAB_001633cc:
  *(GameStateMainMenu **)(&stack0x00000014 + iVar2) = this + 0x120;
  *(GameStateMainMenu **)(&stack0x0000000c + iVar2) = this + 0xb8;
  pGVar24 = this + 0xa0;
  *(GameStateMainMenu **)(&stack0x0000002c + iVar2) = this;
  *(undefined4 *)(&stack0x00000024 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
  pGVar28 = this;
  do {
    uVar6 = *(uint *)pGVar24;
    uVar17 = uVar6 >> 0x10;
    if ((short)(uVar6 >> 0x10) < 1) {
      if (uVar17 != 0) {
        iVar23 = uVar17 + 1;
        goto LAB_00163464;
      }
    }
    else {
      iVar23 = uVar17 - 1;
LAB_00163464:
      *(uint *)pGVar24 = uVar6 & 0xffff | iVar23 << 0x10;
    }
    uVar6 = *(uint *)pGVar24;
    uVar17 = uVar6 & 0xffff;
    if ((short)uVar6 < 1) {
      if (uVar17 != 0) {
        uVar17 = uVar17 + 1 & 0xffff;
        goto LAB_0016348e;
      }
    }
    else {
      uVar17 = (int)((uVar17 - 1) * 0x10000) >> 0x10;
LAB_0016348e:
      *(uint *)pGVar24 = uVar17 | uVar6 & 0xffff0000;
    }
    iVar23 = *(int *)(pGVar28 + 0xe8);
    *(GameStateMainMenu **)(&stack0x00000018 + iVar2) = pGVar28 + 0xe8;
    if (DAT_00163614 < iVar23) {
      if (((uint)(iVar23 + DAT_001639b4) < 0x4f) ||
         (uVar6 = (uint)((uint)(iVar23 + DAT_001639b8) < 0x31),
         *(uint *)(&stack0x00000000 + iVar2) = uVar6, uVar6 != 0)) {
        iVar23 = *(int *)(pGVar28 + 0xdc);
        iVar11 = 0;
        if (iVar23 < 2) {
          iVar11 = iVar23 + 1;
        }
        *(int *)(pGVar28 + 0xdc) = iVar11;
        if (iVar11 < 1) {
          *(undefined4 *)(&stack0x00000000 + iVar2) = 1;
        }
        else {
          *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
        }
LAB_00163886:
        *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
      }
    }
    else {
      iVar23 = *(int *)(this + (*(int *)(pGVar28 + 0xf4) + 0x40) * 4);
      uVar15 = __floatsisf(iVar23 >> 0x10);
      uVar15 = __subsf3(uVar15,**(undefined4 **)(&stack0x0000000c + iVar2));
      *(undefined4 *)((int)&uStack_4 + iVar2) = uVar15;
      *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x0000002c + iVar2) + 0xbc;
      uVar15 = __floatsisf((int)(short)iVar23);
      uVar15 = __subsf3(uVar15,**(undefined4 **)(&stack0x00000034 + iVar2));
      *(undefined4 *)(&stack0x00000010 + iVar2) = uVar15;
      iVar23 = __aeabi_fcmpgt(uVar15,0);
      uVar15 = DAT_00163618;
      if (iVar23 != 0) {
        uVar15 = 0x3f800000;
      }
      *(undefined4 *)(&stack0x00000028 + iVar2) = uVar15;
      uVar15 = __mulsf3(*(undefined4 *)((int)&uStack_4 + iVar2),DAT_0016361c);
      *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
      iVar23 = __aeabi_fcmplt(uVar15,0xc0000000);
      if (iVar23 == 0) {
        iVar23 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000008 + iVar2),0x40000000);
        if (iVar23 != 0) {
          uVar15 = 0x40000000;
          goto LAB_0016351c;
        }
      }
      else {
        uVar15 = 0xc0000000;
LAB_0016351c:
        *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
      }
      iVar23 = DAT_00163624;
      *(GameStateMainMenu **)(&stack0x00000030 + iVar2) = pGVar28 + 0xd0;
      iVar11 = *(int *)(pGVar28 + 0xd0);
      *(int *)(&stack0x00000000 + iVar2) = iVar11;
      if (iVar11 < 0) {
        __aeabi_idivmod(-*(int *)(&stack0x00000000 + iVar2),0x168);
        iVar23 = -*(int *)(iVar23 + extraout_r1_00 * 4 + 0x163584);
      }
      else {
        __aeabi_idivmod(*(undefined4 *)(&stack0x00000000 + iVar2),0x168);
        iVar23 = *(int *)(DAT_00163620 + extraout_r1 * 4 + 0x16356e);
      }
      uVar15 = __floatsisf(iVar23);
      iVar23 = __mulsf3(uVar15,0x37800000);
      iVar11 = __aeabi_fcmpge(iVar23,0);
      if (iVar11 == 0) {
        iVar23 = iVar23 + -0x80000000;
      }
      uVar15 = __mulsf3(*(undefined4 *)(&stack0x00000008 + iVar2),iVar23);
      uVar21 = __floatsisf(*(undefined4 *)(&stack0x00000020 + iVar2));
      uVar15 = __mulsf3(uVar15,uVar21);
      *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
      iVar23 = __aeabi_fcmpge(*(undefined4 *)((int)&uStack_4 + iVar2),0);
      if (iVar23 == 0) {
        *(undefined4 *)(&stack0x0000001c + iVar2) = 0;
        iVar23 = *(int *)((int)&uStack_4 + iVar2) + -0x80000000;
      }
      else {
        *(undefined4 *)(&stack0x0000001c + iVar2) = 1;
        iVar23 = *(int *)((int)&uStack_4 + iVar2);
      }
      iVar23 = __aeabi_fcmplt(iVar23,DAT_00163628);
      uVar15 = 0;
      if (iVar23 == 0) {
        uVar15 = __divsf3(*(undefined4 *)(&stack0x00000010 + iVar2),
                          *(undefined4 *)((int)&uStack_4 + iVar2));
        iVar23 = __mulsf3(uVar15,*(undefined4 *)(&stack0x00000008 + iVar2));
        iVar11 = __aeabi_fcmpge(iVar23,0);
        if (iVar11 == 0) {
          iVar23 = iVar23 + -0x80000000;
        }
        uVar15 = __mulsf3(iVar23,*(undefined4 *)(&stack0x00000028 + iVar2));
        iVar23 = DAT_001639a8;
        *(undefined4 *)(&stack0x00000028 + iVar2) = uVar15;
        if (*(int *)(&stack0x00000000 + iVar2) < 0) {
          __aeabi_idivmod(-*(int *)(&stack0x00000000 + iVar2),0x168);
          iVar23 = -*(int *)(iVar23 + extraout_r1_02 * 4 + 0x163672);
        }
        else {
          __aeabi_idivmod(*(undefined4 *)(&stack0x00000000 + iVar2),0x168);
          iVar23 = *(int *)(DAT_0016362c + extraout_r1_01 * 4 + 0x163630);
        }
        uVar15 = __floatsisf(iVar23);
        uVar15 = __mulsf3(uVar15,0x37800000);
        uVar15 = __addsf3(uVar15,uVar15);
        uVar15 = __mulsf3(*(undefined4 *)(&stack0x00000028 + iVar2),uVar15);
      }
      iVar23 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000008 + iVar2),0);
      *(bool *)(*(int *)(pGVar28 + 0x1c) + 0x60) = iVar23 != 0;
      uVar21 = __addsf3(**(undefined4 **)(&stack0x0000000c + iVar2),
                        *(undefined4 *)(&stack0x00000008 + iVar2));
      puVar19 = *(undefined4 **)(&stack0x00000034 + iVar2);
      **(undefined4 **)(&stack0x0000000c + iVar2) = uVar21;
      uVar15 = __addsf3(*puVar19,uVar15);
      **(undefined4 **)(&stack0x00000034 + iVar2) = uVar15;
      uVar6 = *(uint *)(pGVar28 + 0xdc);
      uVar17 = 0;
      if ((int)uVar6 < 6) {
        uVar17 = uVar6 + 1;
      }
      *(uint *)(pGVar28 + 0xdc) = uVar17;
      *(uint *)(&stack0x00000000 + iVar2) = uVar17 & 1;
      if ((uVar17 & 1) != 0) {
        iVar23 = *(int *)((int)&uStack_4 + iVar2);
        if (*(int *)(&stack0x0000001c + iVar2) == 0) {
          iVar23 = *(int *)((int)&uStack_4 + iVar2) + -0x80000000;
        }
        iVar23 = __aeabi_fcmpgt(iVar23,DAT_001639ac);
        *(uint *)(&stack0x00000000 + iVar2) = (uint)(iVar23 != 0);
      }
      iVar23 = **(int **)(&stack0x00000030 + iVar2) + 3;
      if (0x9a < iVar23) {
        iVar23 = 0x24;
      }
      iVar11 = *(int *)((int)&uStack_4 + iVar2);
      **(int **)(&stack0x00000030 + iVar2) = iVar23;
      if (*(int *)(&stack0x0000001c + iVar2) == 0) {
        iVar11 = *(int *)((int)&uStack_4 + iVar2) + -0x80000000;
      }
      uVar40 = __extendsfdf2(iVar11);
      iVar23 = __aeabi_dcmpgt((int)uVar40,(int)((ulonglong)uVar40 >> 0x20),DAT_001639a0,DAT_001639a4
                             );
      if (iVar23 == 0) {
        iVar23 = __aeabi_fcmpge(*(undefined4 *)(&stack0x00000010 + iVar2),0);
        iVar11 = *(int *)(&stack0x00000010 + iVar2);
        if (iVar23 == 0) {
          iVar11 = *(int *)(&stack0x00000010 + iVar2) + -0x80000000;
        }
        uVar40 = __extendsfdf2(iVar11);
        iVar23 = __aeabi_dcmpgt((int)uVar40,(int)((ulonglong)uVar40 >> 0x20),DAT_001639a0,
                                DAT_001639a4);
        if (iVar23 == 0) {
          *(undefined4 *)(pGVar28 + 0xac) = 0;
          goto LAB_00163888;
        }
      }
      pGVar18 = pGVar28 + 0xac;
      *(uint *)(&stack0x00000008 + iVar2) = *(uint *)pGVar18;
      uVar15 = arc4random();
      *(undefined4 *)(&stack0x0000001c + iVar2) = uVar15;
      uVar15 = arc4random();
      __aeabi_uidivmod(uVar15,3);
      *(uint *)(&stack0x00000004 + iVar2) = extraout_r1_03 - 1U & 0xffff;
      __aeabi_uidivmod(*(undefined4 *)(&stack0x0000001c + iVar2),3);
      uVar6 = (extraout_r1_04 + -1) * 0x10000 | *(uint *)(&stack0x00000004 + iVar2);
      uVar6 = ((uVar6 >> 0x10) + (*(uint *)(&stack0x00000008 + iVar2) >> 0x10)) * 0x10000 |
              uVar6 + *(uint *)(&stack0x00000008 + iVar2) & 0xffff;
      *(uint *)(&stack0x00000004 + iVar2) = uVar6;
      uVar15 = __floatsisf((int)uVar6 >> 0x10);
      uVar15 = __mulsf3(uVar15,DAT_001639b0);
      ceilf(__x);
      *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
      uVar15 = __floatsisf((int)(short)*(undefined4 *)(&stack0x00000004 + iVar2));
      fVar39 = (float)__mulsf3(uVar15,DAT_001639b0);
      ceilf(fVar39);
      uVar6 = __fixsfsi();
      *(uint *)(&stack0x00000004 + iVar2) = uVar6 & 0xffff;
      iVar23 = __fixsfsi(*(undefined4 *)(&stack0x00000008 + iVar2));
      uVar6 = *(uint *)(&stack0x00000004 + iVar2) | iVar23 << 0x10;
      *(uint *)pGVar18 = uVar6;
      *(uint *)(&stack0x00000004 + iVar2) = uVar6;
      uVar6 = (uVar6 >> 0x10) + (*(uint *)pGVar24 >> 0x10);
      uVar17 = uVar6 * 0x10000 | *(int *)(&stack0x00000004 + iVar2) + *(uint *)pGVar24 & 0xffff;
      *(uint *)pGVar24 = uVar17;
      *(uint *)(&stack0x00000008 + iVar2) = uVar17;
      *(uint *)(&stack0x0000001c + iVar2) = uVar6 & 0xffff;
      iVar23 = __fixsfsi(*(undefined4 *)((int)&uStack_4 + iVar2));
      uVar6 = iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f;
      iVar23 = (int)(short)*(undefined4 *)(&stack0x0000001c + iVar2);
      if ((int)uVar6 < (iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f)) {
        if (iVar23 < 1) {
          uVar6 = -uVar6;
        }
        *(uint *)pGVar24 = uVar6 << 0x10 | *(uint *)(&stack0x00000008 + iVar2) & 0xffff;
        *(uint *)pGVar18 = *(uint *)(&stack0x00000004 + iVar2) & 0xffff;
      }
      uVar6 = *(uint *)pGVar24;
      *(uint *)(&stack0x00000008 + iVar2) = uVar6;
      *(uint *)((int)&uStack_4 + iVar2) = uVar6 & 0xffff;
      iVar23 = __fixsfsi(*(undefined4 *)(&stack0x00000010 + iVar2));
      uVar6 = iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f;
      iVar23 = (int)(short)*(undefined4 *)((int)&uStack_4 + iVar2);
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
      if ((int)uVar6 < (iVar23 + (iVar23 >> 0x1f) ^ iVar23 >> 0x1f)) {
        if (iVar23 < 1) {
          uVar6 = -uVar6;
        }
        *(uint *)pGVar24 = uVar6 & 0xffff | *(uint *)(&stack0x00000008 + iVar2) & 0xffff0000;
        *(uint *)pGVar18 = (uint)*(ushort *)(pGVar28 + 0xae) << 0x10;
        goto LAB_00163886;
      }
    }
LAB_00163888:
    fVar39 = (float)setFlyPos(this);
    if (*(int *)(&stack0x00000000 + iVar2) == 0) {
      pcVar12 = *(char **)(&stack0x00000014 + iVar2);
      if (*pcVar12 != '\0') {
        fVar39 = (float)ImageElement::setImageAndResize
                                  (*(ImageElement **)(pGVar28 + 0x1c),*(CImage **)(this + 0x34));
        *pcVar12 = (&stack0x00000000)[iVar2];
        if (400 < **(int **)(&stack0x00000018 + iVar2)) {
          puVar19 = *(undefined4 **)(&stack0x0000000c + iVar2);
          uVar15 = __subsf3(*puVar19,0x40000000);
LAB_001638f2:
          *puVar19 = uVar15;
          fVar39 = (float)setFlyPos(this);
        }
      }
    }
    else {
      pcVar12 = *(char **)(&stack0x00000014 + iVar2);
      if (*pcVar12 == '\0') {
        fVar39 = (float)ImageElement::setImageAndResize
                                  (*(ImageElement **)(pGVar28 + 0x1c),*(CImage **)(this + 0x38));
        *pcVar12 = '\x01';
        if (400 < **(int **)(&stack0x00000018 + iVar2)) {
          puVar19 = *(undefined4 **)(&stack0x0000000c + iVar2);
          uVar15 = __addsf3(*puVar19,0x40000000);
          goto LAB_001638f2;
        }
      }
    }
    iVar23 = **(int **)(&stack0x00000018 + iVar2);
    iVar11 = *(int *)(&stack0x00000020 + iVar2);
    piVar4 = *(int **)(&stack0x00000018 + iVar2);
    *piVar4 = iVar11 + iVar23;
    if (0x578 < iVar11 + iVar23) {
      *piVar4 = 0;
      pGVar18 = pGVar28 + 0xf4;
      iVar23 = *(int *)pGVar18;
      *(int *)pGVar18 = iVar23 + 1;
      if (7 < iVar23 + 1) {
        *(int *)pGVar18 = 0;
      }
    }
    iVar23 = DAT_001639bc;
    pGVar24 = pGVar24 + 4;
    pGVar28 = pGVar28 + 4;
    *(int *)(&stack0x00000024 + iVar2) = *(int *)(&stack0x00000024 + iVar2) + 1;
    *(int *)(&stack0x0000000c + iVar2) = *(int *)(&stack0x0000000c + iVar2) + 8;
    *(int *)(&stack0x0000002c + iVar2) = *(int *)(&stack0x0000002c + iVar2) + 8;
    *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 1;
    if (*(int *)(&stack0x00000024 + iVar2) == 3) {
      if (*(int *)(&stack0x00000004 + iVar2) == 0) {
        if (this[DAT_001639bc] != (GameStateMainMenu)0x0) {
          ZombieCafe::stopEffect(*(ZombieCafe **)(this + 0xc),0x61,fVar39);
          this[iVar23] = *(GameStateMainMenu *)(&stack0x00000004 + iVar2);
        }
      }
      else if (this[DAT_001639bc] == (GameStateMainMenu)0x0) {
        ZombieCafe::playEffect((int)*(ZombieCafe **)(this + 0xc),fVar39);
        this[iVar23] = (GameStateMainMenu)0x1;
      }
      if (*(char *)(*(int *)(this + 0xc) + DAT_001639c0) != '\0') {
        javaHideWebViewRanking(0,0,1);
        FUN_00163a1a();
        return;
      }
      if (*(int *)(&stack0x000003c0 + iVar2) != **(int **)(&stack0x00000038 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


