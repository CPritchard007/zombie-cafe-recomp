/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cbf78 CharacterCommandBar::heal */

/* CharacterCommandBar::heal(CharacterCommandBar*, ScreenElement*) */

void CharacterCommandBar::heal(CharacterCommandBar *param_1,ScreenElement *param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this;
  ConfirmDialog *pCVar3;
  CharacterCommandBar *pCVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  iVar8 = DAT_000cc300 + 0xcbf84;
  if (*(int *)(param_1 + 100) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 100) + 0x8c);
    iVar1 = __aeabi_fcmple(*(undefined4 *)(iVar6 + 0x40),0);
    if ((iVar1 == 0) || (*(char *)(iVar6 + 0x44) == '\x06')) {
      iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0x60));
      pCVar4 = param_1 + 0xc4;
      if ((0 < iVar1) || ((*(int *)pCVar4 == 0 || (*(int *)(param_1 + 200) == 0)))) {
        if (*(int *)pCVar4 == 0) {
          healConfirmed(param_1);
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 100) + 0x8c) + 0x40);
          uVar2 = Character::getMaxEnergy();
          uVar2 = __divsf3(uVar7,uVar2);
          puVar5 = *(undefined4 **)(iVar8 + DAT_000cc304);
          iVar1 = __aeabi_fcmpgt(uVar2,*puVar5);
          iVar6 = *(int *)(param_1 + 0x60);
          uVar2 = *(undefined4 *)(iVar8 + DAT_000cc30c);
          if (iVar1 == 0) {
            if (((*(int *)(iVar6 + DAT_000cc32c) < 1) || (*(char *)(iVar6 + 0x9f0) == '\0')) ||
               (*(char *)(iVar6 + DAT_000cc330) != '\0')) {
              if (((*(int *)(iVar6 + DAT_000cc33c) < 1) || (*(char *)(iVar6 + DAT_000cc340) == '\0')
                  ) || (*(char *)(iVar6 + DAT_000cc344) != '\0')) {
                pCVar3 = *(ConfirmDialog **)(param_1 + 0xc4);
                Vector<String>::elementAt((int)aSStack_50);
                String::String(aSStack_48,(char *)(DAT_000cc34c + 0xcc1fe));
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
                pCVar3 = *(ConfirmDialog **)(param_1 + 0xc4);
                String::String(aSStack_68,(char *)(DAT_000cc348 + 0xcc19e));
                Vector<String>::elementAt((int)aSStack_60);
                Vector<String>::elementAt((int)aSStack_58);
                ConfirmDialog::show(pCVar3,aSStack_68,aSStack_60,aSStack_58,uVar2,param_1);
                String::~String(aSStack_58);
                String::~String(aSStack_60);
                this = aSStack_68;
              }
            }
            else {
              pCVar3 = *(ConfirmDialog **)pCVar4;
              Vector<String>::elementAt((int)aSStack_80);
              Vector<String>::elementAt((int)aSStack_78);
              Vector<String>::elementAt((int)aSStack_70);
              ConfirmDialog::show(pCVar3,aSStack_80,aSStack_78,aSStack_70,uVar2,param_1);
              String::~String(aSStack_70);
              String::~String(aSStack_78);
              this = aSStack_80;
            }
          }
          else {
            pCVar3 = *(ConfirmDialog **)pCVar4;
            Vector<String>::elementAt((int)aSStack_e8);
            __mulsf3(*puVar5,DAT_000cc314);
            __fixsfsi();
            String::valueOf((int)aSStack_e0);
            String::operator+(aSStack_d8,aSStack_e8,aSStack_e0);
            Vector<String>::elementAt((int)aSStack_d0);
            String::operator+(aSStack_c8,aSStack_d8,aSStack_d0);
            Vector<String>::elementAt((int)aSStack_c0);
            String::operator+(aSStack_b8,aSStack_c8,aSStack_c0);
            String::String(aSStack_b0,(char *)(DAT_000cc320 + 0xcc06c));
            String::operator+(aSStack_a8,aSStack_b8,aSStack_b0);
            Vector<String>::elementAt((int)aSStack_a0);
            String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
            Vector<String>::elementAt((int)aSStack_90);
            Vector<String>::elementAt((int)aSStack_88);
            ConfirmDialog::show(pCVar3,aSStack_98,aSStack_90,aSStack_88,uVar2,param_1);
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
            this = aSStack_e8;
          }
          String::~String(this);
        }
      }
    }
  }
  return;
}


