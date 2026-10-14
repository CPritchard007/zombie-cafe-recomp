/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d14a6 Quest::setCurrentSelectedActiveQuest */

/* Quest::setCurrentSelectedActiveQuest(int) */

void __thiscall Quest::setCurrentSelectedActiveQuest(Quest *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(int *)(this + 0x14) + 1U <= uVar1) {
      return;
    }
    if (**(int **)(uVar1 * 4 + *(int *)(this + 0x18)) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  *(uint *)(this + 0x40) = uVar1;
  return;
}


