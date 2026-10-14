/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb45c GameStateEventRaid3Menu::selectButtom */

/* GameStateEventRaid3Menu::selectButtom(int) */

bool __thiscall GameStateEventRaid3Menu::selectButtom(GameStateEventRaid3Menu *this,int param_1)

{
  int iVar1;
  int iVar2;
  ConfirmDialog *pCVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  iVar2 = ZombieCafe::getEventRaid3_attackPoint(*(ZombieCafe **)(this + 0xc));
  iVar1 = DAT_001bb5ac;
  if (0 < iVar2) {
    *(int *)(this + 200) = param_1;
    pCVar3 = *(ConfirmDialog **)(this + 0x4c);
    String::String(aSStack_28,(char *)(iVar1 + 0x1bb50a));
    String::String(aSStack_20,(char *)(DAT_001bb5b0 + 0x1bb518));
    String::String(aSStack_18,(char *)(DAT_001bb5b4 + 0x1bb522));
    ConfirmDialog::show(pCVar3,aSStack_28,aSStack_20,aSStack_18,
                        *(undefined4 *)(DAT_001bb5b8 + 0x1bb52e),this);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  else {
    pCVar3 = *(ConfirmDialog **)(this + 0x50);
    String::String(aSStack_40,(char *)(DAT_001bb584 + 0x1bb478));
    String::String(aSStack_38,(char *)(DAT_001bb588 + 0x1bb482));
    String::String(aSStack_30,(char *)(DAT_001bb58c + 0x1bb48c));
    ConfirmDialog::show(pCVar3,aSStack_40,aSStack_38,aSStack_30,
                        *(undefined4 *)(DAT_001bb590 + 0x1bb498),
                        *(undefined4 *)(DAT_001bb594 + 0x1bb4a4),this,0,1);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    uVar4 = __mulsf3(*(undefined4 *)(this + 0xe8),DAT_001bb598);
    ConfirmDialog::setYesButtonPosition((float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2);
    uVar4 = __mulsf3(*(undefined4 *)(this + 0xe8),DAT_001bb5a4);
    ConfirmDialog::setNoButtonPosition
              (*(ConfirmDialog **)(this + 0x50),(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),
               extraout_s2_00,extraout_s3);
  }
  return 0 < iVar2;
}


