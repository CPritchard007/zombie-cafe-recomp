/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00170288 GameStateMeetLocker::checkStaffNum */

/* GameStateMeetLocker::checkStaffNum() */

bool __thiscall GameStateMeetLocker::checkStaffNum(GameStateMeetLocker *this)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(int *)(this + 0xc) + DAT_001702c4 + 4) + 1 <
          (int)*(short *)((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 2 +
                         **(int **)(DAT_001702c8 + 0x1702a0));
  if (bVar1) {
    printf((char *)(DAT_001702d0 + 0x1702be));
  }
  else {
    printf((char *)(DAT_001702cc + 0x1702b2));
  }
  return bVar1;
}


