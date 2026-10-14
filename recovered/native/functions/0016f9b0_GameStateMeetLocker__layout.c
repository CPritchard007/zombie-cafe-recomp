/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f9b0 GameStateMeetLocker::layout */

/* GameStateMeetLocker::layout() */

void __thiscall GameStateMeetLocker::layout(GameStateMeetLocker *this)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  CImage *pCVar14;
  ScreenElement *this_00;
  char acStack_11c [256];
  int local_1c;
  
  iVar6 = DAT_0016fd98 + 0x16f9bc;
  piVar7 = *(int **)(iVar6 + DAT_0016fd9c);
  local_1c = *piVar7;
  piVar8 = *(int **)(*(int *)(*(int *)(this + 0xc) + DAT_0016fda0) + 0x14);
  if (piVar8 != (int *)0x0) {
    piVar8 = (int *)*piVar8;
  }
  sprintf(acStack_11c,(char *)(DAT_0016fda4 + 0x16f9dc),piVar8);
  L_PrintLog((char *)(DAT_0016fda8 + 0x16f9e6),acStack_11c);
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  piVar8 = *(int **)(this + 0x48);
  pCVar14 = (CImage *)piVar8[0x19];
  uVar2 = CImage::getWidth(pCVar14);
  uVar3 = CImage::getHeight(pCVar14);
  uVar2 = __floatsisf(uVar2);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x20));
  __addsf3(uVar2,uVar2);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(uVar3);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x24));
  __addsf3(uVar3,uVar3);
  uVar3 = __fixsfsi();
  (**(code **)(*piVar8 + 0x18))(piVar8,uVar2,uVar3);
  FUN_0016f99c(*(undefined4 *)(this + 0x48),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x4c);
  pCVar14 = (CImage *)piVar8[0x19];
  uVar2 = CImage::getWidth(pCVar14);
  uVar3 = CImage::getHeight(pCVar14);
  uVar2 = __floatsisf(uVar2);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x20));
  __addsf3(uVar2,uVar2);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(uVar3);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x24));
  __addsf3(uVar3,uVar3);
  uVar3 = __fixsfsi();
  (**(code **)(*piVar8 + 0x18))(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x4c);
  iVar11 = DAT_0016fdac + 0x16faaa;
  pcVar9 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar4 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar11 + iVar4 * 4 + 0x18));
  (*pcVar9)(piVar8,(int)sVar1,uVar2);
  piVar8 = *(int **)(this + 0x50);
  pCVar14 = (CImage *)piVar8[0x19];
  uVar2 = CImage::getWidth(pCVar14);
  uVar3 = CImage::getHeight(pCVar14);
  uVar2 = __floatsisf(uVar2);
  __mulsf3(uVar2,*(undefined4 *)(this + 0x20));
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(uVar3);
  __mulsf3(uVar3,*(undefined4 *)(this + 0x24));
  uVar3 = __fixsfsi();
  (**(code **)(*piVar8 + 0x18))(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x50);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar4 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar11 + iVar4 * 4 + 0x30));
  (*pcVar9)(piVar8,(int)sVar1,uVar2);
  piVar8 = *(int **)(this + 0x54);
  pCVar14 = (CImage *)piVar8[0x19];
  uVar2 = CImage::getWidth(pCVar14);
  uVar3 = CImage::getHeight(pCVar14);
  uVar2 = __floatsisf(uVar2);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x20));
  __mulsf3(uVar2,DAT_0016fdb0);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf(uVar3);
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x24));
  __mulsf3(uVar3,DAT_0016fdb4);
  uVar3 = __fixsfsi();
  (**(code **)(*piVar8 + 0x18))(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x54);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar2 = *(undefined4 *)(iVar11 + iVar4 * 4 + 0x48);
  iVar4 = SmDev();
  (*pcVar9)(piVar8,uVar2,*(undefined4 *)(iVar11 + iVar4 * 4 + 0x60));
  iVar4 = SmDev();
  uVar12 = *(undefined4 *)(iVar11 + iVar4 * 4 + 0x78);
  iVar4 = SmDev();
  piVar8 = *(int **)(this + 0x90);
  iVar13 = DAT_0016fdb8 + 0x16fbc4;
  pcVar9 = *(code **)(*piVar8 + 0x14);
  uVar2 = *(undefined4 *)(iVar13 + iVar4 * 4 + 0x10);
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x28));
  uVar5 = __fixsfsi(uVar12);
  (*pcVar9)(piVar8,uVar3,uVar5);
  piVar8 = *(int **)(this + 0x90);
  (**(code **)(*piVar8 + 0x20))(piVar8,0);
  uVar3 = __addsf3(uVar12,uVar2);
  piVar8 = *(int **)(this + 0xa0);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x28));
  uVar12 = __fixsfsi(uVar3);
  (*pcVar9)(piVar8,uVar5,uVar12);
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  uVar3 = __addsf3(uVar3,uVar2);
  piVar8 = *(int **)(this + 0xa8);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x28));
  uVar12 = __fixsfsi(uVar3);
  (*pcVar9)(piVar8,uVar5,uVar12);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  uVar2 = __addsf3(uVar3,uVar2);
  piVar8 = *(int **)(this + 0x98);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x28));
  uVar2 = __fixsfsi(uVar2);
  (*pcVar9)(piVar8,uVar3,uVar2);
  piVar8 = *(int **)(this + 0x98);
  (**(code **)(*piVar8 + 0x20))(piVar8,1);
  piVar8 = *(int **)(this + 0x8c);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0016fdbc)));
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0016fdc0)));
  (*pcVar9)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x38);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar4 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x40));
  iVar4 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar13 + iVar4 * 4 + 0x58));
  (*pcVar9)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x410);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar11 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar4 = SmDev();
  iVar10 = *(int *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0016fdc4));
  iVar4 = SmDev();
  (*pcVar9)(piVar8,iVar11 - iVar10,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0016fdc8)));
  uVar3 = *(undefined4 *)(this + DAT_0016fdcc);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x410) + 0xc));
  iVar4 = SmDev();
  this_00 = *(ScreenElement **)(this + 0x410);
  __addsf3(uVar2,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar6 + DAT_0016fdd0)));
  iVar6 = __fixsfsi();
  uVar2 = ScreenElement::localToParentCoords(this_00,iVar6,*(int *)(this_00 + 0x10) >> 1);
  FUN_0016f99c(uVar3,uVar2);
  piVar8 = *(int **)(this + 0x418);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar6 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar13 + iVar6 * 4 + 0x70));
  iVar6 = SmDev();
  iVar4 = DAT_0016fe94 + 0x16fdf8;
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + iVar6 * 4 + 8));
  (*pcVar9)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + DAT_0016fe98);
  pcVar9 = *(code **)(*piVar8 + 0x14);
  iVar6 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar4 + iVar6 * 4 + 0x20));
  iVar6 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar4 + iVar6 * 4 + 0x38));
  (*pcVar9)(piVar8,uVar2,uVar3);
  FUN_0016f99c(*(undefined4 *)(this + DAT_0016fe9c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_0016f99c(*(undefined4 *)(this + DAT_0016fea0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  piVar8 = *(int **)(*(int *)(*(int *)(this + 0xc) + DAT_0016fea4) + 0x14);
  if (piVar8 != (int *)0x0) {
    piVar8 = (int *)*piVar8;
  }
  sprintf(acStack_11c,(char *)(DAT_0016fea8 + 0x16fe74),piVar8);
  L_PrintLog((char *)(DAT_0016feac + 0x16fe7e),acStack_11c);
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


