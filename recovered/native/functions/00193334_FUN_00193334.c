/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193334 FUN_00193334 */

void FUN_00193334(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00193368 + 0x193534);
  pSVar1 = (String *)(&UNK_00193360 + DAT_00193368);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


