/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00225768 FUN_00225768 */

void FUN_00225768(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0022579c + 0x225968);
  pSVar1 = (String *)(&UNK_00225794 + DAT_0022579c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


