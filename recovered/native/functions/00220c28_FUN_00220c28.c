/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220c28 FUN_00220c28 */

void FUN_00220c28(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00220c5c + 0x220e28);
  pSVar1 = (String *)(&UNK_00220c54 + DAT_00220c5c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


