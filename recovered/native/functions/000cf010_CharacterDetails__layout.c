/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf010 CharacterDetails::layout */

/* CharacterDetails::layout() */

void __thiscall CharacterDetails::layout(CharacterDetails *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ScreenElement *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  CharacterDetails *pCVar9;
  CharacterDetails *pCVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  CharacterDetails *pCVar16;
  undefined8 uVar17;
  int local_30;
  
  iVar1 = DAT_000cf3cc + 0xcf01e;
  CapcomApp::getInstance();
  iVar2 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar2 + 0x44);
  L_PrintLog((char *)(DAT_000cf3d4 + 0xcf038),(char *)(DAT_000cf3d0 + 0xcf034));
  pCVar9 = this + 0x90;
  iVar13 = *(int *)(**(int **)(this + 0x138) + 0xc);
  iVar2 = SmDev();
  if ((iVar2 == 0) || (iVar2 = SmDev(), iVar2 == 5)) {
    iVar2 = DAT_000cf3dc;
    piVar11 = *(int **)(iVar1 + DAT_000cf3d8);
    iVar13 = *(int *)(*(int *)pCVar9 + 0xc) + *piVar11 + (iVar13 >> 1);
    *(int *)(this + 0xc) = iVar13;
    piVar14 = *(int **)(iVar1 + iVar2);
    *(int *)(this + 0x10) = *(int *)(*(int *)pCVar9 + 0x10) + *piVar14;
    (**(code **)(*(int *)**(undefined4 **)(this + 0x134) + 0x14))
              ((int *)**(undefined4 **)(this + 0x134),iVar13,0);
    piVar12 = *(int **)pCVar9;
    iVar2 = *(int *)(this + 0xc) - *piVar11;
    pcVar8 = *(code **)(*piVar12 + 0x14);
    iVar13 = *piVar14;
  }
  else {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(*(int *)pCVar9 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)pCVar9 + 0x10);
    piVar12 = (int *)**(undefined4 **)(this + 0x134);
    pcVar8 = *(code **)(*piVar12 + 0x14);
    iVar2 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf688)));
    iVar2 = SmDev();
    uVar5 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf68c)));
    (*pcVar8)(piVar12,uVar4,uVar5);
    piVar12 = *(int **)pCVar9;
    iVar2 = *(int *)(this + 0xc);
    iVar13 = 0;
    pcVar8 = *(code **)(*piVar12 + 0x14);
  }
  pCVar9 = this + 0x9c;
  (*pcVar8)(piVar12,iVar2,iVar13);
  piVar12 = *(int **)pCVar9;
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar13 = *(int *)(*(int *)(this + 0x90) + 0xc);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,iVar13 / 2,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf3e0)));
  piVar12 = *(int **)(this + 0xa4);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  iVar13 = DAT_000cf3e4 + 0xcf0de;
  uVar4 = *(undefined4 *)(iVar2 * 4 + iVar13);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar13 + iVar2 * 4 + 0x18));
  piVar12 = *(int **)(this + 0xa0);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar6 = *(int *)(*(int *)pCVar9 + 0xc);
  iVar7 = *(int *)(*(int *)pCVar9 + 4);
  iVar15 = **(int **)(iVar1 + DAT_000cf3e8);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,(iVar6 / 2 + iVar7) - *(int *)(iVar2 * 4 + iVar15),
            *(int *)(*(int *)pCVar9 + 0x10) / 2 + *(int *)(*(int *)pCVar9 + 8));
  piVar12 = *(int **)(this + 0x98);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar6 = *(int *)(*(int *)pCVar9 + 0xc);
  iVar7 = *(int *)(*(int *)pCVar9 + 4);
  iVar15 = **(int **)(iVar1 + DAT_000cf3ec);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,(iVar7 - iVar6 / 2) + *(int *)(iVar2 * 4 + iVar15),
            *(int *)(*(int *)pCVar9 + 0x10) / 2 + *(int *)(*(int *)pCVar9 + 8));
  piVar12 = *(int **)(this + 0xf0);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  iVar6 = *(int *)(iVar1 + DAT_000cf3f0);
  uVar4 = *(undefined4 *)(iVar2 * 4 + iVar6);
  iVar2 = SmDev();
  pCVar16 = this + 0xec;
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf3f4)));
  piVar12 = *(int **)(this + 0xf0);
  (**(code **)(*piVar12 + 0x18))(piVar12,*(undefined4 *)(*(int *)pCVar16 + 0xc),0);
  piVar12 = *(int **)(this + 0x178);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf3f8));
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf3fc)));
  piVar12 = *(int **)(this + 0x110);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)(iVar2 * 4 + iVar6);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf400)));
  this_00 = *(ScreenElement **)(this + 0x110);
  piVar12 = *(int **)(this + 0x114);
  iVar2 = ScreenElement::localToParentCoords
                    (this_00,*(int *)(this_00 + 0xc),*(int *)(this_00 + 0x10));
  (**(code **)(*piVar12 + 0x14))(piVar12,iVar2 >> 0x10,(int)(short)iVar2);
  piVar12 = *(int **)(this + 0x104);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar2 * 4 + 0x30);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar13 + iVar2 * 4 + 0x48));
  piVar12 = *(int **)(this + 0x104);
  pcVar8 = *(code **)(*piVar12 + 0x18);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)(iVar13 + iVar2 * 4 + 0x60);
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar13 + iVar2 * 4 + 0x78));
  iVar7 = *(int *)(*(int *)pCVar16 + 8);
  iVar6 = *(int *)(*(int *)pCVar16 + 0x10);
  iVar2 = SmDev();
  iVar13 = DAT_000cf404 + 0xcf2a0;
  pCVar9 = this + 0xdc;
  local_30 = iVar7 + iVar6 + *(int *)(iVar13 + iVar2 * 4 + 0x10);
  pCVar10 = this + 0xe0;
  (**(code **)(**(int **)pCVar9 + 0x20))(*(int **)pCVar9,0);
  (**(code **)(**(int **)pCVar10 + 0x20))(*(int **)pCVar10,0);
  (**(code **)(**(int **)pCVar16 + 0x14))(*(int **)pCVar16,0,0);
  if (this[0xb1] != (CharacterDetails)0x0) {
    (**(code **)(**(int **)pCVar9 + 0x20))(*(int **)pCVar9,1);
    (**(code **)(**(int **)pCVar10 + 0x20))(*(int **)pCVar10,1);
    (**(code **)(**(int **)pCVar9 + 0x14))(*(int **)pCVar9,0,local_30);
    (**(code **)(**(int **)pCVar10 + 0x14))
              (*(int **)pCVar10,*(undefined4 *)(*(int *)(this + 0x104) + 0xc),local_30);
    iVar2 = (**(code **)(**(int **)pCVar10 + 0x4c))();
    iVar6 = SmDev();
    local_30 = local_30 + iVar2 + *(int *)(iVar13 + iVar6 * 4 + 0x10);
  }
  if (this[0xb2] != (CharacterDetails)0x0) {
    piVar12 = *(int **)(this + 0xf8);
    (**(code **)(*piVar12 + 0x14))(piVar12,0,local_30);
    (**(code **)(**(int **)(this + 0x100) + 0x14))
              (*(int **)(this + 0x100),*(undefined4 *)(*(int *)(this + 0x104) + 0xc),local_30);
    iVar2 = (**(code **)(**(int **)(this + 0xf8) + 0x4c))();
    iVar13 = SmDev();
    local_30 = local_30 + iVar2 + *(int *)(DAT_000cf408 + iVar13 * 4 + 0xcf37e);
    iVar2 = *(int *)(*(int *)(this + 0xb4) + 0xc);
    iVar13 = 0;
    iVar2 = (-iVar2 - ((int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2)) +
            *(int *)(*(int *)(this + 0x104) + 0xc);
    do {
      iVar6 = iVar13 + 0xc4;
      piVar12 = *(int **)(this + iVar6);
      iVar13 = iVar13 + -4;
      (**(code **)(*piVar12 + 0x14))(piVar12,iVar2,local_30);
      iVar6 = *(int *)(*(int *)(this + iVar6) + 0xc);
      iVar2 = (iVar2 - iVar6) - ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2);
    } while (iVar13 != -0x14);
    local_30 = local_30 + *(int *)(*(int *)(this + 0xb4) + 0x10);
  }
  piVar12 = *(int **)(this + 0xf4);
  (**(code **)(*piVar12 + 0x14))(piVar12,0,local_30);
  (**(code **)(**(int **)(this + 0xfc) + 0x14))
            (*(int **)(this + 0xfc),*(undefined4 *)(*(int *)(this + 0x104) + 0xc),local_30);
  (**(code **)(**(int **)(this + 0xf4) + 0x4c))();
  if (this[0xb1] != (CharacterDetails)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 0x4c))();
  }
  iVar13 = (*(int **)(this + 0xf4))[2];
  iVar2 = (**(code **)(**(int **)(this + 0xf4) + 0x4c))();
  (**(code **)(**(int **)(this + 0x108) + 0x18))
            (*(int **)(this + 0x108),*(undefined4 *)(*(int *)(this + 0x104) + 0xc),iVar13 + iVar2);
  piVar12 = *(int **)(iVar1 + DAT_000cf66c);
  *(short *)(this + 0x140) =
       ((short)*(undefined4 *)(this + 0xc) - (short)*(undefined4 *)(**(int **)(this + 0x134) + 0xc))
       - (short)*piVar12;
  for (iVar2 = 0; iVar2 < *(int *)(this + 300) + 1; iVar2 = iVar2 + 1) {
    piVar11 = (int *)**(undefined4 **)(iVar2 * 4 + *(int *)(this + 0x130));
    (**(code **)(*piVar11 + 0x14))
              (piVar11,(int)*(short *)(this + 0x140),**(int **)(iVar1 + DAT_000cf670) + *piVar12);
    *(short *)(this + 0x140) =
         (*(short *)(this + 0x140) - (short)piVar11[3]) - (short)(piVar11[3] >> 2);
  }
  piVar12 = *(int **)(this + 0x124);
  pcVar8 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  uVar4 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf674));
  iVar2 = SmDev();
  (*pcVar8)(piVar12,uVar4,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_000cf678)));
  uVar4 = __mulsf3(uVar3,DAT_000cf67c);
  piVar12 = *(int **)(this + 0x16c);
  iVar2 = *piVar12;
  iVar13 = *(int *)(*(int *)(this + 0x124) + 4);
  iVar1 = *(int *)(*(int *)(this + 0x124) + 0xc) * 3;
  uVar5 = __floatsisf(*(undefined4 *)(this + 0x10));
  __subsf3(uVar5,uVar4);
  uVar5 = __fixsfsi();
  (**(code **)(iVar2 + 0x14))
            (piVar12,iVar13 - ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3),uVar5);
  uVar17 = SmDev();
  ImageButton::setScale
            (*(ImageButton **)(this + 0x16c),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (**(code **)(**(int **)(this + 0x170) + 0x14))
            (*(int **)(this + 0x170),*(int *)(*(int *)(this + 0x16c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x16c) + 0x10) / 2);
  piVar12 = *(int **)(this + 0x17c);
  iVar1 = *(int *)(*(int *)(this + 0x124) + 0xc) * 0xd;
  iVar2 = *(int *)(*(int *)(this + 0x124) + 4);
  uVar5 = __floatsisf(*(undefined4 *)(this + 0x10));
  __subsf3(uVar5,uVar4);
  uVar4 = __fixsfsi();
  (**(code **)(*piVar12 + 0x14))
            (piVar12,iVar2 - ((int)(((uint)(iVar1 >> 0x1f) >> 0x1c) + iVar1) >> 4),uVar4);
  uVar17 = __mulsf3(uVar3,DAT_000cf680);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x17c),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  piVar12 = *(int **)(this + 0x180);
  iVar2 = DAT_000cf684 + 0xcf5ca;
  pcVar8 = *(code **)(*piVar12 + 0x14);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x124) + 4));
  iVar1 = SmDev();
  uVar5 = __floatsisf(*(undefined4 *)(iVar2 + iVar1 * 4 + 0x14));
  uVar5 = __mulsf3(uVar5,uVar3);
  __subsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  iVar1 = SmDev();
  uVar5 = __floatsisf(*(undefined4 *)(iVar2 + iVar1 * 4 + 0x2c));
  __mulsf3(uVar5,uVar3);
  uVar3 = __fixsfsi();
  (*pcVar8)(piVar12,uVar4,uVar3);
  return;
}


