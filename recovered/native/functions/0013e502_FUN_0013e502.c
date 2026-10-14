/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e502 FUN_0013e502 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0013e502(uint param_1)

{
  uint uVar1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  
  if (param_1 < 0xcc) {
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


