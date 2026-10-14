/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185e9e FUN_00185e9e */

void FUN_00185e9e(void)

{
  int unaff_r5;
  ConfirmDialog *pCVar1;
  
  pCVar1 = *(ConfirmDialog **)(unaff_r5 + 0x164);
  String::String((String *)&stack0x000000a0,(char *)(DAT_00185f34 + 0x185ea8));
  Vector<String>::elementAt((int)&stack0x000000a8);
  Vector<String>::elementAt((int)&stack0x000000b0);
  ConfirmDialog::show(pCVar1,&stack0x000000a0,&stack0x000000a8,&stack0x000000b0);
  String::~String((String *)&stack0x000000b0);
  String::~String((String *)&stack0x000000a8);
  String::~String((String *)&stack0x000000a0);
  FUN_00185f5c();
  return;
}


