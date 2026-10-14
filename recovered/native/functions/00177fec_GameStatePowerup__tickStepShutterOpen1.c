/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00177fec GameStatePowerup::tickStepShutterOpen1 */

/* GameStatePowerup::tickStepShutterOpen1(long) */

void GameStatePowerup::tickStepShutterOpen1(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x4a0),DAT_00178138);
  uVar3 = DAT_0017813c;
  *(undefined4 *)(param_1 + 0x4a0) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  uVar3 = DAT_0017813c;
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 0x20))(*(int **)(param_1 + 0xfc),1);
    *(undefined1 *)(param_1 + DAT_00178140) = 3;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    CharacterInstance::setCurrentAnimation
              (*(CharacterInstance **)(param_1 + 0x490),'\x13','\x01',true);
    uVar1 = uVar3;
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi(uVar1);
  if (iVar2 < 0) {
    __aeabi_idivmod(-iVar2,0x168);
    iVar2 = -*(int *)(DAT_00178148 + extraout_r1_00 * 4 + 0x1780c6);
  }
  else {
    __aeabi_idivmod(iVar2,0x168);
    iVar2 = *(int *)(DAT_00178144 + extraout_r1 * 4 + 0x1780b0);
  }
  uVar1 = __floatsisf(iVar2);
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar8 = *(int **)(param_1 + 0xa8);
  iVar7 = DAT_0017814c + 0x1780a0;
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  uVar3 = __mulsf3(uVar3,0x3e800000);
  uVar3 = __subsf3(uVar3,uVar1);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = DAT_00178150;
  __mulsf3(*(undefined4 *)(iVar7 + iVar5 * 4 + 0x14),*(undefined4 *)(param_1 + DAT_00178150));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(param_1 + 0xac);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f400000);
  uVar3 = __addsf3(uVar3,uVar1);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar5 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar5 * 4 + 0x14),*(undefined4 *)(param_1 + iVar2));
  uVar1 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,uVar1);
  return;
}


