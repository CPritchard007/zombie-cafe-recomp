/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bf64 FUN_0015bf64 */

void FUN_0015bf64(void)

{
  NoticeDialog *pNVar1;
  int unaff_r5;
  int unaff_r7;
  
  pNVar1 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x00000268,(char *)(DAT_0015c1f0 + 0x15bf6e));
  Vector<String>::elementAt((int)&stack0x00000270);
  NoticeDialog::show(pNVar1,&stack0x00000268,&stack0x00000270);
  String::~String((String *)&stack0x00000270);
  String::~String((String *)&stack0x00000268);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


