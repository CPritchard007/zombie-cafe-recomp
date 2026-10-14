/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00135fc4 FUN_00135fc4 */

void FUN_00135fc4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00135ff8 + 0x1361c4);
  pSVar1 = (String *)(&UNK_00135ff0 + DAT_00135ff8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


