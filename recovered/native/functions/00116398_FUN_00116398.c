/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116398 FUN_00116398 */

void FUN_00116398(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001163cc + 0x116598);
  pSVar1 = (String *)(&UNK_001163c4 + DAT_001163cc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


