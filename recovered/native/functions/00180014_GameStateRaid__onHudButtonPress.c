/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00180014 GameStateRaid::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00180026) */
/* WARNING: Removing unreachable block (ram,0x00180026) */
/* GameStateRaid::onHudButtonPress(GameStateRaid*, int) */

undefined4 __thiscall
GameStateRaid::onHudButtonPress(GameStateRaid *this,GameStateRaid *param_1,int param_2)

{
  CharacterDetails *this_00;
  String *this_01;
  CafeObject *pCVar1;
  ConfirmDialog *pCVar2;
  NoticeDialog *pNVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
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
  
  iVar5 = DAT_00180310 + 0x180020;
  switch(param_1) {
  case (GameStateRaid *)0x0:
    pCVar2 = *(ConfirmDialog **)(this + 0x164);
    Vector<String>::elementAt((int)aSStack_d8);
    Vector<String>::elementAt((int)aSStack_d0);
    Vector<String>::elementAt((int)aSStack_c8);
    ConfirmDialog::show(pCVar2,aSStack_d8,aSStack_d0,aSStack_c8,
                        *(undefined4 *)(iVar5 + DAT_00180320),this);
    String::~String(aSStack_c8);
    String::~String(aSStack_d0);
    this_01 = aSStack_d8;
    break;
  default:
    goto switchD_00180026_caseD_1;
  case (GameStateRaid *)0x4:
    ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
    return 1;
  case (GameStateRaid *)0x7:
    iVar5 = *(int *)(this + 0x114);
    if (iVar5 == 0) {
      if (*(int *)(this + 0xb0) < 0) {
        return 1;
      }
      pCVar1 = (CafeObject *)**(undefined4 **)(this + 0xb4);
      *(CafeObject **)(this + 0x114) = pCVar1;
      Cafe::select(*(Cafe **)(this + 0x78),pCVar1);
      this_00 = *(CharacterDetails **)(this + 0x140);
      iVar5 = *(int *)(this + 0x114);
    }
    else {
      this_00 = *(CharacterDetails **)(this + 0x140);
    }
    CharacterDetails::setCharacter(this_00,*(Character **)(iVar5 + 0x8c));
    (**(code **)(**(int **)(this + 0x140) + 0x20))(*(int **)(this + 0x140),1);
    return 1;
  case (GameStateRaid *)0x8:
    iVar4 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00180324),'&');
    if (iVar4 == 0) {
      return 1;
    }
    pCVar2 = *(ConfirmDialog **)(this + 0x164);
    Vector<String>::elementAt((int)aSStack_c0);
    Vector<String>::elementAt((int)aSStack_b8);
    Vector<String>::elementAt((int)aSStack_b0);
    ConfirmDialog::show(pCVar2,aSStack_c0,aSStack_b8,aSStack_b0,
                        *(undefined4 *)(iVar5 + DAT_0018032c),this);
    String::~String(aSStack_b0);
    String::~String(aSStack_b8);
    this_01 = aSStack_c0;
    break;
  case (GameStateRaid *)0xb:
    BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0x168));
    *(int *)(*(int *)(this + 0x168) + 100) = DAT_00180330 + 0x180182;
    return 1;
  case (GameStateRaid *)0xf:
    iVar5 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00180324),'\x16');
    if (iVar5 == 0) {
      return 1;
    }
    ObjectiveDialog::show(*(ObjectiveDialog **)(this + 0x170));
    return 1;
  case (GameStateRaid *)0x10:
    iVar4 = *(int *)(this + 0xc);
    if (((*(int *)(iVar4 + DAT_00180334) < 1) || (*(char *)(iVar4 + 0x9e0) != '\0')) &&
       ((*(int *)(iVar4 + DAT_00180338) < 1 || (*(char *)(iVar4 + DAT_0018033c) != '\0')))) {
      pNVar3 = *(NoticeDialog **)(this + 0x30);
      Vector<String>::elementAt((int)aSStack_90);
      Vector<String>::elementAt((int)aSStack_88);
      NoticeDialog::show(pNVar3,aSStack_90,aSStack_88,0,this);
      String::~String(aSStack_88);
      this_01 = aSStack_90;
    }
    else {
      pCVar2 = *(ConfirmDialog **)(this + 0x164);
      Vector<String>::elementAt((int)aSStack_a8);
      Vector<String>::elementAt((int)aSStack_a0);
      Vector<String>::elementAt((int)aSStack_98);
      ConfirmDialog::show(pCVar2,aSStack_a8,aSStack_a0,aSStack_98,
                          *(undefined4 *)(iVar5 + DAT_00180344),this);
      String::~String(aSStack_98);
      String::~String(aSStack_a0);
      this_01 = aSStack_a8;
    }
    break;
  case (GameStateRaid *)0x11:
    iVar4 = *(int *)(this + 0xc);
    if (((*(int *)(iVar4 + DAT_0018034c) < 1) || (*(char *)(iVar4 + DAT_00180350) != '\0')) &&
       ((*(int *)(iVar4 + 0x9d0) < 1 || (*(char *)(iVar4 + DAT_00180354) != '\0')))) {
      pNVar3 = *(NoticeDialog **)(this + 0x30);
      Vector<String>::elementAt((int)aSStack_68);
      Vector<String>::elementAt((int)aSStack_60);
      NoticeDialog::show(pNVar3,aSStack_68,aSStack_60,0,this);
      String::~String(aSStack_60);
      this_01 = aSStack_68;
    }
    else {
      pCVar2 = *(ConfirmDialog **)(this + 0x164);
      Vector<String>::elementAt((int)aSStack_80);
      Vector<String>::elementAt((int)aSStack_78);
      Vector<String>::elementAt((int)aSStack_70);
      ConfirmDialog::show(pCVar2,aSStack_80,aSStack_78,aSStack_70,
                          *(undefined4 *)(iVar5 + DAT_0018035c),this);
      String::~String(aSStack_70);
      String::~String(aSStack_78);
      this_01 = aSStack_80;
    }
    break;
  case (GameStateRaid *)0x12:
    pCVar2 = *(ConfirmDialog **)(this + 0x164);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar2,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar5 + DAT_00180550),this);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_01 = aSStack_30;
    break;
  case (GameStateRaid *)0x17:
    if ((*(int *)(*(int *)(this + 0xc) + DAT_00180530) < 1) ||
       (*(char *)(*(int *)(this + 0xc) + DAT_00180538) != '\0')) {
      pNVar3 = *(NoticeDialog **)(this + 0x30);
      Vector<String>::elementAt((int)aSStack_40);
      Vector<String>::elementAt((int)aSStack_38);
      NoticeDialog::show(pNVar3,aSStack_40,aSStack_38,0,this);
      String::~String(aSStack_38);
      this_01 = aSStack_40;
    }
    else {
      pCVar2 = *(ConfirmDialog **)(this + 0x164);
      Vector<String>::elementAt((int)aSStack_58);
      Vector<String>::elementAt((int)aSStack_50);
      Vector<String>::elementAt((int)aSStack_48);
      ConfirmDialog::show(pCVar2,aSStack_58,aSStack_50,aSStack_48,
                          *(undefined4 *)(iVar5 + DAT_00180544),this);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      this_01 = aSStack_58;
    }
  }
  String::~String(this_01);
switchD_00180026_caseD_1:
  return 1;
}


