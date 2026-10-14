/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234bfc FUN_00234bfc */

void FUN_00234bfc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00234c30 + 0x234dfc);
  pSVar1 = (String *)(&UNK_00234c28 + DAT_00234c30);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


