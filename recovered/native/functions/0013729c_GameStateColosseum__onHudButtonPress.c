/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013729c GameStateColosseum::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001372ae) */
/* WARNING: Removing unreachable block (ram,0x001372ae) */
/* GameStateColosseum::onHudButtonPress(GameStateColosseum*, int) */

undefined4 __thiscall
GameStateColosseum::onHudButtonPress
          (GameStateColosseum *this,GameStateColosseum *param_1,int param_2)

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
  
  iVar3 = DAT_0013749c + 0x1372a8;
  switch(param_1) {
  case (GameStateColosseum *)0x0:
    pCVar4 = *(ConfirmDialog **)(this + 0x8c);
    Vector<String>::elementAt((int)aSStack_60);
    Vector<String>::elementAt((int)aSStack_58);
    Vector<String>::elementAt((int)aSStack_50);
    ConfirmDialog::show(pCVar4,aSStack_60,aSStack_58,aSStack_50,
                        *(undefined4 *)(iVar3 + DAT_001374ac),this);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    this_00 = aSStack_60;
    goto LAB_00137448;
  case (GameStateColosseum *)0x4:
    ZombieCafe::playEffect(*(int *)(this + 0xc),in_s0);
    break;
  case (GameStateColosseum *)0x7:
    if ((*(int *)(this + 0x13c) == 0) && (-1 < *(int *)(this + 0x118))) {
      pCVar2 = (CafeObject *)**(undefined4 **)(this + 0x11c);
      *(CafeObject **)(this + 0x13c) = pCVar2;
      Cafe::select(*(Cafe **)(this + 0x70),pCVar2);
    }
    break;
  case (GameStateColosseum *)0x8:
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001374b0),'&');
    if (iVar1 == 0) {
      return 1;
    }
    pCVar4 = *(ConfirmDialog **)(this + 0x8c);
    String::String(aSStack_38,(char *)(DAT_001374b4 + 0x137372));
    Vector<String>::elementAt((int)aSStack_48);
    Vector<String>::elementAt((int)aSStack_40);
    ConfirmDialog::show(pCVar4,aSStack_38,aSStack_48,aSStack_40,
                        *(undefined4 *)(iVar3 + DAT_001374b8),this);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    this_00 = aSStack_38;
    goto LAB_00137448;
  case (GameStateColosseum *)0xb:
    BuyToxinDialog::show(*(BuyToxinDialog **)(this + 0x90));
    *(int *)(*(int *)(this + 0x90) + 100) = DAT_001374bc + 0x1373d0;
    break;
  case (GameStateColosseum *)0xf:
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001374b0),'\x16');
    if (iVar3 != 0) {
      ObjectiveDialog::show(*(ObjectiveDialog **)(this + 0x98));
    }
    break;
  case (GameStateColosseum *)0x12:
    pCVar4 = *(ConfirmDialog **)(this + 0x8c);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar3 + DAT_001374c4),this);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_00 = aSStack_30;
LAB_00137448:
    String::~String(this_00);
  }
  return 1;
}


