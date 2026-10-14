/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dffa0 FUN_000dffa0 */

void FUN_000dffa0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000dffd4 + 0xdffac);
  this_00 = (String *)(DAT_000dffd4 + 0xe054c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


