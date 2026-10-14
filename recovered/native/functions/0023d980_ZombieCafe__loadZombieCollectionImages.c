/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d980 ZombieCafe::loadZombieCollectionImages */

/* ZombieCafe::loadZombieCollectionImages() */

void __thiscall ZombieCafe::loadZombieCollectionImages(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  String aSStack_64 [8];
  String aSStack_5c [8];
  char acStack_54 [64];
  int local_14;
  
  iVar1 = DAT_0023da2c;
  piVar4 = *(int **)(DAT_0023da28 + 0x23d98c);
  local_14 = *piVar4;
  if (*(CImage **)(this + DAT_0023da2c) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023da30 + 0x23d9a0),(char *)(DAT_0023da34 + 0x23d9a2));
    iVar2 = SmDev();
    String::String(aSStack_64,(String *)(iVar2 * 8 + *(int *)(DAT_0023da38 + 0x23d9b2)));
    iVar2 = SmDev();
    String::String(aSStack_5c,(String *)(iVar2 * 8 + *(int *)(DAT_0023da3c + 0x23d9c6)));
    uVar3 = PackedImage::createPackedImage(aSStack_64,0,aSStack_5c,0);
    *(undefined4 *)(this + iVar1) = uVar3;
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + DAT_0023da2c));
    snprintf(acStack_54,0x40,(char *)(DAT_0023da40 + 0x23d9f6),uVar3);
    L_PrintLog((char *)(DAT_0023da44 + 0x23da02),acStack_54);
  }
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


