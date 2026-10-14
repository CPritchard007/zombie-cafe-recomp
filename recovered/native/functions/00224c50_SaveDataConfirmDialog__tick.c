/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00224c50 SaveDataConfirmDialog::tick */

/* SaveDataConfirmDialog::tick(long) */

void SaveDataConfirmDialog::tick(long param_1)

{
  int iVar1;
  String *this;
  int iVar2;
  int *piVar3;
  ZombieCafe *this_00;
  ConfirmDialog *pCVar4;
  float extraout_s0;
  float extraout_s0_00;
  float fVar5;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar3 = (int *)(param_1 + 0xb0);
  iVar2 = DAT_00224e28 + 0x224c64;
  if ((char)((int *)*piVar3)[5] != '\0') {
    (**(code **)(*(int *)*piVar3 + 8))();
    return;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  this_00 = *(ZombieCafe **)(param_1 + 0x60);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  if (iVar1 != 0) {
    iVar1 = *(int *)(this_00 + DAT_00224e2c);
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x78),iVar1 >> 0x10,(int)(short)iVar1,
                       extraout_s0,extraout_s1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x60) + DAT_00224e2c);
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x7c),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0_00,extraout_s1_00);
      if (iVar1 == 0) goto LAB_00224dd6;
      fVar5 = (float)L_PrintLog((char *)(DAT_00224e48 + 0x224d4e),(char *)(DAT_00224e4c + 0x224d50))
      ;
      ZombieCafe::playEffect(*(int *)(param_1 + 0x60),fVar5);
      *(undefined1 *)(param_1 + 0xcc) = 0;
      pCVar4 = (ConfirmDialog *)*piVar3;
      Vector<String>::elementAt((int)aSStack_38);
      String::operator+(aSStack_30,param_1 + 0x98,aSStack_38);
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                          *(undefined4 *)(iVar2 + DAT_00224e44),param_1);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
      String::~String(aSStack_30);
      this = aSStack_38;
    }
    else {
      fVar5 = (float)L_PrintLog((char *)(DAT_00224e30 + 0x224caa),(char *)(DAT_00224e34 + 0x224cac))
      ;
      ZombieCafe::playEffect(*(int *)(param_1 + 0x60),fVar5);
      *(undefined1 *)(param_1 + 0xcc) = 1;
      pCVar4 = (ConfirmDialog *)*piVar3;
      Vector<String>::elementAt((int)aSStack_58);
      String::operator+(aSStack_50,param_1 + 0x90,aSStack_58);
      Vector<String>::elementAt((int)aSStack_48);
      Vector<String>::elementAt((int)aSStack_40);
      ConfirmDialog::show(pCVar4,aSStack_50,aSStack_48,aSStack_40,
                          *(undefined4 *)(iVar2 + DAT_00224e44),param_1);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      this = aSStack_58;
    }
    String::~String(this);
  }
LAB_00224dd6:
  *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_00224e50) = 1;
  return;
}


