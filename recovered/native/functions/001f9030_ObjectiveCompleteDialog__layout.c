/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f9030 ObjectiveCompleteDialog::layout */

/* ObjectiveCompleteDialog::layout() */

void __thiscall ObjectiveCompleteDialog::layout(ObjectiveCompleteDialog *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  ObjectiveCompleteDialog *pOVar8;
  int iVar9;
  undefined4 uVar10;
  ObjectiveCompleteDialog *pOVar11;
  int local_38;
  uint local_34;
  
  pcVar6 = *(code **)(*(int *)this + 0x18);
  iVar9 = DAT_001f93c0 + 0x1f9044;
  uVar10 = *(undefined4 *)(*(int *)(this + 0x6c) + 0xc);
  iVar7 = *(int *)(*(int *)(this + 0x6c) + 0x10);
  iVar1 = SmDev();
  (*pcVar6)(this,uVar10,iVar7 + *(int *)(iVar1 * 4 + iVar9));
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),0,0);
  piVar2 = *(int **)(this + 0x90);
  (**(code **)(*piVar2 + 0x14))
            (piVar2,*(int *)(*(int *)(this + 0x6c) + 0xc) / 2,*(undefined4 *)(this + 0x10));
  iVar1 = *(int *)(this + 0x90);
  pOVar11 = this + 0x94;
  (**(code **)(**(int **)(this + 0xac) + 0x14))
            (*(int **)(this + 0xac),*(int *)(iVar1 + 0xc) / 2,*(int *)(iVar1 + 0x10) / 2);
  piVar2 = *(int **)pOVar11;
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar7 = *(int *)(this + 0xc);
  iVar1 = SmDev();
  pOVar8 = this + 0xb0;
  (*pcVar6)(piVar2,iVar7 / 2,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
  (**(code **)(**(int **)pOVar8 + 0x18))(*(int **)pOVar8,*(undefined4 *)(*(int *)pOVar11 + 0xc),3);
  (**(code **)(**(int **)pOVar8 + 0x1c))(*(int **)pOVar8,0x11);
  *(undefined4 *)(*(int *)pOVar8 + 0x18) = 0xffffffff;
  (**(code **)(**(int **)pOVar8 + 0x14))
            (*(int **)pOVar8,*(int *)(this + 0xc) / 2,
             *(int *)(*(int *)pOVar11 + 8) + *(int *)(*(int *)pOVar11 + 0x10));
  piVar2 = *(int **)(this + 0x70);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x30);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x48));
  piVar2 = *(int **)(this + 0x74);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x60);
  iVar1 = SmDev();
  pOVar8 = this + 0x98;
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x78));
  piVar2 = *(int **)pOVar8;
  iVar7 = DAT_001f93c4 + 0x1f9154;
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x10);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x28));
  piVar2 = *(int **)pOVar8;
  pcVar6 = *(code **)(*piVar2 + 0x18);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x40),0);
  *(undefined1 *)(*(int *)pOVar8 + 0x7f) = 0x11;
  piVar2 = *(int **)(this + 0x9c);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x58);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x70));
  piVar2 = *(int **)(this + 0xa0);
  iVar7 = DAT_001f93c8 + 0x1f91cc;
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 8);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x20));
  piVar2 = *(int **)(this + 0x78);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x38);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x50));
  piVar2 = *(int **)(this + 0x7c);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x68);
  iVar1 = SmDev();
  iVar7 = DAT_001f93cc + 0x1f922e;
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar1 * 4 + iVar7));
  piVar2 = *(int **)(this + 0x80);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x18);
  iVar1 = SmDev();
  pOVar8 = this + 0xa4;
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x30));
  piVar2 = *(int **)pOVar8;
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar10 = *(undefined4 *)(iVar7 + iVar1 * 4 + 0x48);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,uVar10,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x60));
  piVar2 = *(int **)pOVar8;
  pcVar6 = *(code **)(*piVar2 + 0x18);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,*(undefined4 *)(iVar7 + iVar1 * 4 + 0x78),0);
  piVar2 = *(int **)(this + 0xa8);
  pcVar6 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  (*pcVar6)(piVar2,*(undefined4 *)(DAT_001f93d0 + iVar1 * 4 + 0x1f92c6),
            *(int *)(*(int *)pOVar8 + 8) + *(int *)(*(int *)pOVar8 + 0x10));
  local_34 = ObjectiveSystem::getBonusStreak
                       (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001f93d4));
  if ((int)local_34 < 4) {
    local_34 = local_34 & (int)~local_34 >> 0x1f;
  }
  else {
    local_34 = 3;
  }
  iVar1 = CapcomApp::getInstance();
  uVar10 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar10 = __mulsf3(uVar10,*(undefined4 *)(iVar1 + 0x50));
  iVar1 = SmDev();
  iVar7 = CImage::getWidth(*(CImage **)(this + 0x68));
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001f93d8 + iVar1 * 4 + 0x1f9332));
  uVar4 = __floatsisf(local_34 * iVar7);
  uVar4 = __mulsf3(uVar4,uVar10);
  uVar4 = __mulsf3(uVar4,0x3f000000);
  __subsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  iVar1 = DAT_001f93dc;
  pOVar8 = this + 0x84;
  local_38 = 0;
  do {
    piVar2 = *(int **)pOVar8;
    if (local_38 < (int)local_34) {
      (**(code **)(*piVar2 + 0x20))(piVar2,1);
      piVar2 = *(int **)pOVar8;
      pcVar6 = *(code **)(*piVar2 + 0x14);
      iVar7 = CImage::getWidth(*(CImage **)(this + 0x68));
      iVar9 = SmDev();
      uVar4 = __floatsisf(uVar3);
      uVar5 = __floatsisf(iVar7 * local_38);
      uVar5 = __mulsf3(uVar5,uVar10);
      __addsf3(uVar4,uVar5);
      uVar4 = __fixsfsi();
      (*pcVar6)(piVar2,uVar4,*(undefined4 *)(iVar1 + iVar9 * 4 + 0x1f9380));
    }
    else {
      (**(code **)(*piVar2 + 0x20))(piVar2,0);
    }
    pOVar8 = pOVar8 + 4;
    local_38 = local_38 + 1;
  } while (local_38 != 3);
  return;
}


