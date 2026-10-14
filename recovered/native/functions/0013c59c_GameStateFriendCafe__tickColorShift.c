/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c59c GameStateFriendCafe::tickColorShift */

/* GameStateFriendCafe::tickColorShift(long) */

void __thiscall GameStateFriendCafe::tickColorShift(GameStateFriendCafe *this,long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 200);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x28))) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) - param_1;
  }
  return;
}


