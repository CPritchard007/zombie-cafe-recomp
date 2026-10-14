/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e70fc FUN_000e70fc */

void FUN_000e70fc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000e7130 + 0xe72fc);
  pSVar1 = (String *)(&UNK_000e7128 + DAT_000e7130);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


