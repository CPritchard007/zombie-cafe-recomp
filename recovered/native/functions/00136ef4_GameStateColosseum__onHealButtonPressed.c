/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136ef4 GameStateColosseum::onHealButtonPressed */

/* GameStateColosseum::onHealButtonPressed(GameStateColosseum*, ScreenElement*) */

void GameStateColosseum::onHealButtonPressed(GameStateColosseum *param_1,ScreenElement *param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this;
  undefined4 *puVar3;
  int iVar4;
  ConfirmDialog *pCVar5;
  GameStateColosseum *pGVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  iVar7 = DAT_00137260 + 0x136f04;
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x13c) + 0x8c);
    iVar1 = __aeabi_fcmple(*(undefined4 *)(iVar4 + 0x40),0);
    if ((iVar1 == 0) || (*(char *)(iVar4 + 0x44) == '\x06')) {
      iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
      pGVar6 = param_1 + 0x8c;
      if (iVar1 < 1) {
        pCVar5 = *(ConfirmDialog **)pGVar6;
        if (pCVar5 == (ConfirmDialog *)0x0) {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 0) {
          return;
        }
        Vector<String>::elementAt((int)aSStack_d0);
        Vector<String>::elementAt((int)aSStack_c8);
        Vector<String>::elementAt((int)aSStack_c0);
        ConfirmDialog::show(pCVar5,aSStack_d0,aSStack_c8,aSStack_c0,
                            *(undefined4 *)(iVar7 + DAT_00137270),param_1);
        String::~String(aSStack_c0);
        String::~String(aSStack_c8);
        this = aSStack_d0;
      }
      else {
        if (*(int *)pGVar6 == 0) {
          onHealConfirmed(param_1);
          return;
        }
        uVar8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x13c) + 0x8c) + 0x40);
        uVar2 = Character::getMaxEnergy();
        uVar2 = __divsf3(uVar8,uVar2);
        puVar3 = *(undefined4 **)(iVar7 + DAT_00137274);
        iVar1 = __aeabi_fcmpgt(uVar2,*puVar3);
        pCVar5 = *(ConfirmDialog **)pGVar6;
        uVar2 = *(undefined4 *)(iVar7 + DAT_00137284);
        if (iVar1 == 0) {
          Vector<String>::elementAt((int)aSStack_50);
          String::String(aSStack_48,(char *)(DAT_00137298 + 0x137100));
          String::operator+(aSStack_40,aSStack_50,aSStack_48);
          Vector<String>::elementAt((int)aSStack_38);
          String::operator+(aSStack_30,aSStack_40,aSStack_38);
          Vector<String>::elementAt((int)aSStack_28);
          Vector<String>::elementAt((int)aSStack_20);
          ConfirmDialog::show(pCVar5,aSStack_30,aSStack_28,aSStack_20,uVar2,param_1);
          String::~String(aSStack_20);
          String::~String(aSStack_28);
          String::~String(aSStack_30);
          String::~String(aSStack_38);
          String::~String(aSStack_40);
          String::~String(aSStack_48);
          this = aSStack_50;
        }
        else {
          String::String(aSStack_b8,(char *)(DAT_00137288 + 0x136fea));
          __mulsf3(*puVar3,DAT_0013728c);
          __fixsfsi();
          String::valueOf((int)aSStack_b0);
          String::operator+(aSStack_a8,aSStack_b8,aSStack_b0);
          String::String(aSStack_a0,(char *)(DAT_00137290 + 0x137014));
          String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
          Vector<String>::elementAt((int)aSStack_90);
          String::operator+(aSStack_88,aSStack_98,aSStack_90);
          String::String(aSStack_80,(char *)(DAT_00137294 + 0x137042));
          String::operator+(aSStack_78,aSStack_88,aSStack_80);
          Vector<String>::elementAt((int)aSStack_70);
          String::operator+(aSStack_68,aSStack_78,aSStack_70);
          Vector<String>::elementAt((int)aSStack_60);
          Vector<String>::elementAt((int)aSStack_58);
          ConfirmDialog::show(pCVar5,aSStack_68,aSStack_60,aSStack_58,uVar2,param_1);
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


