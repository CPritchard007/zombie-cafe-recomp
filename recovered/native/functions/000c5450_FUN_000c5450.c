/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c5450 FUN_000c5450 */

void FUN_000c5450(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000c5484 + 0xc5650);
  pSVar1 = (String *)(&UNK_000c547c + DAT_000c5484);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


