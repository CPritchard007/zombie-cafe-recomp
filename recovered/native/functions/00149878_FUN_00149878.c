/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00149878 FUN_00149878 */

void FUN_00149878(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(GameStateGatya::onLoadImageFromURLSuccess_Normal + DAT_001498ac);
  pSVar1 = (String *)(&UNK_001498a4 + DAT_001498ac);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


