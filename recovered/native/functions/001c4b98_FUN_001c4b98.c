/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4b98 FUN_001c4b98 */

void FUN_001c4b98(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001c4bcc + 0x1c4d98);
  pSVar1 = (String *)(&UNK_001c4bc4 + DAT_001c4bcc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


