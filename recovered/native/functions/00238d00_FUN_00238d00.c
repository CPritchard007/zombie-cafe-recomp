/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238d00 FUN_00238d00 */

void FUN_00238d00(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00238d34 + 0x238f00);
  pSVar1 = (String *)(&UNK_00238d2c + DAT_00238d34);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


