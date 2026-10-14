/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d8c0 GameStateMap::delColosseum */

/* GameStateMap::delColosseum() */

void __thiscall GameStateMap::delColosseum(GameStateMap *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0016d954 + 0x16d8cc);
  local_1c = *piVar3;
  if (*(int **)(this + 0x184) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x184) + 4))();
    *(undefined4 *)(this + 0x184) = 0;
    if (*(int **)(this + 0x1a8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a8) + 4))();
      *(undefined4 *)(this + 0x1a8) = 0;
    }
    if (*(int *)(this + 0x1a4) != 0) {
      puVar1 = (undefined4 *)(DAT_0016d960 + 0x16d90e);
      L_PrintLog((char *)(DAT_0016d958 + 0x16d90a),(char *)(DAT_0016d95c + 0x16d90c));
      piVar2 = (int *)*puVar1;
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar2,*(TrueTypeTextElement **)(this + 0x1a4));
      if (*(int **)(this + 0x1a4) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1a4) + 4))();
      }
      *(undefined4 *)(this + 0x1a4) = 0;
      sprintf(acStack_11c,(char *)(DAT_0016d964 + 0x16d936),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016d968 + 0x16d942),acStack_11c);
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


