/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bfa8 FUN_0015bfa8 */

void FUN_0015bfa8(void)

{
  int unaff_r5;
  ConfirmDialog *pCVar1;
  
  pCVar1 = *(ConfirmDialog **)(unaff_r5 + DAT_0015c1f8);
  Vector<String>::elementAt((int)&stack0x00000278);
  String::valueOf((int)&stack0x00000280);
  String::operator+((String *)&stack0x00000288,&stack0x00000278,&stack0x00000280);
  Vector<String>::elementAt((int)&stack0x00000290);
  String::operator+((String *)&stack0x00000298,&stack0x00000288,&stack0x00000290);
  Vector<String>::elementAt((int)&stack0x000002a0);
  Vector<String>::elementAt((int)&stack0x000002a8);
  ConfirmDialog::show(pCVar1,&stack0x00000298,&stack0x000002a0,&stack0x000002a8);
  String::~String((String *)&stack0x000002a8);
  String::~String((String *)&stack0x000002a0);
  String::~String((String *)&stack0x00000298);
  String::~String((String *)&stack0x00000290);
  String::~String((String *)&stack0x00000288);
  String::~String((String *)&stack0x00000280);
  FUN_0015c478(&stack0x00000278);
  return;
}


