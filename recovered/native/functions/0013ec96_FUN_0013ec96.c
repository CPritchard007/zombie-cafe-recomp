/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ec96 FUN_0013ec96 */

void FUN_0013ec96(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x86) {
    FUN_0013f882();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000274);
  Vector<String>::elementAt((int)&stack0x0000027c);
  NoticeDialog::show(pNVar1,&stack0x00000274,&stack0x0000027c);
  String::~String((String *)&stack0x0000027c);
  FUN_0013efb0(&stack0x00000274);
  return;
}


