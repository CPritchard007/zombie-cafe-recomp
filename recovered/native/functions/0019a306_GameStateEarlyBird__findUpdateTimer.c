/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a306 GameStateEarlyBird::findUpdateTimer */

/* GameStateEarlyBird::findUpdateTimer(int) */

int __thiscall GameStateEarlyBird::findUpdateTimer(GameStateEarlyBird *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(this + 0xc) + 0x6b4) + 1 <= iVar1) {
      return -1;
    }
    if (**(int **)(iVar1 * 4 + *(int *)(*(int *)(this + 0xc) + 0x6b8)) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


