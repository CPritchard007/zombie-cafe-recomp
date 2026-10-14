/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ccf4 FUN_0010ccf4 */

void FUN_0010ccf4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0010cd28 + 0x10cef4);
  pSVar1 = (String *)(&UNK_0010cd20 + DAT_0010cd28);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


