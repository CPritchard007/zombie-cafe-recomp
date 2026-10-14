/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fec54 FUN_001fec54 */

void FUN_001fec54(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001fec88 + 0x1fee54);
  pSVar1 = (String *)(&UNK_001fec80 + DAT_001fec88);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


