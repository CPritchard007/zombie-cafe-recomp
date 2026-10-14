/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a638 GameStateEarlyBird::checkStaffNum */

/* GameStateEarlyBird::checkStaffNum() */

bool __thiscall GameStateEarlyBird::checkStaffNum(GameStateEarlyBird *this)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(int *)(this + 0xc) + DAT_0019a674 + 4) + 1 <
          (int)*(short *)((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 2 +
                         **(int **)(DAT_0019a678 + 0x19a650));
  if (bVar1) {
    printf((char *)(DAT_0019a680 + 0x19a66e));
  }
  else {
    printf((char *)(DAT_0019a67c + 0x19a662));
  }
  return bVar1;
}


