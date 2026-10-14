/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a0088 GameStateEventRaid::onHealButtonPressed */

/* GameStateEventRaid::onHealButtonPressed(GameStateEventRaid*, ScreenElement*) */

void GameStateEventRaid::onHealButtonPressed(GameStateEventRaid *param_1,ScreenElement *param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this;
  ConfirmDialog *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  NoticeDialog *pNVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  iVar8 = DAT_001a03b8 + 0x1a0098;
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x124) + 0x8c);
    iVar1 = __aeabi_fcmple(*(undefined4 *)(iVar5 + 0x40),0);
    if ((iVar1 == 0) || (*(char *)(iVar5 + 0x44) == '\x06')) {
      iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
      if (iVar1 < 1) {
        pNVar6 = *(NoticeDialog **)(param_1 + 0x74);
        if (pNVar6 == (NoticeDialog *)0x0) {
          return;
        }
        String::String(aSStack_c8,(char *)(DAT_001a03bc + 0x1a00cc));
        Vector<String>::elementAt((int)aSStack_c0);
        NoticeDialog::show(pNVar6,aSStack_c8,aSStack_c0,0,param_1);
        String::~String(aSStack_c0);
        this = aSStack_c8;
      }
      else {
        if (*(int *)(param_1 + 0x78) == 0) {
          onHealConfirmed(param_1);
          return;
        }
        uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x124) + 0x8c) + 0x40);
        uVar2 = Character::getMaxEnergy();
        uVar2 = __divsf3(uVar7,uVar2);
        puVar4 = *(undefined4 **)(iVar8 + DAT_001a03c4);
        iVar1 = __aeabi_fcmpgt(uVar2,*puVar4);
        pCVar3 = *(ConfirmDialog **)(param_1 + 0x78);
        uVar2 = *(undefined4 *)(iVar8 + DAT_001a03d8);
        if (iVar1 == 0) {
          Vector<String>::elementAt((int)aSStack_50);
          String::String(aSStack_48,(char *)(DAT_001a03ec + 0x1a0266));
          String::operator+(aSStack_40,aSStack_50,aSStack_48);
          Vector<String>::elementAt((int)aSStack_38);
          String::operator+(aSStack_30,aSStack_40,aSStack_38);
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          ConfirmDialog::show(pCVar3,aSStack_30,aSStack_28,aSStack_20,uVar2,param_1);
          String::~String(aSStack_20);
          String::~String(aSStack_28);
          String::~String(aSStack_30);
          String::~String(aSStack_38);
          String::~String(aSStack_40);
          String::~String(aSStack_48);
          this = aSStack_50;
        }
        else {
          String::String(aSStack_b8,(char *)(DAT_001a03dc + 0x1a0150));
          __mulsf3(*puVar4,DAT_001a03e0);
          __fixsfsi();
          String::valueOf((int)aSStack_b0);
          String::operator+(aSStack_a8,aSStack_b8,aSStack_b0);
          String::String(aSStack_a0,(char *)(DAT_001a03e4 + 0x1a017a));
          String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
          Vector<String>::elementAt((int)aSStack_90);
          String::operator+(aSStack_88,aSStack_98,aSStack_90);
          String::String(aSStack_80,(char *)(DAT_001a03e8 + 0x1a01a8));
          String::operator+(aSStack_78,aSStack_88,aSStack_80);
          Vector<String>::elementAt((int)aSStack_70);
          String::operator+(aSStack_68,aSStack_78,aSStack_70);
          Vector<String>::elementAt((int)aSStack_60);
          Vector<String>::elementAt((int)aSStack_58);
          ConfirmDialog::show(pCVar3,aSStack_68,aSStack_60,aSStack_58,uVar2,param_1);
          String::~String(aSStack_58);
          String::~String(aSStack_60);
          String::~String(aSStack_68);
          String::~String(aSStack_70);
          String::~String(aSStack_78);
          String::~String(aSStack_80);
          String::~String(aSStack_88);
          String::~String(aSStack_90);
          String::~String(aSStack_98);
          String::~String(aSStack_a0);
          String::~String(aSStack_a8);
          String::~String(aSStack_b0);
          this = aSStack_b8;
        }
      }
      String::~String(this);
    }
  }
  return;
}


