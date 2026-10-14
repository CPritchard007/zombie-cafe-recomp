/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015ba3e FUN_0015ba3e */

void FUN_0015ba3e(void)

{
  int unaff_r5;
  int unaff_r7;
  NoticeDialog *pNVar1;
  
  pNVar1 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x00000160,(char *)(DAT_0015bab4 + 0x15ba48));
  Vector<String>::elementAt((int)&stack0x00000168);
  NoticeDialog::show(pNVar1,&stack0x00000160,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  String::~String((String *)&stack0x00000160);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


