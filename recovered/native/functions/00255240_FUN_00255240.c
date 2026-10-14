/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255240 FUN_00255240 */

void FUN_00255240(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00255274 + 0x255440);
  pSVar1 = (String *)(&UNK_0025526c + DAT_00255274);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


