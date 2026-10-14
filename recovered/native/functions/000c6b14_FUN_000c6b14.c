/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6b14 FUN_000c6b14 */

void FUN_000c6b14(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000c6b48 + 0xc6d14);
  pSVar1 = (String *)(&UNK_000c6b40 + DAT_000c6b48);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


