/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014a5c2 FUN_0014a5c2 */

void FUN_0014a5c2(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_r3;
  code *pcVar6;
  int iVar7;
  int unaff_r5;
  int unaff_r6;
  int *piVar8;
  
  if (*(int *)(unaff_r5 + 0x1e8) != 0) {
    FUN_00149b04(*(int *)(unaff_r5 + 0x1e8),*(undefined4 *)(in_r3 + 0x14));
  }
  piVar8 = *(int **)(unaff_r5 + unaff_r6);
  iVar7 = DAT_0014a7a8 + 0x14a5dc;
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(unaff_r5 + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18),*(undefined4 *)(unaff_r5 + DAT_0014a79c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(unaff_r5 + 500);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(unaff_r5 + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x30),*(undefined4 *)(unaff_r5 + DAT_0014a79c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(unaff_r5 + 0x1f0);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(unaff_r5 + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x48),*(undefined4 *)(unaff_r5 + DAT_0014a79c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(unaff_r5 + 0x1f8);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x60));
  __mulsf3(uVar3,*(undefined4 *)(unaff_r5 + 0xf10));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x78));
  __mulsf3(uVar4,*(undefined4 *)(unaff_r5 + DAT_0014a79c));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,uVar4);
  iVar2 = *(int *)(unaff_r5 + 0x14);
  piVar8 = *(int **)(unaff_r5 + 0x208);
  uVar3 = __floatsisf(*(undefined4 *)(iVar2 + 0xc));
  uVar4 = __mulsf3(*(undefined4 *)(unaff_r5 + 0xf10),DAT_0014a798);
  __subsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
  uVar5 = __mulsf3(*(undefined4 *)(unaff_r5 + DAT_0014a79c),DAT_0014a798);
  __subsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  (**(code **)(*piVar8 + 0x14))(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(unaff_r5 + 0x200);
  if (piVar8 == (int *)0x0) {
    FUN_0014a95a();
    return;
  }
  iVar2 = *(int *)(unaff_r5 + 0x1f8);
  iVar7 = *piVar8;
  uVar3 = __floatsisf(*(int *)(iVar2 + 4) - *(int *)(iVar2 + 0xc) / 2);
  uVar4 = __mulsf3(*(undefined4 *)(unaff_r5 + 0xf10),DAT_0014a798);
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0x10) / 2);
  uVar5 = __mulsf3(*(undefined4 *)(unaff_r5 + DAT_0014a79c),DAT_0014a798);
  __addsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  (**(code **)(iVar7 + 0x14))(piVar8,uVar3,uVar4);
  FUN_0014a95a();
  return;
}


