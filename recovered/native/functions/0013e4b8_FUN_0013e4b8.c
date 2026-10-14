/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e4b8 FUN_0013e4b8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0013e4b8(uint param_1)

{
  uint uVar1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  
  if (param_1 < 0xcf) {
    FUN_0013f774();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000c4);
  Vector<String>::elementAt((int)&stack0x000000cc);
  NoticeDialog::show(pNVar2,&stack0x000000c4,&stack0x000000cc);
  String::~String((String *)&stack0x000000cc);
  uVar1 = FUN_0013efb0(&stack0x000000c4);
  if (uVar1 < 0xcc) {
    FUN_0013f77e();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000d4);
  Vector<String>::elementAt((int)&stack0x000000dc);
  NoticeDialog::show(pNVar2,&stack0x000000d4,&stack0x000000dc);
  String::~String((String *)&stack0x000000dc);
  uVar1 = FUN_0013efb0(&stack0x000000d4);
  if (uVar1 < 199) {
    FUN_0013f788();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000e4);
  Vector<String>::elementAt((int)&stack0x000000ec);
  NoticeDialog::show(pNVar2,&stack0x000000e4,&stack0x000000ec);
  String::~String((String *)&stack0x000000ec);
  FUN_0013efb0(&stack0x000000e4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


