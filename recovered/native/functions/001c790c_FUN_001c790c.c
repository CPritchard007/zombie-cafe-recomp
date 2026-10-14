/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c790c FUN_001c790c */

void FUN_001c790c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(&UNK_001c7b0c + DAT_001c7940);
  pSVar1 = (String *)(&UNK_001c7938 + DAT_001c7940);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


