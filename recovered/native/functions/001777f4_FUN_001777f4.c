/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001777f4 FUN_001777f4 */

void FUN_001777f4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00177828 + 0x1779f4);
  pSVar1 = (String *)(&UNK_00177820 + DAT_00177828);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


