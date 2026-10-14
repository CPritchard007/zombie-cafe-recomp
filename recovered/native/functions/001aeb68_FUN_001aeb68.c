/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aeb68 FUN_001aeb68 */

void FUN_001aeb68(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001aeb9c + 0x1aed68);
  pSVar1 = (String *)(&UNK_001aeb94 + DAT_001aeb9c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


