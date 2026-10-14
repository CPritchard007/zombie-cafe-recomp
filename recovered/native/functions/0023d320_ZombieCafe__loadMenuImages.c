/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d320 ZombieCafe::loadMenuImages */

/* ZombieCafe::loadMenuImages() */

void __thiscall ZombieCafe::loadMenuImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  String aSStack_8c [8];
  String aSStack_84 [8];
  int local_7c [2];
  int local_74 [2];
  String aSStack_6c [8];
  String aSStack_64 [8];
  char acStack_5c [64];
  int local_1c;
  
  iVar4 = DAT_0023d494;
  iVar7 = DAT_0023d48c + 0x23d32c;
  piVar6 = *(int **)(iVar7 + DAT_0023d490);
  local_1c = *piVar6;
  if (*(CImage **)(this + DAT_0023d494) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023d498 + 0x23d344),(char *)(DAT_0023d49c + 0x23d346));
    iVar1 = SmDev();
    String::String(aSStack_8c,(String *)(iVar1 * 8 + *(int *)(iVar7 + DAT_0023d4a0)));
    iVar1 = SmDev();
    String::String(aSStack_84,(String *)(iVar1 * 8 + *(int *)(iVar7 + DAT_0023d4a4)));
    uVar2 = PackedImage::createPackedImage(aSStack_8c,0,aSStack_84,0);
    *(undefined4 *)(this + iVar4) = uVar2;
    String::~String(aSStack_84);
    String::~String(aSStack_8c);
    CImage::getCFTexture();
    CFTexture::CFTexture((CFTexture *)local_74,(ccTexture2D *)0x0);
    CFTexture::~CFTexture((CFTexture *)local_74);
    CFTexture::~CFTexture((CFTexture *)local_7c);
    if (local_7c[0] == local_74[0]) {
      pcVar3 = (char *)(DAT_0023d4a8 + 0x23d3b2);
      pcVar5 = (char *)(DAT_0023d4ac + 0x23d3b4);
    }
    else {
      pcVar3 = (char *)(DAT_0023d4b0 + 0x23d3bc);
      pcVar5 = (char *)(DAT_0023d4b4 + 0x23d3be);
    }
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + DAT_0023d494));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d4b8 + 0x23d3cc),uVar2);
    pcVar5 = acStack_5c;
    pcVar3 = (char *)(DAT_0023d4bc + 0x23d3d8);
  }
  L_PrintLog(pcVar3,pcVar5);
  if (*(CImage **)(this + 0x800) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023d4c0 + 0x23d3ec),(char *)(DAT_0023d4c4 + 0x23d3ee));
    iVar4 = SmDev();
    String::String(aSStack_6c,(String *)(iVar4 * 8 + *(int *)(iVar7 + DAT_0023d4c8)));
    iVar4 = SmDev();
    String::String(aSStack_64,(String *)(iVar4 * 8 + *(int *)(iVar7 + DAT_0023d4cc)));
    uVar2 = PackedImage::createPackedImage(aSStack_6c,0,aSStack_64,0);
    *(undefined4 *)(this + 0x800) = uVar2;
    String::~String(aSStack_64);
    String::~String(aSStack_6c);
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x800));
    snprintf(acStack_5c,0x40,(char *)(DAT_0023d4d0 + 0x23d43e),uVar2);
    L_PrintLog((char *)(DAT_0023d4d4 + 0x23d44a),acStack_5c);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


