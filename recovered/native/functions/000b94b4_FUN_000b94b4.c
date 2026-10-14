/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b94b4 FUN_000b94b4 */

void FUN_000b94b4(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(Vector<TrueTypeTextElement*>::addElement + DAT_000b94e8 + 2);
  pSVar1 = (String *)(&UNK_000b94e0 + DAT_000b94e8);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


