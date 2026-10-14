/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c1a0 FUN_0015c1a0 */

void FUN_0015c1a0(void)

{
  NoticeDialog *pNVar1;
  int unaff_r5;
  int unaff_r7;
  
  pNVar1 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x000002e0,(char *)(DAT_0015c220 + 0x15c1aa));
  Vector<String>::elementAt((int)&stack0x000002e8);
  NoticeDialog::show(pNVar1,&stack0x000002e0,&stack0x000002e8);
  String::~String((String *)&stack0x000002e8);
  String::~String((String *)&stack0x000002e0);
  *(undefined4 *)(unaff_r5 + DAT_0015c55c) = 0x7000;
  FUN_0015c58a();
  return;
}


