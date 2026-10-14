/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb588 FUN_001cb588 */

void FUN_001cb588(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)((int)&DAT_001cb788 + DAT_001cb5bc);
  pSVar1 = (String *)(&UNK_001cb5b4 + DAT_001cb5bc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


