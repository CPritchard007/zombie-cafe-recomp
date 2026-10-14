/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f51c GameStateSurvivalMenu::setExplanationWebWindow */

/* GameStateSurvivalMenu::setExplanationWebWindow() */

void GameStateSurvivalMenu::setExplanationWebWindow(void)

{
  char *__s;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_0018f564;
  piVar2 = *(int **)(DAT_0018f560 + 0x18f528);
  puVar3 = (undefined4 *)(&stack0xfffffff4 + DAT_0018f564);
  __s = &stack0x00000000 + DAT_0018f564;
  *(int *)(&stack0x00000200 + DAT_0018f564) = *piVar2;
  snprintf(__s,0x200,(char *)(DAT_0018f568 + 0x18f534));
  *puVar3 = __s;
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x00000200 + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


