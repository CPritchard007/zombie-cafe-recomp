/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227cb4 FUN_00227cb4 */

void FUN_00227cb4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00227ce8 + 0x227cc0);
  this_00 = (String *)(DAT_00227ce8 + 0x228260);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


