/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010a7c0 FUN_0010a7c0 */

void FUN_0010a7c0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0010a7f4 + 0x10a9c0);
  pSVar1 = (String *)(&UNK_0010a7ec + DAT_0010a7f4);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


