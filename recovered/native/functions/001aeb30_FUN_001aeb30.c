/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aeb30 FUN_001aeb30 */

void FUN_001aeb30(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_001aeb64 + 0x1aeb3c);
  this_00 = (String *)(DAT_001aeb64 + 0x1af0dc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


