/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00257d20 FUN_00257d20 */

void FUN_00257d20(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00257d54 + 0x257f20);
  pSVar1 = (String *)(&UNK_00257d4c + DAT_00257d54);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


