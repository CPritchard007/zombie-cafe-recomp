/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c2a0 ZombieCafe::ReloadTextures */

/* ZombieCafe::ReloadTextures() */

void __thiscall ZombieCafe::ReloadTextures(ZombieCafe *this)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int local_68;
  char acStack_5c [64];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0023c44c + 0x23c2ac);
  local_1c = *piVar6;
  pcVar2 = (char *)(DAT_0023c450 + 0x23c2b6);
  pcVar4 = (char *)(DAT_0023c454 + 0x23c2b8);
  this[DAT_0023c458] = (ZombieCafe)0x1;
  L_PrintLog(pcVar2,pcVar4);
  L_PrintLog(pcVar2,(char *)(DAT_0023c45c + 0x23c2ce));
  L_PrintLog(pcVar2,pcVar4);
  iVar5 = DAT_0023c464;
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c460));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x7f0));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x7f8));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c468));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c46c));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x800));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c470));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c474));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c478));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x810));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c47c));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c480));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c484));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x820));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c488));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x520));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c48c));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + 0x558));
  PackedImage::recreateCCTexture2DForOnResume(*(PackedImage **)(this + DAT_0023c490));
  for (local_68 = 0; piVar3 = *(int **)(DAT_0023c498 + 0x23c3bc),
      local_68 < *(int *)(*piVar3 + 4) + 1; local_68 = local_68 + 1) {
    snprintf(acStack_5c,0x40,(char *)(iVar5 + 0x23c2fc),local_68);
    L_PrintLog((char *)(DAT_0023c494 + 0x23c39e),acStack_5c);
    CImage::recreateCCTexture2DForOnResume(*(CImage **)(local_68 * 4 + *(int *)(*piVar3 + 8)));
  }
  pcVar2 = (char *)(DAT_0023c49c + 0x23c3ce);
  for (iVar5 = 0; iVar1 = DAT_0023c4a8, piVar3 = *(int **)(DAT_0023c4a4 + 0x23c3f8),
      iVar5 < *(int *)(*piVar3 + 4) + 1; iVar5 = iVar5 + 1) {
    snprintf(acStack_5c,0x40,pcVar2,iVar5);
    L_PrintLog((char *)(DAT_0023c4a0 + 0x23c3e2),acStack_5c);
    TrueTypeTextElement::recreateCCTexture2DForOnResume
              (*(TrueTypeTextElement **)(iVar5 * 4 + *(int *)(*piVar3 + 8)));
  }
  reloadFont(this);
  pcVar2 = (char *)(DAT_0023c4ac + 0x23c41a);
  pcVar4 = (char *)(DAT_0023c4b4 + 0x23c41c);
  L_PrintLog((char *)(iVar1 + 0x23c414),(char *)(DAT_0023c4b0 + 0x23c416));
  L_PrintLog(pcVar2,pcVar4);
  L_PrintLog((char *)(iVar1 + 0x23c414),(char *)(DAT_0023c4b8 + 0x23c42e));
  L_PrintLog(pcVar2,pcVar4);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


