/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ba9c8 FUN_001ba9c8 */

void FUN_001ba9c8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001ba9fc + 0x1ba9d4);
  this_00 = (String *)(DAT_001ba9fc + 0x1baf74);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


