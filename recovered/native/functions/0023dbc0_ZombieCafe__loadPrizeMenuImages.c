/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023dbc0 ZombieCafe::loadPrizeMenuImages */

/* ZombieCafe::loadPrizeMenuImages() */

void __thiscall ZombieCafe::loadPrizeMenuImages(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = DAT_0023dc30;
  if (*(int *)(this + DAT_0023dc30) == 0) {
    puts((char *)(DAT_0023dc34 + 0x23dbd4));
    iVar2 = SmDev();
    String::String(aSStack_20,(String *)(iVar2 * 8 + *(int *)(DAT_0023dc38 + 0x23dbe4)));
    iVar2 = SmDev();
    String::String(aSStack_18,(String *)(iVar2 * 8 + *(int *)(DAT_0023dc3c + 0x23dbf8)));
    uVar3 = PackedImage::createPackedImage(aSStack_20,0,aSStack_18,0);
    *(undefined4 *)(this + iVar1) = uVar3;
    String::~String(aSStack_18);
    String::~String(aSStack_20);
  }
  return;
}


