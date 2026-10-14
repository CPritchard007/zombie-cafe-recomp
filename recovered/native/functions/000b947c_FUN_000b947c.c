/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b947c FUN_000b947c */

void FUN_000b947c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000b94b0 + 0xb9488);
  this_00 = (String *)(DAT_000b94b0 + 0xb9a28);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


