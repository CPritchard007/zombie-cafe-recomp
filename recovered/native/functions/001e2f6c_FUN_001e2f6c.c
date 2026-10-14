/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2f6c FUN_001e2f6c */

void FUN_001e2f6c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001e2fa0 + 0x1e316c);
  pSVar1 = (String *)(&UNK_001e2f98 + DAT_001e2fa0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


