/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013eee0 FUN_0013eee0 */

void FUN_0013eee0(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x30) {
    FUN_0013f8d2();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002f4);
  Vector<String>::elementAt((int)&stack0x000002fc);
  NoticeDialog::show(pNVar1,&stack0x000002f4,&stack0x000002fc);
  String::~String((String *)&stack0x000002fc);
  FUN_0013efb0(&stack0x000002f4);
  return;
}


