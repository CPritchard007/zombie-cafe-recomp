/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7678 FUN_000b7678 */

void FUN_000b7678(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(&UNK_000b7878 + DAT_000b76ac);
  pSVar1 = (String *)(&UNK_000b76a4 + DAT_000b76ac);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


