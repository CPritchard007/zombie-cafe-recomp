/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00134118 GameStateChooseChef::layout */

/* GameStateChooseChef::layout() */

void __thiscall GameStateChooseChef::layout(GameStateChooseChef *this)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  GameStateChooseChef *pGVar13;
  ScreenElement *pSVar14;
  CImage *pCVar15;
  int iVar16;
  int local_1c;
  
  iVar2 = CapcomApp::getInstance();
  iVar10 = DAT_001342c4;
  uVar3 = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  iVar10 = iVar10 + 0x134134;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  FUN_00131c7c(*(undefined4 *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  (**(code **)(**(int **)(this + 0x2c) + 0x14))
            (*(int **)(this + 0x2c),(int)*(short *)(*(int *)(this + 0xc) + 0x16),
             *(undefined4 *)(*(int *)(this + 0x1c) + 0x10));
  piVar11 = *(int **)(this + 0x30);
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar2 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342c8)));
  iVar2 = SmDev();
  uVar6 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342cc)));
  (*pcVar7)(piVar11,uVar5,uVar6);
  if ((int)(short)*(int *)(*(int *)(this + 0xc) + 0x10) <
      *(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10) {
    L_PrintLog((char *)(DAT_001342d0 + 0x1341ac),(char *)(DAT_001342d4 + 0x1341ae));
    *(undefined4 *)(*(int *)(this + 0x20) + 100) = *(undefined4 *)(this + 0x40);
    pCVar15 = *(CImage **)(this + 0x40);
    piVar11 = *(int **)(this + 0x20);
    uVar5 = CImage::getWidth(pCVar15);
    uVar6 = CImage::getHeight(pCVar15);
    uVar5 = __floatsisf(uVar5);
    __mulsf3(uVar5,uVar3);
    uVar5 = __fixsfsi();
    uVar6 = __floatsisf(uVar6);
    __mulsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(*piVar11 + 0x18))(piVar11,uVar5,uVar6);
    (**(code **)(**(int **)(this + 0x20) + 0x1c))(*(int **)(this + 0x20),10);
    piVar11 = *(int **)(this + 0x20);
    pcVar7 = *(code **)(*piVar11 + 0x14);
    iVar2 = SmDev();
    uVar5 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342d8)));
    iVar2 = SmDev();
    uVar6 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342dc)));
    (*pcVar7)(piVar11,uVar5,uVar6);
    *(undefined4 *)(*(int *)(this + 0x28) + 100) = *(undefined4 *)(this + 0x48);
    pCVar15 = *(CImage **)(this + 0x48);
    piVar11 = *(int **)(this + 0x28);
    uVar5 = CImage::getWidth(pCVar15);
    uVar6 = CImage::getHeight(pCVar15);
    uVar5 = __floatsisf(uVar5);
    __mulsf3(uVar5,uVar3);
    uVar3 = __fixsfsi();
    uVar5 = __floatsisf(uVar6);
    uVar5 = __addsf3(uVar5,uVar5);
    __mulsf3(uVar5,uVar4);
    uVar4 = __fixsfsi();
    (**(code **)(*piVar11 + 0x18))(piVar11,uVar3,uVar4);
    (**(code **)(**(int **)(this + 0x28) + 0x1c))(*(int **)(this + 0x28),0x22);
    piVar11 = *(int **)(this + 0x28);
    pcVar7 = *(code **)(*piVar11 + 0x14);
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342e0)));
    iVar2 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001342e4)));
    (*pcVar7)(piVar11,uVar3,uVar4);
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x20) + 100) = *(undefined4 *)(this + 0x44);
    pCVar15 = *(CImage **)(this + 0x44);
    piVar11 = *(int **)(this + 0x20);
    uVar5 = CImage::getWidth(pCVar15);
    uVar6 = CImage::getHeight(pCVar15);
    uVar5 = __floatsisf(uVar5);
    __mulsf3(uVar5,uVar3);
    uVar5 = __fixsfsi();
    uVar6 = __floatsisf(uVar6);
    __mulsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(*piVar11 + 0x18))(piVar11,uVar5,uVar6);
    *(undefined4 *)(*(int *)(this + 0x28) + 100) = *(undefined4 *)(this + 0x4c);
    pCVar15 = *(CImage **)(this + 0x4c);
    piVar11 = *(int **)(this + 0x28);
    uVar5 = CImage::getWidth(pCVar15);
    uVar6 = CImage::getHeight(pCVar15);
    uVar5 = __floatsisf(uVar5);
    __mulsf3(uVar5,uVar3);
    uVar3 = __fixsfsi();
    uVar5 = __floatsisf(uVar6);
    uVar5 = __addsf3(uVar5,uVar5);
    __mulsf3(uVar5,uVar4);
    uVar4 = __fixsfsi();
    (**(code **)(*piVar11 + 0x18))(piVar11,uVar3,uVar4);
    iVar12 = (int)*(short *)(*(int *)(this + 0xc) + 0x16);
    piVar11 = *(int **)(this + 0x20);
    iVar2 = __divsi3(((((int)*(short *)(*(int *)(this + 0xc) + 0x10) - piVar11[4]) -
                      *(int *)(*(int *)(this + 0x28) + 0x10)) - *(int *)(*(int *)(this + 0x30) + 8))
                     - *(int *)(*(int *)(this + 0x30) + 0x10),3);
    (**(code **)(*piVar11 + 0x1c))(piVar11,0x11);
    (**(code **)(**(int **)(this + 0x20) + 0x14))
              (*(int **)(this + 0x20),iVar12,
               *(int *)(*(int *)(this + 0x30) + 8) + *(int *)(*(int *)(this + 0x30) + 0x10) + iVar2)
    ;
    (**(code **)(**(int **)(this + 0x28) + 0x1c))(*(int **)(this + 0x28),0x14);
    (**(code **)(**(int **)(this + 0x28) + 0x14))
              (*(int **)(this + 0x28),iVar12,*(short *)(*(int *)(this + 0xc) + 0x10) - iVar2);
  }
  piVar11 = *(int **)(this + 200);
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar16 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  iVar12 = *(int *)(iVar2 * 4 + *(int *)(iVar10 + DAT_00134660));
  iVar2 = SmDev();
  iVar8 = *(int *)(iVar10 + DAT_00134664);
  (*pcVar7)(piVar11,iVar16 - iVar12,*(undefined4 *)(iVar2 * 4 + iVar8));
  pGVar13 = this + 0xc4;
  piVar11 = *(int **)pGVar13;
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar12 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  iVar16 = *(int *)(iVar2 * 4 + *(int *)(iVar10 + DAT_00134668));
  iVar2 = SmDev();
  (*pcVar7)(piVar11,iVar12 - iVar16,*(undefined4 *)(iVar2 * 4 + iVar8));
  uVar4 = *(undefined4 *)(this + 0xcc);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)pGVar13 + 0xc));
  iVar2 = SmDev();
  pSVar14 = *(ScreenElement **)pGVar13;
  iVar12 = *(int *)(iVar10 + DAT_0013466c);
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar12));
  iVar2 = __fixsfsi();
  uVar3 = ScreenElement::localToParentCoords(pSVar14,iVar2,*(int *)(pSVar14 + 0x10) >> 1);
  pGVar13 = this + 0xc0;
  FUN_00131c7c(uVar4,uVar3);
  piVar11 = *(int **)pGVar13;
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar16 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  iVar9 = *(int *)(iVar2 * 4 + *(int *)(iVar10 + DAT_00134670));
  iVar2 = SmDev();
  (*pcVar7)(piVar11,iVar16 - iVar9,*(undefined4 *)(iVar2 * 4 + iVar8));
  uVar4 = *(undefined4 *)(this + 0xd0);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)pGVar13 + 0xc));
  iVar2 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar12));
  iVar2 = __fixsfsi();
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)pGVar13,iVar2,
                     *(int *)(*(ScreenElement **)pGVar13 + 0x10) >> 1);
  FUN_00131c7c(uVar4,uVar3);
  FUN_00131c7c(*(undefined4 *)(this + 0xd4),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_00131c7c(*(undefined4 *)(this + 0xe4),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  FUN_00131c7c(*(undefined4 *)(this + 0xe8),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x28) + 0xc));
  iVar2 = SmDev();
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(DAT_00134674 + iVar2 * 4 + 0x134556));
  __mulsf3(uVar3,0x3f000000);
  iVar2 = __fixsfsi();
  pSVar14 = *(ScreenElement **)(this + 0x28);
  iVar8 = *(int *)(this + 0x9c);
  uVar3 = __floatsisf(*(int *)(pSVar14 + 0x10) - *(int *)(iVar8 + 0x10));
  iVar12 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar12 * 4 + *(int *)(iVar10 + DAT_00134678)));
  iVar12 = __fixsfsi();
  uVar3 = ScreenElement::localToParentCoords(pSVar14,iVar2,iVar12);
  FUN_00131c7c(iVar8,uVar3);
  piVar11 = *(int **)(this + 0x3c);
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_0013467c)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_00134680)));
  (*pcVar7)(piVar11,uVar3,uVar4);
  iVar10 = *(int *)(this + 0x24);
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x20),
                     *(int *)(*(ScreenElement **)(this + 0x20) + 0xc) >> 1,
                     -*(int *)(iVar10 + 0x10) >> 2);
  FUN_00131c7c(iVar10,uVar3);
  iVar10 = DAT_00134684;
  uVar4 = *(undefined4 *)(this + 0x34);
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x20),0,
                     *(int *)(*(ScreenElement **)(this + 0x20) + 0x10) >> 1);
  FUN_00131c7c(uVar4,uVar3);
  pSVar14 = *(ScreenElement **)(this + 0x20);
  uVar4 = *(undefined4 *)(this + 0x38);
  uVar3 = ScreenElement::localToParentCoords
                    (pSVar14,*(int *)(pSVar14 + 0xc),*(int *)(pSVar14 + 0x10) >> 1);
  FUN_00131c7c(uVar4,uVar3);
  iVar2 = 0;
  while( true ) {
    if (*(int *)(*(CapcomOrderableList<CharacterData*> **)(this + 0xb0) + 0x14) <= iVar2) break;
    iVar12 = CapcomOrderableList<CharacterData*>::get
                       (*(CapcomOrderableList<CharacterData*> **)(this + 0xb0),iVar2);
    if ((int)(uint)*(byte *)(iVar12 + iVar10) <= *(int *)(*(int *)(this + 0xc) + 0x680)) {
      local_1c = iVar2;
    }
    iVar2 = iVar2 + 1;
  }
  uVar1 = __divsi3(local_1c,9);
  setPage(this,uVar1);
  selectChef(this,-1);
  return;
}


