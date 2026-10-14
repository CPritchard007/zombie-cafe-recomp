/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022268c FUN_0022268c */

void FUN_0022268c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_002226c0 + 0x22288c);
  pSVar1 = (String *)(&UNK_002226b8 + DAT_002226c0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


