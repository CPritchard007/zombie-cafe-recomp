/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b60bc GameStateEventRaid3::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001b60ce) */
/* WARNING: Removing unreachable block (ram,0x001b60ce) */
/* GameStateEventRaid3::onHudButtonPress(GameStateEventRaid3*, int) */

undefined4 __thiscall
GameStateEventRaid3::onHudButtonPress
          (GameStateEventRaid3 *this,GameStateEventRaid3 *param_1,int param_2)

{
  int iVar1;
  String *this_00;
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
  
  iVar3 = DAT_001b62c0 + 0x1b60c8;
  switch(param_1) {
  case (GameStateEventRaid3 *)0x0:
    pCVar4 = *(ConfirmDialog **)(this + 0xa0);
    Vector<String>::elementAt((int)aSStack_60);
    Vector<String>::elementAt((int)aSStack_58);
    Vector<String>::elementAt((int)aSStack_50);
    ConfirmDialog::show(pCVar4,aSStack_60,aSStack_58,aSStack_50,
                        *(undefined4 *)(iVar3 + DAT_001b62d0),this);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    this_00 = aSStack_60;
    goto LAB_001b626a;
  case (GameStateEventRaid3 *)0x4:
    ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
    break;
  case (GameStateEventRaid3 *)0x7:
    if ((*(int *)(this + 0x150) == 0) && (-1 < *(int *)(this + 300))) {
      pCVar2 = (CafeObject *)**(undefined4 **)(this + 0x130);
      *(CafeObject **)(this + 0x150) = pCVar2;
      Cafe::select(*(Cafe **)(this + 0x84),pCVar2);
    }
    break;
  case (GameStateEventRaid3 *)0x8:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001b62d4),'&');
    if (iVar1 == 0) {
      return 1;
    }
    pCVar4 = *(ConfirmDialog **)(this + 0xa0);
    String::String(aSStack_38,(char *)(DAT_001b62d8 + 0x1b6194));
    Vector<String>::elementAt((int)aSStack_48);
    Vector<String>::elementAt((int)aSStack_40);
    ConfirmDialog::show(pCVar4,aSStack_38,aSStack_48,aSStack_40,
                        *(undefined4 *)(iVar3 + DAT_001b62dc),this);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    this_00 = aSStack_38;
    goto LAB_001b626a;
  case (GameStateEventRaid3 *)0xb:
    BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0xa4));
    *(int *)(*(int *)(this + 0xa4) + 100) = DAT_001b62e0 + 0x1b61f2;
    break;
  case (GameStateEventRaid3 *)0xf:
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001b62d4),'\x16');
    if (iVar3 != 0) {
      ObjectiveDialog::show(*(ObjectiveDialog **)(this + 0xac));
    }
    break;
  case (GameStateEventRaid3 *)0x12:
    pCVar4 = *(ConfirmDialog **)(this + 0xa0);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar3 + DAT_001b62e8),this);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_00 = aSStack_30;
LAB_001b626a:
    String::~String(this_00);
  }
  return 1;
}


