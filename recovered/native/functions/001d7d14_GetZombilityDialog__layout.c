/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d7d14 GetZombilityDialog::layout */

/* GetZombilityDialog::layout() */

undefined8 GetZombilityDialog::layout(void)

{
  undefined2 uVar1;
  int in_r0;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  code *pcVar10;
  
  (**(code **)(**(int **)(in_r0 + 0x6c) + 0x20))(*(int **)(in_r0 + 0x6c),1);
  iVar2 = SmDev();
  iVar4 = *(int *)(in_r0 + 0x6c);
  piVar8 = *(int **)(in_r0 + 0x7c);
  if (iVar2 == 0) {
    piVar6 = *(int **)(DAT_001d7e44 + 0x1d7d3a);
    piVar7 = *(int **)(DAT_001d7e48 + 0x1d7d3e);
    iVar2 = *(int *)(iVar4 + 0xc) + *piVar6;
    *(int *)(in_r0 + 0xc) = iVar2;
    *(int *)(in_r0 + 0x10) = *(int *)(iVar4 + 0x10) + *piVar7;
    (**(code **)(*piVar8 + 0x14))(piVar8,iVar2,0);
    piVar8 = *(int **)(in_r0 + 0x6c);
    iVar2 = *(int *)(in_r0 + 0xc) - *piVar6;
    pcVar5 = *(code **)(*piVar8 + 0x14);
    iVar4 = *piVar7;
  }
  else {
    *(undefined4 *)(in_r0 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(in_r0 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    pcVar5 = *(code **)(*piVar8 + 0x14);
    iVar2 = SmDev();
    uVar9 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001d7e4c + 0x1d7d7c)));
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001d7e50 + 0x1d7d90)));
    (*pcVar5)(piVar8,uVar9,uVar3);
    piVar8 = *(int **)(in_r0 + 0x6c);
    iVar2 = *(int *)(in_r0 + 0xc);
    iVar4 = 0;
    pcVar5 = *(code **)(*piVar8 + 0x14);
  }
  (*pcVar5)(piVar8,iVar2,iVar4);
  piVar8 = *(int **)(in_r0 + 0x70);
  iVar4 = DAT_001d7e54 + 0x1d7db4;
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)(iVar4 + iVar2 * 4 + 0x14);
  iVar2 = SmDev();
  (*pcVar5)(piVar8,uVar9,*(undefined4 *)(iVar4 + iVar2 * 4 + 0x2c));
  piVar8 = *(int **)(in_r0 + 0x74);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)(iVar4 + iVar2 * 4 + 0x44);
  iVar2 = SmDev();
  (*pcVar5)(piVar8,uVar9,*(undefined4 *)(iVar4 + iVar2 * 4 + 0x5c));
  piVar8 = *(int **)(in_r0 + 0x78);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)(iVar4 + iVar2 * 4 + 0x74);
  iVar2 = SmDev();
  iVar4 = DAT_001d7e58 + 0x1d7e18;
  (*pcVar5)(piVar8,uVar9,*(undefined4 *)(iVar4 + iVar2 * 4 + 0xc));
  piVar8 = *(int **)(in_r0 + 0x80);
  pcVar10 = *(code **)(*piVar8 + 0xc);
  iVar2 = SmDev();
  uVar1 = *(undefined2 *)(iVar4 + iVar2 * 4 + 0x24);
  iVar2 = SmDev();
  (*pcVar10)(piVar8,CONCAT22(uVar1,*(undefined2 *)(iVar4 + iVar2 * 4 + 0x3c)));
  return CONCAT44(pcVar5,in_r0);
}


