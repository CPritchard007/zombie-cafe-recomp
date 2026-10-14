/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c9a34 GameStateZukan::layout */

/* GameStateZukan::layout() */

void __thiscall GameStateZukan::layout(GameStateZukan *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  ScreenElement *pSVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = DAT_001c9dbc;
  (**(code **)(**(int **)(this + 0x1c) + 0x18))
            (*(int **)(this + 0x1c),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar11 = iVar11 + 0x1c9a56;
  FUN_001c7944(*(undefined4 *)(this + 0x24),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar7 = *(int **)(this + 0x20);
  iVar10 = DAT_001c9dc0 + 0x1c9a64;
  pcVar6 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x18));
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x58);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001c9dc4)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001c9dc8)));
  (*pcVar6)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(this + 0x5c);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x48));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x60));
  (*pcVar6)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(this + 0x60);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x78));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(DAT_001c9dcc + iVar2 * 4 + 0x1c9b1e));
  (*pcVar6)(piVar7,uVar3,uVar4);
  *(undefined4 *)(*(int *)(this + 0x2c) + 100) = *(undefined4 *)(this + 0x70);
  iVar8 = *(int *)(this + 0x70);
  piVar7 = *(int **)(this + 0x2c);
  uVar5 = *(undefined4 *)(iVar8 + 0x2c);
  iVar2 = *piVar7;
  uVar3 = __floatsisf((int)*(short *)(iVar8 + 0x20));
  uVar3 = __mulsf3(uVar3,uVar5);
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x2a));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x26));
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,*(undefined4 *)(this + 0x14));
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x22));
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar8 + 0x24));
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar8 + 0x28));
  __addsf3(uVar4,uVar5);
  __fixsfsi();
  uVar4 = __floatsisf();
  __mulsf3(uVar4,*(undefined4 *)(this + 0x18));
  uVar4 = __fixsfsi();
  (**(code **)(iVar2 + 0x18))(piVar7,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x2c) + 0x1c))(*(int **)(this + 0x2c),10);
  piVar7 = *(int **)(this + 0x2c);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001c9dd0)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001c9dd4)));
  (*pcVar6)(piVar7,uVar3,uVar4);
  *(undefined4 *)(*(int *)(this + 0x34) + 100) = *(undefined4 *)(this + 0x74);
  iVar8 = *(int *)(this + 0x74);
  piVar7 = *(int **)(this + 0x34);
  uVar5 = *(undefined4 *)(iVar8 + 0x2c);
  iVar2 = *piVar7;
  uVar3 = __floatsisf((int)*(short *)(iVar8 + 0x20));
  uVar3 = __mulsf3(uVar3,uVar5);
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x2a));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x26));
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,*(undefined4 *)(this + 0x14));
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x22));
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar8 + 0x24));
  uVar4 = __addsf3(uVar4,uVar5);
  uVar5 = __floatsisf((int)*(short *)(iVar8 + 0x28));
  __addsf3(uVar4,uVar5);
  __fixsfsi();
  uVar4 = __floatsisf();
  __mulsf3(uVar4,*(undefined4 *)(this + 0x18));
  uVar4 = __fixsfsi();
  (**(code **)(iVar2 + 0x18))(piVar7,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x34) + 0x1c))(*(int **)(this + 0x34),0x22);
  piVar7 = *(int **)(this + 0x34);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x30));
  iVar11 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar10 + DAT_001c9dd8)));
  (*pcVar6)(piVar7,uVar3,uVar4);
  pSVar9 = *(ScreenElement **)(this + 0x34);
  iVar2 = *(int *)(pSVar9 + 0xc);
  iVar8 = *(int *)(this + 0xc4);
  uVar3 = __floatsisf(*(int *)(pSVar9 + 0x10) - *(int *)(iVar8 + 0x10));
  iVar11 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar11 * 4 + DAT_001c9ddc + 0x1c9d14));
  iVar11 = __fixsfsi();
  uVar3 = ScreenElement::localToParentCoords(pSVar9,iVar2 >> 1,iVar11);
  FUN_001c7944(iVar8,uVar3);
  piVar7 = *(int **)(this + 0x6c);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar11 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar10 + DAT_001c9de0)));
  iVar11 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar11 * 4 + *(int *)(iVar10 + DAT_001c9de4)));
  (*pcVar6)(piVar7,uVar3,uVar4);
  iVar11 = *(int *)(this + 0x30);
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x2c),
                     *(int *)(*(ScreenElement **)(this + 0x2c) + 0xc) >> 1,
                     -*(int *)(iVar11 + 0x10) >> 2);
  FUN_001c7944(iVar11,uVar3);
  uVar4 = *(undefined4 *)(this + 100);
  uVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x2c),0,
                     *(int *)(*(ScreenElement **)(this + 0x2c) + 0x10) >> 1);
  FUN_001c7944(uVar4,uVar3);
  pSVar9 = *(ScreenElement **)(this + 0x2c);
  uVar4 = *(undefined4 *)(this + 0x68);
  uVar3 = ScreenElement::localToParentCoords
                    (pSVar9,*(int *)(pSVar9 + 0xc),*(int *)(pSVar9 + 0x10) >> 1);
  FUN_001c7944(uVar4,uVar3);
  setPage(this,'\0');
  releaseSelectCharacter(this);
  return;
}


