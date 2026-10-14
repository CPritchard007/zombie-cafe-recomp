/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a054 GameStateRoulette::checkStaffNum */

/* GameStateRoulette::checkStaffNum() */

undefined4 __thiscall GameStateRoulette::checkStaffNum(GameStateRoulette *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (((int)*(short *)((*(int *)(iVar1 + 0x680) + -1) * 2 + **(int **)(DAT_0018a0a0 + 0x18a06e)) <=
       *(int *)(iVar1 + DAT_0018a09c + 4) + 1) &&
     (*(int *)(iVar1 + 0x5b8) <= *(int *)(iVar1 + 0x5a4) + 1)) {
    return 0;
  }
  printf((char *)(DAT_0018a0a4 + 0x18a094));
  return 1;
}


