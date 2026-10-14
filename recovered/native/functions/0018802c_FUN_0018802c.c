/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018802c FUN_0018802c */

void FUN_0018802c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_00188060 + 0x18822c);
  pSVar1 = (String *)(&UNK_00188058 + DAT_00188060);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


