/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178e7c GameStatePowerup::calcJumpScrollX */

/* GameStatePowerup::calcJumpScrollX(int) */

undefined8 __thiscall GameStatePowerup::calcJumpScrollX(GameStatePowerup *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  GameStatePowerup *pGVar4;
  int iVar5;
  int iVar6;
  GameStatePowerup *local_20;
  int local_1c;
  
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x14) + 0xc));
  __divsf3(uVar1,*(undefined4 *)(this + 0x530));
  iVar2 = __fixsfsi();
  if (param_1 == 0) {
    iVar5 = 0;
    pGVar4 = this;
    iVar3 = iVar5;
    do {
      if (*(int *)(pGVar4 + 0x114) != 0) {
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar5 != 0xde);
    iVar5 = SmDev();
    iVar6 = DAT_00178f4c + 0x178ec4;
    local_20 = *(GameStatePowerup **)(iVar6 + iVar5 * 4 + 0x28);
    local_1c = SmDev();
    uVar1 = __floatsisf(iVar3 + 1);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar6 + local_1c * 4 + 0x10));
    __addsf3(local_20,uVar1);
    iVar5 = __fixsfsi();
    if (iVar5 <= iVar2) {
      *(undefined4 *)(this + 0x4a8) = 0;
      goto LAB_00178f48;
    }
LAB_00178f3c:
    iVar2 = iVar2 - iVar5;
  }
  else {
    iVar5 = 0;
    pGVar4 = this;
    do {
      if (*(int *)(pGVar4 + 0x114) != 0) goto LAB_00178f16;
      iVar5 = iVar5 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar5 != 0xde);
    iVar5 = 0;
LAB_00178f16:
    iVar3 = SmDev();
    uVar1 = __floatsisf(iVar5);
    __mulsf3(uVar1,*(undefined4 *)(DAT_00178f50 + iVar3 * 4 + 0x178f3c));
    iVar5 = __fixsfsi();
    local_20 = this;
    local_1c = param_1;
    if (iVar2 < iVar5) goto LAB_00178f3c;
    iVar2 = -iVar5;
  }
  uVar1 = __floatsisf(iVar2);
  *(undefined4 *)(this + 0x4a8) = uVar1;
LAB_00178f48:
  return CONCAT44(local_1c,local_20);
}


