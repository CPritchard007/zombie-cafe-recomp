/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d13e0 Quest::isExistInActiveQuests */

/* Quest::isExistInActiveQuests(int) */

undefined4 __thiscall Quest::isExistInActiveQuests(Quest *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(this + 0x14) + 1 <= iVar1) {
      return 0;
    }
    if (**(int **)(iVar1 * 4 + *(int *)(this + 0x18)) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}


