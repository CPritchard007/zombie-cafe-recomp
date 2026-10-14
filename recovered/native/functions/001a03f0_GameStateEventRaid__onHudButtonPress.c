/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a03f0 GameStateEventRaid::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001a0402) */
/* WARNING: Removing unreachable block (ram,0x001a0402) */
/* GameStateEventRaid::onHudButtonPress(GameStateEventRaid*, int) */

undefined4 __thiscall
GameStateEventRaid::onHudButtonPress
          (GameStateEventRaid *this,GameStateEventRaid *param_1,int param_2)

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
  
  iVar3 = DAT_001a0604 + 0x1a03fc;
  switch(param_1) {
  case (GameStateEventRaid *)0x0:
    pCVar4 = *(ConfirmDialog **)(this + 0x78);
    Vector<String>::elementAt((int)aSStack_60);
    Vector<String>::elementAt((int)aSStack_58);
    Vector<String>::elementAt((int)aSStack_50);
    ConfirmDialog::show(pCVar4,aSStack_60,aSStack_58,aSStack_50,
                        *(undefined4 *)(iVar3 + DAT_001a0614),this);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    this_01 = aSStack_60;
    goto LAB_001a05b0;
  case (GameStateEventRaid *)0x4:
    ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
    break;
  case (GameStateEventRaid *)0x7:
    iVar3 = *(int *)(this + 0x124);
    if (iVar3 == 0) {
      if (*(int *)(this + 0x100) < 0) {
        return 1;
      }
      pCVar2 = (CafeObject *)**(undefined4 **)(this + 0x104);
      *(CafeObject **)(this + 0x124) = pCVar2;
      Cafe::select(*(Cafe **)(this + 0x5c),pCVar2);
      this_00 = *(CharacterDetails **)(this + 0x90);
      iVar3 = *(int *)(this + 0x124);
    }
    else {
      this_00 = *(CharacterDetails **)(this + 0x90);
    }
    CharacterDetails::setCharacter(this_00,*(Character **)(iVar3 + 0x8c));
    (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),1);
    break;
  case (GameStateEventRaid *)0x8:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001a0618),'&');
    if (iVar1 == 0) {
      return 1;
    }
    pCVar4 = *(ConfirmDialog **)(this + 0x78);
    String::String(aSStack_38,(char *)(DAT_001a061c + 0x1a04d8));
    Vector<String>::elementAt((int)aSStack_48);
    Vector<String>::elementAt((int)aSStack_40);
    ConfirmDialog::show(pCVar4,aSStack_38,aSStack_48,aSStack_40,
                        *(undefined4 *)(iVar3 + DAT_001a0620),*(undefined4 *)(iVar3 + DAT_001a0624),
                        this,0,0);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    this_01 = aSStack_38;
    goto LAB_001a05b0;
  case (GameStateEventRaid *)0xb:
    BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0x7c));
    *(int *)(*(int *)(this + 0x7c) + 100) = DAT_001a0628 + 0x1a053c;
    break;
  case (GameStateEventRaid *)0xf:
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001a0618),'\x16');
    if (iVar3 != 0) {
      ObjectiveDialog::show(*(ObjectiveDialog **)(this + 0x84));
    }
    break;
  case (GameStateEventRaid *)0x12:
    pCVar4 = *(ConfirmDialog **)(this + 0x78);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar3 + DAT_001a0630),this);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_01 = aSStack_30;
LAB_001a05b0:
    String::~String(this_01);
  }
  return 1;
}


