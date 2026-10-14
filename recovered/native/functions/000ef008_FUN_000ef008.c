/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef008 FUN_000ef008 */

void FUN_000ef008(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000ef03c + 0xef208);
  pSVar1 = (String *)(&UNK_000ef034 + DAT_000ef03c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


