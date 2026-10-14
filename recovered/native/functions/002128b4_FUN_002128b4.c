/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002128b4 FUN_002128b4 */

void FUN_002128b4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_002128e8 + 0x2128c0);
  this_00 = (String *)(DAT_002128e8 + 0x212e60);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


