/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118094 FUN_00118094 */

void FUN_00118094(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001180c8 + 0x1180a0);
  this_00 = (String *)(DAT_001180c8 + 0x118640);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


