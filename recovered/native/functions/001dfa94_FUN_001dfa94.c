/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfa94 FUN_001dfa94 */

void FUN_001dfa94(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001dfac8 + 0x1dfaa0);
  this_00 = (String *)((int)&DAT_001e0040 + DAT_001dfac8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


