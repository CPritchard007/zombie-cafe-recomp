/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddb6c FUN_000ddb6c */

void FUN_000ddb6c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000ddba0 + 0xddd6c);
  pSVar1 = (String *)(&UNK_000ddb98 + DAT_000ddba0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


