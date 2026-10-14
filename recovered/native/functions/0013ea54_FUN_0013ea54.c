/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ea54 FUN_0013ea54 */

void FUN_0013ea54(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0x99) {
    FUN_0013f832();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000001f4);
  Vector<String>::elementAt((int)&stack0x000001fc);
  NoticeDialog::show(pNVar1,&stack0x000001f4,&stack0x000001fc);
  String::~String((String *)&stack0x000001fc);
  FUN_0013efb0(&stack0x000001f4);
  return;
}


