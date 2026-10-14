/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e9918 FUN_001e9918 */

void FUN_001e9918(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001e994c + 0x1e9b18);
  pSVar1 = (String *)(&UNK_001e9944 + DAT_001e994c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


