/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcdd8 CCTextRenderer::Init */

/* CCTextRenderer::Init(char const*, char const*, unsigned int, unsigned int, int, int, void*) */

void CCTextRenderer::Init
               (char *param_1,char *param_2,uint param_3,uint param_4,int param_5,int param_6,
               void *param_7)

{
  short sVar1;
  STextRenderer *__ptr;
  short *__ptr_00;
  void *__ptr_01;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int *piVar7;
  char *pcVar8;
  char acStack_11c [256];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002bcf6c + 0x2bcde4);
  local_1c = *piVar7;
  __ptr = (STextRenderer *)malloc(0x130);
  if (__ptr != (STextRenderer *)0x0) {
    L_PrintLog((char *)(DAT_002bcf70 + 0x2bce0c),(char *)(DAT_002bcf74 + 0x2bce0e));
    *(int *)(__ptr + 0x128) = param_6;
    *(undefined4 *)(__ptr + 0x120) = 0;
    *(void **)(__ptr + 0x124) = param_7;
    *(int *)(__ptr + 300) = param_5;
    *(uint *)__ptr = param_3 * 2;
    __ptr_00 = (short *)malloc((param_3 * 0xc + -2) * 2);
    *(short **)(__ptr + 0xec) = __ptr_00;
    __ptr_01 = malloc(param_3 * 0x60);
    *(void **)(__ptr + 0xf0) = __ptr_01;
    pvVar2 = malloc(param_3 << 6);
    *(void **)(__ptr + 0xf4) = pvVar2;
    pvVar3 = malloc(param_3 << 5);
    *(void **)(__ptr + 0xf8) = pvVar3;
    if ((((__ptr_00 == (short *)0x0) || (__ptr_01 == (void *)0x0)) || (pvVar2 == (void *)0x0)) ||
       (pvVar3 == (void *)0x0)) {
      free(__ptr_00);
    }
    else {
      sVar6 = 0;
      for (iVar5 = 0; iVar5 != param_3 * 2; iVar5 = iVar5 + 1) {
        if (iVar5 != 0) {
          *__ptr_00 = sVar6 + -1;
          __ptr_00[1] = sVar6;
          __ptr_00 = __ptr_00 + 2;
        }
        __ptr_00[1] = sVar6 + 1;
        *__ptr_00 = sVar6;
        __ptr_00[2] = sVar6 + 2;
        sVar1 = sVar6 + 3;
        sVar6 = sVar6 + 4;
        __ptr_00[3] = sVar1;
        __ptr_00 = __ptr_00 + 4;
      }
      pcVar8 = (char *)(DAT_002bcf78 + 0x2bceba);
      L_PrintLog(pcVar8,(char *)(DAT_002bcf7c + 0x2bcebc));
      CCTexture2D::Init((ccTexture2D *)(__ptr + 0x24));
      iVar5 = L_LoadBMPFontFile(__ptr,param_1,param_2);
      if (iVar5 != 0) {
        *(undefined4 *)(__ptr + 4) = 0;
        *(undefined4 *)(__ptr + 8) = 0;
        uVar4 = DAT_002bcf80;
        *(undefined4 *)(__ptr + 0x10c) = 0x3f800000;
        *(undefined4 *)(__ptr + 0xfc) = 0x3f800000;
        *(undefined4 *)(__ptr + 0x100) = 0x3f800000;
        *(undefined4 *)(__ptr + 0x110) = uVar4;
        *(undefined4 *)(__ptr + 0xc) = 0;
        uVar4 = GetCharacterWidth(__ptr,0x55);
        uVar4 = __mulsf3(uVar4,DAT_002bcf84);
        iVar5 = DAT_002bcf88;
        *(undefined4 *)(__ptr + 0x114) = uVar4;
        L_PrintLog(pcVar8,(char *)(iVar5 + 0x2bcf3a));
        sprintf(acStack_11c,(char *)(DAT_002bcf8c + 0x2bcf46),*(undefined4 *)(__ptr + 0x24));
        L_PrintLog((char *)(DAT_002bcf90 + 0x2bcf50),acStack_11c);
        goto LAB_002bcf58;
      }
      free(*(void **)(__ptr + 0xec));
      __ptr_01 = *(void **)(__ptr + 0xf0);
    }
    free(__ptr_01);
    free(*(void **)(__ptr + 0xf4));
    free(*(void **)(__ptr + 0xf8));
    free(__ptr);
  }
  __ptr = (STextRenderer *)0xffffffff;
LAB_002bcf58:
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__ptr);
}


