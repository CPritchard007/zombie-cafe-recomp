/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ee08 FUN_0013ee08 */

void FUN_0013ee08(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x3c) {
    FUN_0013f8b4();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002c4);
  Vector<String>::elementAt((int)&stack0x000002cc);
  NoticeDialog::show(pNVar1,&stack0x000002c4,&stack0x000002cc);
  String::~String((String *)&stack0x000002cc);
  FUN_0013efb0(&stack0x000002c4);
  return;
}


