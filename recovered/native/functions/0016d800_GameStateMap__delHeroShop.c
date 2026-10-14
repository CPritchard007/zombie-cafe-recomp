/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d800 GameStateMap::delHeroShop */

/* GameStateMap::delHeroShop() */

void __thiscall GameStateMap::delHeroShop(GameStateMap *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0016d8a8 + 0x16d80c);
  local_1c = *piVar2;
  if (*(int *)(this + 0x1d8) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x1d8) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x1d8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1d8) + 4))();
    }
    if (*(int *)(this + 0x1f8) != 0) {
      puVar3 = (undefined4 *)(DAT_0016d8b4 + 0x16d84c);
      L_PrintLog((char *)(DAT_0016d8ac + 0x16d848),(char *)(DAT_0016d8b0 + 0x16d84a));
      piVar1 = (int *)*puVar3;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar1,*(TrueTypeTextElement **)(this + 0x1f8));
      if (*(int **)(this + 0x1f8) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1f8) + 4))();
      }
      *(undefined4 *)(this + 0x1f8) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d8b8 + 0x16d874),*(int *)(*piVar1 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d8bc + 0x16d880),acStack_11c);
    }
    if (*(int **)(this + 0x1fc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1fc) + 4))();
    }
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


