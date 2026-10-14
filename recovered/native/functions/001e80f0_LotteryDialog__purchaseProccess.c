/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e80f0 LotteryDialog::purchaseProccess */

/* LotteryDialog::purchaseProccess(int) */

void __thiscall LotteryDialog::purchaseProccess(LotteryDialog *this,int param_1)

{
  int iVar1;
  String *this_00;
  ConfirmDialog *pCVar2;
  int iVar3;
  NoticeDialog *pNVar4;
  undefined8 uVar5;
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
  
  *(int *)(this + 0x1f8) = param_1;
  iVar3 = DAT_001e8390 + 0x1e810a;
  if (this[param_1 + 0x212] == (LotteryDialog)0x0) {
    iVar1 = checkStaffNum(this);
    if (iVar1 == 0) {
      pNVar4 = *(NoticeDialog **)(*(int *)(this + 100) + 0xd0);
      String::String(aSStack_90,(char *)(DAT_001e8394 + 0x1e8122));
      String::String(aSStack_88,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                     **(int **)(iVar3 + DAT_001e8398) * 8));
      NoticeDialog::show(pNVar4,aSStack_90,aSStack_88,0,0);
      String::~String(aSStack_88);
      this_00 = aSStack_90;
    }
    else {
      uVar5 = checkCost(this,*(int *)(this + 0x1f8));
      if ((int)uVar5 != 0) {
        completeLotteryPurchase(this,(LotteryDialog *)((ulonglong)uVar5 >> 0x20));
        return;
      }
      pNVar4 = *(NoticeDialog **)(*(int *)(this + 100) + 0xd0);
      String::String(aSStack_80,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                     **(int **)(iVar3 + DAT_001e839c) * 8));
      String::String(aSStack_78,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                     **(int **)(iVar3 + DAT_001e8398) * 8));
      NoticeDialog::show(pNVar4,aSStack_80,aSStack_78,0,0);
      String::~String(aSStack_78);
      this_00 = aSStack_80;
    }
  }
  else {
    iVar1 = checkStaffNum(this);
    if (iVar1 == 0) {
      pNVar4 = *(NoticeDialog **)(*(int *)(this + 100) + 0xd0);
      String::String(aSStack_70,(char *)(DAT_001e83a0 + 0x1e81d2));
      String::String(aSStack_68,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                     **(int **)(iVar3 + DAT_001e8398) * 8));
      NoticeDialog::show(pNVar4,aSStack_70,aSStack_68,0,0);
      String::~String(aSStack_68);
      this_00 = aSStack_70;
    }
    else {
      iVar1 = checkCost(this,*(int *)(this + 0x1f8));
      if (iVar1 == 0) {
        pNVar4 = *(NoticeDialog **)(*(int *)(this + 100) + 0xd0);
        String::String(aSStack_60,(char *)(DAT_001e83a4 + 0x1e821c));
        String::String(aSStack_58,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                       **(int **)(iVar3 + DAT_001e8398) * 8));
        NoticeDialog::show(pNVar4,aSStack_60,aSStack_58,0,0);
        String::~String(aSStack_58);
        this_00 = aSStack_60;
      }
      else {
        pCVar2 = *(ConfirmDialog **)(*(int *)(this + 100) + 0x80);
        String::String(aSStack_50,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                       **(int **)(iVar3 + DAT_001e83a8) * 8));
        String::valueOf((int)aSStack_48);
        String::operator+(aSStack_40,aSStack_50,aSStack_48);
        String::String(aSStack_38,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                       **(int **)(iVar3 + DAT_001e83ac) * 8));
        String::operator+(aSStack_30,aSStack_40,aSStack_38);
        String::String(aSStack_28,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                       **(int **)(iVar3 + DAT_001e83b0) * 8));
        String::String(aSStack_20,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0x60) + 0x4b0) + 8) +
                       **(int **)(iVar3 + DAT_001e83b4) * 8));
        ConfirmDialog::show(pCVar2,aSStack_30,aSStack_28,aSStack_20,
                            *(undefined4 *)(iVar3 + DAT_001e83b8),this);
        String::~String(aSStack_20);
        String::~String(aSStack_28);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        String::~String(aSStack_40);
        String::~String(aSStack_48);
        this_00 = aSStack_50;
      }
    }
  }
  String::~String(this_00);
  return;
}


