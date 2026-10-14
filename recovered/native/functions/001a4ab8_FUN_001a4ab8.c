/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a4ab8 FUN_001a4ab8 */

void FUN_001a4ab8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001a4aec + 0x1a4ac4);
  this_00 = (String *)(DAT_001a4aec + 0x1a5064);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


