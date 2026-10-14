/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e852 FUN_0013e852 */

void FUN_0013e852(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0xa8) {
    FUN_0013f7ec();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000184);
  Vector<String>::elementAt((int)&stack0x0000018c);
  NoticeDialog::show(pNVar1,&stack0x00000184,&stack0x0000018c);
  String::~String((String *)&stack0x0000018c);
  FUN_0013efb0(&stack0x00000184);
  return;
}


