/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001129a0 FUN_001129a0 */

void FUN_001129a0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001129d4 + 0x1129ac);
  this_00 = (String *)(DAT_001129d4 + 0x112f4c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


