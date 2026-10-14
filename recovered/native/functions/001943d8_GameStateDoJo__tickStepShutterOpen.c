/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001943d8 GameStateDoJo::tickStepShutterOpen */

/* GameStateDoJo::tickStepShutterOpen(long) */

void GameStateDoJo::tickStepShutterOpen(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x6c0),DAT_0019450c);
  uVar3 = DAT_00194510;
  *(undefined4 *)(param_1 + 0x6c0) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  if (iVar2 != 0) {
    changeMessageWindow(param_1,true);
    uVar1 = DAT_00194510;
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))(*(int **)(param_1 + 0xbc),1);
    *(undefined1 *)(param_1 + DAT_00194514) = 3;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi(uVar1);
  if (iVar2 < 0) {
    __aeabi_idivmod(-iVar2,0x168);
    iVar2 = -*(int *)(DAT_0019451c + extraout_r1_00 * 4 + 0x194474);
  }
  else {
    __aeabi_idivmod(iVar2,0x168);
    iVar2 = *(int *)(DAT_00194518 + extraout_r1 * 4 + 0x19445e);
  }
  uVar1 = __floatsisf(iVar2);
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar7 = *(int **)(param_1 + 0xa0);
  iVar6 = DAT_00194520 + 0x194486;
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


