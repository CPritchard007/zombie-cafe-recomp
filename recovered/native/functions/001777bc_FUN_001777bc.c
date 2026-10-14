/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001777bc FUN_001777bc */

void FUN_001777bc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001777f0 + 0x1777c8);
  this_00 = (String *)(DAT_001777f0 + 0x177d68);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


