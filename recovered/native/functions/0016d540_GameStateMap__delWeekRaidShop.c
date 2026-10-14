/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d540 GameStateMap::delWeekRaidShop */

/* GameStateMap::delWeekRaidShop() */

void __thiscall GameStateMap::delWeekRaidShop(GameStateMap *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0016d5d4 + 0x16d54c);
  local_1c = *piVar3;
  if (*(int **)(this + 0x37c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x37c) + 4))();
    *(undefined4 *)(this + 0x37c) = 0;
    if (*(int **)(this + 900) != (int *)0x0) {
      (**(code **)(**(int **)(this + 900) + 4))();
      *(undefined4 *)(this + 900) = 0;
    }
    if (*(int *)(this + 0x39c) != 0) {
      puVar1 = (undefined4 *)(DAT_0016d5e0 + 0x16d58e);
      L_PrintLog((char *)(DAT_0016d5d8 + 0x16d58a),(char *)(DAT_0016d5dc + 0x16d58c));
      piVar2 = (int *)*puVar1;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x39c));
      if (*(int **)(this + 0x39c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x39c) + 4))();
      }
      *(undefined4 *)(this + 0x39c) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d5e4 + 0x16d5b6),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d5e8 + 0x16d5c2),acStack_11c);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


