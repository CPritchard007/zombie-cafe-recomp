/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d391c FUN_001d391c */

void FUN_001d391c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001d3950 + 0x1d3928);
  this_00 = (String *)(DAT_001d3950 + 0x1d3ec8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


