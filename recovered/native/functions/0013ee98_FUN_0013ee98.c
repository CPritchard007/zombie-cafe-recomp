/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ee98 FUN_0013ee98 */

void FUN_0013ee98(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x32) {
    FUN_0013f8c8();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002e4);
  Vector<String>::elementAt((int)&stack0x000002ec);
  NoticeDialog::show(pNVar1,&stack0x000002e4,&stack0x000002ec);
  String::~String((String *)&stack0x000002ec);
  FUN_0013efb0(&stack0x000002e4);
  return;
}


