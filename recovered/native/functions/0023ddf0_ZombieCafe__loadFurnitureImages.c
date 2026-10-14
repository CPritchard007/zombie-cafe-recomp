/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ddf0 ZombieCafe::loadFurnitureImages */

/* ZombieCafe::loadFurnitureImages() */

void __thiscall ZombieCafe::loadFurnitureImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  String aSStack_bc [8];
  String aSStack_b4 [8];
  int local_ac [2];
  int local_a4 [2];
  String aSStack_9c [8];
  String aSStack_94 [8];
  int local_8c [2];
  int local_84 [2];
  String aSStack_7c [8];
  String aSStack_74 [8];
  int local_6c [2];
  int local_64 [2];
  char acStack_5c [64];
  int local_1c;
  
  iVar7 = DAT_0023e0a0 + 0x23ddfc;
  piVar6 = *(int **)(iVar7 + DAT_0023e0a4);
  local_1c = *piVar6;
  L_PrintLog((char *)(DAT_0023e0a8 + 0x23de08),(char *)(DAT_0023e0ac + 0x23de0a));
  iVar3 = DAT_0023e0b0;
  if (*(CImage **)(this + DAT_0023e0b0) == (CImage *)0x0) {
    iVar1 = SmDev();
    String::String(aSStack_bc,(String *)(iVar1 * 8 + *(int *)(iVar7 + DAT_0023e0b4)));
    String::String(aSStack_b4,*(String **)(iVar7 + DAT_0023e0b8));
    uVar2 = PackedImage::createPackedImage(aSStack_bc,0,aSStack_b4,0);
    *(undefined4 *)(this + iVar3) = uVar2;
    String::~String(aSStack_b4);
    String::~String(aSStack_bc);
    iVar1 = *(int *)(this + iVar3);
    iVar3 = SmDev();
    if (iVar3 == 4) {
      uVar2 = 0x40000000;
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    uVar2 = __divsf3(0x3f800000);
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
    CImage::getCFTexture();
    CFTexture::CFTexture((CFTexture *)local_a4,(ccTexture2D *)0x0);
    CFTexture::~CFTexture((CFTexture *)local_a4);
    CFTexture::~CFTexture((CFTexture *)local_ac);
    if (local_ac[0] == local_a4[0]) {
      pcVar4 = (char *)(DAT_0023e0bc + 0x23de9c);
      pcVar5 = (char *)(DAT_0023e0c0 + 0x23de9e);
    }
    else {
      pcVar4 = (char *)(DAT_0023e0c4 + 0x23dea6);
      pcVar5 = (char *)(DAT_0023e0c8 + 0x23dea8);
    }
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + DAT_0023e0b0));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e0cc + 0x23deb6),uVar2);
    pcVar5 = acStack_5c;
    pcVar4 = (char *)(DAT_0023e0d0 + 0x23dec2);
  }
  L_PrintLog(pcVar4,pcVar5);
  iVar3 = DAT_0023e0dc;
  L_PrintLog((char *)(DAT_0023e0d4 + 0x23dece),(char *)(DAT_0023e0d8 + 0x23ded0));
  if (*(CImage **)(this + iVar3) == (CImage *)0x0) {
    iVar1 = SmDev();
    String::String(aSStack_9c,(String *)(iVar1 * 8 + *(int *)(iVar7 + DAT_0023e0e0)));
    String::String(aSStack_94,*(String **)(iVar7 + DAT_0023e0e4));
    uVar2 = PackedImage::createPackedImage(aSStack_9c,0,aSStack_94,0);
    *(undefined4 *)(this + iVar3) = uVar2;
    String::~String(aSStack_94);
    String::~String(aSStack_9c);
    iVar1 = *(int *)(this + iVar3);
    iVar3 = SmDev();
    if (iVar3 == 4) {
      uVar2 = 0x40000000;
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    uVar2 = __divsf3(0x3f800000);
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
    CImage::getCFTexture();
    CFTexture::CFTexture((CFTexture *)local_84,(ccTexture2D *)0x0);
    CFTexture::~CFTexture((CFTexture *)local_84);
    CFTexture::~CFTexture((CFTexture *)local_8c);
    if (local_8c[0] == local_84[0]) {
      pcVar4 = (char *)(DAT_0023e0e8 + 0x23df5a);
      pcVar5 = (char *)(DAT_0023e0ec + 0x23df5c);
    }
    else {
      pcVar4 = (char *)(DAT_0023e0f0 + 0x23df64);
      pcVar5 = (char *)(DAT_0023e0f4 + 0x23df66);
    }
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + iVar3));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e0f8 + 0x23df74),uVar2);
    pcVar5 = acStack_5c;
    pcVar4 = (char *)(DAT_0023e0fc + 0x23df80);
  }
  L_PrintLog(pcVar4,pcVar5);
  L_PrintLog((char *)(DAT_0023e100 + 0x23df8c),(char *)(DAT_0023e104 + 0x23df8e));
  if (*(CImage **)(this + 0x820) == (CImage *)0x0) {
    iVar3 = SmDev();
    String::String(aSStack_7c,(String *)(iVar3 * 8 + *(int *)(iVar7 + DAT_0023e108)));
    String::String(aSStack_74,*(String **)(iVar7 + DAT_0023e10c));
    uVar2 = PackedImage::createPackedImage(aSStack_7c,0,aSStack_74,0);
    *(undefined4 *)(this + 0x820) = uVar2;
    String::~String(aSStack_74);
    String::~String(aSStack_7c);
    iVar7 = *(int *)(this + 0x820);
    iVar3 = SmDev();
    if (iVar3 == 4) {
      uVar2 = 0x40000000;
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(iVar7 + 0x2c) = uVar2;
    uVar2 = __divsf3(0x3f800000);
    *(undefined4 *)(iVar7 + 0x30) = uVar2;
    CImage::getCFTexture();
    CFTexture::CFTexture((CFTexture *)local_64,(ccTexture2D *)0x0);
    CFTexture::~CFTexture((CFTexture *)local_64);
    CFTexture::~CFTexture((CFTexture *)local_6c);
    if (local_6c[0] == local_64[0]) {
      pcVar4 = (char *)(DAT_0023e110 + 0x23e01a);
      pcVar5 = (char *)(DAT_0023e114 + 0x23e01c);
    }
    else {
      pcVar4 = (char *)(DAT_0023e118 + 0x23e024);
      pcVar5 = (char *)(DAT_0023e11c + 0x23e026);
    }
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x820));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e120 + 0x23e034),uVar2);
    pcVar5 = acStack_5c;
    pcVar4 = (char *)(DAT_0023e124 + 0x23e040);
  }
  L_PrintLog(pcVar4,pcVar5);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


