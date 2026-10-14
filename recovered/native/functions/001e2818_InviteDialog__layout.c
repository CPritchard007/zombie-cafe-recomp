/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2818 InviteDialog::layout */

/* InviteDialog::layout() */

void __thiscall InviteDialog::layout(InviteDialog *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  InviteDialog *pIVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  InviteDialog *pIVar14;
  int *piVar15;
  undefined4 uVar16;
  InviteDialog *pIVar17;
  
  iVar1 = CapcomApp::getInstance();
  uVar12 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar16 = *(undefined4 *)(iVar1 + 0x50);
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_001e2a48;
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x50);
  iVar1 = iVar1 + 0x1e283e;
  iVar2 = SmDev();
  if ((iVar2 == 0) || (iVar2 = SmDev(), iVar2 == 5)) {
    uVar12 = __mulsf3(uVar12,uVar16);
    uVar3 = __mulsf3(uVar3,uVar4);
    iVar2 = *(int *)(this + 0x88);
    uVar4 = __floatsisf(*(undefined4 *)(iVar2 + 0xc));
    puVar7 = *(undefined4 **)(iVar1 + DAT_001e2a4c);
    uVar16 = __floatsisf(*puVar7);
    uVar16 = __mulsf3(uVar16,uVar12);
    __addsf3(uVar4,uVar16);
    uVar4 = __fixsfsi();
    *(undefined4 *)(this + 0xc) = uVar4;
    uVar16 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
    puVar13 = *(undefined4 **)(iVar1 + DAT_001e2a50);
    uVar5 = __floatsisf(*puVar13);
    uVar5 = __mulsf3(uVar5,uVar3);
    __addsf3(uVar16,uVar5);
    uVar16 = __fixsfsi();
    *(undefined4 *)(this + 0x10) = uVar16;
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(*(int **)(this + 0xa8),uVar4,0);
    piVar15 = *(int **)(this + 0x88);
    iVar2 = *piVar15;
    uVar4 = __floatsisf(*(undefined4 *)(this + 0xc));
    uVar16 = __floatsisf(*puVar7);
    uVar12 = __mulsf3(uVar16,uVar12);
    __subsf3(uVar4,uVar12);
    uVar4 = __fixsfsi();
    uVar12 = __floatsisf(*puVar13);
    __mulsf3(uVar12,uVar3);
    uVar3 = __fixsfsi();
    pcVar11 = *(code **)(iVar2 + 0x14);
  }
  else {
    iVar2 = *(int *)(this + 0x88);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    piVar15 = *(int **)(this + 0xa8);
    pcVar11 = *(code **)(*piVar15 + 0x14);
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_001e2a5c)));
    iVar2 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_001e2a60)));
    (*pcVar11)(piVar15,uVar3,uVar4);
    piVar15 = *(int **)(this + 0x88);
    uVar4 = *(undefined4 *)(this + 0xc);
    uVar3 = 0;
    pcVar11 = *(code **)(*piVar15 + 0x14);
  }
  (*pcVar11)(piVar15,uVar4,uVar3);
  iVar2 = SmDev();
  if (iVar2 != 0) {
    SmDev();
  }
  SmDev();
  pIVar6 = this + 0x8c;
  piVar15 = *(int **)pIVar6;
  pIVar17 = this + 0x88;
  pcVar11 = *(code **)(*piVar15 + 0x14);
  iVar8 = *(int *)(*(int *)pIVar17 + 0xc);
  iVar9 = **(int **)(iVar1 + DAT_001e2a50);
  iVar10 = **(int **)(iVar1 + DAT_001e2a54);
  iVar2 = SmDev();
  pIVar14 = this + 0xc0;
  (*pcVar11)(piVar15,iVar8 / 2,iVar9 + *(int *)(iVar2 * 4 + iVar10));
  (**(code **)(**(int **)pIVar14 + 0x18))(*(int **)pIVar14,*(undefined4 *)(*(int *)pIVar6 + 0xc),3);
  (**(code **)(**(int **)pIVar14 + 0x1c))(*(int **)pIVar14,0x11);
  *(undefined4 *)(*(int *)pIVar14 + 0x18) = 0xffffffff;
  (**(code **)(**(int **)pIVar14 + 0x14))
            (*(int **)pIVar14,*(int *)(*(int *)pIVar17 + 0xc) / 2,
             *(int *)(*(int *)pIVar6 + 8) + *(int *)(*(int *)pIVar6 + 0x10));
  piVar15 = *(int **)(this + 0xb4);
  pcVar11 = *(code **)(*piVar15 + 0x14);
  iVar8 = *(int *)(*(int *)pIVar17 + 0xc);
  iVar2 = SmDev();
  (*pcVar11)(piVar15,iVar8 / 2,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_001e2a58)));
  (**(code **)(**(int **)(this + 200) + 0x14))
            (*(int **)(this + 200),*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) / 2);
  NoticeDialog::layout();
  return;
}


