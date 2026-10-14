/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7640 FUN_000b7640 */

void FUN_000b7640(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000b7674 + 0xb764c);
  this_00 = (String *)(DAT_000b7674 + 0xb7bec);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


