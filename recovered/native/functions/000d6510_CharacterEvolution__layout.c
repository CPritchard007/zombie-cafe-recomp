/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d6510 CharacterEvolution::layout */

/* CharacterEvolution::layout() */

void __thiscall CharacterEvolution::layout(CharacterEvolution *this)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  CharacterEvolution *pCVar10;
  int *piVar11;
  
  piVar1 = *(int **)(this + 0x90);
  iVar3 = piVar1[3];
  pCVar10 = this + 0x98;
  *(int *)(this + 0xc) = iVar3;
  iVar9 = DAT_000d67d8;
  *(int *)(this + 0x10) = piVar1[4];
  iVar9 = iVar9 + 0xd6532;
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar3,0);
  piVar1 = *(int **)pCVar10;
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67dc));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67e0)));
  piVar1 = *(int **)(this + 0x9c);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67e4));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67e8)));
  piVar1 = *(int **)(this + 0xa4);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67ec));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d67f0)));
  piVar11 = *(int **)(this + 0x94);
  pcVar7 = *(code **)(*piVar11 + 0x14);
  iVar5 = *(int *)(*(int *)pCVar10 + 0xc);
  iVar8 = *(int *)(*(int *)pCVar10 + 4);
  piVar1 = *(int **)(iVar9 + DAT_000d67f4);
  iVar4 = *piVar1;
  iVar3 = SmDev();
  iVar4 = *(int *)(iVar3 * 4 + iVar4);
  iVar3 = SmDev();
  iVar6 = DAT_000d67f8 + 0xd6600;
  (*pcVar7)(piVar11,(iVar8 - iVar5 / 2) + iVar4 + *(int *)(iVar3 * 4 + iVar6),
            *(int *)(*(int *)pCVar10 + 0x10) / 2 + *(int *)(*(int *)pCVar10 + 8));
  piVar11 = *(int **)(this + 0x94);
  pcVar7 = *(code **)(*piVar11 + 0x18);
  iVar5 = *(int *)(*(int *)pCVar10 + 0xc);
  iVar4 = **(int **)(iVar9 + DAT_000d67fc);
  iVar3 = SmDev();
  iVar8 = *(int *)(iVar3 * 4 + iVar4);
  iVar4 = *piVar1;
  iVar3 = SmDev();
  iVar4 = *(int *)(iVar3 * 4 + iVar4);
  iVar3 = SmDev();
  (*pcVar7)(piVar11,((iVar5 - iVar8) - iVar4) + *(int *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6800))
            ,*(undefined4 *)(*(int *)pCVar10 + 0x10));
  piVar1 = *(int **)(this + 0xcc);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  uVar2 = *(undefined4 *)(*(int *)pCVar10 + 4);
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6804)));
  pCVar10 = this + 0xe0;
  piVar1 = *(int **)pCVar10;
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6808));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d680c)));
  piVar1 = *(int **)pCVar10;
  pcVar7 = *(code **)(*piVar1 + 0x18);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6810));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6814)));
  piVar1 = *(int **)(this + 0xd0);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,0);
  piVar1 = *(int **)(this + 0xd0);
  iVar5 = piVar1[2];
  iVar3 = (**(code **)(*piVar1 + 0x4c))();
  iVar4 = SmDev();
  piVar1 = *(int **)(this + 0xd4);
  iVar4 = iVar5 + iVar3 + *(int *)(iVar6 + iVar4 * 4 + 0x18);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,iVar4);
  piVar1 = *(int **)(this + 0xd8);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  (*pcVar7)(piVar1,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6818)),iVar4);
  piVar1 = *(int **)(this + 0xdc);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  (*pcVar7)(piVar1,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d681c)),iVar4);
  piVar1 = *(int **)(this + 0xc4);
  (**(code **)(*piVar1 + 0x14))
            (piVar1,*(int *)(this + 0xc) / 2,*(int *)(this + 0x10) - piVar1[4] / 2);
  piVar1 = *(int **)(this + 0xd4);
  iVar4 = piVar1[2];
  iVar3 = (**(code **)(*piVar1 + 0x4c))();
  (**(code **)(**(int **)(this + 0xe4) + 0x18))
            (*(int **)(this + 0xe4),*(undefined4 *)(*(int *)pCVar10 + 0xc),iVar4 + iVar3);
  piVar1 = *(int **)(this + 0xe8);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar2 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6820));
  iVar3 = SmDev();
  (*pcVar7)(piVar1,uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar9 + DAT_000d6824)));
  return;
}


