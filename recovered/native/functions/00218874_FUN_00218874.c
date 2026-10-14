/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00218874 FUN_00218874 */

void FUN_00218874(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_002188a8 + 0x218a74);
  pSVar1 = (String *)(&UNK_002188a0 + DAT_002188a8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


