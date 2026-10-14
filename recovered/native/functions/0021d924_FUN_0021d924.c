/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d924 FUN_0021d924 */

void FUN_0021d924(void)

{
  String *this;
  String *pSVar1;
  
  pSVar1 = *(String **)(DAT_0021d940 + 0x21d930);
  this = pSVar1 + 0x658;
  do {
    this = this + -8;
    String::~String(this);
  } while (this != pSVar1);
  return;
}


