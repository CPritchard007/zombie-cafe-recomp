/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e9c4 FUN_0013e9c4 */

void FUN_0013e9c4(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x9e) {
    FUN_0013f81e();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000001d4);
  Vector<String>::elementAt((int)&stack0x000001dc);
  NoticeDialog::show(pNVar1,&stack0x000001d4,&stack0x000001dc);
  String::~String((String *)&stack0x000001dc);
  FUN_0013efb0(&stack0x000001d4);
  return;
}


