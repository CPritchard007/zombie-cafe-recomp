/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00161070 GameStateMainMenu::layout */

/* GameStateMainMenu::layout() */

void __thiscall GameStateMainMenu::layout(GameStateMainMenu *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar11 = DAT_00161384 + 0x16108c;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  FUN_0016105c(*(undefined4 *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar12 = *(int **)(this + 0x44);
  if ((int)(short)*(int *)(*(int *)(this + 0xc) + 0x10) <
      *(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10) {
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    uVar15 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_00161388)));
    iVar7 = SmDev();
    uVar6 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_0016138c)));
    (*pcVar10)(piVar12,uVar15,uVar6);
    piVar12 = *(int **)(this + 0x68);
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    iVar8 = *(int *)(iVar11 + DAT_00161390);
    uVar15 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar8));
    iVar7 = SmDev();
    uVar6 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_00161394)));
    (*pcVar10)(piVar12,uVar15,uVar6);
    piVar12 = *(int **)(this + 0x6c);
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    iVar9 = *(int *)(iVar11 + DAT_00161398);
    uVar15 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar9));
    iVar7 = SmDev();
    iVar13 = *(int *)(iVar11 + DAT_0016139c);
    uVar6 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar13));
    (*pcVar10)(piVar12,uVar15,uVar6);
    piVar12 = *(int **)(this + 100);
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    uVar15 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar9));
    iVar7 = SmDev();
    uVar6 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
    __subsf3(*(undefined4 *)(iVar7 * 4 + iVar13),uVar6);
    uVar6 = __fixsfsi();
    (*pcVar10)(piVar12,uVar15,uVar6);
    piVar12 = *(int **)(this + 0x70);
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar7 = SmDev();
    uVar15 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar8));
    iVar7 = SmDev();
    uVar6 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar13));
    (*pcVar10)(piVar12,uVar15,uVar6);
    iVar7 = SmDev();
    iVar8 = *(int *)(iVar11 + DAT_001613a0);
    uVar1 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + iVar8));
    uVar15 = __floatsisf(uVar1 + *(int *)(*(int *)(this + 0x48) + 0xc));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + iVar8));
    uVar2 = __fixsfsi();
    uVar15 = __floatsisf(uVar2 + *(int *)(*(int *)(this + 0x4c) + 0xc));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + iVar8));
    uVar3 = __fixsfsi();
    uVar15 = __floatsisf(uVar3 + *(int *)(*(int *)(this + 0x50) + 0xc));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + iVar8));
    uVar4 = __fixsfsi();
    iVar8 = *(int *)(this + 0x48);
    uVar14 = *(uint *)(*(int *)(this + 0xc) + 0x10);
    uVar15 = __floatsisf(*(undefined4 *)(iVar8 + 0x10));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001613a4)));
    uVar5 = __fixsfsi();
    FUN_0016105c(iVar8,uVar14 - (uVar5 & 0xffff) & 0xffff |
                       ((uVar14 >> 0x10) - (uVar1 & 0xffff)) * 0x10000);
    iVar8 = *(int *)(this + 0x4c);
    uVar5 = *(uint *)(*(int *)(this + 0xc) + 0x10);
    uVar15 = __floatsisf(*(undefined4 *)(iVar8 + 0x10));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001613a8)));
    uVar1 = __fixsfsi();
    FUN_0016105c(iVar8,((uVar5 >> 0x10) - (uVar2 & 0xffff)) * 0x10000 |
                       uVar5 - (uVar1 & 0xffff) & 0xffff);
    iVar8 = *(int *)(this + 0x50);
    uVar2 = *(uint *)(*(int *)(this + 0xc) + 0x10);
    uVar15 = __floatsisf(*(undefined4 *)(iVar8 + 0x10));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001613ac)));
    uVar1 = __fixsfsi();
    FUN_0016105c(iVar8,((uVar2 >> 0x10) - (uVar3 & 0xffff)) * 0x10000 |
                       uVar2 - (uVar1 & 0xffff) & 0xffff);
    iVar8 = *(int *)(this + 0x54);
    uVar2 = *(uint *)(*(int *)(this + 0xc) + 0x10);
    uVar15 = __floatsisf(*(undefined4 *)(iVar8 + 0x10));
    iVar7 = SmDev();
    __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001613b0)));
    uVar1 = __fixsfsi();
    FUN_0016105c(iVar8,((uVar2 >> 0x10) - (uVar4 & 0xffff)) * 0x10000 |
                       uVar2 - (uVar1 & 0xffff) & 0xffff);
    piVar12 = *(int **)(this + 0x60);
    if (piVar12 != (int *)0x0) {
      iVar7 = *piVar12;
      uVar15 = __fixsfsi(**(undefined4 **)(iVar11 + DAT_001613b4));
      uVar6 = __fixsfsi(**(undefined4 **)(iVar11 + DAT_001613b8));
      (**(code **)(iVar7 + 0x14))(piVar12,uVar15,uVar6);
    }
    piVar12 = *(int **)(this + 0x2c);
    iVar7 = 0;
    iVar8 = 0;
    pcVar10 = *(code **)(*piVar12 + 0x14);
  }
  else {
    (**(code **)(*piVar12 + 0x14))(piVar12,0,0);
    piVar12 = *(int **)(this + 0x54);
    iVar7 = (*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10) - piVar12[3];
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar8 = (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10) - piVar12[4];
  }
  (*pcVar10)(piVar12,iVar7,iVar8);
  FUN_0016105c(*(undefined4 *)(this + 0x90),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  FUN_0016105c(*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x138));
  piVar12 = *(int **)(this + 0x30);
  pcVar10 = *(code **)(*piVar12 + 0x14);
  iVar7 = SmDev();
  uVar15 = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001614c4));
  iVar7 = SmDev();
  __addsf3(uVar15,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001614c8)));
  uVar15 = __fixsfsi();
  iVar7 = SmDev();
  uVar6 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_001614cc)));
  (*pcVar10)(piVar12,uVar15,uVar6);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
  iVar11 = ZombieCafe::getTitleNewsId();
  iVar7 = ZombieCafe::getNewsId_basicEventInfo(*(ZombieCafe **)(this + 0xc));
  if ((iVar11 == iVar7) || (iVar11 = ZombieCafe::getTitleNewsId(), iVar11 == 0)) {
    piVar12 = *(int **)(this + 100);
    uVar15 = 0;
    pcVar10 = *(code **)(*piVar12 + 0x20);
  }
  else {
    piVar12 = *(int **)(this + 100);
    uVar15 = 1;
    pcVar10 = *(code **)(*piVar12 + 0x20);
  }
  (*pcVar10)(piVar12,uVar15);
  FUN_0016105c(*(undefined4 *)(this + 0x84),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  FUN_0016105c(*(undefined4 *)(this + 0x74),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_0016105c(*(undefined4 *)(this + 0x140),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  SaveDataConfirmDialog::layout(*(SaveDataConfirmDialog **)(this + 0x140));
  L_PrintLog((char *)(DAT_001614d0 + 0x1614b0),(char *)(DAT_001614d4 + 0x1614b2));
  return;
}


