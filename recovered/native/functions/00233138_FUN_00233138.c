/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00233138 FUN_00233138 */

void FUN_00233138(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)((int)&DAT_00233338 + DAT_0023316c);
  pSVar1 = (String *)(&UNK_00233164 + DAT_0023316c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


