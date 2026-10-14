/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1ece Quest::resetActiveQuest */

/* Quest::resetActiveQuest() */

void __thiscall Quest::resetActiveQuest(Quest *this)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x14) + 1; iVar1 = iVar1 + 1) {
    removeActiveQuest(this,**(int **)(iVar1 * 4 + *(int *)(this + 0x18)));
  }
  return;
}


