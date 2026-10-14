/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d145a Quest::questsHasComplete */

/* Quest::questsHasComplete() */

undefined4 __thiscall Quest::questsHasComplete(Quest *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (*(int *)(this + 0x20) + 1U <= uVar2) {
      return 0;
    }
    iVar1 = isQuestCompleted(this,**(int **)(uVar2 * 4 + *(int *)(this + 0x24)));
    if (iVar1 != 0) break;
    uVar2 = uVar2 + 1;
  }
  return 1;
}


