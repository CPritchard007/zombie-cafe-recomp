/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e2d4 ZombieCafe::loadRecipeImages */

/* ZombieCafe::loadRecipeImages() */

void __thiscall ZombieCafe::loadRecipeImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  String aSStack_7c [8];
  String aSStack_74 [8];
  int local_6c [2];
  int local_64 [2];
  char acStack_5c [64];
  int local_1c;
  
  iVar3 = DAT_0023e3d8;
  piVar6 = *(int **)(DAT_0023e3d4 + 0x23e2e0);
  local_1c = *piVar6;
  if (*(CImage **)(this + DAT_0023e3d8) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023e3dc + 0x23e2f4),(char *)(DAT_0023e3e0 + 0x23e2f6));
    iVar1 = SmDev();
    String::String(aSStack_7c,(String *)(iVar1 * 8 + *(int *)(DAT_0023e3e4 + 0x23e306)));
    String::String(aSStack_74,*(String **)(DAT_0023e3e8 + 0x23e314));
    uVar2 = PackedImage::createPackedImage(aSStack_7c,0,aSStack_74,0);
    *(undefined4 *)(this + iVar3) = uVar2;
    String::~String(aSStack_74);
    String::~String(aSStack_7c);
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
    CFTexture::CFTexture((CFTexture *)local_64,(ccTexture2D *)0x0);
    CFTexture::~CFTexture((CFTexture *)local_64);
    CFTexture::~CFTexture((CFTexture *)local_6c);
    if (local_6c[0] == local_64[0]) {
      pcVar4 = (char *)(DAT_0023e3ec + 0x23e37e);
      pcVar5 = (char *)(DAT_0023e3f0 + 0x23e380);
    }
    else {
      pcVar4 = (char *)(DAT_0023e3f4 + 0x23e388);
      pcVar5 = (char *)(DAT_0023e3f8 + 0x23e38a);
    }
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + DAT_0023e3d8));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023e3fc + 0x23e398),uVar2);
    pcVar5 = acStack_5c;
    pcVar4 = (char *)(DAT_0023e400 + 0x23e3a4);
  }
  L_PrintLog(pcVar4,pcVar5);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


