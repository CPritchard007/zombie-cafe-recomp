/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddb34 FUN_000ddb34 */

void FUN_000ddb34(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000ddb68 + 0xddb40);
  this_00 = (String *)(DAT_000ddb68 + 0xde0e0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


