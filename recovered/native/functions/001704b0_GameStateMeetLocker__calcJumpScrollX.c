/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001704b0 GameStateMeetLocker::calcJumpScrollX */

/* GameStateMeetLocker::calcJumpScrollX(int) */

undefined8 __thiscall GameStateMeetLocker::calcJumpScrollX(GameStateMeetLocker *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  GameStateMeetLocker *pGVar4;
  int iVar5;
  int iVar6;
  GameStateMeetLocker *local_20;
  int local_1c;
  
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x14) + 0xc));
  __divsf3(uVar1,*(undefined4 *)(this + 0x20));
  iVar2 = __fixsfsi();
  if (param_1 == 0) {
    iVar5 = 0;
    pGVar4 = this;
    iVar3 = iVar5;
    do {
      if (*(int *)(pGVar4 + 0xb8) != 0) {
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar5 != 0xd2);
    iVar5 = SmDev();
    iVar6 = DAT_00170574 + 0x1704f2;
    local_20 = *(GameStateMeetLocker **)(iVar6 + iVar5 * 4 + 0x18);
    local_1c = SmDev();
    uVar1 = __floatsisf(iVar3 + 1);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(local_1c * 4 + iVar6));
    __addsf3(local_20,uVar1);
    iVar5 = __fixsfsi();
    if (iVar5 <= iVar2) {
      *(undefined4 *)(this + 0x400) = 0;
      goto LAB_00170570;
    }
LAB_00170564:
    iVar2 = iVar2 - iVar5;
  }
  else {
    iVar5 = 0;
    pGVar4 = this;
    do {
      if (*(int *)(pGVar4 + 0xb8) != 0) goto LAB_00170540;
      iVar5 = iVar5 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar5 != 0xd2);
    iVar5 = 0;
LAB_00170540:
    iVar3 = SmDev();
    uVar1 = __floatsisf(iVar5);
    __mulsf3(uVar1,*(undefined4 *)(iVar3 * 4 + DAT_00170578 + 0x170556));
    iVar5 = __fixsfsi();
    local_20 = this;
    local_1c = param_1;
    if (iVar2 < iVar5) goto LAB_00170564;
    iVar2 = -iVar5;
  }
  uVar1 = __floatsisf(iVar2);
  *(undefined4 *)(this + 0x400) = uVar1;
LAB_00170570:
  return CONCAT44(local_1c,local_20);
}


