/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017026c GameStateMeetLocker::releaseCharacter */

/* GameStateMeetLocker::releaseCharacter(int) */

void __thiscall GameStateMeetLocker::releaseCharacter(GameStateMeetLocker *this,int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 0x2e) * 4;
  if (*(int **)(this + iVar1) != (int *)0x0) {
    (**(code **)(**(int **)(this + iVar1) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  return;
}


