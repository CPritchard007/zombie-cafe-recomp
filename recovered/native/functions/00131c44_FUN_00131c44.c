/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131c44 FUN_00131c44 */

void FUN_00131c44(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(GameStateChooseChef::showFrequentPurchaseNotice + DAT_00131c78 + 4);
  pSVar1 = (String *)(&UNK_00131c70 + DAT_00131c78);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


