/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cb28 FUN_0015cb28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015cb28(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  bool bVar12;
  undefined4 in_stack_00000028;
  
  iVar5 = javaIsConnected();
  if (iVar5 != 0) {
    FUN_0015ad34();
  }
  FUN_0015adb2();
  if (**(char **)(unaff_r6 + DAT_0015cda4) == '\0') {
    FUN_0015b076();
  }
  FUN_0015b0ba();
  if (**(char **)(unaff_r6 + DAT_0015cda8) == '\0') {
    FUN_0015b384();
  }
  FUN_0015b3be();
  iVar5 = _DAT_0015c56c;
  if (*(char *)(unaff_r4 + DAT_0015cdac) != '\0') {
    FUN_0015c58a();
    return;
  }
  if (*(int *)(unaff_r4 + 0x4b8) != 0) {
    if ((int)**(short **)(unaff_r6 + _DAT_0015c564) < *(int *)(unaff_r4 + _DAT_0015c568)) {
      uVar2 = __floatsisf((int)(short)*(int *)(unaff_r4 + 0x4b8) -
                          (int)*(short *)(unaff_r4 + _DAT_0015c570));
      *(undefined4 *)(unaff_r5 + iVar5) = uVar2;
      *(undefined1 *)(unaff_r4 + _DAT_0015c574) = 1;
      FUN_0015c58a();
      return;
    }
    *(undefined4 *)(unaff_r5 + _DAT_0015c56c) = 0;
    FUN_0015c58a();
    return;
  }
  if (*(int *)(unaff_r5 + DAT_0015c8e8) != 0x1000) {
    FUN_0015cd8a();
  }
  iVar5 = DAT_0015c8ec;
  piVar10 = *(int **)(unaff_r5 + 0x28);
  iVar8 = *piVar10;
  uVar2 = __floatsisf(piVar10[2]);
  __addsf3(uVar2,*(undefined4 *)(unaff_r5 + iVar5));
  uVar2 = __fixsfsi();
  (**(code **)(iVar8 + 0x14))(piVar10,0,uVar2);
  uVar6 = *(undefined4 *)(unaff_r5 + iVar5);
  puVar11 = *(undefined4 **)(unaff_r6 + DAT_0015c8f0);
  uVar2 = __floatsisf(in_stack_00000028);
  uVar2 = __mulsf3(uVar2,*puVar11);
  iVar5 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar5 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  uVar2 = __mulsf3(uVar6,uVar2);
  iVar8 = DAT_0015c8f8;
  iVar5 = DAT_0015c8f4;
  *(undefined4 *)(unaff_r5 + DAT_0015c8ec) = uVar2;
  uVar2 = __floatsisf(*(undefined4 *)(unaff_r5 + iVar5));
  uVar6 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x14) + 0x10));
  iVar5 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 * 4 + DAT_0015c8fc + 0x15c61c));
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(unaff_r5 + iVar8));
  uVar6 = __subsf3(uVar6,uVar3);
  __subsf3(uVar2,uVar6);
  uVar4 = __fixsfsi();
  uVar4 = uVar4 & (int)~uVar4 >> 0x1f;
  iVar8 = *(int *)(unaff_r5 + DAT_0015c8ec);
  iVar5 = __aeabi_fcmpge(iVar8,0);
  if (iVar5 == 0) {
    iVar8 = iVar8 + -0x80000000;
  }
  iVar5 = __aeabi_fcmplt(iVar8,**(undefined4 **)(unaff_r6 + DAT_0015c900));
  if (iVar5 != 0) {
    *(undefined4 *)(unaff_r5 + DAT_0015c8ec) = 0;
  }
  piVar10 = *(int **)(unaff_r5 + 0x28);
  iVar5 = piVar10[2];
  if (iVar5 < 0) {
    iVar8 = -uVar4;
    if (iVar5 != iVar8 && (int)(iVar5 + uVar4) < 0 == SBORROW4(iVar5,iVar8)) goto LAB_0015c68e;
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
    iVar5 = SmDev();
    uVar2 = __floatsisf(*(undefined4 *)(iVar5 * 4 + DAT_0015c90c + 0x15c6d2));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(unaff_r5 + DAT_0015c8f8));
    uVar6 = __floatsisf((iVar8 >> 0x12) + uVar7 ^ uVar7);
    __subsf3(uVar2,uVar6);
    uVar2 = __fixsfsi();
    (*pcVar9)(piVar10,(int)sVar1 / 2,uVar2);
    piVar10 = *(int **)(unaff_r5 + 0xa0);
    iVar5 = *(int *)(*(int *)(unaff_r5 + 0x28) + 8);
    if (iVar5 != 0) {
      iVar5 = 1;
    }
    (**(code **)(*piVar10 + 0x20))(piVar10,iVar5);
  }
  piVar10 = *(int **)(unaff_r5 + 0xa4);
  if (piVar10 == (int *)0x0) {
    FUN_0015cd8a();
    return;
  }
  iVar5 = *(int *)(unaff_r5 + 0xc);
  iVar8 = *piVar10;
  sVar1 = *(short *)(iVar5 + 0x12);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x14) + 0x10));
  uVar6 = __mulsf3(*(undefined4 *)(unaff_r5 + DAT_0015c8f8),DAT_0015c910);
  uVar2 = __subsf3(uVar2,uVar6);
  iVar5 = *(int *)(iVar5 + DAT_0015c908) * piVar10[4];
  uVar7 = iVar5 >> 0x1f;
  uVar6 = __floatsisf((iVar5 >> 0x12) + uVar7 ^ uVar7);
  __addsf3(uVar2,uVar6);
  uVar2 = __fixsfsi();
  (**(code **)(iVar8 + 0x14))(piVar10,(int)sVar1 / 2,uVar2);
  piVar10 = *(int **)(unaff_r5 + 0xa4);
  bVar12 = *(int *)(*(int *)(unaff_r5 + 0x28) + 8) != -uVar4;
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


