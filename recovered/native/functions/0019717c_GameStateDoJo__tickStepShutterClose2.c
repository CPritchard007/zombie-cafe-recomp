/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019717c GameStateDoJo::tickStepShutterClose2 */

/* GameStateDoJo::tickStepShutterClose2(long) */

void GameStateDoJo::tickStepShutterClose2(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int extraout_r1_00;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float extraout_s0;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x6c0),DAT_001973c0);
  uVar3 = DAT_001973c4;
  *(undefined4 *)(param_1 + 0x6c0) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  if (iVar2 != 0) {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
    *(undefined1 *)(param_1 + DAT_001973c8) = 5;
    iVar2 = DAT_001973cc;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + iVar2) = 1000;
    unSelectCharacter(SUB41(param_1,0));
    *(undefined4 *)(param_1 + 0x6e0) = DAT_001973d0;
    iVar2 = DAT_001973d8;
    *(undefined1 *)(param_1 + DAT_001973d4) = 1;
    *(undefined1 *)(param_1 + iVar2) = 0;
    *(undefined4 *)(param_1 + 0x6f0) = 0;
    iVar7 = DAT_001973dc + 0x1971ec;
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))(*(int **)(param_1 + 0xb4),1);
    uVar3 = __floatsisf(*(undefined4 *)(param_1 + 0x6d8));
    iVar2 = SmDev();
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18));
    uVar3 = __subsf3(DAT_001973e0,uVar3);
    iVar2 = SmDev();
    uVar1 = __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18),0x3f000000);
    uVar3 = __addsf3(uVar3,uVar1);
    iVar2 = arc4random();
    iVar6 = SmDev();
    uVar1 = __floatsisf((iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f) & 1);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(iVar7 + iVar6 * 4 + 0x18));
    iVar2 = __addsf3(uVar3,uVar1);
    uVar3 = __floatsisf(*(undefined4 *)(param_1 + 0x690));
    iVar6 = SmDev();
    __mulsf3(uVar3,*(undefined4 *)(iVar7 + iVar6 * 4 + 0x18));
    uVar3 = __fixsfsi();
    uVar1 = __fixsfsi(iVar2 + -0x80000000);
    __aeabi_idivmod(uVar1,uVar3);
    uVar1 = __floatsisf(extraout_r1);
    uVar3 = __floatsisf(uVar3);
    uVar3 = __addsf3(uVar1,uVar3);
    *(undefined4 *)(param_1 + DAT_001973e4) = uVar3;
    uVar3 = __floatsisf(*(undefined4 *)(param_1 + 0x6d8));
    iVar2 = SmDev();
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18));
    uVar1 = DAT_001973c4;
    *(undefined4 *)(param_1 + DAT_001973e8) = uVar3;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    iVar2 = SmDev();
    *(undefined4 *)(param_1 + DAT_001973ec) = *(undefined4 *)(iVar7 + iVar2 * 4 + 0x18);
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi(uVar1);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iVar6 = DAT_001973f4 + 0x19730e;
  }
  else {
    iVar6 = DAT_001973f0 + 0x197306;
  }
  __aeabi_idivmod(iVar2,0x168);
  uVar1 = __floatsisf(*(undefined4 *)(iVar6 + extraout_r1_00 * 4 + 0x38));
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar8 = *(int **)(param_1 + 0xa0);
  iVar6 = DAT_001973f8 + 0x19733c;
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar3 = __mulsf3(uVar3,0x3e800000);
  uVar3 = __subsf3(uVar3,uVar1);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar6));
  (*pcVar5)(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(param_1 + 0xa4);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f400000);
  uVar3 = __addsf3(uVar3,uVar1);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  uVar1 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar6));
  (*pcVar5)(piVar8,uVar3,uVar1);
  return;
}


