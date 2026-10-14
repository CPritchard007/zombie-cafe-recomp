/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018c244 GameStateRoulette::tickStepShutterClose */

/* GameStateRoulette::tickStepShutterClose(long) */

void GameStateRoulette::tickStepShutterClose(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1;
  int extraout_r1_00;
  code *pcVar7;
  int *piVar8;
  float extraout_s0;
  
  iVar6 = DAT_0018c490;
  uVar1 = __addsf3(*(undefined4 *)(param_1 + DAT_0018c490),DAT_0018c494);
  uVar4 = DAT_0018c498;
  *(undefined4 *)(param_1 + iVar6) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar4);
  if (iVar2 != 0) {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
    *(undefined1 *)(param_1 + DAT_0018c49c) = 2;
    iVar2 = DAT_0018c4a0;
    *(undefined4 *)(param_1 + iVar6) = 0;
    *(undefined4 *)(param_1 + iVar2) = 1000;
    if (*(char *)(param_1 + DAT_0018c4a4) == '\0') {
      unSelectCharacter((GameStateRoulette *)param_1);
    }
    else {
      unSelectFurniture((GameStateRoulette *)param_1);
    }
    *(undefined4 *)(param_1 + DAT_0018c4ac) = DAT_0018c4a8;
    iVar6 = DAT_0018c4b0;
    *(undefined1 *)(param_1 + 0x9f0) = 1;
    *(undefined1 *)(param_1 + iVar6) = 0;
    iVar6 = DAT_0018c4b8;
    *(undefined4 *)(param_1 + DAT_0018c4b4) = 0;
    iVar6 = iVar6 + 0x18c2b6;
    (**(code **)(**(int **)(param_1 + 0x70) + 0x20))(*(int **)(param_1 + 0x70),1);
    uVar4 = __floatsisf(*(undefined4 *)(param_1 + 0xa00));
    iVar2 = SmDev();
    uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar6 + iVar2 * 4 + 0x10));
    uVar4 = __subsf3(DAT_0018c4bc,uVar4);
    iVar2 = SmDev();
    uVar1 = __divsf3(*(undefined4 *)(iVar6 + iVar2 * 4 + 0x10),*(undefined4 *)(param_1 + 0x20));
    uVar4 = __addsf3(uVar4,uVar1);
    iVar2 = arc4random();
    iVar3 = SmDev();
    uVar1 = __floatsisf((iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f) & 1);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar6 + iVar3 * 4 + 0x10));
    iVar3 = __addsf3(uVar4,uVar1);
    iVar2 = DAT_0018c4c0;
    if (*(char *)(param_1 + DAT_0018c4a4) == '\0') {
      iVar2 = 0x738;
    }
    uVar4 = __floatsisf(*(undefined4 *)(param_1 + iVar2));
    iVar2 = SmDev();
    __mulsf3(uVar4,*(undefined4 *)(iVar6 + iVar2 * 4 + 0x10));
    uVar4 = __fixsfsi();
    uVar1 = __fixsfsi(iVar3 + -0x80000000);
    __aeabi_idivmod(uVar1,uVar4);
    uVar1 = __floatsisf(extraout_r1);
    uVar4 = __floatsisf(uVar4);
    uVar4 = __addsf3(uVar1,uVar4);
    *(undefined4 *)(param_1 + DAT_0018c4c4) = uVar4;
    uVar4 = __floatsisf(*(undefined4 *)(param_1 + 0xa00));
    iVar6 = SmDev();
    iVar2 = DAT_0018c4c8 + 0x18c39a;
    uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar2 + iVar6 * 4 + 0x10));
    *(undefined4 *)(param_1 + DAT_0018c4cc) = uVar4;
    *(undefined4 *)(param_1 + 0xa10) = 0;
    iVar6 = SmDev();
    uVar1 = DAT_0018c498;
    *(undefined4 *)(param_1 + DAT_0018c4d0) = *(undefined4 *)(iVar2 + iVar6 * 4 + 0x10);
  }
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar5 = __divsf3(uVar4,*(undefined4 *)(param_1 + 0x20));
  iVar6 = __fixsfsi(uVar1);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
    iVar2 = DAT_0018c4d8 + 0x18c3e6;
  }
  else {
    iVar2 = DAT_0018c4d4 + 0x18c3de;
  }
  __aeabi_idivmod(iVar6,0x168);
  uVar1 = __floatsisf(*(undefined4 *)(iVar2 + extraout_r1_00 * 4 + 0x38));
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar5);
  piVar8 = *(int **)(param_1 + 0x5c);
  iVar2 = DAT_0018c4dc + 0x18c410;
  pcVar7 = *(code **)(*piVar8 + 0x14);
  iVar6 = SmDev();
  uVar4 = __mulsf3(uVar4,0x3e800000);
  uVar4 = __subsf3(uVar4,uVar1);
  __addsf3(uVar4,0x3f800000);
  uVar4 = __fixsfsi();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + iVar2));
  (*pcVar7)(piVar8,uVar4,uVar5);
  piVar8 = *(int **)(param_1 + 0x60);
  pcVar7 = *(code **)(*piVar8 + 0x14);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar4,0x3f400000);
  uVar4 = __addsf3(uVar4,uVar1);
  __subsf3(uVar4,0x3f800000);
  uVar4 = __fixsfsi();
  iVar6 = SmDev();
  uVar1 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + iVar2));
  (*pcVar7)(piVar8,uVar4,uVar1);
  return;
}


