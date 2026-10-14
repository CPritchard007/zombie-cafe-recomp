/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dffd8 FUN_000dffd8 */

void FUN_000dffd8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000e000c + 0xe01d8);
  pSVar1 = (String *)(&UNK_000e0004 + DAT_000e000c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


