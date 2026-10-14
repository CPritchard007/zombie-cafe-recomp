/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e298 FUN_0017e298 */

void FUN_0017e298(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_0017e2cc + 0x17e2a4);
  this_00 = (String *)(DAT_0017e2cc + 0x17e844);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


