/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199590 FUN_00199590 */

void FUN_00199590(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001995c4 + 0x19959c);
  this_00 = (String *)(DAT_001995c4 + 0x199b3c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


