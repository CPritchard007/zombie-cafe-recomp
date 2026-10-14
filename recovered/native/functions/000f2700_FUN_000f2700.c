/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f2700 FUN_000f2700 */

void FUN_000f2700(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000f2734 + 0xf270c);
  this_00 = (String *)(DAT_000f2734 + 0xf2cac);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


