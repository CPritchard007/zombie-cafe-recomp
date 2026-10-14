/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119c74 GameStateCafe::resetCustomerTimer */

/* GameStateCafe::resetCustomerTimer() */

void __thiscall GameStateCafe::resetCustomerTimer(GameStateCafe *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r1;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(DAT_00119ce8 + 0x119c82);
  uVar1 = __floatsisf(**(int **)(DAT_00119ce4 + 0x119c80) - *piVar3);
  uVar2 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar2 = __floatsisf(*piVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  iVar4 = **(int **)(DAT_00119cec + 0x119cb6);
  iVar5 = -iVar4;
  if (iVar4 != iVar5 && iVar4 * 2 < 0 == SBORROW4(iVar4,iVar5)) {
    uVar2 = arc4random();
    __aeabi_uidivmod(uVar2,iVar4 << 1);
    iVar5 = extraout_r1 + iVar5;
  }
  uVar2 = __floatsisf(iVar5);
  __addsf3(uVar1,uVar2);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


