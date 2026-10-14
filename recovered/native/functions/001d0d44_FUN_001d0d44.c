/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0d44 FUN_001d0d44 */

void FUN_001d0d44(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001d0d78 + 0x1d0d50);
  this_00 = (String *)(DAT_001d0d78 + 0x1d12f0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


