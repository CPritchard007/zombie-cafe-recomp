/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c228 ZombieCafe::reloadFont */

/* ZombieCafe::reloadFont() */

void __thiscall ZombieCafe::reloadFont(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  int *piVar6;
  
  iVar2 = DAT_0023c29c;
  iVar1 = DAT_0023c294;
  piVar6 = *(int **)(DAT_0023c290 + 0x23c234);
  iVar3 = *piVar6;
  *(ZombieCafe **)(&stack0xfffffff0 + DAT_0023c294) = this;
  iVar5 = 0;
  *(int *)(&stack0x00000200 + DAT_0023c294) = iVar3;
  __format = (char *)(DAT_0023c298 + 0x23c244);
  iVar3 = DAT_0023c29c + 0x23c246;
  do {
    snprintf(&stack0xfffffff8 + iVar1,0x104,__format,*(undefined4 *)(iVar5 + iVar3));
    snprintf(&stack0x000000fc + iVar1,0x104,__format,*(undefined4 *)(iVar5 + iVar2 + 0x23c252));
    iVar4 = *(int *)(&stack0xfffffff0 + iVar1) + iVar5;
    iVar5 = iVar5 + 4;
    CCTextRenderer::ReloadBMPFontFileForOnResume(*(void **)(iVar4 + 0x4d8),&stack0x000000fc + iVar1)
    ;
  } while (iVar5 != 0xc);
  if (*(int *)(&stack0x00000200 + iVar1) != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


