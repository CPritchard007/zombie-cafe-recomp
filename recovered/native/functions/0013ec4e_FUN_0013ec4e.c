/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ec4e FUN_0013ec4e */

void FUN_0013ec4e(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x88) {
    FUN_0013f878();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000264);
  Vector<String>::elementAt((int)&stack0x0000026c);
  NoticeDialog::show(pNVar1,&stack0x00000264,&stack0x0000026c);
  String::~String((String *)&stack0x0000026c);
  FUN_0013efb0(&stack0x00000264);
  return;
}


