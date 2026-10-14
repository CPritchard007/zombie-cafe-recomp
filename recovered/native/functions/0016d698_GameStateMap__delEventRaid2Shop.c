/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d698 GameStateMap::delEventRaid2Shop */

/* GameStateMap::delEventRaid2Shop() */

void __thiscall GameStateMap::delEventRaid2Shop(GameStateMap *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0016d71c + 0x16d6a4);
  local_1c = *piVar3;
  if (*(int **)(this + 0x280) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x280) + 4))();
    *(undefined4 *)(this + 0x280) = 0;
    if (*(int *)(this + 0x2a0) != 0) {
      puVar1 = (undefined4 *)(DAT_0016d728 + 0x16d6d4);
      L_PrintLog((char *)(DAT_0016d720 + 0x16d6d0),(char *)(DAT_0016d724 + 0x16d6d2));
      piVar2 = (int *)*puVar1;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x2a0));
      if (*(int **)(this + 0x2a0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x2a0) + 4))();
      }
      *(undefined4 *)(this + 0x2a0) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d72c + 0x16d6fc),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d730 + 0x16d708),acStack_11c);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


