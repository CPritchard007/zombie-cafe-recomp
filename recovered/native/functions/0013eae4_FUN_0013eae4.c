/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013eae4 FUN_0013eae4 */

void FUN_0013eae4(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x93) {
    FUN_0013f846();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000214);
  Vector<String>::elementAt((int)&stack0x0000021c);
  NoticeDialog::show(pNVar1,&stack0x00000214,&stack0x0000021c);
  String::~String((String *)&stack0x0000021c);
  FUN_0013efb0(&stack0x00000214);
  return;
}


