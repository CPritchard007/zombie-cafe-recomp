/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d7c40 FUN_001d7c40 */

void FUN_001d7c40(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001d7c74 + 0x1d7e40);
  pSVar1 = (String *)(&UNK_001d7c6c + DAT_001d7c74);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


