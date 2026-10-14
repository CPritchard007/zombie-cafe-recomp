/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018ead4 FUN_0018ead4 */

void FUN_0018ead4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_0018eb08 + 0x18eae0);
  this_00 = (String *)(DAT_0018eb08 + 0x18f080);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


