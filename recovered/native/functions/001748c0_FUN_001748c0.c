/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001748c0 FUN_001748c0 */

void FUN_001748c0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001748f4 + 0x1748cc);
  this_00 = (String *)(DAT_001748f4 + 0x174e6c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


