/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002302bc FUN_002302bc */

void FUN_002302bc(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)((int)&DAT_002304bc + DAT_002302f0);
  pSVar1 = (String *)(&UNK_002302e8 + DAT_002302f0);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


