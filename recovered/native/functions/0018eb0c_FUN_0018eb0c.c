/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018eb0c FUN_0018eb0c */

void FUN_0018eb0c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(DAT_0018eb40 + 0x18ed0c);
  pSVar1 = (String *)(&UNK_0018eb38 + DAT_0018eb40);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


