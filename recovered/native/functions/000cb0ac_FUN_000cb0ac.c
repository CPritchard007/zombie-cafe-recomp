/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb0ac FUN_000cb0ac */

void FUN_000cb0ac(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000cb0e0 + 0xcb2ac);
  pSVar1 = (String *)(&UNK_000cb0d8 + DAT_000cb0e0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


