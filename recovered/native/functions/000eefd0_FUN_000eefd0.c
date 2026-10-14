/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eefd0 FUN_000eefd0 */

void FUN_000eefd0(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000ef004 + 0xeefdc);
  this_00 = (String *)(DAT_000ef004 + 0xef57c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


