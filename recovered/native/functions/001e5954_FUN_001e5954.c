/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e5954 FUN_001e5954 */

void FUN_001e5954(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001e5988 + 0x1e5b54);
  pSVar1 = (String *)(&UNK_001e5980 + DAT_001e5988);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


