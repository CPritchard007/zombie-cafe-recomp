/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ecde FUN_0013ecde */

void FUN_0013ecde(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x85) {
    FUN_0013f88c();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000284);
  Vector<String>::elementAt((int)&stack0x0000028c);
  NoticeDialog::show(pNVar1,&stack0x00000284,&stack0x0000028c);
  String::~String((String *)&stack0x0000028c);
  FUN_0013efb0(&stack0x00000284);
  return;
}


