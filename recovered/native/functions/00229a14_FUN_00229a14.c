/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229a14 FUN_00229a14 */

void FUN_00229a14(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00229a48 + 0x229a20);
  this_00 = (String *)(DAT_00229a48 + 0x229fc0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


