/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ea9c FUN_0013ea9c */

void FUN_0013ea9c(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x96) {
    FUN_0013f83c();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000204);
  Vector<String>::elementAt((int)&stack0x0000020c);
  NoticeDialog::show(pNVar1,&stack0x00000204,&stack0x0000020c);
  String::~String((String *)&stack0x0000020c);
  FUN_0013efb0(&stack0x00000204);
  return;
}


