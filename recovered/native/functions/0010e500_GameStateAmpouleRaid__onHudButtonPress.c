/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e500 GameStateAmpouleRaid::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0010e512) */
/* WARNING: Removing unreachable block (ram,0x0010e512) */
/* GameStateAmpouleRaid::onHudButtonPress(GameStateAmpouleRaid*, int) */

undefined4 __thiscall
GameStateAmpouleRaid::onHudButtonPress
          (GameStateAmpouleRaid *this,GameStateAmpouleRaid *param_1,int param_2)

{
  CharacterDetails *this_00;
  int iVar1;
  String *this_01;
  CafeObject *pCVar2;
  int iVar3;
  ConfirmDialog *pCVar4;
  float in_s0;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = DAT_0010e714 + 0x10e50c;
  switch(param_1) {
  case (GameStateAmpouleRaid *)0x0:
    pCVar4 = *(ConfirmDialog **)(this + 0x80);
    Vector<String>::elementAt((int)aSStack_60);
    Vector<String>::elementAt((int)aSStack_58);
    Vector<String>::elementAt((int)aSStack_50);
    ConfirmDialog::show(pCVar4,aSStack_60,aSStack_58,aSStack_50,
                        *(undefined4 *)(iVar3 + DAT_0010e724),this);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    this_01 = aSStack_60;
    goto LAB_0010e6c0;
  case (GameStateAmpouleRaid *)0x4:
    ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
    break;
  case (GameStateAmpouleRaid *)0x7:
    iVar3 = *(int *)(this + 0x128);
    if (iVar3 == 0) {
      if (*(int *)(this + 0x104) < 0) {
        return 1;
      }
      pCVar2 = (CafeObject *)**(undefined4 **)(this + 0x108);
      *(CafeObject **)(this + 0x128) = pCVar2;
      Cafe::select(*(Cafe **)(this + 100),pCVar2);
      this_00 = *(CharacterDetails **)(this + 0x98);
      iVar3 = *(int *)(this + 0x128);
    }
    else {
      this_00 = *(CharacterDetails **)(this + 0x98);
    }
    CharacterDetails::setCharacter(this_00,*(Character **)(iVar3 + 0x8c));
    (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),1);
    break;
  case (GameStateAmpouleRaid *)0x8:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0010e728),'&');
    if (iVar1 == 0) {
      return 1;
    }
    pCVar4 = *(ConfirmDialog **)(this + 0x80);
    String::String(aSStack_38,(char *)(DAT_0010e72c + 0x10e5ee));
    Vector<String>::elementAt((int)aSStack_48);
    Vector<String>::elementAt((int)aSStack_40);
    ConfirmDialog::show(pCVar4,aSStack_38,aSStack_48,aSStack_40,
                        *(undefined4 *)(iVar3 + DAT_0010e730),this);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    this_01 = aSStack_38;
    goto LAB_0010e6c0;
  case (GameStateAmpouleRaid *)0xb:
    BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0x84));
    *(int *)(*(int *)(this + 0x84) + 100) = DAT_0010e734 + 0x10e64a;
    break;
  case (GameStateAmpouleRaid *)0xf:
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0010e728),'\x16');
    if (iVar3 != 0) {
      ObjectiveDialog::show(*(ObjectiveDialog **)(this + 0x8c));
    }
    break;
  case (GameStateAmpouleRaid *)0x12:
    pCVar4 = *(ConfirmDialog **)(this + 0x80);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar3 + DAT_0010e73c),this);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_01 = aSStack_30;
LAB_0010e6c0:
    String::~String(this_01);
  }
  return 1;
}


