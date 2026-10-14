/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdd70 FUN_000bdd70 */

void FUN_000bdd70(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  pSVar1 = (String *)(DAT_000bdda4 + 0xbdd7c);
  this_00 = (String *)(DAT_000bdda4 + 0xbe31c);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


