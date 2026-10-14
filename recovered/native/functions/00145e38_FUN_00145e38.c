/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145e38 FUN_00145e38 */

void FUN_00145e38(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00145e6c + 0x146038);
  pSVar1 = (String *)(&UNK_00145e64 + DAT_00145e6c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


