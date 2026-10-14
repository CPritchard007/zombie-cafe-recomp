/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c85c GameStateFriendCafe::resetCustomerTimer */

/* GameStateFriendCafe::resetCustomerTimer() */

void __thiscall GameStateFriendCafe::resetCustomerTimer(GameStateFriendCafe *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r1;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(DAT_0013c8d0 + 0x13c86a);
  uVar1 = __floatsisf(**(int **)(DAT_0013c8cc + 0x13c868) - *piVar3);
  uVar2 = getModifiedRating(this);
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar2 = __floatsisf(*piVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  iVar4 = **(int **)(DAT_0013c8d4 + 0x13c89e);
  iVar5 = -iVar4;
  if (iVar4 != iVar5 && iVar4 * 2 < 0 == SBORROW4(iVar4,iVar5)) {
    uVar2 = arc4random();
    __aeabi_uidivmod(uVar2,iVar4 << 1);
    iVar5 = extraout_r1 + iVar5;
  }
  uVar2 = __floatsisf(iVar5);
  __addsf3(uVar1,uVar2);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0x184) = uVar1;
  return;
}


