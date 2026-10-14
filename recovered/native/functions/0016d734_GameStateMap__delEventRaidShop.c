/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d734 GameStateMap::delEventRaidShop */

/* GameStateMap::delEventRaidShop() */

void __thiscall GameStateMap::delEventRaidShop(GameStateMap *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0016d7e8 + 0x16d740);
  local_1c = *piVar3;
  if (*(int *)(this + 0x22c) != 0) {
    if (*(int **)(this + 0x234) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x234) + 4))();
      *(undefined4 *)(this + 0x234) = 0;
    }
    if (*(int **)(this + 0x22c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x22c) + 4))();
      *(undefined4 *)(this + 0x22c) = 0;
    }
    if (*(int **)(this + 0x250) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x250) + 4))();
      *(undefined4 *)(this + 0x250) = 0;
    }
    if (*(int *)(this + 0x24c) != 0) {
      puVar1 = (undefined4 *)(DAT_0016d7f4 + 0x16d7a2);
      L_PrintLog((char *)(DAT_0016d7ec + 0x16d79e),(char *)(DAT_0016d7f0 + 0x16d7a0));
      piVar2 = (int *)*puVar1;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x24c));
      if (*(int **)(this + 0x24c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x24c) + 4))();
      }
      *(undefined4 *)(this + 0x24c) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d7f8 + 0x16d7ca),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d7fc + 0x16d7d6),acStack_11c);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


