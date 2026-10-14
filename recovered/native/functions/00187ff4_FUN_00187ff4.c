/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00187ff4 FUN_00187ff4 */

void FUN_00187ff4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00188028 + 0x188000);
  this_00 = (String *)(DAT_00188028 + 0x1885a0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


