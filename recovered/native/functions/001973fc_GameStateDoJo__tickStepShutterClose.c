/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001973fc GameStateDoJo::tickStepShutterClose */

/* GameStateDoJo::tickStepShutterClose(long) */

void GameStateDoJo::tickStepShutterClose(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_r1;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  float extraout_s0;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x6c0),DAT_00197558);
  uVar3 = DAT_0019755c;
  *(undefined4 *)(param_1 + 0x6c0) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  if (iVar2 != 0) {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
    *(undefined1 *)(param_1 + DAT_00197560) = 2;
    iVar2 = DAT_00197564;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + iVar2) = 1000;
    (**(code **)(**(int **)(param_1 + 0xc0) + 0x20))(*(int **)(param_1 + 0xc0),0);
    unSelectCharacter(SUB41(param_1,0));
    *(undefined1 *)(param_1 + 0x6c8) = 0;
    *(undefined4 *)(param_1 + DAT_00197568) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    releaseInstructorCharacterAll((GameStateDoJo *)param_1);
    createInstructor((GameStateDoJo *)param_1);
    selectCharacter((GameStateDoJo *)param_1,0,true);
    uVar1 = DAT_0019755c;
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi(uVar1);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iVar6 = DAT_00197570 + 0x1974a4;
  }
  else {
    iVar6 = DAT_0019756c + 0x19749c;
  }
  __aeabi_idivmod(iVar2,0x168);
  uVar1 = __floatsisf(*(undefined4 *)(iVar6 + extraout_r1 * 4 + 0x38));
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar7 = *(int **)(param_1 + 0xa0);
  iVar6 = DAT_00197574 + 0x1974d2;
  pcVar5 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __mulsf3(uVar3,0x3e800000);
  uVar3 = __subsf3(uVar3,uVar1);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar6));
  (*pcVar5)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(param_1 + 0xa4);
  pcVar5 = *(code **)(*piVar7 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f400000);
  uVar3 = __addsf3(uVar3,uVar1);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  uVar1 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar6));
  (*pcVar5)(piVar7,uVar3,uVar1);
  return;
}


