/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0d7c FUN_001d0d7c */

void FUN_001d0d7c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001d0db0 + 0x1d0f7c);
  pSVar1 = (String *)(&UNK_001d0da8 + DAT_001d0db0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


