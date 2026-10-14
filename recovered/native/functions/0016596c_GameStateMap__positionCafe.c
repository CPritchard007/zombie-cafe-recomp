/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016596c GameStateMap::positionCafe */

/* GameStateMap::positionCafe(GameStateMap::MapCafe&, int, int, int, int, int, int) */

void __thiscall
GameStateMap::positionCafe
          (GameStateMap *this,MapCafe *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 uVar21;
  
  uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
  iVar14 = param_3 * 6;
  iVar4 = SmDev();
  uVar5 = __floatsisf(param_2);
  iVar20 = DAT_00165d6c + 0x1659a2;
  iVar15 = *(int *)(iVar20 + DAT_00165d70);
  uVar3 = __addsf3(uVar3,*(undefined4 *)((iVar4 + iVar14) * 4 + iVar15));
  __addsf3(uVar3,uVar5);
  iVar4 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x14));
  iVar6 = SmDev();
  iVar16 = *(int *)(iVar20 + DAT_00165d74);
  __addsf3(uVar3,*(undefined4 *)((iVar6 + iVar14) * 4 + iVar16));
  uVar7 = __fixsfsi();
  uVar17 = *(undefined4 *)param_1;
  lVar13 = *(long *)(this + 0x420);
  iVar6 = CapcomApp::getInstance();
  uVar3 = __floatsisf(param_4);
  __mulsf3(uVar3,*(undefined4 *)(iVar6 + 0x40));
  iVar6 = __fixsfsi();
  iVar8 = SmDev();
  iVar18 = *(int *)(iVar20 + DAT_00165d78);
  uVar3 = __floatsisf(param_5);
  __addsf3(uVar3,*(undefined4 *)(iVar8 * 4 + iVar18));
  uVar9 = __fixsfsi();
  lVar13 = CFPoint::add(lVar13,iVar6 << 0x10 | uVar9 & 0xffff);
  uVar3 = CFPoint::add(iVar4 << 0x10 | uVar7 & 0xffff,lVar13);
  FUN_001652d4(uVar17,uVar3);
  uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
  iVar4 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)((iVar4 + iVar14) * 4 + iVar15));
  iVar4 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d7c)));
  uVar3 = __addsf3(uVar3,uVar5);
  uVar17 = __floatsisf(param_6);
  __addsf3(uVar3,uVar17);
  iVar4 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x14));
  iVar6 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)((iVar6 + iVar14) * 4 + iVar16));
  iVar6 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165d80)));
  uVar17 = __floatsisf(param_7);
  __addsf3(uVar3,uVar17);
  uVar7 = __fixsfsi();
  uVar3 = CFPoint::add(uVar7 & 0xffff | iVar4 << 0x10,*(long *)(this + 0x420));
  FUN_001652d4(*(undefined4 *)(param_1 + 0x20),uVar3);
  iVar8 = *(int *)(*(int *)(this + 0xc) + 0x14);
  iVar4 = SmDev();
  uVar3 = *(undefined4 *)((iVar4 + iVar14) * 4 + iVar15);
  iVar4 = SmDev();
  uVar17 = *(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d84));
  uVar19 = *(undefined4 *)(*(int *)(this + 0xc) + 0x14);
  iVar4 = SmDev();
  uVar10 = *(undefined4 *)((iVar4 + iVar14) * 4 + iVar16);
  iVar4 = SmDev();
  iVar6 = *(int *)(param_1 + 0x24);
  uVar11 = *(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d88));
  if (iVar6 != 0) {
    lVar13 = *(long *)(this + 0x420);
    iVar4 = SmDev();
    iVar4 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d8c)));
    iVar18 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar18 * 4 + *(int *)(iVar20 + DAT_00165d90)));
    lVar13 = CFPoint::add(lVar13,iVar4 << 0x10 | uVar7 & 0xffff);
    uVar12 = __floatsisf(iVar8 >> 0x10);
    uVar3 = __addsf3(uVar12,uVar3);
    uVar3 = __addsf3(uVar3,uVar17);
    __addsf3(uVar3,uVar5);
    iVar4 = __fixsfsi();
    uVar3 = __floatsisf((int)(short)uVar19);
    uVar3 = __addsf3(uVar3,uVar10);
    __addsf3(uVar3,uVar11);
    uVar7 = __fixsfsi();
    uVar3 = CFPoint::add(uVar7 & 0xffff | iVar4 << 0x10,lVar13);
    FUN_001652d4(iVar6,uVar3);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
    iVar4 = SmDev();
    uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar15 + (iVar4 + iVar14) * 4));
    iVar4 = SmDev();
    uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d94)));
    __addsf3(uVar3,uVar5);
    iVar4 = __fixsfsi();
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
    iVar6 = SmDev();
    uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar16 + (iVar6 + iVar14) * 4));
    iVar6 = SmDev();
    __addsf3(uVar3,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165d98)));
    uVar7 = __fixsfsi();
    uVar3 = CFPoint::add(uVar7 & 0xffff | iVar4 << 0x10,*(long *)(this + 0x420));
    FUN_001652d4(*(undefined4 *)(param_1 + 0x4c),uVar3);
  }
  if (param_1[0x50] != (MapCafe)0x0) {
    iVar4 = *(int *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar1 = *(undefined2 *)(iVar4 + 8);
    uVar2 = *(undefined2 *)(iVar4 + 4);
    uVar3 = __floatsisf(*(undefined4 *)(iVar4 + 0xc));
    iVar4 = SmDev();
    __subsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165d9c)));
    iVar4 = __fixsfsi();
    iVar6 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165da0)));
    uVar3 = CFPoint::subtract(CONCAT22(uVar2,uVar1),uVar7 & 0xffff | iVar4 << 0x10);
    FUN_001652d4(uVar5,uVar3);
    iVar4 = *(int *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined2 *)(iVar4 + 4);
    uVar1 = *(undefined2 *)(iVar4 + 8);
    uVar3 = __floatsisf(*(undefined4 *)(iVar4 + 0xc));
    iVar4 = SmDev();
    __subsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165da4)));
    iVar4 = __fixsfsi();
    iVar6 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165da8)));
    uVar3 = CFPoint::subtract(CONCAT22(uVar2,uVar1),uVar7 & 0xffff | iVar4 << 0x10);
    uVar21 = FUN_001652d4(uVar5,uVar3);
    ImageButton::setScale
              (*(ImageButton **)(param_1 + 0xc),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
    iVar4 = *(int *)(param_1 + 0xc);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(int **)(param_1 + 0x10),*(int *)(iVar4 + 4) - *(int *)(iVar4 + 0xc),
               *(int *)(iVar4 + 8) - *(int *)(iVar4 + 0x10) / 2);
    iVar4 = *(int *)(param_1 + 0x10);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
              (*(int **)(param_1 + 0x14),*(int *)(iVar4 + 0xc) / 2 + *(int *)(iVar4 + 4),
               *(int *)(iVar4 + 8) - *(int *)(iVar4 + 0x10) / 2);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
              (*(int **)(param_1 + 0x18),*(int *)(*(int *)(param_1 + 0xc) + 0xc) / 2,
               *(int *)(*(int *)(param_1 + 0xc) + 0x10) / 2);
  }
  if (param_1[0x51] != (MapCafe)0x0) {
    iVar4 = *(int *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined2 *)(iVar4 + 4);
    uVar1 = *(undefined2 *)(iVar4 + 8);
    uVar3 = __floatsisf(*(undefined4 *)(iVar4 + 0xc));
    iVar4 = SmDev();
    __subsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar20 + DAT_00165eb0)));
    iVar4 = __fixsfsi();
    iVar6 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165eb4)));
    uVar3 = CFPoint::subtract(CONCAT22(uVar2,uVar1),uVar7 & 0xffff | iVar4 << 0x10);
    FUN_001652d4(uVar5,uVar3);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    iVar6 = *(int *)param_1;
    uVar2 = *(undefined2 *)(iVar6 + 4);
    uVar1 = *(undefined2 *)(iVar6 + 8);
    uVar3 = __floatsisf(*(undefined4 *)(iVar6 + 0xc));
    iVar6 = SmDev();
    __subsf3(uVar3,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar20 + DAT_00165eb8)));
    iVar6 = __fixsfsi();
    iVar8 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(iVar20 + DAT_00165ebc)));
    uVar3 = CFPoint::subtract(CONCAT22(uVar2,uVar1),uVar7 & 0xffff | iVar6 << 0x10);
    FUN_001652d4(iVar4,uVar3);
  }
  return;
}


