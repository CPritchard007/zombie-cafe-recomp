/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0658 FUN_001c0658 */

void FUN_001c0658(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001c068c + 0x1c0858);
  pSVar1 = (String *)(&UNK_001c0684 + DAT_001c068c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


