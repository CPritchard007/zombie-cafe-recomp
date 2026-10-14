/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112d94 GameStateAmpouleRaidMenu::setExplanationWebWindow */

/* GameStateAmpouleRaidMenu::setExplanationWebWindow() */

void __thiscall GameStateAmpouleRaidMenu::setExplanationWebWindow(GameStateAmpouleRaidMenu *this)

{
  char *__s;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char acStack_4 [4];
  
  iVar1 = DAT_00112de0;
  puVar3 = (undefined4 *)(&stack0xfffffff0 + DAT_00112de0);
  __s = acStack_4 + DAT_00112de0;
  piVar2 = *(int **)(DAT_00112de8 + 0x112da8);
  *(int *)(&stack0x000001fc + DAT_00112de0) = *piVar2;
  snprintf(__s,0x200,(char *)(DAT_00112de4 + 0x112dac));
  this[0x8c] = (GameStateAmpouleRaidMenu)0x1;
  *puVar3 = __s;
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


