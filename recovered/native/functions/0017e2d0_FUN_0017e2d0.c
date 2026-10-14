/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e2d0 FUN_0017e2d0 */

void FUN_0017e2d0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0017e304 + 0x17e4d0);
  pSVar1 = (String *)(&UNK_0017e2fc + DAT_0017e304);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


