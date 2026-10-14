/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ef28 FUN_0013ef28 */

void FUN_0013ef28(int param_1)

{
  int unaff_r4;
  int unaff_r5;
  NoticeDialog *pNVar1;
  
  if (param_1 < **(int **)(unaff_r5 + DAT_0013f0d4)) {
    FUN_0013f8da();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000304);
  Vector<String>::elementAt((int)&stack0x0000030c);
  NoticeDialog::show(pNVar1,&stack0x00000304,&stack0x0000030c);
  String::~String((String *)&stack0x0000030c);
  FUN_0013efb0(&stack0x00000304);
  return;
}


