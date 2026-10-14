/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001255f2 FUN_001255f2 */

void FUN_001255f2(void)

{
  int iVar1;
  ConfirmDialog *pCVar2;
  int unaff_r6;
  
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r6 + 0xc));
  if (*(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x34) <= iVar1) {
    FUN_00125de8();
  }
  pCVar2 = *(ConfirmDialog **)(unaff_r6 + 0x80);
  Vector<String>::elementAt((int)&stack0x0000018c);
  Vector<String>::elementAt((int)&stack0x00000194);
  Vector<String>::elementAt((int)&stack0x0000019c);
  ConfirmDialog::show(pCVar2,&stack0x0000018c,&stack0x00000194,&stack0x0000019c);
  String::~String((String *)&stack0x0000019c);
  String::~String((String *)&stack0x00000194);
  String::~String((String *)&stack0x0000018c);
  *(undefined1 *)(*(int *)(unaff_r6 + 0x84) + 0x65) = 0;
  FUN_00125b34();
  return;
}


