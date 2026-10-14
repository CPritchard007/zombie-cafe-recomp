/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00204564 FUN_00204564 */

void FUN_00204564(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00204598 + 0x204764);
  pSVar1 = (String *)(&UNK_00204590 + DAT_00204598);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


