/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ab230 GameStateEventRaid2::layout */

/* GameStateEventRaid2::layout() */

undefined8 GameStateEventRaid2::layout(void)

{
  GameStateEventRaid2 *in_r0;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  
  piVar1 = *(int **)(in_r0 + 0x94);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x10));
  MessageElement::layout(*(MessageElement **)(in_r0 + 0x94));
  (**(code **)(**(int **)(in_r0 + 0x88) + 0x18))
            (*(int **)(in_r0 + 0x88),*(int *)(*(int *)(in_r0 + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(in_r0 + 0xc) + 0x10));
  iVar6 = *(int *)(in_r0 + 0xc);
  iVar7 = *(int *)(iVar6 + 0x10);
  iVar8 = *(int *)(*(int *)(in_r0 + 0x80) + 0x18);
  uVar2 = __floatsisf(iVar7 >> 0x10);
  uVar3 = __floatsisf(iVar8 >> 0x10);
  uVar3 = __subsf3(uVar3,0x3f800000);
  uVar3 = __divsf3(uVar2,uVar3);
  uVar2 = __floatsisf((int)(short)iVar7);
  uVar4 = __floatsisf((int)(short)iVar8);
  uVar4 = __subsf3(uVar4,0x3f800000);
  uVar2 = __divsf3(uVar2,uVar4);
  iVar7 = __aeabi_fcmpgt(uVar3,uVar2);
  if (iVar7 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = __mulsf3(uVar2,0x3fc00000);
  *(undefined4 *)(in_r0 + 0x48) = uVar2;
  iVar7 = *(int *)(iVar6 + 0x10);
  (**(code **)(**(int **)(in_r0 + 0xac) + 0x14))
            (*(int **)(in_r0 + 0xac),(iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1,(int)(short)iVar7);
  (**(code **)(**(int **)(in_r0 + 0x9c) + 0x14))
            (*(int **)(in_r0 + 0x9c),*(int *)(*(int *)(in_r0 + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(in_r0 + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(in_r0 + 0xa0) + 0x14))
            (*(int **)(in_r0 + 0xa0),*(int *)(*(int *)(in_r0 + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(in_r0 + 0xc) + 0x14));
  NoticeDialog::layout();
  iVar6 = DAT_001ab44c + 0x1ab32e;
  (**(code **)(**(int **)(in_r0 + 0x98) + 0x14))
            (*(int **)(in_r0 + 0x98),*(int *)(*(int *)(in_r0 + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(in_r0 + 0xc) + 0x14));
  piVar1 = *(int **)(in_r0 + 0x78);
  pcVar5 = *(code **)(*piVar1 + 0x14);
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar7 * 4 + 0x2c),*(undefined4 *)(in_r0 + 0x70));
  uVar2 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar7 * 4 + 0x44),*(undefined4 *)(in_r0 + 0x74));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar1,uVar2,uVar3);
  piVar1 = *(int **)(in_r0 + 0xbc);
  pcVar5 = *(code **)(*piVar1 + 0x14);
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar7 * 4 + 0x5c),*(undefined4 *)(in_r0 + 0x70));
  uVar2 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar7 * 4 + 0x74),*(undefined4 *)(in_r0 + 0x74));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar1,uVar2,uVar3);
  piVar1 = *(int **)(in_r0 + 0xc0);
  pcVar9 = *(code **)(*piVar1 + 0x14);
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(iVar6 + iVar7 * 4 + 0x5c),*(undefined4 *)(in_r0 + 0x70));
  uVar2 = __fixsfsi();
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_001ab450 + iVar7 * 4 + 0x1ab3ec),*(undefined4 *)(in_r0 + 0x74));
  uVar3 = __fixsfsi();
  (*pcVar9)(piVar1,uVar2,uVar3);
  updateKillCountText(in_r0);
  iVar6 = (int)*(short *)(*(int *)(in_r0 + 0xc) + 0x14);
  iVar7 = SmDev();
  if ((iVar7 == 4) || (iVar7 = SmDev(), iVar7 == 3)) {
    iVar7 = iVar6 * 3;
  }
  else {
    iVar7 = iVar6 << 2;
  }
  iVar7 = __divsi3(iVar7,5);
  (**(code **)(**(int **)(in_r0 + 0x7c) + 0x14))
            (*(int **)(in_r0 + 0x7c),(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x16),iVar6 + iVar7);
  (**(code **)(**(int **)(in_r0 + 0xc4) + 0x14))
            (*(int **)(in_r0 + 0xc4),*(int *)(*(int *)(in_r0 + 0x7c) + 0xc) / 2,
             *(int *)(*(int *)(in_r0 + 0x7c) + 0x10) / 2);
  return CONCAT44(pcVar5,in_r0);
}


