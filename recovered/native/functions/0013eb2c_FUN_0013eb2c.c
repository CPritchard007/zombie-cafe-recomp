/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013eb2c FUN_0013eb2c */

void FUN_0013eb2c(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x8f) {
    FUN_0013f850();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000224);
  Vector<String>::elementAt((int)&stack0x0000022c);
  NoticeDialog::show(pNVar1,&stack0x00000224,&stack0x0000022c);
  String::~String((String *)&stack0x0000022c);
  FUN_0013efb0(&stack0x00000224);
  return;
}


