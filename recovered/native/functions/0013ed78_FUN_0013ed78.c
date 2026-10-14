/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ed78 FUN_0013ed78 */

void FUN_0013ed78(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x83) {
    FUN_0013f8a0();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002a4);
  Vector<String>::elementAt((int)&stack0x000002ac);
  NoticeDialog::show(pNVar1,&stack0x000002a4,&stack0x000002ac);
  String::~String((String *)&stack0x000002ac);
  FUN_0013efb0(&stack0x000002a4);
  return;
}


