/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdda8 FUN_000bdda8 */

void FUN_000bdda8(void)

{
  String *this;
  String *this_00;
  String *pSVar1;
  
  this_00 = (String *)(FurnitureData::FurnitureData + DAT_000bdddc);
  pSVar1 = (String *)(&UNK_000bddd4 + DAT_000bdddc);
  do {
    this = this_00 + -0x1c;
    this_00 = this_00 + -0x24;
    String::~String(this);
    String::~String(this_00);
  } while (this_00 != pSVar1);
  return;
}


