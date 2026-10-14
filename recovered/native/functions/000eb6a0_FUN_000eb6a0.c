/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb6a0 FUN_000eb6a0 */

void FUN_000eb6a0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000eb6d4 + 0xeb6ac);
  this_00 = (String *)((int)&DAT_000ebc4c + DAT_000eb6d4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


