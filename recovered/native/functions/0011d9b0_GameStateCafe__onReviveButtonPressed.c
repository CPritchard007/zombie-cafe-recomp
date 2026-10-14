/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011d9b0 GameStateCafe::onReviveButtonPressed */

/* GameStateCafe::onReviveButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onReviveButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  ZombieCafe *this;
  int iVar1;
  undefined4 uVar2;
  String *this_00;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ConfirmDialog *pCVar7;
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
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
  
  iVar5 = DAT_0011dd34 + 0x11d9c0;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) == '\x06') {
    this = *(ZombieCafe **)(param_1 + 0xc);
    if ((((*(int *)(this + DAT_0011dd38) < 1) || (this[0x9f0] == (ZombieCafe)0x0)) ||
        (this[DAT_0011dd3c] != (ZombieCafe)0x0)) &&
       ((((*(int *)(this + DAT_0011dd40) < 1 || (this[DAT_0011dd44] == (ZombieCafe)0x0)) ||
         (this[DAT_0011dd48] != (ZombieCafe)0x0)) && (iVar1 = ZombieCafe::getToxin(this), iVar1 < 1)
        ))) {
      pCVar7 = *(ConfirmDialog **)(param_1 + 0x80);
      if (pCVar7 == (ConfirmDialog *)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x8c) == 0) {
        return;
      }
      Vector<String>::elementAt((int)aSStack_100);
      Vector<String>::elementAt((int)aSStack_f8);
      Vector<String>::elementAt((int)aSStack_f0);
      ConfirmDialog::show(pCVar7,aSStack_100,aSStack_f8,aSStack_f0,
                          *(undefined4 *)(iVar5 + DAT_0011dd58),param_1);
      String::~String(aSStack_f0);
      String::~String(aSStack_f8);
      this_00 = aSStack_100;
    }
    else {
      if (*(int *)(param_1 + 0x80) == 0) {
        onReviveConfirmed(param_1);
        return;
      }
      uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x40);
      uVar2 = Character::getMaxEnergy();
      uVar2 = __divsf3(uVar6,uVar2);
      puVar3 = *(undefined4 **)(iVar5 + DAT_0011dd5c);
      iVar1 = __aeabi_fcmpgt(uVar2,*puVar3);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        if (((*(int *)(iVar4 + DAT_0011dd38) < 1) || (*(char *)(iVar4 + 0x9f0) == '\0')) ||
           (*(char *)(iVar4 + DAT_0011dd3c) != '\0')) {
          if (((*(int *)(iVar4 + DAT_0011dd40) < 1) || (*(char *)(iVar4 + DAT_0011dd44) == '\0')) ||
             (*(char *)(iVar4 + DAT_0011dd48) != '\0')) {
            pCVar7 = *(ConfirmDialog **)(param_1 + 0x80);
            Vector<String>::elementAt((int)aSStack_50);
            String::String(aSStack_48,(char *)(DAT_0011dd94 + 0x11dcb2));
            String::operator+(aSStack_40,aSStack_50,aSStack_48);
            Vector<String>::elementAt((int)aSStack_38);
            String::operator+(aSStack_30,aSStack_40,aSStack_38);
            Vector<String>::elementAt((int)aSStack_28);
            Vector<String>::elementAt((int)aSStack_20);
            ConfirmDialog::show(pCVar7,aSStack_30,aSStack_28,aSStack_20,
                                *(undefined4 *)(iVar5 + DAT_0011dd7c),param_1);
            String::~String(aSStack_20);
            String::~String(aSStack_28);
            String::~String(aSStack_30);
            String::~String(aSStack_38);
            String::~String(aSStack_40);
            String::~String(aSStack_48);
            this_00 = aSStack_50;
          }
          else {
            pCVar7 = *(ConfirmDialog **)(param_1 + 0x80);
            String::String(aSStack_68,(char *)(DAT_0011dd8c + 0x11dc52));
            Vector<String>::elementAt((int)aSStack_60);
            Vector<String>::elementAt((int)aSStack_58);
            ConfirmDialog::show(pCVar7,aSStack_68,aSStack_60,aSStack_58,
                                *(undefined4 *)(iVar5 + DAT_0011dd90),param_1);
            String::~String(aSStack_58);
            String::~String(aSStack_60);
            this_00 = aSStack_68;
          }
        }
        else {
          pCVar7 = *(ConfirmDialog **)(param_1 + 0x80);
          Vector<String>::elementAt((int)aSStack_80);
          Vector<String>::elementAt((int)aSStack_78);
          Vector<String>::elementAt((int)aSStack_70);
          ConfirmDialog::show(pCVar7,aSStack_80,aSStack_78,aSStack_70,
                              *(undefined4 *)(iVar5 + DAT_0011dd88),param_1);
          String::~String(aSStack_70);
          String::~String(aSStack_78);
          this_00 = aSStack_80;
        }
      }
      else {
        pCVar7 = *(ConfirmDialog **)(param_1 + 0x80);
        Vector<String>::elementAt((int)aSStack_e8);
        __mulsf3(*puVar3,DAT_0011dd64);
        __fixsfsi();
        String::valueOf((int)aSStack_e0);
        String::operator+(aSStack_d8,aSStack_e8,aSStack_e0);
        Vector<String>::elementAt((int)aSStack_d0);
        String::operator+(aSStack_c8,aSStack_d8,aSStack_d0);
        Vector<String>::elementAt((int)aSStack_c0);
        String::operator+(aSStack_b8,aSStack_c8,aSStack_c0);
        String::String(aSStack_b0,(char *)(DAT_0011dd70 + 0x11db1e));
        String::operator+(aSStack_a8,aSStack_b8,aSStack_b0);
        Vector<String>::elementAt((int)aSStack_a0);
        String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
        Vector<String>::elementAt((int)aSStack_90);
        Vector<String>::elementAt((int)aSStack_88);
        ConfirmDialog::show(pCVar7,aSStack_98,aSStack_90,aSStack_88,
                            *(undefined4 *)(iVar5 + DAT_0011dd7c),param_1);
        String::~String(aSStack_88);
        String::~String(aSStack_90);
        String::~String(aSStack_98);
        String::~String(aSStack_a0);
        String::~String(aSStack_a8);
        String::~String(aSStack_b0);
        String::~String(aSStack_b8);
        String::~String(aSStack_c0);
        String::~String(aSStack_c8);
        String::~String(aSStack_d0);
        String::~String(aSStack_d8);
        String::~String(aSStack_e0);
        this_00 = aSStack_e8;
      }
    }
    String::~String(this_00);
  }
  return;
}


