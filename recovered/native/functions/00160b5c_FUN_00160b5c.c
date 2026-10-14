/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160b5c FUN_00160b5c */

void FUN_00160b5c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00160b90 + 0x160d5c);
  pSVar1 = (String *)(&UNK_00160b88 + DAT_00160b90);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


