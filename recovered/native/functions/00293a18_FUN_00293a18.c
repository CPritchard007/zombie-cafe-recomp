/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293a18 FUN_00293a18 */

void FUN_00293a18(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00293a4c + 0x293a24);
  this_00 = (String *)(GameStateSpecialSale::resume + DAT_00293a4c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


