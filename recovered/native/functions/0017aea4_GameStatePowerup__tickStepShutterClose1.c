/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017aea4 GameStatePowerup::tickStepShutterClose1 */

/* GameStatePowerup::tickStepShutterClose1(long) */

void GameStatePowerup::tickStepShutterClose1(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_r1;
  bool bVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  float extraout_s0;
  
  uVar1 = __addsf3(*(undefined4 *)(param_1 + 0x4a0),DAT_0017b0cc);
  uVar3 = DAT_0017b0d0;
  *(undefined4 *)(param_1 + 0x4a0) = uVar1;
  iVar2 = __aeabi_fcmpge(uVar1,uVar3);
  if (iVar2 != 0) {
    ZombieCafe::playEffect(*(int *)(param_1 + 0xc),extraout_s0);
    *(undefined1 *)(param_1 + DAT_0017b0d4) = 2;
    iVar2 = DAT_0017b0d8;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + iVar2) = 1000;
    unSelectCharacter((GameStatePowerup *)param_1);
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + DAT_0017b0dc) = 0;
    (**(code **)(**(int **)(param_1 + 0x500) + 0x20))(*(int **)(param_1 + 0x500),0);
    (**(code **)(**(int **)(param_1 + DAT_0017b0e0) + 0x20))(*(int **)(param_1 + DAT_0017b0e0),0);
    (**(code **)(**(int **)(param_1 + 0x508) + 0x20))(*(int **)(param_1 + 0x508),0);
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x20))(*(int **)(param_1 + 0xf4),0);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),0);
    (**(code **)(**(int **)(param_1 + 0xf8) + 0x20))(*(int **)(param_1 + 0xf8),0);
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x20))(*(int **)(param_1 + 0xa4),0);
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x20))(*(int **)(param_1 + 0xf0),0);
    (**(code **)(**(int **)(param_1 + 0x104) + 0x20))(*(int **)(param_1 + 0x104),0);
    lVar10 = param_1;
    do {
      piVar7 = (int *)(lVar10 + 0x114);
      piVar11 = (int *)*piVar7;
      if (piVar11 != (int *)0x0) {
        iVar2 = 0;
        bVar5 = false;
        do {
          if (*(int **)(param_1 + iVar2 + 0x4d0) == piVar11) {
            bVar5 = true;
          }
          iVar2 = iVar2 + 4;
        } while (iVar2 != 0x28);
        if (!bVar5) {
          (**(code **)(*piVar11 + 4))();
        }
      }
      lVar10 = lVar10 + 4;
      *piVar7 = 0;
    } while (lVar10 != param_1 + 0x378);
    iVar8 = 0;
    iVar2 = 0;
    do {
      iVar9 = *(int *)(param_1 + iVar8 + 0x4d0);
      if (iVar9 != 0) {
        *(int *)(param_1 + (iVar2 + 0x44) * 4 + 4) = iVar9;
        iVar2 = iVar2 + 1;
      }
      iVar8 = iVar8 + 4;
      uVar1 = DAT_0017b0d0;
    } while (iVar8 != 0x28);
  }
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar4 = __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi(uVar1);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iVar8 = DAT_0017b0e8 + 0x17b006;
  }
  else {
    iVar8 = DAT_0017b0e4 + 0x17affe;
  }
  __aeabi_idivmod(iVar2,0x168);
  uVar1 = __floatsisf(*(undefined4 *)(iVar8 + extraout_r1 * 4 + 0x28));
  uVar1 = __mulsf3(uVar1,0x37800000);
  uVar1 = __mulsf3(uVar1,uVar4);
  piVar11 = *(int **)(param_1 + 0xa8);
  iVar9 = DAT_0017b0ec + 0x17b034;
  pcVar6 = *(code **)(*piVar11 + 0x14);
  iVar8 = SmDev();
  uVar3 = __mulsf3(uVar3,0x3e800000);
  uVar3 = __subsf3(uVar3,uVar1);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = DAT_0017b0f0;
  __mulsf3(*(undefined4 *)(iVar9 + iVar8 * 4 + 0x14),*(undefined4 *)(param_1 + DAT_0017b0f0));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar11,uVar3,uVar4);
  piVar11 = *(int **)(param_1 + 0xac);
  pcVar6 = *(code **)(*piVar11 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f400000);
  uVar3 = __addsf3(uVar3,uVar1);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar9 + iVar8 * 4 + 0x14),*(undefined4 *)(param_1 + iVar2));
  uVar1 = __fixsfsi();
  (*pcVar6)(piVar11,uVar3,uVar1);
  return;
}


