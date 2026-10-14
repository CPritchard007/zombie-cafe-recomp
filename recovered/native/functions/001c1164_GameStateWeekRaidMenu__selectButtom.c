/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1164 GameStateWeekRaidMenu::selectButtom */

/* GameStateWeekRaidMenu::selectButtom(int, int, int) */

undefined4 __thiscall
GameStateWeekRaidMenu::selectButtom(GameStateWeekRaidMenu *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  String *this_00;
  int iVar3;
  ConfirmDialog *pCVar4;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
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
  
  iVar3 = DAT_001c134c + 0x1c1174;
  iVar1 = ZombieCafe::getWeekRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 < param_1) {
    pCVar4 = *(ConfirmDialog **)(this + 0x40);
    String::String(aSStack_78,(char *)(DAT_001c1350 + 0x1c1188));
    String::String(aSStack_70,(char *)(DAT_001c1354 + 0x1c1192));
    String::String(aSStack_68,(char *)(DAT_001c1358 + 0x1c119c));
    ConfirmDialog::show(pCVar4,aSStack_78,aSStack_70,aSStack_68,
                        *(undefined4 *)(iVar3 + DAT_001c135c),this);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    uVar5 = __mulsf3(*(undefined4 *)(this + 0xb8),DAT_001c1360);
    ConfirmDialog::setYesButtonPosition((float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2);
    uVar5 = __mulsf3(*(undefined4 *)(this + 0xb8),DAT_001c136c);
    ConfirmDialog::setNoButtonPosition
              (*(ConfirmDialog **)(this + 0x40),(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),
               extraout_s2_00,extraout_s3);
    uVar2 = 0;
  }
  else {
    *(int *)(this + 0xc0) = param_2;
    *(int *)(this + 0xc4) = param_3;
    if (param_1 == 1) {
      pCVar4 = *(ConfirmDialog **)(this + 0x3c);
      String::String(aSStack_60,(char *)(DAT_001c1370 + 0x1c1214));
      String::String(aSStack_58,(char *)(DAT_001c1374 + 0x1c121e));
      String::String(aSStack_50,(char *)(DAT_001c1378 + 0x1c1228));
      ConfirmDialog::show(pCVar4,aSStack_60,aSStack_58,aSStack_50,
                          *(undefined4 *)(iVar3 + DAT_001c137c),this);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      this_00 = aSStack_60;
    }
    else if (param_1 == 2) {
      pCVar4 = *(ConfirmDialog **)(this + 0x3c);
      String::String(aSStack_48,(char *)(DAT_001c1380 + 0x1c125c));
      String::String(aSStack_40,(char *)(DAT_001c1384 + 0x1c1266));
      String::String(aSStack_38,(char *)(DAT_001c1388 + 0x1c1270));
      ConfirmDialog::show(pCVar4,aSStack_48,aSStack_40,aSStack_38,
                          *(undefined4 *)(iVar3 + DAT_001c137c),this);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      this_00 = aSStack_48;
    }
    else {
      if (param_1 != 3) {
        return 0;
      }
      pCVar4 = *(ConfirmDialog **)(this + 0x3c);
      String::String(aSStack_30,(char *)(DAT_001c138c + 0x1c12a6));
      String::String(aSStack_28,(char *)(DAT_001c1390 + 0x1c12b0));
      String::String(aSStack_20,(char *)(DAT_001c1394 + 0x1c12ba));
      ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                          *(undefined4 *)(iVar3 + DAT_001c137c),this);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
      this_00 = aSStack_30;
    }
    String::~String(this_00);
    uVar2 = 1;
  }
  return uVar2;
}


