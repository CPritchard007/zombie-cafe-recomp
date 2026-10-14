/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001059b4 FUN_001059b4 */

void FUN_001059b4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001059e8 + 0x105bb4);
  pSVar1 = (String *)(&UNK_001059e0 + DAT_001059e8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


