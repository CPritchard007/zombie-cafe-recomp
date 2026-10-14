/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e800 FUN_0019e800 */

void FUN_0019e800(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0019e834 + 0x19ea00);
  pSVar1 = (String *)(&UNK_0019e82c + DAT_0019e834);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


