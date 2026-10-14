/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227cec FUN_00227cec */

void FUN_00227cec(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(&UNK_00227eec + DAT_00227d20);
  pSVar1 = (String *)(&UNK_00227d18 + DAT_00227d20);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


