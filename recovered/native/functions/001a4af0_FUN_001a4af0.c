/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a4af0 FUN_001a4af0 */

void FUN_001a4af0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001a4b24 + 0x1a4cf0);
  pSVar1 = (String *)(&UNK_001a4b1c + DAT_001a4b24);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


