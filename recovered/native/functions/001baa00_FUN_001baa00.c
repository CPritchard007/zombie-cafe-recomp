/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001baa00 FUN_001baa00 */

void FUN_001baa00(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001baa34 + 0x1bac00);
  pSVar1 = (String *)(&UNK_001baa2c + DAT_001baa34);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


