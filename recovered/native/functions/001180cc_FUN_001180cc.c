/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001180cc FUN_001180cc */

void FUN_001180cc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00118100 + 0x1182cc);
  pSVar1 = (String *)(&UNK_001180f8 + DAT_00118100);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


