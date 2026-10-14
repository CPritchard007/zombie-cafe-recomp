/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00108240 FUN_00108240 */

void FUN_00108240(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00108274 + 0x108440);
  pSVar1 = (String *)(&UNK_0010826c + DAT_00108274);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


