/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210f8c FUN_00210f8c */

void FUN_00210f8c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00210fc0 + 0x21118c);
  pSVar1 = (String *)(&UNK_00210fb8 + DAT_00210fc0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


