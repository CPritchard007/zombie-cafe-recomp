/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e9b64 LotteryFeaturedDialog::layout */

/* LotteryFeaturedDialog::layout() */

void __thiscall LotteryFeaturedDialog::layout(LotteryFeaturedDialog *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  LotteryFeaturedDialog *pLVar9;
  
  pcVar3 = *(code **)(*(int *)this + 0x18);
  iVar5 = *(int *)(*(int *)(this + 0x70) + 100);
  uVar7 = *(undefined4 *)(iVar5 + 0x2c);
  uVar1 = __floatsisf((int)*(short *)(iVar5 + 0x20));
  uVar1 = __mulsf3(uVar1,uVar7);
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 0x26));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x60));
  __addsf3(uVar1,uVar1);
  uVar1 = __fixsfsi();
  uVar2 = __floatsisf((int)*(short *)(iVar5 + 0x22));
  uVar2 = __mulsf3(uVar2,uVar7);
  uVar7 = __floatsisf((int)*(short *)(iVar5 + 0x24));
  uVar2 = __addsf3(uVar2,uVar7);
  uVar7 = __floatsisf((int)*(short *)(iVar5 + 0x28));
  __addsf3(uVar2,uVar7);
  __fixsfsi();
  uVar2 = __floatsisf();
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 100));
  uVar2 = __addsf3(uVar2,uVar2);
  iVar5 = SmDev();
  iVar6 = DAT_001e9e00 + 0x1e9c16;
  uVar7 = __floatsisf(*(undefined4 *)(iVar5 * 4 + iVar6));
  __addsf3(uVar2,uVar7);
  uVar2 = __fixsfsi();
  (*pcVar3)(this,uVar1,uVar2);
  piVar8 = *(int **)(this + 0x70);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,0,*(undefined4 *)(iVar5 * 4 + iVar6));
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(this + 0xc),0);
  piVar8 = *(int **)(this + 0x84);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar4 = *(int *)(*(int *)(this + 0x70) + 0xc);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,iVar4 / 2,*(undefined4 *)(iVar6 + iVar5 * 4 + 0x18));
  piVar8 = *(int **)(this + 0x84);
  pcVar3 = *(code **)(*piVar8 + 0x18);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,*(undefined4 *)(iVar6 + iVar5 * 4 + 0x30),1000);
  piVar8 = *(int **)(this + 0x74);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)(iVar6 + iVar5 * 4 + 0x48);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar6 + iVar5 * 4 + 0x60));
  piVar8 = *(int **)(this + 0x78);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)(iVar6 + iVar5 * 4 + 0x78);
  iVar5 = SmDev();
  iVar4 = DAT_001e9e04 + 0x1e9cda;
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x10));
  piVar8 = *(int **)(this + 0x8c);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)(iVar4 + iVar5 * 4 + 0x28);
  iVar5 = SmDev();
  pLVar9 = this + 0xa4;
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x40));
  piVar8 = *(int **)pLVar9;
  pcVar3 = *(code **)(*piVar8 + 0x14);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)(iVar4 + iVar5 * 4 + 0x58);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x70));
  piVar8 = *(int **)pLVar9;
  iVar4 = DAT_001e9e08 + 0x1e9d3e;
  pcVar3 = *(code **)(*piVar8 + 0x18);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)(iVar4 + iVar5 * 4 + 8);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x20));
  piVar8 = *(int **)(this + 0xa8);
  pcVar3 = *(code **)(*piVar8 + 0x18);
  uVar1 = *(undefined4 *)(*(int *)pLVar9 + 0xc);
  iVar5 = SmDev();
  (*pcVar3)(piVar8,uVar1,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x38));
  piVar8 = *(int **)(this + 0xa8);
  (**(code **)(*piVar8 + 0x14))(piVar8,0,0);
  piVar8 = *(int **)(this + 0x88);
  (**(code **)(*piVar8 + 0x14))(piVar8,0,0);
  piVar8 = *(int **)(this + 0x88);
  pcVar3 = *(code **)(*piVar8 + 0x18);
  iVar5 = SmDev();
  pLVar9 = this + 0x94;
  (*pcVar3)(piVar8,*(undefined4 *)(iVar4 + iVar5 * 4 + 0x50),1000);
  (**(code **)(**(int **)pLVar9 + 0x18))
            (*(int **)pLVar9,*(undefined4 *)(*(int *)(this + 0x84) + 0xc),3);
  (**(code **)(**(int **)pLVar9 + 0x1c))(*(int **)pLVar9,0x11);
  *(undefined4 *)(*(int *)pLVar9 + 0x18) = 0xffffffff;
  (**(code **)(**(int **)pLVar9 + 0x14))
            (*(int **)pLVar9,*(int *)(*(int *)(this + 0x70) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x84) + 8) + *(int *)(*(int *)(this + 0x84) + 0x10));
  return;
}


