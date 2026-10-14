/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ceb1c FUN_000ceb1c */

void FUN_000ceb1c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000ceb50 + 0xced1c);
  pSVar1 = (String *)(&UNK_000ceb48 + DAT_000ceb50);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


