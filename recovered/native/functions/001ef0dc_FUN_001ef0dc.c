/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ef0dc FUN_001ef0dc */

void FUN_001ef0dc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_001ef110 + 0x1ef2dc);
  pSVar1 = (String *)(&UNK_001ef108 + DAT_001ef110);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


