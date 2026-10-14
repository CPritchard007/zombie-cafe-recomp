/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001995c8 FUN_001995c8 */

void FUN_001995c8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001995fc + 0x1997c8);
  pSVar1 = (String *)(&UNK_001995f4 + DAT_001995fc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


