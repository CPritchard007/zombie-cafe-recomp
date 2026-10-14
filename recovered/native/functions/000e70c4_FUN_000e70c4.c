/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e70c4 FUN_000e70c4 */

void FUN_000e70c4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000e70f8 + 0xe70d0);
  this_00 = (String *)(DAT_000e70f8 + 0xe7670);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


