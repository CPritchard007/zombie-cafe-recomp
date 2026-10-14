/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1608 Quest::runQuestCheat */

/* Quest::runQuestCheat() */

void __thiscall Quest::runQuestCheat(Quest *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x20) + 1; iVar1 = iVar1 + 1) {
    if (*(char *)(*(int *)(**(int **)(iVar1 * 4 + *(int *)(this + 0x24)) * 4 + *(int *)(this + 0xc))
                 + 4) == '\x02') {
      cheatQuestClear((int)this);
    }
  }
  return;
}


