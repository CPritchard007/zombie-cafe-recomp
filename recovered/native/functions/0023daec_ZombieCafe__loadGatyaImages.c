/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023daec ZombieCafe::loadGatyaImages */

/* ZombieCafe::loadGatyaImages() */

void __thiscall ZombieCafe::loadGatyaImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  if (*(int *)(this + 0x810) == 0) {
    puts((char *)(DAT_0023db60 + 0x23db02));
    iVar1 = SmDev();
    String::String(aSStack_20,(String *)(iVar1 * 8 + *(int *)(DAT_0023db64 + 0x23db12)));
    iVar1 = SmDev();
    String::String(aSStack_18,(String *)(iVar1 * 8 + *(int *)(DAT_0023db68 + 0x23db26)));
    uVar2 = PackedImage::createPackedImage(aSStack_20,0,aSStack_18,0);
    *(undefined4 *)(this + 0x810) = uVar2;
    String::~String(aSStack_18);
    String::~String(aSStack_20);
  }
  return;
}


