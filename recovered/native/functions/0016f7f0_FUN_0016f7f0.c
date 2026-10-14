/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f7f0 FUN_0016f7f0 */

void FUN_0016f7f0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0016f824 + 0x16f9f0);
  pSVar1 = (String *)(&UNK_0016f81c + DAT_0016f824);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


