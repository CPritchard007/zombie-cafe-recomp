/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e97c FUN_0013e97c */

void FUN_0013e97c(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0xa0) {
    FUN_0013f814();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000001c4);
  Vector<String>::elementAt((int)&stack0x000001cc);
  NoticeDialog::show(pNVar1,&stack0x000001c4,&stack0x000001cc);
  String::~String((String *)&stack0x000001cc);
  FUN_0013efb0(&stack0x000001c4);
  return;
}


