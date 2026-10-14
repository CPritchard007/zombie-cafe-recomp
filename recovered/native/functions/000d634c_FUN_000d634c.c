/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d634c FUN_000d634c */

void FUN_000d634c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_000d6380 + 0xd654c);
  pSVar1 = (String *)(&UNK_000d6378 + DAT_000d6380);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


