/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4b60 FUN_001c4b60 */

void FUN_001c4b60(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001c4b94 + 0x1c4b6c);
  this_00 = (String *)(DAT_001c4b94 + 0x1c510c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


