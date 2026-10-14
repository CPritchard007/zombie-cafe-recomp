/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ed30 FUN_0013ed30 */

void FUN_0013ed30(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x84) {
    FUN_0013f896();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000294);
  Vector<String>::elementAt((int)&stack0x0000029c);
  NoticeDialog::show(pNVar1,&stack0x00000294,&stack0x0000029c);
  String::~String((String *)&stack0x0000029c);
  FUN_0013efb0(&stack0x00000294);
  return;
}


