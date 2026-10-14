/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015ec18 GameStateHelp::layout */

/* GameStateHelp::layout() */

void __thiscall GameStateHelp::layout(GameStateHelp *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  
  uVar8 = *(uint *)(*(int *)(this + 0xc) + 0x14);
  iVar1 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0015ef8c + 0x15ec30)));
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  FUN_0015ebf0(*(undefined4 *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar3 = *(int **)(this + 0x1c);
  iVar9 = *(int *)(*(int *)(this + 0x20) + 0x10) + piVar3[4];
  iVar1 = (int)*(short *)(*(int *)(this + 0xc) + 0x10);
  if (*(short *)(*(int *)(this + 0xc) + 0x10) < iVar9) {
    iVar1 = iVar9;
  }
  (**(code **)(*piVar3 + 0x14))(piVar3,0,iVar1);
  piVar3 = *(int **)(this + 0x24);
  pcVar11 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0015ef90 + 0x15ec84)));
  iVar1 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0015ef94 + 0x15ec98)));
  (*pcVar11)(piVar3,uVar4,uVar5);
  iVar1 = *(int *)(DAT_0015ef98 + 0x15ecb2);
  if ((int)(short)*(int *)(*(int *)(this + 0xc) + 0x10) <
      *(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10) {
    iVar9 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x28) + 0xc));
    uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = SmDev();
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = __fixsfsi();
    uVar4 = __floatsisf(iVar9 + *(int *)(*(int *)(this + 0x2c) + 0xc));
    iVar7 = SmDev();
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar7 * 4));
    iVar7 = __fixsfsi();
    uVar8 = uVar2 & 0xffff;
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar9 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x2c),uVar4);
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar7 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x30),uVar4);
    uVar4 = __floatsisf(iVar7 + *(int *)(*(int *)(this + 0x30) + 0xc));
    iVar9 = SmDev();
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = __fixsfsi();
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar9 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x34),uVar4);
    FUN_0015ebf0(*(undefined4 *)(this + 0x38),
                 ((int)*(short *)(*(int *)(this + 0x34) + 0xc) >> 1) << 0x10 |
                 (int)*(short *)(*(int *)(this + 0x34) + 0x10) >> 1 & 0xffffU);
    uVar4 = __floatsisf(iVar9 + *(int *)(*(int *)(this + 0x34) + 0xc));
    iVar9 = SmDev();
    lVar10 = *(long *)(*(int *)(this + 0xc) + 0x10);
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = __fixsfsi();
    uVar4 = CFPoint::subtract(lVar10,iVar9 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x3c),uVar4);
    FUN_0015ebf0(*(undefined4 *)(this + 0x40),
                 ((int)*(short *)(*(int *)(this + 0x3c) + 0xc) >> 1) << 0x10 |
                 (int)*(short *)(*(int *)(this + 0x3c) + 0x10) >> 1 & 0xffffU);
    piVar3 = *(int **)(this + 0x4c);
    pcVar11 = *(code **)(*piVar3 + 0x14);
    iVar9 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar1 + iVar9 * 4));
    uVar5 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x10) - uVar2);
    iVar9 = CapcomApp::getInstance();
    uVar6 = __mulsf3(*(undefined4 *)(iVar9 + 0x44),DAT_0015ef9c);
    __subsf3(uVar5,uVar6);
    uVar5 = __fixsfsi();
    (*pcVar11)(piVar3,uVar4,uVar5);
  }
  else {
    iVar9 = SmDev();
    iVar9 = __fixsfsi(*(undefined4 *)(iVar1 + iVar9 * 4));
    uVar4 = __floatsisf(iVar9 + *(int *)(*(int *)(this + 0x2c) + 0xc));
    iVar7 = SmDev();
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar7 * 4));
    iVar7 = __fixsfsi();
    uVar8 = uVar8 & 0xffff;
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar9 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x2c),uVar4);
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar7 << 0x10 | uVar8);
    FUN_0015ebf0(*(undefined4 *)(this + 0x30),uVar4);
    uVar4 = __floatsisf(iVar7 + *(int *)(*(int *)(this + 0x30) + 0xc));
    iVar9 = SmDev();
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = __fixsfsi();
    uVar4 = CFPoint::subtract(*(long *)(*(int *)(this + 0xc) + 0x10),iVar9 << 0x10 | uVar2 & 0xffff)
    ;
    FUN_0015ebf0(*(undefined4 *)(this + 0x34),uVar4);
    FUN_0015ebf0(*(undefined4 *)(this + 0x38),
                 ((int)*(short *)(*(int *)(this + 0x34) + 0xc) >> 1) << 0x10 |
                 (int)*(short *)(*(int *)(this + 0x34) + 0x10) >> 1 & 0xffffU);
    uVar4 = __floatsisf(iVar9 + *(int *)(*(int *)(this + 0x34) + 0xc));
    iVar9 = SmDev();
    lVar10 = *(long *)(*(int *)(this + 0xc) + 0x10);
    __addsf3(uVar4,*(undefined4 *)(iVar1 + iVar9 * 4));
    iVar9 = __fixsfsi();
    uVar4 = CFPoint::subtract(lVar10,iVar9 << 0x10 | uVar2 & 0xffff);
    FUN_0015ebf0(*(undefined4 *)(this + 0x3c),uVar4);
    FUN_0015ebf0(*(undefined4 *)(this + 0x40),
                 ((int)*(short *)(*(int *)(this + 0x3c) + 0xc) >> 1) << 0x10 |
                 (int)*(short *)(*(int *)(this + 0x3c) + 0x10) >> 1 & 0xffffU);
  }
  uVar5 = *(undefined4 *)(this + 0x28);
  lVar10 = *(long *)(*(int *)(this + 0xc) + 0x10);
  iVar9 = SmDev();
  iVar1 = __fixsfsi(*(undefined4 *)(iVar1 + iVar9 * 4));
  uVar4 = CFPoint::subtract(lVar10,iVar1 << 0x10 | uVar2 & 0xffff);
  FUN_0015ebf0(uVar5,uVar4);
  ScreenElement::localToGlobalCoords(*(ScreenElement **)(this + 0x24),0);
  return;
}


