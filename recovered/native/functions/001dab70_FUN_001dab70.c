/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dab70 FUN_001dab70 */

void FUN_001dab70(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001daba4 + 0x1dab7c);
  this_00 = (String *)(DAT_001daba4 + 0x1db11c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


