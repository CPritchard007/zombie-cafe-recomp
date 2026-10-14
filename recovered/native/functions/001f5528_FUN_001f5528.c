/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5528 FUN_001f5528 */

void FUN_001f5528(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001f555c + 0x1f5534);
  this_00 = (String *)(DAT_001f555c + 0x1f5ad4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


