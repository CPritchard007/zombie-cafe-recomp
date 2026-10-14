/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bb3c FUN_0013bb3c */

void FUN_0013bb3c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0013bb70 + 0x13bd3c);
  pSVar1 = (String *)(&UNK_0013bb68 + DAT_0013bb70);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


