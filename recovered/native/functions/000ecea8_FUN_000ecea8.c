/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecea8 FUN_000ecea8 */

void FUN_000ecea8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000ecedc + 0xed0a8);
  pSVar1 = (String *)(&UNK_000eced4 + DAT_000ecedc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


