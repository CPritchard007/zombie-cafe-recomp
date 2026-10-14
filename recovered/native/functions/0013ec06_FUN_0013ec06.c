/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ec06 FUN_0013ec06 */

void FUN_0013ec06(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x8b) {
    FUN_0013f86e();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000254);
  Vector<String>::elementAt((int)&stack0x0000025c);
  NoticeDialog::show(pNVar1,&stack0x00000254,&stack0x0000025c);
  String::~String((String *)&stack0x0000025c);
  FUN_0013efb0(&stack0x00000254);
  return;
}


