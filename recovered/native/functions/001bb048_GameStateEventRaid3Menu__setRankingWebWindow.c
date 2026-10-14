/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb048 GameStateEventRaid3Menu::setRankingWebWindow */

/* GameStateEventRaid3Menu::setRankingWebWindow() */

void __thiscall GameStateEventRaid3Menu::setRankingWebWindow(GameStateEventRaid3Menu *this)

{
  char *__s;
  int iVar1;
  int *piVar2;
  char *__format;
  undefined4 *puVar3;
  
  iVar1 = DAT_001bb0b8;
  puVar3 = (undefined4 *)(&stack0xffffffec + DAT_001bb0b8);
  __s = &stack0xfffffff8 + DAT_001bb0b8;
  __format = (char *)(DAT_001bb0bc + 0x1bb05a);
  piVar2 = *(int **)(DAT_001bb0c4 + 0x1bb05c);
  *(int *)(&stack0x000001f8 + DAT_001bb0b8) = *piVar2;
  *(undefined4 *)(&stack0xffffffec + DAT_001bb0b8) =
       *(undefined4 *)(*(int *)(DAT_001bb0c8 + 0x1bb072) + 0x98);
  *(undefined4 *)(&stack0xfffffff0 + DAT_001bb0b8) = *(undefined4 *)(DAT_001bb0cc + 0x1bb07e);
  snprintf(__s,0x200,(char *)(DAT_001bb0c0 + 0x1bb066),__format);
  snprintf(__s,0x200,__format);
  this[0xe0] = (GameStateEventRaid3Menu)0x1;
  *puVar3 = __s;
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x000001f8 + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


