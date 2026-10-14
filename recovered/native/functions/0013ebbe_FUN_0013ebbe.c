/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ebbe FUN_0013ebbe */

void FUN_0013ebbe(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x8c) {
    FUN_0013f864();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000244);
  Vector<String>::elementAt((int)&stack0x0000024c);
  NoticeDialog::show(pNVar1,&stack0x00000244,&stack0x0000024c);
  String::~String((String *)&stack0x0000024c);
  FUN_0013efb0(&stack0x00000244);
  return;
}


