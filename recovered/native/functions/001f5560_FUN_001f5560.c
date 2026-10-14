/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5560 FUN_001f5560 */

void FUN_001f5560(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001f5594 + 0x1f5760);
  pSVar1 = (String *)(&UNK_001f558c + DAT_001f5594);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


