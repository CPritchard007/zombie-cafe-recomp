/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e72c FUN_0013e72c */

void FUN_0013e72c(uint param_1)

{
  uint uVar1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  
  if (param_1 < 0xb7) {
    FUN_0013f7c4();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000144);
  Vector<String>::elementAt((int)&stack0x0000014c);
  NoticeDialog::show(pNVar2,&stack0x00000144);
  String::~String((String *)&stack0x0000014c);
  uVar1 = FUN_0013efb0(&stack0x00000144);
  if (uVar1 < 0xb4) {
    FUN_0013f7ce();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000154);
  Vector<String>::elementAt((int)&stack0x0000015c);
  NoticeDialog::show(pNVar2,&stack0x00000154);
  String::~String((String *)&stack0x0000015c);
  uVar1 = FUN_0013efb0(&stack0x00000154);
  if (uVar1 < 0xb1) {
    FUN_0013f7d8();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000164);
  Vector<String>::elementAt((int)&stack0x0000016c);
  NoticeDialog::show(pNVar2,&stack0x00000164);
  String::~String((String *)&stack0x0000016c);
  uVar1 = FUN_0013efb0(&stack0x00000164);
  if (uVar1 < 0xad) {
    FUN_0013f7e2();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000174);
  Vector<String>::elementAt((int)&stack0x0000017c);
  NoticeDialog::show(pNVar2,&stack0x00000174,&stack0x0000017c);
  String::~String((String *)&stack0x0000017c);
  FUN_0013efb0(&stack0x00000174);
  return;
}


