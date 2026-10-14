/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017508c GameStateOptions::tick */

/* GameStateOptions::tick(long) */

void __thiscall GameStateOptions::tick(GameStateOptions *this,long param_1)

{
  int iVar1;
  int *piVar2;
  String *this_00;
  GameStateMainMenu *pGVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  CapcomGame *pCVar7;
  int iVar8;
  ConfirmDialog *pCVar9;
  NoticeDialog *pNVar10;
  float extraout_s0;
  float fVar11;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar12;
  float extraout_s1;
  float extraout_s1_00;
  float fVar13;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar8 = DAT_00175404 + 0x1750a0;
  if ((char)(*(int **)(this + 0xa4))[5] != '\0') {
    (**(code **)(**(int **)(this + 0xa4) + 8))();
    return;
  }
  iVar1 = javaLoggedIn();
  piVar2 = *(int **)(this + 100);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    piVar2 = *(int **)(this + 0x68);
    pcVar5 = *(code **)(*piVar2 + 0x20);
  }
  else {
    (**(code **)(*piVar2 + 0x20))(piVar2,0);
    piVar2 = *(int **)(this + 0x68);
    pcVar5 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar5)(piVar2,iVar1 != 0);
  uVar12 = (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    return;
  }
  if (*(char *)(*(int *)(this + 0x98) + 0x14) != '\0') {
    return;
  }
  if (this[0xa9] != (GameStateOptions)0x0) {
    return;
  }
  if ((*(int *)(this + 0x80) != 0) && (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0')) {
    return;
  }
  if ((*(uint *)(*(int *)(this + 0x74) + 0x70) != (uint)(byte)(*(ZombieCafe **)(this + 0xc))[0x3f8])
     || (this[0x84] != (GameStateOptions)0x0)) {
    ZombieCafe::setMusicVolume
              (*(ZombieCafe **)(this + 0xc),(uchar)*(uint *)(*(int *)(this + 0x74) + 0x70));
    piVar2 = *(int **)(this + 0x28);
    pcVar5 = *(code **)(*piVar2 + 0x44);
    String::valueOf((int)aSStack_50);
    (*pcVar5)(piVar2,aSStack_50);
    uVar12 = String::~String(aSStack_50);
  }
  if ((*(uint *)(*(int *)(this + 0x78) + 0x70) !=
       (uint)(byte)(*(ZombieCafe **)(this + 0xc))[DAT_00175408]) ||
     (this[0x84] != (GameStateOptions)0x0)) {
    ZombieCafe::setSfxVolume
              (*(ZombieCafe **)(this + 0xc),(uchar)*(uint *)(*(int *)(this + 0x78) + 0x70));
    piVar2 = *(int **)(this + 0x30);
    pcVar5 = *(code **)(*piVar2 + 0x44);
    String::valueOf((int)aSStack_48);
    (*pcVar5)(piVar2,aSStack_48);
    uVar12 = String::~String(aSStack_48);
  }
  fVar11 = (float)uVar12;
  if (this[0x84] != (GameStateOptions)0x0) {
    this[0xa8] = (GameStateOptions)0x0;
  }
  this[0x84] = (GameStateOptions)0x0;
  iVar1 = DAT_00175410;
  iVar6 = *(int *)(this + 0xc);
  if ((((*(char *)(iVar6 + DAT_0017540c) == '\0') &&
       (iVar4 = *(int *)(iVar6 + DAT_00175410), iVar4 != 0)) && (*(int *)(iVar6 + 0x4b8) == 0)) &&
     (*(int *)(iVar6 + DAT_00175418) <= (int)**(short **)(iVar8 + DAT_00175414))) {
    iVar6 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x58),iVar4 >> 0x10,(int)(short)iVar4,fVar11,
                       (float)((ulonglong)uVar12 >> 0x20));
    if (iVar6 == 0) {
      fVar11 = extraout_s0;
      fVar13 = extraout_s1;
      if ((*(char *)(*(int *)(this + 0x44) + 0x14) == '\0') ||
         (iVar1 = *(int *)(*(int *)(this + 0xc) + iVar1),
         iVar1 = ZCImageButton::contains
                           (*(ZCImageButton **)(this + 0x50),iVar1 >> 0x10,(int)(short)iVar1,
                            extraout_s0,extraout_s1), fVar11 = extraout_s0_00,
         fVar13 = extraout_s1_00, iVar1 == 0)) {
        if ((*(char *)(*(int *)(this + 0x48) + 0x14) == '\0') ||
           (iVar1 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x54),
                               *(int *)(*(int *)(this + 0xc) + DAT_00175410) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00175410),fVar11,
                               fVar13), fVar11 = extraout_s0_01, iVar1 == 0)) {
          if (((*(ScreenElement **)(this + 0x40))[0x14] != (ScreenElement)0x0) &&
             (iVar8 = ScreenElement::contains
                                (*(ScreenElement **)(this + 0x40),
                                 *(int *)(*(int *)(this + 0xc) + DAT_00175410) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_00175410)),
             fVar11 = extraout_s0_03, iVar8 != 0)) {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
            fVar11 = (float)(**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),1);
          }
          goto LAB_0017538c;
        }
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
        iVar1 = DAT_0017542c;
        CCFacebook::SetHandler
                  (*(void **)(*(int *)(this + 0xc) + DAT_0017542c),
                   *(_func_void_ccFacebookMessageType_void_ptr **)(iVar8 + DAT_00175430),this);
        iVar8 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + iVar1));
        if (iVar8 != 0) {
          fVar11 = (float)CCFacebook::Logout(*(void **)(*(int *)(this + 0xc) + iVar1));
          goto LAB_0017538c;
        }
        fVar11 = extraout_s0_02;
        if (this[0xa8] != (GameStateOptions)0x0) goto LAB_0017538c;
        iVar8 = javaIsConnected();
        if (iVar8 != 0) {
          L_PrintLog((char *)(DAT_0017543c + 0x175352),(char *)(DAT_00175440 + 0x175354));
          fVar11 = (float)CCFacebook::Login(*(void **)(*(int *)(this + 0xc) + iVar1));
          goto LAB_0017538c;
        }
        pNVar10 = *(NoticeDialog **)(this + 0x98);
        Vector<String>::elementAt((int)aSStack_28);
        Vector<String>::elementAt((int)aSStack_20);
        NoticeDialog::show(pNVar10,aSStack_28,aSStack_20,0,0);
        String::~String(aSStack_20);
        this_00 = aSStack_28;
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
        pCVar9 = *(ConfirmDialog **)(this + 0x7c);
        Vector<String>::elementAt((int)aSStack_40);
        Vector<String>::elementAt((int)aSStack_38);
        Vector<String>::elementAt((int)aSStack_30);
        ConfirmDialog::show(pCVar9,aSStack_40,aSStack_38,aSStack_30,
                            *(undefined4 *)(iVar8 + DAT_00175428),this);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        this_00 = aSStack_40;
      }
      fVar11 = (float)String::~String(this_00);
    }
    else {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
      pCVar7 = *(CapcomGame **)(this + 0xc);
      pGVar3 = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(pGVar3);
      fVar11 = (float)CapcomGame::setNextState(pCVar7,(GameState *)pGVar3);
    }
  }
LAB_0017538c:
  if ((((*(char *)(*(int *)(this + 0xc) + DAT_00175444) != '\0') &&
       (*(undefined1 *)(*(int *)(this + 0xc) + DAT_00175444) = 0,
       *(char *)(*(int *)(this + 0x98) + 0x14) == '\0')) &&
      (*(char *)(*(int *)(this + 0x7c) + 0x14) == '\0')) &&
     (*(char *)(*(int *)(this + 0xa4) + 0x14) == '\0')) {
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar11);
    pCVar7 = *(CapcomGame **)(this + 0xc);
    pGVar3 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(pGVar3);
    CapcomGame::setNextState(pCVar7,(GameState *)pGVar3);
  }
  return;
}


