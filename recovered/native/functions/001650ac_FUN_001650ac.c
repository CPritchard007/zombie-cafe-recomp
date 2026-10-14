/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001650ac FUN_001650ac */

void FUN_001650ac(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001650e0 + 0x1652ac);
  pSVar1 = (String *)(&UNK_001650d8 + DAT_001650e0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


