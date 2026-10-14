/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f7b8 FUN_0016f7b8 */

void FUN_0016f7b8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_0016f7ec + 0x16f7c4);
  this_00 = (String *)(DAT_0016f7ec + 0x16fd64);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


