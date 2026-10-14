/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d484 CImage::createImageFromDownloadImage */

/* CImage::createImageFromDownloadImage(CFTexture const*, String) */

void CImage::createImageFromDownloadImage(CFTexture *param_1,String *param_2)

{
  int iVar1;
  CImage *pCVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CFTexture aCStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0029d528 + 0x29d490);
  local_1c = *piVar3;
  iVar1 = CFTexture::getCCTexture2D(param_1);
  sprintf(acStack_11c,(char *)(DAT_0029d52c + 0x29d4a4),*(undefined4 *)(iVar1 + 0x14),
          *(undefined4 *)(iVar1 + 0x18));
  L_PrintLog((char *)(DAT_0029d530 + 0x29d4b0),acStack_11c);
  CFTexture::CFTexture(aCStack_12c,param_1);
  iVar1 = CFTexture::getCCTexture2D(param_1);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  pCVar2 = (CImage *)operator_new(0x34);
  CImage(pCVar2,aCStack_12c,uVar4,uVar5);
  CFTexture::~CFTexture(aCStack_12c);
  pCVar2[0x10] = (CImage)0x1;
  String::String(aSStack_124,param_2);
  String::operator=((String *)(pCVar2 + 4),aSStack_124);
  String::~String(aSStack_124);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pCVar2);
  }
  return;
}


