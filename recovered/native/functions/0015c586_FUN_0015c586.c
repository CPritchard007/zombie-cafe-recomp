/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c586 FUN_0015c586 */

void FUN_0015c586(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_r3;
  code *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r5;
  int unaff_r6;
  bool bVar12;
  undefined4 in_stack_00000028;
  
  *(undefined4 *)(unaff_r5 + DAT_0015c8e8) = in_r3;
  if (*(int *)(unaff_r5 + DAT_0015c8e8) != 0x1000) {
    FUN_0015cd8a();
  }
  iVar3 = DAT_0015c8ec;
  piVar10 = *(int **)(unaff_r5 + 0x28);
  iVar8 = *piVar10;
  uVar2 = __floatsisf(piVar10[2]);
  __addsf3(uVar2,*(undefined4 *)(unaff_r5 + iVar3));
  uVar2 = __fixsfsi();
  (**(code **)(iVar8 + 0x14))(piVar10,0,uVar2);
  uVar6 = *(undefined4 *)(unaff_r5 + iVar3);
  puVar11 = *(undefined4 **)(unaff_r6 + DAT_0015c8f0);
  uVar2 = __floatsisf(in_stack_00000028);
  uVar2 = __mulsf3(uVar2,*puVar11);
  iVar3 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar3 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  uVar2 = __mulsf3(uVar6,uVar2);
  iVar8 = DAT_0015c8f8;
  iVar3 = DAT_0015c8f4;
  *(undefined4 *)(unaff_r5 + DAT_0015c8ec) = uVar2;
  uVar2 = __floatsisf(*(undefined4 *)(unaff_r5 + iVar3));
  uVar6 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x14) + 0x10));
  iVar3 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar3 * 4 + DAT_0015c8fc + 0x15c61c));
  uVar4 = __mulsf3(uVar4,*(undefined4 *)(unaff_r5 + iVar8));
  uVar6 = __subsf3(uVar6,uVar4);
  __subsf3(uVar2,uVar6);
  uVar5 = __fixsfsi();
  uVar5 = uVar5 & (int)~uVar5 >> 0x1f;
  iVar8 = *(int *)(unaff_r5 + DAT_0015c8ec);
  iVar3 = __aeabi_fcmpge(iVar8,0);
  if (iVar3 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  iVar3 = __aeabi_fcmplt(iVar8,**(undefined4 **)(unaff_r6 + DAT_0015c900));
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_r5 + DAT_0015c8ec) = 0;
  }
  piVar10 = *(int **)(unaff_r5 + 0x28);
  iVar3 = piVar10[2];
  if (iVar3 < 0) {
    iVar8 = -uVar5;
    if (iVar3 != iVar8 && (int)(iVar3 + uVar5) < 0 == SBORROW4(iVar3,iVar8)) goto LAB_0015c68e;
    pcVar9 = *(code **)(*piVar10 + 0x14);
  }
  else {
    iVar8 = 0;
    pcVar9 = *(code **)(*piVar10 + 0x14);
  }
  (*pcVar9)(piVar10,0,iVar8);
LAB_0015c68e:
  *(undefined4 *)(unaff_r5 + DAT_0015c904) = *(undefined4 *)(*(int *)(unaff_r5 + 0x28) + 8);
  piVar10 = *(int **)(unaff_r5 + 0xa0);
  if (piVar10 != (int *)0x0) {
    iVar8 = piVar10[4] * *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015c908);
    uVar7 = iVar8 >> 0x1f;
    pcVar9 = *(code **)(*piVar10 + 0x14);
    sVar1 = *(short *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    iVar3 = SmDev();
    uVar2 = __floatsisf(*(undefined4 *)(iVar3 * 4 + DAT_0015c90c + 0x15c6d2));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + DAT_0015c8f8));
    uVar6 = __floatsisf((iVar8 >> 0x12) + uVar7 ^ uVar7);
    __subsf3(uVar2,uVar6);
    uVar2 = __fixsfsi();
    (*pcVar9)(piVar10,(int)sVar1 / 2,uVar2);
    piVar10 = *(int **)(unaff_r5 + 0xa0);
    iVar3 = *(int *)(*(int *)(unaff_r5 + 0x28) + 8);
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    (**(code **)(*piVar10 + 0x20))(piVar10,iVar3);
  }
  piVar10 = *(int **)(unaff_r5 + 0xa4);
  if (piVar10 == (int *)0x0) {
    FUN_0015cd8a();
    return;
  }
  iVar3 = *(int *)(unaff_r5 + 0xc);
  iVar8 = *piVar10;
  sVar1 = *(short *)(iVar3 + 0x12);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x14) + 0x10));
  uVar6 = __mulsf3(*(undefined4 *)(unaff_r5 + DAT_0015c8f8),DAT_0015c910);
  uVar2 = __subsf3(uVar2,uVar6);
  iVar3 = *(int *)(iVar3 + DAT_0015c908) * piVar10[4];
  uVar7 = iVar3 >> 0x1f;
  uVar6 = __floatsisf((iVar3 >> 0x12) + uVar7 ^ uVar7);
  __addsf3(uVar2,uVar6);
  uVar2 = __fixsfsi();
  (**(code **)(iVar8 + 0x14))(piVar10,(int)sVar1 / 2,uVar2);
  piVar10 = *(int **)(unaff_r5 + 0xa4);
  bVar12 = *(int *)(*(int *)(unaff_r5 + 0x28) + 8) != -uVar5;
  if (bVar12) {
    pcVar9 = *(code **)(*piVar10 + 0x20);
  }
  else {
    pcVar9 = *(code **)(*piVar10 + 0x20);
  }
  (*pcVar9)(piVar10,bVar12);
  FUN_0015cd8a();
  return;
}


