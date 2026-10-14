/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbb90 CCTextRenderer::ReloadBMPFontFileForOnResume */

/* CCTextRenderer::ReloadBMPFontFileForOnResume(void*, char const*) */

void CCTextRenderer::ReloadBMPFontFileForOnResume(void *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002bbbfc + 0x2bbb9c);
  local_1c = *piVar2;
  pcVar3 = (char *)(DAT_002bbc00 + 0x2bbba8);
  L_PrintLog(pcVar3,(char *)(DAT_002bbc04 + 0x2bbbaa));
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x24));
  iVar1 = CCTexture2D::LoadFromImageFile((ccTexture2D *)((int)param_1 + 0x24),param_2);
  sprintf(acStack_11c,(char *)(DAT_002bbc08 + 0x2bbbd0),*(undefined4 *)((int)param_1 + 0x24));
  L_PrintLog(pcVar3,acStack_11c);
  L_PrintLog(pcVar3,(char *)(DAT_002bbc0c + 0x2bbbe4));
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != 0);
  }
  return;
}


