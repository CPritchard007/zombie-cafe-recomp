/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d84c CImage::recreateCCTexture2DForOnResume */

/* CImage::recreateCCTexture2DForOnResume(CImage*) */

void CImage::recreateCCTexture2DForOnResume(CImage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Resource *this;
  ccTexture2D *pcVar3;
  char *__ptr;
  CFTexture *this_00;
  int *piVar4;
  char *pcVar5;
  String *this_01;
  String aSStack_160 [8];
  CFTexture aCStack_158 [8];
  String aSStack_150 [8];
  CFTexture aCStack_148 [8];
  ccTexture2D acStack_140 [8];
  CFTexture aCStack_138 [4];
  undefined1 local_134;
  CFTexture aCStack_130 [8];
  ccTexture2D acStack_128 [8];
  char acStack_120 [260];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0029da84 + 0x29d858);
  pcVar5 = (char *)(DAT_0029da88 + 0x29d85c);
  local_1c = *piVar4;
  L_PrintLog(pcVar5,(char *)(DAT_0029da8c + 0x29d864));
  if (param_1 == (CImage *)0x0) {
    uVar2 = 0;
  }
  else {
    this_01 = (String *)(param_1 + 4);
    L_PrintLog(pcVar5,(char *)(DAT_0029da90 + 0x29d87c));
    String::String(aSStack_160,this_01);
    iVar1 = operator==(aSStack_160,0);
    String::~String(aSStack_160);
    if (iVar1 == 0) {
      pcVar5 = (char *)(DAT_0029da94 + 0x29d8ba);
      L_PrintLog(pcVar5,(char *)(DAT_0029da98 + 0x29d8bc));
      if (param_1[0x10] == (CImage)0x0) {
        String::String(aSStack_150,this_01);
        this = (Resource *)ResourceManager::loadImage(aSStack_150,*(undefined4 *)(param_1 + 0xc));
        String::~String(aSStack_150);
        if (this == (Resource *)0x0) {
          uVar2 = 0;
          goto LAB_0029d9f0;
        }
        uVar2 = 0;
        if (this[0x1c] != (Resource)0x2) goto LAB_0029d9f0;
        L_PrintLog((char *)(DAT_0029dabc + 0x29da58),(char *)(DAT_0029dac0 + 0x29da5a));
        (**(code **)(*(int *)this + 8))(this);
        CFTexture::CFTexture(aCStack_138,*(CFTexture **)(this + 0x14));
        local_134 = 1;
        getCFTexture();
        CFTexture::ClearHardwearID(aCStack_148);
        CFTexture::~CFTexture(aCStack_148);
        getCFTexture();
        CFTexture::getCCTexture2D(aCStack_138);
        CFTexture::changeTexture(acStack_140);
        CFTexture::~CFTexture((CFTexture *)acStack_140);
        L_PrintLog((char *)(DAT_0029da9c + 0x29d920),(char *)(DAT_0029daa0 + 0x29d922));
        ResourceManager::Resource::releaseHandle(this);
      }
      else {
        L_PrintLog(pcVar5,(char *)(DAT_0029daa4 + 0x29d934));
        pcVar3 = (ccTexture2D *)calloc(1,0x2c);
        __ptr = (char *)String::getBytes(this_01);
        CCGetWritableFilePath(acStack_120,0x104,__ptr);
        free(__ptr);
        L_PrintLog(pcVar5,(char *)(DAT_0029daa8 + 0x29d962));
        iVar1 = CCTexture2D::LoadFromImageFile(pcVar3,acStack_120);
        if (iVar1 == 0) {
          L_PrintLog(pcVar5,(char *)(DAT_0029dab8 + 0x29d9e4));
          uVar2 = 0;
          goto LAB_0029d9f0;
        }
        L_PrintLog(pcVar5,(char *)(DAT_0029daac + 0x29d978));
        this_00 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(this_00,pcVar3);
        CFTexture::CFTexture(aCStack_138,this_00);
        local_134 = 1;
        getCFTexture();
        CFTexture::ClearHardwearID(aCStack_130);
        CFTexture::~CFTexture(aCStack_130);
        getCFTexture();
        CFTexture::getCCTexture2D(aCStack_138);
        CFTexture::changeTexture(acStack_128);
        CFTexture::~CFTexture((CFTexture *)acStack_128);
        L_PrintLog((char *)(DAT_0029dab0 + 0x29d9ce),(char *)(DAT_0029dab4 + 0x29d9d0));
      }
      CFTexture::~CFTexture(aCStack_138);
      uVar2 = 1;
    }
    else {
      getCFTexture();
      CFTexture::ClearHardwearID(aCStack_158);
      CFTexture::~CFTexture(aCStack_158);
      uVar2 = 0;
    }
  }
LAB_0029d9f0:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


