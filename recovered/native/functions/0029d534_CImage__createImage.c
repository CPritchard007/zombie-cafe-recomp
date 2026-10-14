/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d534 CImage::createImage */

/* CImage::createImage(CFTexture const*) */

void CImage::createImage(CFTexture *param_1)

{
  int iVar1;
  CImage *pCVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CFTexture aCStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0029d5b4 + 0x29d540);
  local_1c = *piVar3;
  iVar1 = CFTexture::getCCTexture2D(param_1);
  sprintf(acStack_11c,(char *)(DAT_0029d5b8 + 0x29d552),*(undefined4 *)(iVar1 + 0x14),
          *(undefined4 *)(iVar1 + 0x18));
  L_PrintLog((char *)(DAT_0029d5bc + 0x29d55e),acStack_11c);
  CFTexture::CFTexture(aCStack_124,param_1);
  iVar1 = CFTexture::getCCTexture2D(param_1);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  pCVar2 = (CImage *)operator_new(0x34);
  CImage(pCVar2,aCStack_124,uVar4,uVar5);
  CFTexture::~CFTexture(aCStack_124);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pCVar2);
  }
  return;
}


