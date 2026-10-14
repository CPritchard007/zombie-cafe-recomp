/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c5418 FUN_000c5418 */

void FUN_000c5418(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000c544c + 0xc5424);
  this_00 = (String *)(DAT_000c544c + 0xc59c4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


