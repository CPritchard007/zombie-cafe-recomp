/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e89a FUN_0013e89a */

void FUN_0013e89a(uint param_1)

{
  int unaff_r4;
  NoticeDialog *pNVar1;
  
  if (param_1 < 0xa7) {
    FUN_0013f7f6();
  }
  pNVar1 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000194);
  Vector<String>::elementAt((int)&stack0x0000019c);
  NoticeDialog::show(pNVar1,&stack0x00000194,&stack0x0000019c);
  String::~String((String *)&stack0x0000019c);
  FUN_0013efb0(&stack0x00000194);
  return;
}


