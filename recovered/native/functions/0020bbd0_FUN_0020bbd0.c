/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020bbd0 FUN_0020bbd0 */

void FUN_0020bbd0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0020bc04 + 0x20bdd0);
  pSVar1 = (String *)(&UNK_0020bbfc + DAT_0020bc04);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


