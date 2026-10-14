/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ebeb0 FUN_001ebeb0 */

void FUN_001ebeb0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001ebee4 + 0x1ec0b0);
  pSVar1 = (String *)(&UNK_001ebedc + DAT_001ebee4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


