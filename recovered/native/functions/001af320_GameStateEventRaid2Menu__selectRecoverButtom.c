/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af320 GameStateEventRaid2Menu::selectRecoverButtom */

/* GameStateEventRaid2Menu::selectRecoverButtom() */

void __thiscall GameStateEventRaid2Menu::selectRecoverButtom(GameStateEventRaid2Menu *this)

{
  int iVar1;
  String *this_00;
  ConfirmDialog *pCVar2;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 0) {
    pCVar2 = *(ConfirmDialog **)(this + 0x60);
    String::String(aSStack_58,(char *)(DAT_001af468 + 0x1af33a));
    String::String(aSStack_50,(char *)(DAT_001af46c + 0x1af344));
    String::String(aSStack_48,(char *)(DAT_001af470 + 0x1af34e));
    ConfirmDialog::show(pCVar2,aSStack_58,aSStack_50,aSStack_48,
                        *(undefined4 *)(DAT_001af474 + 0x1af35a),this);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    this_00 = aSStack_58;
  }
  else {
    iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
    if (iVar1 == 1) {
      pCVar2 = *(ConfirmDialog **)(this + 0x60);
      String::String(aSStack_40,(char *)(DAT_001af478 + 0x1af38a));
      String::String(aSStack_38,(char *)(DAT_001af47c + 0x1af394));
      String::String(aSStack_30,(char *)(DAT_001af480 + 0x1af39e));
      ConfirmDialog::show(pCVar2,aSStack_40,aSStack_38,aSStack_30,
                          *(undefined4 *)(DAT_001af484 + 0x1af3aa),this);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
      this_00 = aSStack_40;
    }
    else {
      iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
      if (iVar1 != 2) {
        return;
      }
      pCVar2 = *(ConfirmDialog **)(this + 0x60);
      String::String(aSStack_28,(char *)(DAT_001af488 + 0x1af3da));
      String::String(aSStack_20,(char *)(DAT_001af48c + 0x1af3e4));
      String::String(aSStack_18,(char *)(DAT_001af490 + 0x1af3ee));
      ConfirmDialog::show(pCVar2,aSStack_28,aSStack_20,aSStack_18,
                          *(undefined4 *)(DAT_001af494 + 0x1af3fa),this);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
      this_00 = aSStack_28;
    }
  }
  String::~String(this_00);
  return;
}


