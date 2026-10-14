/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0d7c GameStateWeekRaidMenu::setExplanationWebWindow */

/* GameStateWeekRaidMenu::setExplanationWebWindow() */

void __thiscall GameStateWeekRaidMenu::setExplanationWebWindow(GameStateWeekRaidMenu *this)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_001c0de4;
  piVar3 = *(int **)(DAT_001c0de0 + 0x1c0d86);
  puVar4 = (undefined4 *)(&stack0xfffffff4 + DAT_001c0de4);
  puVar5 = (undefined4 *)(&stack0xfffffff4 + DAT_001c0de4);
  *(int *)(&stack0x00000400 + DAT_001c0de4) = *piVar3;
  pcVar2 = (char *)(*(int *)(DAT_001c0de8 + 0x1c0d96) + 0xbc);
  if (*pcVar2 != '\0') {
    this[0xd0] = (GameStateWeekRaidMenu)0x1;
    *puVar4 = pcVar2;
    snprintf(&stack0x00000000 + iVar1,0x400,(char *)(DAT_001c0dec + 0x1c0db4),
             DAT_001c0df0 + 0x1c0db6);
    *puVar5 = &stack0x00000000 + iVar1;
    javaShowWebViewRanking(10,0x14,0x50,0x50);
  }
  if (*(int *)(&stack0x00000400 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


