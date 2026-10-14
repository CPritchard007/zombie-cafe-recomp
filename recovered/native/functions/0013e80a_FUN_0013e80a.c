/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e80a FUN_0013e80a */

void FUN_0013e80a(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0xad) {
    FUN_0013f7e2();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000174);
  Vector<String>::elementAt((int)&stack0x0000017c);
  NoticeDialog::show(pNVar1,&stack0x00000174,&stack0x0000017c);
  String::~String((String *)&stack0x0000017c);
  FUN_0013efb0(&stack0x00000174);
  return;
}


