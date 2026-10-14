/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb0d0 GameStateEventRaid3Menu::setExplanationWebWindow */

/* GameStateEventRaid3Menu::setExplanationWebWindow() */

void __thiscall GameStateEventRaid3Menu::setExplanationWebWindow(GameStateEventRaid3Menu *this)

{
  char *__s;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char acStack_4 [4];
  
  iVar1 = DAT_001bb11c;
  puVar3 = (undefined4 *)(&stack0xfffffff0 + DAT_001bb11c);
  __s = acStack_4 + DAT_001bb11c;
  piVar2 = *(int **)(DAT_001bb124 + 0x1bb0e4);
  *(int *)(&stack0x000001fc + DAT_001bb11c) = *piVar2;
  snprintf(__s,0x200,(char *)(DAT_001bb120 + 0x1bb0e8));
  this[0xe0] = (GameStateEventRaid3Menu)0x1;
  *puVar3 = __s;
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


