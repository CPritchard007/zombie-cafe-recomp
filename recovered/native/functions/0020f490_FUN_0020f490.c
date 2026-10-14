/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020f490 FUN_0020f490 */

void FUN_0020f490(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0020f4c4 + 0x20f690);
  pSVar1 = (String *)(&UNK_0020f4bc + DAT_0020f4c4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


