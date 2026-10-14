/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cc24 CFTexture::changeTexture */

/* CFTexture::changeTexture(ccTexture2D*) */

undefined8 CFTexture::changeTexture(ccTexture2D *param_1)

{
  int iVar1;
  undefined4 *in_r1;
  char *pcVar2;
  int *piVar3;
  char acStack_21c [256];
  char acStack_11c [248];
  ccTexture2D *pcStack_24;
  undefined4 *puStack_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0029cc8c + 0x29cc30);
  local_1c = *piVar3;
  pcStack_24 = param_1;
  puStack_20 = in_r1;
  if (*(int *)param_1 != 0) {
    pcVar2 = (char *)(DAT_0029cc94 + 0x29cc4c);
    sprintf(acStack_21c,(char *)(DAT_0029cc90 + 0x29cc48),**(undefined4 **)(*(int *)param_1 + 4),
            *in_r1);
    L_PrintLog(pcVar2,acStack_21c);
    FreeTextureRef((CFTexture *)param_1);
    iVar1 = DAT_0029cc98;
    *(undefined4 **)(*(int *)param_1 + 4) = in_r1;
    sprintf(acStack_11c,(char *)(iVar1 + 0x29cc6c),*in_r1,**(undefined4 **)param_1);
    L_PrintLog(pcVar2,acStack_11c);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(puStack_20,pcStack_24);
}


