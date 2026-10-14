/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015e654 FUN_0015e654 */

void FUN_0015e654(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0015e688 + 0x15e854);
  pSVar1 = (String *)(&UNK_0015e680 + DAT_0015e688);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


