/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116360 FUN_00116360 */

void FUN_00116360(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_00116394 + 0x11636c);
  this_00 = (String *)(&UNK_0011690c + DAT_00116394);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


