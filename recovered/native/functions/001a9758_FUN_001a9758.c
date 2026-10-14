/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9758 FUN_001a9758 */

void FUN_001a9758(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001a978c + 0x1a9958);
  pSVar1 = (String *)(&UNK_001a9784 + DAT_001a978c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


