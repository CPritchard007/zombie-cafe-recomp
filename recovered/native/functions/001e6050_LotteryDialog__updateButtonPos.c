/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e6050 LotteryDialog::updateButtonPos */

/* LotteryDialog::updateButtonPos() */

void __thiscall LotteryDialog::updateButtonPos(LotteryDialog *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  LotteryDialog *pLVar8;
  int *piVar9;
  LotteryDialog *pLVar10;
  int local_78;
  int aiStack_54 [16];
  
  memcpy(aiStack_54,(void *)(DAT_001e63bc + 0x1e6070),0x3c);
  iVar4 = DAT_001e63c0;
  local_78 = 0;
  pLVar10 = this;
  do {
    uVar1 = __floatsisf(*(undefined4 *)(this + 0x10));
    uVar1 = __mulsf3(uVar1,0x3f000000);
    iVar6 = *(int *)((int)aiStack_54 + local_78);
    pLVar8 = pLVar10 + 0x80;
    iVar2 = SmDev();
    piVar9 = *(int **)pLVar8;
    iVar5 = *piVar9;
    __addsf3(*(undefined4 *)(pLVar10 + 0xbc),*(undefined4 *)(this + 0x1c8));
    uVar3 = __fixsfsi();
    __addsf3(uVar1,*(undefined4 *)(iVar4 + (iVar6 * 6 + iVar2) * 4 + 0x1e60e6));
    uVar1 = __fixsfsi();
    (**(code **)(iVar5 + 0x14))(piVar9,uVar3,uVar1);
    if (*(int *)(pLVar10 + 0x170) != 0) {
      uVar1 = __floatsisf(*(undefined4 *)(this + 0x10));
      uVar1 = __mulsf3(uVar1,0x3f000000);
      iVar2 = SmDev();
      uVar1 = __addsf3(uVar1,*(undefined4 *)(DAT_001e63c4 + (iVar6 * 6 + iVar2) * 4 + 0x1e6174));
      piVar9 = *(int **)(pLVar10 + 0x170);
      pcVar7 = *(code **)(*piVar9 + 0x14);
      uVar3 = __floatsisf(*(undefined4 *)(*(int *)pLVar8 + 4));
      iVar2 = SmDev();
      __addsf3(uVar3,*(undefined4 *)(DAT_001e63c8 + iVar2 * 4 + 0x1e6180));
      uVar3 = __fixsfsi();
      uVar1 = __fixsfsi(uVar1);
      (*pcVar7)(piVar9,uVar3,uVar1);
    }
    if (*(int *)(pLVar10 + 0xf8) != 0) {
      uVar1 = __floatsisf(*(undefined4 *)(this + 0x10));
      uVar1 = __mulsf3(uVar1,0x3f000000);
      iVar2 = SmDev();
      piVar9 = *(int **)(pLVar10 + 0xf8);
      iVar5 = *piVar9;
      uVar3 = *(undefined4 *)(*(int *)pLVar8 + 4);
      __addsf3(uVar1,*(undefined4 *)(DAT_001e63cc + (iVar6 * 6 + iVar2) * 4 + 0x1e61e0));
      uVar1 = __fixsfsi();
      (**(code **)(iVar5 + 0x14))(piVar9,uVar3,uVar1);
    }
    if (*(int *)(pLVar10 + 0x134) != 0) {
      uVar1 = __floatsisf(*(undefined4 *)(this + 0x10));
      uVar1 = __mulsf3(uVar1,0x3f000000);
      iVar2 = SmDev();
      piVar9 = *(int **)(pLVar10 + 0x134);
      iVar5 = *piVar9;
      uVar3 = *(undefined4 *)(*(int *)pLVar8 + 4);
      __addsf3(uVar1,*(undefined4 *)((iVar6 * 6 + iVar2) * 4 + DAT_001e63d0 + 0x1e61da));
      uVar1 = __fixsfsi();
      (**(code **)(iVar5 + 0x14))(piVar9,uVar3,uVar1);
    }
    pLVar10 = pLVar10 + 4;
    local_78 = local_78 + 4;
  } while (local_78 != 0x3c);
  piVar9 = *(int **)(this + 0x1b0);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  if (this[DAT_001e63d4] == (LotteryDialog)0x0) {
    uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
    uVar1 = __mulsf3(uVar1,0x3f000000);
    __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
    uVar1 = __fixsfsi();
    iVar4 = SmDev();
    uVar3 = *(undefined4 *)(DAT_001e63dc + iVar4 * 4 + 0x1e62c4);
  }
  else {
    uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
    uVar1 = __mulsf3(uVar1,0x3f000000);
    __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
    uVar1 = __fixsfsi();
    iVar4 = SmDev();
    uVar3 = *(undefined4 *)(DAT_001e63d8 + iVar4 * 4 + 0x1e6280);
  }
  uVar3 = __fixsfsi(uVar3);
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x1b4);
  iVar2 = DAT_001e63e0 + 0x1e6282;
  pcVar7 = *(code **)(*piVar9 + 0x14);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar1 = __mulsf3(uVar1,DAT_001e63e4);
  __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
  uVar1 = __fixsfsi();
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x78));
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x1b8);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar1 = __mulsf3(uVar1,DAT_001e63e4);
  __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
  uVar1 = __fixsfsi();
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x78));
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x1bc);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar1 = __mulsf3(uVar1,DAT_001e63e4);
  __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
  uVar1 = __fixsfsi();
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x78));
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x1c0);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar1 = __mulsf3(uVar1,0x3fc00000);
  __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
  uVar1 = __fixsfsi();
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x78));
  (*pcVar7)(piVar9,uVar1,uVar3);
  piVar9 = *(int **)(this + 0x1c4);
  pcVar7 = *(code **)(*piVar9 + 0x14);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0xc));
  uVar1 = __mulsf3(uVar1,DAT_001e63e8);
  __addsf3(uVar1,*(undefined4 *)(this + 0x1c8));
  uVar1 = __fixsfsi();
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(DAT_001e63ec + iVar4 * 4 + 0x1e63ba));
  (*pcVar7)(piVar9,uVar1,uVar3);
  return;
}


