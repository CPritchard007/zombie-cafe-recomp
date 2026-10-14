/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dfacc FUN_001dfacc */

void FUN_001dfacc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(&UNK_001dfccc + DAT_001dfb00);
  pSVar1 = (String *)(&UNK_001dfaf8 + DAT_001dfb00);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


