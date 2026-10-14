/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c54e GameStateFriendCafe::stopColorShift */

/* GameStateFriendCafe::stopColorShift() */

void __thiscall GameStateFriendCafe::stopColorShift(GameStateFriendCafe *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 200);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 200) = 0;
  }
  return;
}


