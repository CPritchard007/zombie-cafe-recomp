/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e520 FUN_0022e520 */

void FUN_0022e520(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0022e554 + 0x22e720);
  pSVar1 = (String *)(&UNK_0022e54c + DAT_0022e554);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


