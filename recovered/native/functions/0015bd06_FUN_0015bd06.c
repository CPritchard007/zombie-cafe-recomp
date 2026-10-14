/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bd06 FUN_0015bd06 */

void FUN_0015bd06(void)

{
  NoticeDialog *pNVar1;
  int unaff_r5;
  int unaff_r7;
  
  pNVar1 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x000001f0,(char *)(DAT_0015be34 + 0x15bd10));
  Vector<String>::elementAt((int)&stack0x000001f8);
  NoticeDialog::show(pNVar1,&stack0x000001f0,&stack0x000001f8);
  String::~String((String *)&stack0x000001f8);
  String::~String((String *)&stack0x000001f0);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


