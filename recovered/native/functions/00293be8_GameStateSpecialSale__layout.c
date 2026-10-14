/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293be8 GameStateSpecialSale::layout */

/* GameStateSpecialSale::layout() */

undefined8 GameStateSpecialSale::layout(void)

{
  short sVar1;
  int in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  
  iVar5 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x18) + 0x18))
            (*(int **)(in_r0 + 0x18),iVar5 >> 0x10,(int)(short)iVar5);
  iVar5 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x44) + 0x14))
            (*(int **)(in_r0 + 0x44),iVar5 >> 0x10,(int)(short)iVar5);
  piVar7 = *(int **)(in_r0 + 0x48);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(in_r0 + 0xc) + 0x16);
  iVar5 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(DAT_00293f44 + iVar5 * 4 + 0x293ca0));
  (*pcVar10)(piVar7,(int)sVar1,uVar2);
  piVar7 = *(int **)(in_r0 + 0x4c);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(in_r0 + 0xc) + 0x16);
  iVar5 = SmDev();
  __mulsf3(*(undefined4 *)(iVar5 * 4 + DAT_00293f48 + 0x293c4e),*(undefined4 *)(in_r0 + 0x458));
  uVar2 = __fixsfsi();
  (*pcVar10)(piVar7,(int)sVar1,uVar2);
  piVar7 = *(int **)(in_r0 + 0x50);
  iVar8 = DAT_00293f4c + 0x293c6e;
  pcVar10 = *(code **)(*piVar7 + 0x14);
  iVar5 = SmDev();
  uVar2 = *(undefined4 *)(iVar8 + iVar5 * 4 + 0x10);
  iVar5 = SmDev();
  (*pcVar10)(piVar7,uVar2,*(undefined4 *)(iVar8 + iVar5 * 4 + 0x28));
  piVar7 = *(int **)(in_r0 + 0x54);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  uVar2 = __floatsisf(-*(int *)(*(int *)(in_r0 + 0x18) + 0xc));
  uVar2 = __mulsf3(uVar2,0x3f000000);
  __addsf3(uVar2,0x3f800000);
  uVar2 = __fixsfsi();
  iVar5 = SmDev();
  (*pcVar10)(piVar7,uVar2,*(undefined4 *)(iVar8 + iVar5 * 4 + 0x28));
  piVar7 = *(int **)(in_r0 + 0x58);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(in_r0 + 0x18) + 0xc));
  uVar2 = __mulsf3(uVar2,0x3fc00000);
  __subsf3(uVar2,0x3f800000);
  uVar2 = __fixsfsi();
  iVar5 = SmDev();
  (*pcVar10)(piVar7,uVar2,*(undefined4 *)(iVar8 + iVar5 * 4 + 0x28));
  (**(code **)(**(int **)(in_r0 + 0x6c) + 0x14))
            (*(int **)(in_r0 + 0x6c),0,*(undefined4 *)(*(int *)(in_r0 + 0x18) + 0x10));
  piVar7 = *(int **)(in_r0 + 0x70);
  iVar9 = *(int *)(in_r0 + 0x18);
  iVar5 = *piVar7;
  uVar2 = __floatsisf(*(undefined4 *)(iVar9 + 0xc));
  __mulsf3(uVar2,0x3f000000);
  uVar2 = __fixsfsi();
  (**(code **)(iVar5 + 0x14))(piVar7,uVar2,*(undefined4 *)(iVar9 + 0x10));
  piVar7 = *(int **)(in_r0 + 0x74);
  iVar9 = *(int *)(in_r0 + 0x18);
  iVar5 = *piVar7;
  uVar2 = __floatsisf(*(undefined4 *)(iVar9 + 0xc));
  __mulsf3(uVar2,DAT_00293f50);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(*(undefined4 *)(iVar9 + 0x10));
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(in_r0 + 0x70) + 0x10));
  uVar4 = __mulsf3(uVar4,0x3f000000);
  __subsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (**(code **)(iVar5 + 0x14))(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(in_r0 + 0x7c);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  iVar5 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar8 + iVar5 * 4 + 0x40));
  iVar5 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar8 + iVar5 * 4 + 0x58));
  (*pcVar10)(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(in_r0 + 0x80);
  iVar9 = *(int *)(in_r0 + 0x7c);
  iVar5 = *piVar7;
  uVar2 = __floatsisf(*(undefined4 *)(iVar9 + 0xc));
  __mulsf3(uVar2,0x3f000000);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(*(undefined4 *)(iVar9 + 0x10));
  __mulsf3(uVar3,0x3f000000);
  uVar3 = __fixsfsi();
  (**(code **)(iVar5 + 0x14))(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(in_r0 + 100);
  iVar5 = *(int *)(in_r0 + 0x7c);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 4));
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + 0xc));
  uVar3 = __mulsf3(uVar3,0x3f000000);
  __subsf3(uVar2,uVar3);
  uVar2 = __fixsfsi();
  iVar5 = SmDev();
  (*pcVar10)(piVar7,uVar2,*(undefined4 *)(iVar8 + iVar5 * 4 + 0x70));
  piVar7 = *(int **)(in_r0 + 0x68);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  uVar2 = __floatsisf((int)*(short *)(*(int *)(in_r0 + 100) + 4));
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(in_r0 + 0x7c) + 0xc));
  uVar3 = __mulsf3(uVar3,DAT_00293f54);
  __addsf3(uVar2,uVar3);
  uVar2 = __fixsfsi();
  iVar5 = SmDev();
  (*pcVar10)(piVar7,uVar2,*(undefined4 *)(iVar8 + iVar5 * 4 + 0x70));
  piVar7 = *(int **)(in_r0 + 0x84);
  iVar9 = DAT_00293f58 + 0x293e7a;
  pcVar10 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(in_r0 + 0x7c) + 4);
  iVar5 = SmDev();
  (*pcVar10)(piVar7,(int)sVar1,*(undefined4 *)(iVar9 + iVar5 * 4 + 8));
  piVar7 = *(int **)(in_r0 + 0x88);
  pcVar10 = *(code **)(*piVar7 + 0x14);
  iVar5 = (int)*(short *)(*(int *)(in_r0 + 0x7c) + 4);
  iVar8 = SmDev();
  (*pcVar10)(piVar7,iVar5,*(undefined4 *)(iVar9 + iVar8 * 4 + 0x20));
  piVar7 = *(int **)(in_r0 + 0x88);
  if (*(int *)(in_r0 + DAT_00293f5c) < 2) {
    pcVar6 = *(code **)(*piVar7 + 0x20);
  }
  else {
    pcVar6 = *(code **)(*piVar7 + 0x20);
  }
  (*pcVar6)(piVar7,1 < *(int *)(in_r0 + DAT_00293f5c));
  piVar7 = *(int **)(in_r0 + 0x78);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar8 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(DAT_00293f60 + 0x293ee6)));
  iVar8 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(DAT_00293f64 + 0x293efa)));
  (*pcVar6)(piVar7,uVar2,uVar3);
  iVar8 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x438) + 0x14))
            (*(int **)(in_r0 + 0x438),iVar8 >> 0x10,(int)(short)iVar8);
  ConfirmDialog::layout();
  iVar8 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x448) + 0x14))
            (*(int **)(in_r0 + 0x448),iVar8 >> 0x10,(int)(short)iVar8);
  NoticeDialog::layout();
  return CONCAT44(iVar5,pcVar10);
}


