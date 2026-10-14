/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af0a0 GameStateEventRaid2Menu::selectButtom */

/* GameStateEventRaid2Menu::selectButtom(int) */

undefined4 __thiscall
GameStateEventRaid2Menu::selectButtom(GameStateEventRaid2Menu *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ConfirmDialog *pCVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s3;
  float extraout_s3_00;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
  if (iVar1 < 1) {
    pCVar4 = *(ConfirmDialog **)(this + 0x68);
    String::String(aSStack_58,(char *)(DAT_001af2d0 + 0x1af0bc));
    String::String(aSStack_50,(char *)(DAT_001af2d4 + 0x1af0c6));
    String::String(aSStack_48,(char *)(DAT_001af2d8 + 0x1af0d0));
    ConfirmDialog::show(pCVar4,aSStack_58,aSStack_50,aSStack_48,
                        *(undefined4 *)(DAT_001af2dc + 0x1af0dc),
                        *(undefined4 *)(DAT_001af2e0 + 0x1af0e8),this,0,1);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001af2e4);
    ConfirmDialog::setYesButtonPosition((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001af2e4);
    ConfirmDialog::setNoButtonPosition
              (*(ConfirmDialog **)(this + 0x68),(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),
               extraout_s2_00,extraout_s3);
    uVar2 = 0;
  }
  else {
    iVar1 = ZombieCafe::getEventRaid2_attackPoint(*(ZombieCafe **)(this + 0xc));
    uVar2 = *(undefined4 *)(DAT_001af2f4 + 0x1af14e);
    if ((iVar1 == 3) &&
       (iVar3 = ZombieCafe::getEventRaid2_clearLevel(*(ZombieCafe **)(this + 0xc)),
       iVar1 = DAT_001af2f8, 0 < iVar3)) {
      *(int *)(this + 0xfc) = param_1;
      pCVar4 = *(ConfirmDialog **)(this + 100);
      String::String(aSStack_40,(char *)(iVar1 + 0x1af168));
      String::String(aSStack_38,(char *)(DAT_001af2fc + 0x1af176));
      String::String(aSStack_30,(char *)(DAT_001af300 + 0x1af180));
      ConfirmDialog::show(pCVar4,aSStack_40,aSStack_38,aSStack_30,uVar2,
                          *(undefined4 *)(DAT_001af304 + 0x1af18c),this,0,1);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      iVar1 = SmDev();
      if ((iVar1 == 0) || (iVar1 = SmDev(), iVar1 == 1)) {
        uVar6 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001af308);
        ConfirmDialog::setYesButtonPosition
                  ((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_01);
        uVar5 = *(undefined4 *)(this + 0x10c);
        pCVar4 = *(ConfirmDialog **)(this + 100);
        __mulsf3(uVar5,DAT_001af308);
        uVar2 = DAT_001af310;
      }
      else {
        uVar6 = __mulsf3(*(undefined4 *)(this + 0x10c),0x3fc00000);
        ConfirmDialog::setYesButtonPosition
                  ((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_02);
        uVar5 = *(undefined4 *)(this + 0x10c);
        __mulsf3(uVar5,0x3fc00000);
        pCVar4 = *(ConfirmDialog **)(this + 100);
        uVar2 = DAT_001af2f0;
      }
      uVar6 = __mulsf3(uVar5,uVar2);
      ConfirmDialog::setNoButtonPosition
                (pCVar4,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_03,extraout_s3_00
                );
    }
    else {
      iVar1 = DAT_001af314;
      *(int *)(this + 0xfc) = param_1;
      pCVar4 = *(ConfirmDialog **)(this + 0x60);
      String::String(aSStack_28,(char *)(iVar1 + 0x1af1fe));
      String::String(aSStack_20,(char *)(DAT_001af318 + 0x1af20c));
      String::String(aSStack_18,(char *)(DAT_001af31c + 0x1af216));
      ConfirmDialog::show(pCVar4,aSStack_28,aSStack_20,aSStack_18,uVar2,this);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
    }
    uVar2 = 1;
  }
  return uVar2;
}


