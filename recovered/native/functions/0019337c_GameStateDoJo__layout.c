/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019337c GameStateDoJo::layout */

/* GameStateDoJo::layout() */

void __thiscall GameStateDoJo::layout(GameStateDoJo *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  ScreenElement *this_00;
  int *piVar10;
  int iVar11;
  
  iVar9 = DAT_00193768;
  iVar5 = DAT_00193764 + 0x19338c;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar9 = iVar9 + 0x1933a8;
  (**(code **)(**(int **)(this + 0x8c) + 0x14))
            (*(int **)(this + 0x8c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar10 = *(int **)(this + 0x90);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar9));
  (*pcVar7)(piVar10,(int)sVar1,uVar3);
  piVar10 = *(int **)(this + 0xa0);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  uVar3 = __floatsisf(-*(int *)(*(int *)(this + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,0x3e800000);
  __addsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar9));
  (*pcVar7)(piVar10,uVar3,uVar4);
  piVar10 = *(int **)(this + 0xa4);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x14) + 0xc));
  uVar3 = __mulsf3(uVar3,DAT_0019376c);
  __subsf3(uVar3,0x3f800000);
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar9));
  (*pcVar7)(piVar10,uVar3,uVar4);
  piVar10 = *(int **)(this + 0x98);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x18));
  (*pcVar7)(piVar10,(int)sVar1,uVar3);
  piVar10 = *(int **)(this + 0x94);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x30));
  (*pcVar7)(piVar10,(int)sVar1,uVar3);
  piVar10 = *(int **)(this + 0xac);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x48));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x60));
  (*pcVar7)(piVar10,uVar3,uVar4);
  piVar10 = *(int **)(this + 0x9c);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar9 + iVar2 * 4 + 0x78);
  iVar9 = SmDev();
  iVar6 = DAT_00193770 + 0x193506;
  (*pcVar7)(piVar10,uVar3,*(undefined4 *)(iVar6 + iVar9 * 4 + 0x10));
  piVar10 = *(int **)(this + 0xa8);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar9 = SmDev();
  (*pcVar7)(piVar10,iVar2 / 2,*(undefined4 *)(iVar6 + iVar9 * 4 + 0x28));
  piVar10 = *(int **)(this + 0xb4);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar9 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar6 + iVar9 * 4 + 0x40));
  (*pcVar7)(piVar10,iVar2 / 2,uVar3);
  piVar10 = *(int **)(this + 0xb4);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(this + 0xb8);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar9 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 * 4 + *(int *)(iVar5 + DAT_00193774)));
  iVar9 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar9 * 4 + *(int *)(iVar5 + DAT_00193778)));
  (*pcVar7)(piVar10,uVar3,uVar4);
  iVar9 = DAT_0019377c;
  piVar10 = *(int **)(this + DAT_0019377c);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar11 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  iVar8 = *(int *)(iVar2 * 4 + *(int *)(iVar5 + DAT_00193780));
  iVar2 = SmDev();
  (*pcVar7)(piVar10,iVar11 - iVar8,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar5 + DAT_00193784)));
  piVar10 = *(int **)(this + 0x6f8);
  uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + iVar9) + 0xc));
  iVar2 = SmDev();
  this_00 = *(ScreenElement **)(this + iVar9);
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar5 + DAT_00193788)));
  iVar9 = __fixsfsi();
  iVar9 = ScreenElement::localToParentCoords(this_00,iVar9,*(int *)(this_00 + 0x10) >> 1);
  (**(code **)(*piVar10 + 0x14))(piVar10,iVar9 >> 0x10,(int)(short)iVar9);
  (**(code **)(**(int **)(this + 0x700) + 0x14))
            (*(int **)(this + 0x700),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x710) + 0x14))
            (*(int **)(this + 0x710),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  piVar10 = *(int **)(this + 200);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = *(int *)(*(int *)(this + 0x14) + 0xc);
  iVar9 = SmDev();
  (*pcVar7)(piVar10,iVar2 / 2,*(undefined4 *)(iVar6 + iVar9 * 4 + 0x58));
  iVar9 = DAT_0019378c;
  piVar10 = *(int **)(this + 200);
  (**(code **)(*piVar10 + 0x20))(piVar10,1);
  piVar10 = *(int **)(this + 0xc0);
  iVar9 = iVar9 + 0x193696;
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar6 + iVar2 * 4 + 0x70);
  iVar2 = SmDev();
  (*pcVar7)(piVar10,uVar3,*(undefined4 *)(iVar9 + iVar2 * 4 + 8));
  piVar10 = *(int **)(this + 0xbc);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar6 + iVar2 * 4 + 0x70);
  iVar2 = SmDev();
  (*pcVar7)(piVar10,uVar3,*(undefined4 *)(iVar9 + iVar2 * 4 + 0x20));
  piVar10 = *(int **)(this + 0xd0);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x38));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x50));
  (*pcVar7)(piVar10,uVar3,uVar4);
  piVar10 = *(int **)(this + 0xcc);
  pcVar7 = *(code **)(*piVar10 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x68));
  iVar9 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar9 * 4 + DAT_00193790 + 0x193742));
  (*pcVar7)(piVar10,uVar3,uVar4);
  if (this[DAT_00193794] == (GameStateDoJo)0x0) {
    piVar10 = *(int **)(this + 0xc0);
    (**(code **)(*piVar10 + 0x20))(piVar10,1);
  }
  return;
}


