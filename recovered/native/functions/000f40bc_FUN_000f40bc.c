/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f40bc FUN_000f40bc */

void FUN_000f40bc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000f40f0 + 0xf42bc);
  pSVar1 = (String *)(&UNK_000f40e8 + DAT_000f40f0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


