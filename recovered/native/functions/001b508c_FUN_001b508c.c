/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b508c FUN_001b508c */

void FUN_001b508c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001b50c0 + 0x1b528c);
  pSVar1 = (String *)(&UNK_001b50b8 + DAT_001b50c0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


