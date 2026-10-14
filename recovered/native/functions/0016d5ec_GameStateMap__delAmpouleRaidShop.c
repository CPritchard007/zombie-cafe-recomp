/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d5ec GameStateMap::delAmpouleRaidShop */

/* GameStateMap::delAmpouleRaidShop() */

void __thiscall GameStateMap::delAmpouleRaidShop(GameStateMap *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0016d680 + 0x16d5f8);
  local_1c = *piVar3;
  if (*(int **)(this + 0x328) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x328) + 4))();
    *(undefined4 *)(this + 0x328) = 0;
    if (*(int **)(this + 0x34c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34c) + 4))();
      *(undefined4 *)(this + 0x34c) = 0;
    }
    if (*(int *)(this + 0x348) != 0) {
      puVar1 = (undefined4 *)(DAT_0016d68c + 0x16d63a);
      L_PrintLog((char *)(DAT_0016d684 + 0x16d636),(char *)(DAT_0016d688 + 0x16d638));
      piVar2 = (int *)*puVar1;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x348));
      if (*(int **)(this + 0x348) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x348) + 4))();
      }
      *(undefined4 *)(this + 0x348) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d690 + 0x16d662),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d694 + 0x16d66e),acStack_11c);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


