/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018936c GameStateRoulette::tickStepShutterOpen */

/* GameStateRoulette::tickStepShutterOpen(long) */

void GameStateRoulette::tickStepShutterOpen(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar6;
  int *piVar7;
  
  iVar5 = DAT_0018947c;
  uVar1 = __addsf3(*(undefined4 *)(param_1 + DAT_0018947c),DAT_00189480);
  uVar3 = DAT_00189484;
  *(undefined4 *)(param_1 + iVar5) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  uVar3 = DAT_00189484;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + DAT_00189488) = 3;
    *(undefined4 *)(param_1 + iVar5) = 0;
    uVar1 = uVar3;
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __divsf3(uVar3,*(undefined4 *)(param_1 + 0x20));
  iVar5 = __fixsfsi(uVar1);
  if (iVar5 < 0) {
    __aeabi_idivmod(-iVar5,0x168);
    iVar5 = -*(int *)(DAT_00189490 + extraout_r1_00 * 4 + 0x1893ec);
  }
  else {
    __aeabi_idivmod(iVar5,0x168);
    iVar5 = *(int *)(DAT_0018948c + extraout_r1 * 4 + 0x1893d6);
  }
  uVar1 = __floatsisf(iVar5);
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar7 = *(int **)(param_1 + 0x5c);
  iVar2 = DAT_00189494 + 0x1893fa;
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar5 = SmDev();
  uVar3 = __mulsf3(uVar3,0x3e800000);
  uVar3 = __subsf3(uVar3,uVar1);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar5 * 4 + iVar2));
  (*pcVar6)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(param_1 + 0x60);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f400000);
  uVar3 = __addsf3(uVar3,uVar1);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar5 = SmDev();
  uVar1 = __fixsfsi(*(undefined4 *)(iVar5 * 4 + iVar2));
  (*pcVar6)(piVar7,uVar3,uVar1);
  return;
}


