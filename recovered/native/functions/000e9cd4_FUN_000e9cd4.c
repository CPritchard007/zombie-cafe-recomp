/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9cd4 FUN_000e9cd4 */

void FUN_000e9cd4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000e9d08 + 0xe9ce0);
  this_00 = (String *)(DAT_000e9d08 + 0xea280);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


