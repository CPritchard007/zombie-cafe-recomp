/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001129d8 FUN_001129d8 */

void FUN_001129d8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00112a0c + 0x112bd8);
  pSVar1 = (String *)(&UNK_00112a04 + DAT_00112a0c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


