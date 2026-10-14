/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f2738 FUN_000f2738 */

void FUN_000f2738(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000f276c + 0xf2938);
  pSVar1 = (String *)(&UNK_000f2764 + DAT_000f276c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


