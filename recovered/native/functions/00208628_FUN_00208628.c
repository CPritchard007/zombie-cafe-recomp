/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00208628 FUN_00208628 */

void FUN_00208628(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0020865c + 0x208828);
  pSVar1 = (String *)(&UNK_00208654 + DAT_0020865c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


