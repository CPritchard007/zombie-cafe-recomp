/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00174bbc GameStateOptions::layout */

/* GameStateOptions::layout() */

void __thiscall GameStateOptions::layout(GameStateOptions *this)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  ScreenElement *pSVar15;
  int local_2c;
  int local_20;
  
  iVar10 = DAT_00174ec8;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar10 = iVar10 + 0x174bde;
  FUN_00174ba8(*(undefined4 *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  iVar3 = ZombieCafe::isTwitter_basicEventInfo();
  iVar14 = *(int *)(this + 0xc);
  if (iVar3 == 0) {
    local_2c = (int)*(short *)(iVar14 + 0x16) / 2;
    local_20 = (*(short *)(iVar14 + 0x16) * 3) / 2;
  }
  else {
    sVar1 = *(short *)(iVar14 + 0x16);
    sVar2 = __divsi3((int)sVar1,3);
    local_2c = (int)sVar2;
    local_20 = __divsi3(sVar1 * 5,3);
  }
  iVar5 = (int)*(short *)(iVar14 + 0x16);
  iVar3 = SmDev();
  uVar11 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar10 + DAT_00174ecc));
  iVar3 = SmDev();
  iVar6 = *(int *)(iVar10 + DAT_00174ed0);
  __addsf3(uVar11,*(undefined4 *)(iVar3 * 4 + iVar6));
  iVar3 = __fixsfsi();
  piVar12 = *(int **)(this + 0x20);
  pcVar7 = *(code **)(*piVar12 + 0x14);
  iVar8 = piVar12[3];
  iVar14 = SmDev();
  uVar11 = __fixsfsi(*(undefined4 *)(iVar14 * 4 + *(int *)(iVar10 + DAT_00174ed4)));
  (*pcVar7)(piVar12,(iVar5 - iVar8 / 2) + -0x5a,uVar11);
  iVar3 = iVar3 + *(int *)(*(int *)(this + 0x20) + 0x10) + *(int *)(*(int *)(this + 0x24) + 0x10);
  (**(code **)(**(int **)(this + 0x74) + 0x14))(*(int **)(this + 0x74),iVar5,iVar3);
  uVar9 = *(undefined4 *)(this + 0x24);
  pSVar15 = *(ScreenElement **)(this + 0x74);
  iVar14 = SmDev();
  iVar13 = *(int *)(iVar10 + DAT_00174ed8);
  iVar14 = __fixsfsi(*(undefined4 *)(iVar14 * 4 + iVar13));
  uVar11 = ScreenElement::localToParentCoords(pSVar15,0,iVar14);
  FUN_00174ba8(uVar9,uVar11);
  pSVar15 = *(ScreenElement **)(this + 0x74);
  uVar9 = *(undefined4 *)(this + 0x28);
  iVar8 = *(int *)(pSVar15 + 0xc);
  iVar14 = SmDev();
  iVar14 = __fixsfsi(*(undefined4 *)(iVar14 * 4 + iVar13));
  uVar11 = ScreenElement::localToParentCoords(pSVar15,iVar8,iVar14);
  FUN_00174ba8(uVar9,uVar11);
  uVar11 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x74) + 0x10));
  iVar14 = SmDev();
  uVar9 = __floatsisf(iVar3);
  uVar11 = __addsf3(uVar11,*(undefined4 *)(iVar14 * 4 + iVar6));
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x2c) + 0x10));
  uVar11 = __addsf3(uVar11,uVar4);
  __addsf3(uVar9,uVar11);
  uVar11 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x78) + 0x14))(*(int **)(this + 0x78),iVar5,uVar11);
  uVar4 = *(undefined4 *)(this + 0x2c);
  pSVar15 = *(ScreenElement **)(this + 0x78);
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + iVar13));
  uVar9 = ScreenElement::localToParentCoords(pSVar15,0,iVar3);
  FUN_00174ba8(uVar4,uVar9);
  pSVar15 = *(ScreenElement **)(this + 0x78);
  uVar4 = *(undefined4 *)(this + 0x30);
  iVar14 = *(int *)(pSVar15 + 0xc);
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + iVar13));
  uVar9 = ScreenElement::localToParentCoords(pSVar15,iVar14,iVar3);
  FUN_00174ba8(uVar4,uVar9);
  uVar9 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x78) + 0x10));
  iVar3 = SmDev();
  uVar11 = __floatsisf(uVar11);
  iVar14 = *(int *)(iVar10 + DAT_00174edc);
  uVar9 = __addsf3(uVar9,*(undefined4 *)(iVar3 * 4 + iVar14));
  __addsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x40) + 0x14))(*(int **)(this + 0x40),local_2c,uVar11);
  (**(code **)(**(int **)(this + 0x48) + 0x14))(*(int **)(this + 0x48),local_20,uVar11);
  uVar9 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x40) + 0x10));
  iVar3 = SmDev();
  uVar11 = __floatsisf(uVar11);
  uVar9 = __addsf3(uVar9,*(undefined4 *)(iVar3 * 4 + iVar14));
  __addsf3(uVar11,uVar9);
  uVar11 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x44) + 0x14))(*(int **)(this + 0x44),iVar5,uVar11);
  piVar12 = *(int **)(this + 0x58);
  pcVar7 = *(code **)(*piVar12 + 0x14);
  iVar3 = SmDev();
  uVar11 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar10 + DAT_00174ee0)));
  iVar3 = SmDev();
  uVar9 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar10 + DAT_00174ee4)));
  (*pcVar7)(piVar12,uVar11,uVar9);
  iVar10 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + DAT_00174ee8));
  (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),iVar10 == 0);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),iVar10 != 0);
  FUN_00174ba8(*(undefined4 *)(this + 0xa4),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar12 = *(int **)(this + 0xa4);
  (**(code **)(*piVar12 + 0x1c))(piVar12,0x12);
  FUN_00174ba8(*(undefined4 *)(this + 0x7c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_00174ba8(*(undefined4 *)(this + 0x98),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  if (*(int *)(this + 0x80) != 0) {
    FUN_00174ba8(*(int *)(this + 0x80),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    WaitDialog::layout();
  }
  return;
}


