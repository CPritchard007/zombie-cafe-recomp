/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021a834 FUN_0021a834 */

void FUN_0021a834(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0021a868 + 0x21aa34);
  pSVar1 = (String *)(&UNK_0021a860 + DAT_0021a868);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


