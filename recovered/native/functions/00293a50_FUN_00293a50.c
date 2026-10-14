/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293a50 FUN_00293a50 */

void FUN_00293a50(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00293a84 + 0x293c50);
  pSVar1 = (String *)(&UNK_00293a7c + DAT_00293a84);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


