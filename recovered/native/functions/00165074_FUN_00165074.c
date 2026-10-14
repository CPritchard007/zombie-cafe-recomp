/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165074 FUN_00165074 */

void FUN_00165074(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001650a8 + 0x165080);
  this_00 = (String *)(DAT_001650a8 + 0x165620);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


