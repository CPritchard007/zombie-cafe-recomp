/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234bc4 FUN_00234bc4 */

void FUN_00234bc4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00234bf8 + 0x234bd0);
  this_00 = (String *)(DAT_00234bf8 + 0x235170);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


