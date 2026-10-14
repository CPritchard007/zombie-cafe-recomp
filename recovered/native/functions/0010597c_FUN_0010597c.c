/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010597c FUN_0010597c */

void FUN_0010597c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001059b0 + 0x105988);
  this_00 = (String *)(DAT_001059b0 + 0x105f28);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


