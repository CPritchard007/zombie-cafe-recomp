/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015e61c FUN_0015e61c */

void FUN_0015e61c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_0015e650 + 0x15e628);
  this_00 = (String *)(&UNK_0015ebc8 + DAT_0015e650);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


