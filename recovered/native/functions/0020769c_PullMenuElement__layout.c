/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020769c PullMenuElement::layout */

/* PullMenuElement::layout() */

void __thiscall PullMenuElement::layout(PullMenuElement *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  PullMenuElement *pPVar9;
  int iVar10;
  
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  pPVar9 = this + 0xcc;
  iVar1 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar1 + 0x44);
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 100) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 100) + 0x10));
  piVar3 = *(int **)pPVar9;
  (**(code **)(*piVar3 + 0x18))(piVar3,piVar3[3],piVar3[4]);
  uVar8 = __mulsf3(uVar8,DAT_00207998);
  uVar5 = *(undefined4 *)(*(int *)pPVar9 + 0xc);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)pPVar9 + 0x10));
  __addsf3(uVar4,uVar8);
  uVar4 = __fixsfsi();
  piVar3 = *(int **)(this + 0xd0);
  (**(code **)(*piVar3 + 0x18))(piVar3,uVar5,uVar4);
  piVar3 = (int *)(DAT_0020799c + 0x207712);
  pcVar6 = *(code **)(**(int **)pPVar9 + 0x14);
  uVar4 = __floatsisf(*(undefined4 *)(this + 0xc));
  iVar1 = SmDev();
  iVar7 = *(int *)pPVar9;
  uVar5 = __mulsf3(uVar2,DAT_00207998);
  iVar10 = *piVar3;
  uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar1 * 4 + iVar10));
  __subsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  (*pcVar6)(iVar7,uVar4,*(int *)(this + 0x10) - *(int *)(iVar7 + 0x10) / 2);
  FUN_0020712e(*(undefined4 *)(this + 0xd0),
               CONCAT22(*(undefined2 *)(*(int *)pPVar9 + 4),*(undefined2 *)(*(int *)pPVar9 + 8)));
  iVar1 = *(int *)pPVar9;
  uVar4 = __floatsisf(*(undefined4 *)(iVar1 + 4));
  *(undefined4 *)(this + 0xf0) = uVar4;
  uVar4 = __floatsisf(*(undefined4 *)(iVar1 + 0x10));
  uVar8 = __addsf3(uVar4,uVar8);
  uVar8 = __mulsf3(uVar8,0x3f000000);
  piVar3 = *(int **)(this + 0x74);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  iVar1 = SmDev();
  uVar8 = __fixsfsi(uVar8);
  uVar4 = __mulsf3(uVar2,DAT_002079a0);
  __mulsf3(uVar4,*(undefined4 *)(iVar1 * 4 + iVar10));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar3,uVar4,uVar8);
  iVar1 = SmDev();
  uVar2 = __mulsf3(uVar2,DAT_002079a4);
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar10));
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x74) + 4));
  uVar4 = __addsf3(uVar4,uVar2);
  uVar5 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x78) + 0x14))(*(int **)(this + 0x78),uVar5,uVar8);
  uVar4 = __addsf3(uVar4,uVar2);
  uVar5 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x7c) + 0x14))(*(int **)(this + 0x7c),uVar5,uVar8);
  uVar4 = __addsf3(uVar4,uVar2);
  uVar5 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x80) + 0x14))(*(int **)(this + 0x80),uVar5,uVar8);
  uVar4 = __addsf3(uVar4,uVar2);
  uVar5 = __fixsfsi();
  (**(code **)(**(int **)(this + 0x84) + 0x14))(*(int **)(this + 0x84),uVar5,uVar8);
  uVar4 = __addsf3(uVar4,uVar2);
  piVar3 = *(int **)(this + 0x88);
  uVar5 = __fixsfsi();
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar5,uVar8);
  __addsf3(uVar4,uVar2);
  uVar2 = __fixsfsi();
  piVar3 = *(int **)(this + 0x8c);
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar2,uVar8);
  piVar3 = *(int **)(this + 0xd4);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  uVar8 = *(undefined4 *)(*(int *)(this + 0x7c) + 4);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x7c) + 8));
  iVar1 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_002079a8 + 0x2078c0)));
  uVar2 = __fixsfsi();
  (*pcVar6)(piVar3,uVar8,uVar2);
  iVar1 = *(int *)(this + 0x74);
  (**(code **)(**(int **)(this + 0x98) + 0x14))
            (*(int **)(this + 0x98),*(int *)(iVar1 + 0xc) / 2 + *(int *)(iVar1 + 4),
             *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10) / 2);
  iVar1 = *(int *)(this + 0x78);
  (**(code **)(**(int **)(this + 0xa4) + 0x14))
            (*(int **)(this + 0xa4),*(int *)(iVar1 + 0xc) / 2 + *(int *)(iVar1 + 4),
             *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10) / 2);
  iVar1 = *(int *)(this + 0x80);
  (**(code **)(**(int **)(this + 0xb0) + 0x14))
            (*(int **)(this + 0xb0),*(int *)(iVar1 + 0xc) / 2 + *(int *)(iVar1 + 4),
             *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10) / 2);
  iVar1 = *(int *)(this + 0x8c);
  (**(code **)(**(int **)(this + 0xbc) + 0x14))
            (*(int **)(this + 0xbc),*(int *)(iVar1 + 0xc) / 2 + *(int *)(iVar1 + 4),
             *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10) / 2);
  iVar1 = *(int *)(this + 0x84);
  (**(code **)(**(int **)(this + 200) + 0x14))
            (*(int **)(this + 200),*(int *)(iVar1 + 0xc) / 2 + *(int *)(iVar1 + 4),
             *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10) / 2);
  return;
}


