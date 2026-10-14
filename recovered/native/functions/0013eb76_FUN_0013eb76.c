/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013eb76 FUN_0013eb76 */

void FUN_0013eb76(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x8d) {
    FUN_0013f85a();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000234);
  Vector<String>::elementAt((int)&stack0x0000023c);
  NoticeDialog::show(pNVar1,&stack0x00000234,&stack0x0000023c);
  String::~String((String *)&stack0x0000023c);
  FUN_0013efb0(&stack0x00000234);
  return;
}


