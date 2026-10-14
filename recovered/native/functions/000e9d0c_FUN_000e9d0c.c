/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9d0c FUN_000e9d0c */

void FUN_000e9d0c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000e9d40 + 0xe9f0c);
  pSVar1 = (String *)(&UNK_000e9d38 + DAT_000e9d40);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


