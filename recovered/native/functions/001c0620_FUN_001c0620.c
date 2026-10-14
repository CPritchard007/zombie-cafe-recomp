/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0620 FUN_001c0620 */

void FUN_001c0620(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001c0654 + 0x1c062c);
  this_00 = (String *)(DAT_001c0654 + 0x1c0bcc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


