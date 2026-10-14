/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002128ec FUN_002128ec */

void FUN_002128ec(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00212920 + 0x212aec);
  pSVar1 = (String *)(&UNK_00212918 + DAT_00212920);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


