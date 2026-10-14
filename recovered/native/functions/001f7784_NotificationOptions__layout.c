/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7784 NotificationOptions::layout */

/* NotificationOptions::layout() */

void __thiscall NotificationOptions::layout(NotificationOptions *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  NotificationOptions *pNVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  
  iVar15 = DAT_001f7b6c + 0x1f7790;
  iVar1 = SmDev();
  if ((iVar1 == 0) || (iVar1 = SmDev(), iVar1 == 5)) {
    iVar1 = DAT_001f7b74;
    piVar11 = *(int **)(iVar15 + DAT_001f7b70);
    iVar4 = *(int *)(*(int *)(this + 0x7c) + 0xc) + *piVar11;
    *(int *)(this + 0xc) = iVar4;
    piVar14 = *(int **)(iVar15 + iVar1);
    *(int *)(this + 0x10) = *(int *)(*(int *)(this + 0x7c) + 0x10) + *piVar14;
    (**(code **)(**(int **)(this + 0x78) + 0x14))(*(int **)(this + 0x78),iVar4,0);
    piVar13 = *(int **)(this + 0x7c);
    iVar1 = *(int *)(this + 0xc) - *piVar11;
    pcVar10 = *(code **)(*piVar13 + 0x14);
    iVar4 = *piVar14;
  }
  else {
    piVar13 = *(int **)(this + 0x78);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(*(int *)(this + 0x7c) + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 0x7c) + 0x10);
    pcVar10 = *(code **)(*piVar13 + 0x14);
    iVar1 = SmDev();
    uVar2 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7cf8)));
    iVar1 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7cfc)));
    (*pcVar10)(piVar13,uVar2,uVar3);
    piVar13 = *(int **)(this + 0x7c);
    iVar1 = *(int *)(this + 0xc);
    iVar4 = 0;
    pcVar10 = *(code **)(*piVar13 + 0x14);
  }
  (*pcVar10)(piVar13,iVar1,iVar4);
  piVar13 = *(int **)(this + 0x80);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar1 = SmDev();
  uVar2 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7b78));
  iVar1 = SmDev();
  (*pcVar10)(piVar13,uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7b7c)));
  (**(code **)(**(int **)(this + 0x80) + 0x1c))(*(int **)(this + 0x80),9);
  piVar13 = *(int **)(this + 0x80);
  pcVar10 = *(code **)(*piVar13 + 0x18);
  iVar1 = SmDev();
  iVar5 = *(int *)(iVar15 + DAT_001f7b80);
  uVar2 = *(undefined4 *)(iVar1 * 4 + iVar5);
  iVar1 = SmDev();
  (*pcVar10)(piVar13,uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7b84)));
  (**(code **)(**(int **)(this + 0x84) + 0x14))(*(int **)(this + 0x84),0,0);
  (**(code **)(**(int **)(this + 0x84) + 0x1c))(*(int **)(this + 0x84),9);
  iVar1 = SmDev();
  iVar1 = *(int *)(iVar1 * 4 + *(int *)(iVar15 + DAT_001f7b88));
  piVar13 = *(int **)(this + 0x88);
  (**(code **)(*piVar13 + 0x14))(piVar13,0,iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0x8c) + 0x14);
  iVar4 = SmDev();
  iVar6 = *(int *)(this + 0x8c);
  (*pcVar10)(iVar6,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0x88) + 0x10) / 2) - *(int *)(iVar6 + 0x10) / 2);
  iVar4 = SmDev();
  iVar7 = *(int *)(iVar15 + DAT_001f7b8c);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  (**(code **)(**(int **)(this + 0x90) + 0x14))(*(int **)(this + 0x90),0,iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0x94) + 0x14);
  iVar4 = SmDev();
  iVar6 = *(int *)(this + 0x94);
  (*pcVar10)(iVar6,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0x90) + 0x10) / 2) - *(int *)(iVar6 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0x98);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  iVar6 = *(int *)(iVar15 + DAT_001f7b90);
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0x9c) + 0x14);
  iVar4 = SmDev();
  iVar8 = *(int *)(this + 0x9c);
  (*pcVar10)(iVar8,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0x98) + 0x10) / 2) - *(int *)(iVar8 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0xa0);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0xa4) + 0x14);
  iVar4 = SmDev();
  iVar8 = *(int *)(this + 0xa4);
  (*pcVar10)(iVar8,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0xa0) + 0x10) / 2) - *(int *)(iVar8 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0xa8);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0xac) + 0x14);
  iVar4 = SmDev();
  iVar8 = *(int *)(this + 0xac);
  (*pcVar10)(iVar8,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0xa8) + 0x10) / 2) - *(int *)(iVar8 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0xb0);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0xb4) + 0x14);
  iVar4 = SmDev();
  iVar8 = *(int *)(this + 0xb4);
  (*pcVar10)(iVar8,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0xb0) + 0x10) / 2) - *(int *)(iVar8 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0xb8);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0xbc) + 0x14);
  iVar4 = SmDev();
  iVar8 = *(int *)(this + 0xbc);
  (*pcVar10)(iVar8,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0xb8) + 0x10) / 2) - *(int *)(iVar8 + 0x10) / 2);
  iVar4 = SmDev();
  piVar13 = *(int **)(this + 0xc0);
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  pcVar10 = *(code **)(*piVar13 + 0x14);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar6),iVar1);
  pcVar10 = *(code **)(**(int **)(this + 0xc4) + 0x14);
  iVar4 = SmDev();
  iVar6 = *(int *)(this + 0xc4);
  (*pcVar10)(iVar6,*(undefined4 *)(iVar4 * 4 + iVar5),
             (iVar1 + *(int *)(*(int *)(this + 0xc0) + 0x10) / 2) - *(int *)(iVar6 + 0x10) / 2);
  iVar4 = SmDev();
  pNVar12 = this + 200;
  iVar1 = iVar1 + *(int *)(iVar4 * 4 + iVar7);
  iVar4 = SmDev();
  iVar4 = *(int *)(iVar4 * 4 + *(int *)(iVar15 + DAT_001f7b94));
  (**(code **)(**(int **)pNVar12 + 0x14))(*(int **)pNVar12,iVar4,iVar1);
  iVar8 = *(int *)(*(int *)pNVar12 + 0xc);
  iVar6 = SmDev();
  iVar9 = *(int *)(iVar15 + DAT_001f7cec);
  iVar4 = iVar4 + iVar8 + *(int *)(iVar6 * 4 + iVar9);
  (**(code **)(**(int **)(this + 0xcc) + 0x14))
            (*(int **)(this + 0xcc),*(int *)(*(int *)pNVar12 + 0xc) / 2,
             *(int *)(*(int *)pNVar12 + 0x10) / 2);
  piVar13 = *(int **)(this + 0xd0);
  (**(code **)(*piVar13 + 0x14))(piVar13,iVar4,iVar1);
  iVar8 = *(int *)(*(int *)(this + 0xd0) + 0xc);
  iVar6 = SmDev();
  (**(code **)(**(int **)(this + 0xd4) + 0x14))
            (*(int **)(this + 0xd4),iVar4 + iVar8 + *(int *)(iVar6 * 4 + iVar9),iVar1);
  (**(code **)(**(int **)(this + 0xd8) + 0x14))
            (*(int **)(this + 0xd8),*(int *)(*(int *)(this + 0xd4) + 0xc) / 2,
             *(int *)(*(int *)(this + 0xd4) + 0x10) / 2);
  iVar4 = SmDev();
  iVar6 = *(int *)(iVar4 * 4 + iVar7);
  piVar13 = *(int **)(this + 0x84);
  pcVar10 = *(code **)(*piVar13 + 0x18);
  iVar4 = SmDev();
  (*pcVar10)(piVar13,*(undefined4 *)(iVar4 * 4 + iVar5),iVar1 + iVar6);
  piVar13 = *(int **)(iVar15 + DAT_001f7cf0);
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),(*(int *)(this + 0xc) - *piVar13) / 2,
             **(undefined4 **)(iVar15 + DAT_001f7cf4));
  (**(code **)(**(int **)(this + 0x74) + 0x14))
            (*(int **)(this + 0x74),(*(int *)(this + 0xc) - *piVar13) / 2,
             *(undefined4 *)(this + 0x10));
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
  return;
}


