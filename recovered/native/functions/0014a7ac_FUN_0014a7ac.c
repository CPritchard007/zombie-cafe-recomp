/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014a7ac FUN_0014a7ac */

void FUN_0014a7ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_r3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int *piVar3;
  int iVar4;
  int unaff_r7;
  code *pcStack00000000;
  int iStack00000004;
  
  piVar3 = *(int **)(unaff_r5 + unaff_r6);
  iStack00000004 = (int)*(short *)(in_r3 + 0x16);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(unaff_r4 + iVar1 * 4 + 0x18),*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 500);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iStack00000004 = (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x16);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(unaff_r4 + iVar1 * 4 + 0x30),*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 0x1f0);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iStack00000004 = (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x16);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(unaff_r4 + iVar1 * 4 + 0x48),*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 0x1f8);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(unaff_r4 + iVar1 * 4 + 0x60));
  __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + 0xf10));
  iStack00000004 = __fixsfsi();
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(unaff_r4 + iVar1 * 4 + 0x78));
  __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 0x1fc);
  iVar4 = DAT_0014a960 + 0x14a896;
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iStack00000004 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0xc) / 2;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar4 + iVar1 * 4 + 0x10));
  __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 0x208);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0014a964 + 0x14a8e0)),
           *(undefined4 *)(unaff_r5 + 0xf10));
  iStack00000004 = __fixsfsi();
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0014a968 + 0x14a8fe)),
           *(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  piVar3 = *(int **)(unaff_r5 + 0x20c);
  pcStack00000000 = *(code **)(*piVar3 + 0x14);
  iStack00000004 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0xc) / 2;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar4 + iVar1 * 4 + 0x28));
  __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + unaff_r7));
  uVar2 = __fixsfsi();
  (*pcStack00000000)(piVar3,iStack00000004,uVar2);
  (**(code **)(**(int **)(unaff_r5 + 0x20c) + 0x20))(*(int **)(unaff_r5 + 0x20c),1);
  return;
}


