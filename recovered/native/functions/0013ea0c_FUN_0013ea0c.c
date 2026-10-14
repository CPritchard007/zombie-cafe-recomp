/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ea0c FUN_0013ea0c */

void FUN_0013ea0c(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x9c) {
    FUN_0013f828();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000001e4);
  Vector<String>::elementAt((int)&stack0x000001ec);
  NoticeDialog::show(pNVar1,&stack0x000001e4,&stack0x000001ec);
  String::~String((String *)&stack0x000001ec);
  FUN_0013efb0(&stack0x000001e4);
  return;
}


