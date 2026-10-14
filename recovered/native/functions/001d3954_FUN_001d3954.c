/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3954 FUN_001d3954 */

void FUN_001d3954(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001d3988 + 0x1d3b54);
  pSVar1 = (String *)(&UNK_001d3980 + DAT_001d3988);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


