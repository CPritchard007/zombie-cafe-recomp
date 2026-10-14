/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013edc0 FUN_0013edc0 */

void FUN_0013edc0(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x76) {
    FUN_0013f8aa();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000002b4);
  Vector<String>::elementAt((int)&stack0x000002bc);
  NoticeDialog::show(pNVar1,&stack0x000002b4,&stack0x000002bc);
  String::~String((String *)&stack0x000002bc);
  FUN_0013efb0(&stack0x000002b4);
  return;
}


