/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000facc8 FUN_000facc8 */

void FUN_000facc8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000facfc + 0xfaec8);
  pSVar1 = (String *)(&UNK_000facf4 + DAT_000facfc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


