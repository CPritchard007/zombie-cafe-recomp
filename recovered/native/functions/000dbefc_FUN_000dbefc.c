/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000dbefc FUN_000dbefc */

void FUN_000dbefc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000dbf30 + 0xdc0fc);
  pSVar1 = (String *)(&UNK_000dbf28 + DAT_000dbf30);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


