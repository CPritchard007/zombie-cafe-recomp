/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f610c FUN_000f610c */

void FUN_000f610c(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(FollowTask::getDestinationTileIndex + DAT_000f6140);
  pSVar1 = (String *)(&UNK_000f6138 + DAT_000f6140);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


