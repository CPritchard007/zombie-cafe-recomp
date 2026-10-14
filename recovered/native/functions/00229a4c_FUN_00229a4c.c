/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229a4c FUN_00229a4c */

void FUN_00229a4c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)((int)&DAT_00229c4c + DAT_00229a80);
  pSVar1 = (String *)(&UNK_00229a78 + DAT_00229a80);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


