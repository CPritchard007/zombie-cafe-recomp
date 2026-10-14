/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c224 FUN_0015c224 */

void FUN_0015c224(void)

{
  int unaff_r5;
  ConfirmDialog *pCVar1;
  
  pCVar1 = *(ConfirmDialog **)(unaff_r5 + DAT_0015c514);
  Vector<String>::elementAt((int)&stack0x000002f0);
  String::valueOf((int)&stack0x000002f8);
  String::operator+((String *)&stack0x00000300,&stack0x000002f0,&stack0x000002f8);
  Vector<String>::elementAt((int)&stack0x00000308);
  String::operator+((String *)&stack0x00000310,&stack0x00000300,&stack0x00000308);
  Vector<String>::elementAt((int)&stack0x00000318);
  Vector<String>::elementAt((int)&stack0x00000320);
  ConfirmDialog::show(pCVar1,&stack0x00000310,&stack0x00000318,&stack0x00000320);
  String::~String((String *)&stack0x00000320);
  String::~String((String *)&stack0x00000318);
  String::~String((String *)&stack0x00000310);
  String::~String((String *)&stack0x00000308);
  String::~String((String *)&stack0x00000300);
  String::~String((String *)&stack0x000002f8);
  FUN_0015c478(&stack0x000002f0);
  return;
}


