/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001daba8 FUN_001daba8 */

void FUN_001daba8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001dabdc + 0x1dada8);
  pSVar1 = (String *)(&UNK_001dabd4 + DAT_001dabdc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


