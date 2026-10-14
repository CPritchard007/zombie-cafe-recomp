/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ee50 FUN_0013ee50 */

void FUN_0013ee50(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x39) {
    FUN_0013f8be();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002d4);
  Vector<String>::elementAt((int)&stack0x000002dc);
  NoticeDialog::show(pNVar1,&stack0x000002d4,&stack0x000002dc);
  String::~String((String *)&stack0x000002dc);
  FUN_0013efb0(&stack0x000002d4);
  return;
}


