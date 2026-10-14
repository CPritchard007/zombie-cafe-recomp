/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bd3e FUN_0015bd3e */

void FUN_0015bd3e(void)

{
  int unaff_r5;
  ConfirmDialog *pCVar1;
  
  pCVar1 = *(ConfirmDialog **)(unaff_r5 + DAT_0015be08);
  Vector<String>::elementAt((int)&stack0x00000200);
  String::valueOf((int)&stack0x00000208);
  String::operator+((String *)&stack0x00000210,&stack0x00000200,&stack0x00000208);
  Vector<String>::elementAt((int)&stack0x00000218);
  String::operator+((String *)&stack0x00000220,&stack0x00000210,&stack0x00000218);
  Vector<String>::elementAt((int)&stack0x00000228);
  Vector<String>::elementAt((int)&stack0x00000230);
  ConfirmDialog::show(pCVar1,&stack0x00000220,&stack0x00000228,&stack0x00000230);
  String::~String((String *)&stack0x00000230);
  String::~String((String *)&stack0x00000228);
  String::~String((String *)&stack0x00000220);
  String::~String((String *)&stack0x00000218);
  String::~String((String *)&stack0x00000210);
  String::~String((String *)&stack0x00000208);
  FUN_0015c478(&stack0x00000200);
  return;
}


