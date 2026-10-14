/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c824 GameStateFriendCafe::getModifiedRating */

/* GameStateFriendCafe::getModifiedRating() */

undefined4 __thiscall GameStateFriendCafe::getModifiedRating(GameStateFriendCafe *this)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __addsf3(*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x1fc));
  iVar2 = __aeabi_fcmplt(uVar1,0);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000);
    if (iVar2 != 0) {
      uVar1 = 0x3f800000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


