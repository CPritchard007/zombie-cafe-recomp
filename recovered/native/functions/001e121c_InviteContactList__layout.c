/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e121c InviteContactList::layout */

/* InviteContactList::layout() */

void __thiscall InviteContactList::layout(InviteContactList *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  InviteContactList *pIVar11;
  int *piVar12;
  int local_30;
  int local_2c;
  
  iVar1 = SmDev();
  iVar6 = *(int *)(this + 0x74);
  iVar9 = DAT_001e14b0 + 0x1e1230;
  if (iVar1 == 0) {
    piVar10 = *(int **)(iVar9 + DAT_001e14b4);
    *(int *)(this + 0xc) = *(int *)(iVar6 + 0xc) + *piVar10;
    piVar2 = *(int **)(this + 0x8c);
    piVar12 = *(int **)(iVar9 + DAT_001e14b8);
    *(int *)(this + 0x10) = *(int *)(iVar6 + 0x10) + *piVar12 + piVar2[4] / 2;
    (**(code **)(*piVar2 + 0x14))(piVar2,*(int *)(iVar6 + 0xc) / 2);
    (**(code **)(**(int **)(this + 0x80) + 0x14))
              (*(int **)(this + 0x80),*(undefined4 *)(this + 0xc),0);
    piVar2 = *(int **)(this + 0x74);
    iVar1 = *(int *)(this + 0xc) - *piVar10;
    pcVar7 = *(code **)(*piVar2 + 0x14);
    iVar6 = *piVar12;
  }
  else {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar6 + 0x10);
    (**(code **)(**(int **)(this + 0x8c) + 0x14))(*(int **)(this + 0x8c),*(int *)(iVar6 + 0xc) / 2);
    piVar2 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar2 + 0x14);
    iVar1 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14bc)));
    iVar1 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14c0)));
    (*pcVar7)(piVar2,uVar4,uVar3);
    piVar2 = *(int **)(this + 0x74);
    iVar1 = *(int *)(this + 0xc);
    iVar6 = 0;
    pcVar7 = *(code **)(*piVar2 + 0x14);
  }
  (*pcVar7)(piVar2,iVar1,iVar6);
  piVar2 = *(int **)(this + 0x78);
  pcVar7 = *(code **)(*piVar2 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x74) + 0xc);
  iVar1 = SmDev();
  (*pcVar7)(piVar2,iVar6 / 2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14c4)));
  pIVar11 = this + 0x90;
  (**(code **)(**(int **)(this + 0x8c) + 0x14))
            (*(int **)(this + 0x8c),*(int *)(*(int *)(this + 0x74) + 0xc) / 2,
             *(undefined4 *)(this + 0x10));
  piVar2 = *(int **)pIVar11;
  pcVar7 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar4 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14c8));
  iVar1 = SmDev();
  (*pcVar7)(piVar2,uVar4,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14cc)));
  (**(code **)(**(int **)pIVar11 + 0x1c))(*(int **)pIVar11,9);
  piVar2 = *(int **)pIVar11;
  pcVar7 = *(code **)(*piVar2 + 0x18);
  iVar1 = SmDev();
  iVar6 = *(int *)(iVar9 + DAT_001e14d0);
  uVar4 = *(undefined4 *)(iVar1 * 4 + iVar6);
  iVar1 = SmDev();
  (*pcVar7)(piVar2,uVar4,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14d4)));
  piVar2 = *(int **)(this + 0x94);
  (**(code **)(*piVar2 + 0x14))(piVar2,0,0);
  piVar2 = *(int **)(this + 0x94);
  (**(code **)(*piVar2 + 0x1c))(piVar2,9);
  iVar1 = SmDev();
  local_2c = 0;
  local_30 = *(int *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14d8));
  iVar1 = *(int *)(this + 0xa8);
  for (; local_2c < iVar1 + 1; local_2c = local_2c + 1) {
    puVar8 = *(undefined4 **)(local_2c * 4 + *(int *)(this + 0xac));
    piVar2 = (int *)*puVar8;
    piVar10 = (int *)puVar8[1];
    pcVar7 = *(code **)(*piVar2 + 0x14);
    iVar5 = SmDev();
    (*pcVar7)(piVar2,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar9 + DAT_001e14dc)),local_30);
    pcVar7 = *(code **)(*piVar10 + 0x14);
    iVar5 = SmDev();
    (*pcVar7)(piVar10,*(undefined4 *)(iVar6 + iVar5 * 4),local_30);
    iVar5 = SmDev();
    local_30 = local_30 + *(int *)(iVar5 * 4 + *(int *)(iVar9 + DAT_001e14e0));
  }
  piVar2 = *(int **)(this + 0x94);
  pcVar7 = *(code **)(*piVar2 + 0x18);
  iVar1 = SmDev();
  (*pcVar7)(piVar2,*(undefined4 *)(iVar6 + iVar1 * 4),local_30);
  piVar2 = *(int **)(this + 0x84);
  pcVar7 = *(code **)(*piVar2 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x74) + 0xc);
  iVar1 = SmDev();
  (*pcVar7)(piVar2,iVar6 / 2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14e4)));
  piVar2 = *(int **)(this + 0x88);
  pcVar7 = *(code **)(*piVar2 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x74) + 0xc);
  iVar1 = SmDev();
  (*pcVar7)(piVar2,iVar6 / 2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar9 + DAT_001e14e8)));
  (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  piVar2 = *(int **)(this + 0x88);
  (**(code **)(*piVar2 + 0x20))(piVar2,0);
  return;
}


