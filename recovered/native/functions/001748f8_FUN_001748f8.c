/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001748f8 FUN_001748f8 */

void FUN_001748f8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0017492c + 0x174af8);
  pSVar1 = (String *)(&UNK_00174924 + DAT_0017492c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


