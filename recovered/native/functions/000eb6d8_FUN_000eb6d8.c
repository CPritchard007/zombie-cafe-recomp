/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb6d8 FUN_000eb6d8 */

void FUN_000eb6d8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000eb70c + 0xeb8d8);
  pSVar1 = (String *)(&UNK_000eb704 + DAT_000eb70c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


