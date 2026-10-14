/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00173330 FUN_00173330 */

void FUN_00173330(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GameStateCafe *this;
  GameStateLoading *this_00;
  undefined4 extraout_r1;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_r4;
  int unaff_r5;
  int *piVar11;
  CapcomGame *this_01;
  int unaff_r6;
  float fVar12;
  int in_stack_0000000c;
  
  iVar2 = DAT_0017302c;
  if ((*(char *)(unaff_r4 + DAT_0017335c) == '\0') && (*(int *)(unaff_r4 + 0x4b8) != 0)) {
    if ((int)**(short **)(unaff_r6 + DAT_00173028) < *(int *)(unaff_r4 + DAT_00173030)) {
      uVar1 = __floatsisf((*(int *)(unaff_r4 + 0x4b8) >> 0x10) - (param_2 >> 0x10));
      iVar3 = DAT_00173034;
      *(undefined4 *)(unaff_r5 + iVar2) = uVar1;
      *(undefined1 *)(unaff_r4 + iVar3) = 1;
    }
    else {
      *(undefined4 *)(unaff_r5 + DAT_0017302c) = 0;
    }
  }
  uVar1 = __addsf3(*(undefined4 *)(unaff_r5 + 0x400),*(undefined4 *)(unaff_r5 + DAT_00173340));
  *(undefined4 *)(unaff_r5 + 0x400) = uVar1;
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + 0x5b8));
  iVar2 = SmDev();
  iVar2 = __mulsf3(uVar1,*(undefined4 *)(iVar2 * 4 + DAT_00173344 + 0x173068));
  iVar3 = __aeabi_fcmplt(*(undefined4 *)(unaff_r5 + 0x400),iVar2 + -0x80000000);
  if (iVar3 != 0) {
    *(int *)(unaff_r5 + 0x400) = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(unaff_r5 + 0x400),0);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_r5 + 0x400) = 0;
  }
  uVar7 = *(undefined4 *)(unaff_r5 + DAT_00173340);
  puVar9 = *(undefined4 **)(unaff_r6 + DAT_00173348);
  uVar1 = __floatsisf(in_stack_0000000c);
  uVar1 = __mulsf3(uVar1,*puVar9);
  iVar2 = __aeabi_fcmplt(uVar1,0x3f800000);
  if (iVar2 == 0) {
    uVar1 = 0x3f800000;
  }
  uVar1 = __subsf3(0x3f800000,uVar1);
  iVar2 = __mulsf3(uVar7,uVar1);
  *(int *)(unaff_r5 + DAT_00173340) = iVar2;
  iVar3 = __aeabi_fcmpge(iVar2,0);
  if (iVar3 == 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmplt(iVar2,**(undefined4 **)(unaff_r6 + DAT_0017334c));
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_r5 + DAT_00173340) = 0;
  }
  uVar1 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x400));
  iVar3 = SmDev();
  iVar2 = DAT_00173354;
  iVar10 = DAT_00173350 + 0x173116;
  uVar7 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + iVar10));
  __aeabi_idivmod(uVar1,uVar7);
  uVar1 = __floatsisf(extraout_r1);
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(unaff_r5 + 0x20));
  iVar3 = SmDev();
  uVar7 = __mulsf3(*(undefined4 *)(iVar10 + iVar3 * 4 + 0x18),*(undefined4 *)(unaff_r5 + 0x20));
  __addsf3(uVar1,uVar7);
  uVar1 = __fixsfsi();
  in_stack_0000000c = 0;
  iVar3 = unaff_r5;
  do {
    piVar11 = *(int **)(iVar3 + 0x58);
    pcVar8 = *(code **)(*piVar11 + 0x14);
    iVar4 = SmDev();
    uVar7 = __floatsisf(uVar1);
    uVar5 = __mulsf3(*(undefined4 *)(iVar4 * 4 + iVar10),*(undefined4 *)(unaff_r5 + 0x20));
    uVar6 = __floatsisf(in_stack_0000000c);
    uVar5 = __mulsf3(uVar5,uVar6);
    __addsf3(uVar7,uVar5);
    uVar7 = __fixsfsi();
    iVar4 = SmDev();
    uVar5 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x1731aa));
    fVar12 = (float)(*pcVar8)(piVar11,uVar7,uVar5);
    in_stack_0000000c = in_stack_0000000c + 1;
    iVar3 = iVar3 + 4;
  } while (in_stack_0000000c != 10);
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00173358) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00173358) = 0;
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar12);
    this_01 = *(CapcomGame **)(unaff_r5 + 0xc);
    this = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    CapcomGame::setNextState(this_01,(GameState *)this_00);
  }
  return;
}


