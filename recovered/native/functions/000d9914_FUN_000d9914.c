/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d9914 FUN_000d9914 */

void FUN_000d9914(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000d9948 + 0xd9b14);
  pSVar1 = (String *)(&UNK_000d9940 + DAT_000d9948);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


