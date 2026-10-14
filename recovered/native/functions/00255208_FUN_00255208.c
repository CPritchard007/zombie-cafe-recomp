/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255208 FUN_00255208 */

void FUN_00255208(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_0025523c + 0x255214);
  this_00 = (String *)(DAT_0025523c + 0x2557b4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


