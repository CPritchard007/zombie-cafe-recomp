/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e92a FUN_0013e92a */

void FUN_0013e92a(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0xa3) {
    FUN_0013f80a();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000001b4);
  Vector<String>::elementAt((int)&stack0x000001bc);
  NoticeDialog::show(pNVar1,&stack0x000001b4,&stack0x000001bc);
  String::~String((String *)&stack0x000001bc);
  FUN_0013efb0(&stack0x000001b4);
  return;
}


