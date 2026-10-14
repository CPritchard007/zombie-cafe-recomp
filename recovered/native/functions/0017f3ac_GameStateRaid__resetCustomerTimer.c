/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f3ac GameStateRaid::resetCustomerTimer */

/* GameStateRaid::resetCustomerTimer() */

void __thiscall GameStateRaid::resetCustomerTimer(GameStateRaid *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(DAT_0017f414 + 0x17f3b6);
  uVar1 = __floatsisf(**(int **)(DAT_0017f418 + 0x17f3be) - iVar3);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x68));
  uVar2 = __floatsisf(iVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  iVar4 = **(int **)(DAT_0017f41c + 0x17f3e4);
  iVar3 = -iVar4;
  if (iVar4 != iVar3 && iVar4 * 2 < 0 == SBORROW4(iVar4,iVar3)) {
    uVar2 = arc4random();
    __aeabi_uidivmod(uVar2,iVar4 << 1);
    iVar3 = extraout_r1 + iVar3;
  }
  uVar2 = __floatsisf(iVar3);
  __addsf3(uVar1,uVar2);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0x158) = uVar1;
  return;
}


