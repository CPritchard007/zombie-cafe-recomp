/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236fd4 FUN_00236fd4 */

void FUN_00236fd4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00237008 + 0x2371d4);
  pSVar1 = (String *)(&UNK_00237000 + DAT_00237008);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


