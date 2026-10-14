/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b01e0 GameStateEventRaid2Menu::setLinkButton */

/* GameStateEventRaid2Menu::setLinkButton() */

void GameStateEventRaid2Menu::setLinkButton(void)

{
  bool bVar1;
  int in_r0;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  
  piVar2 = *(int **)(in_r0 + 0x88);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    iVar3 = ZombieCafe::isWeekRaid_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    puVar5 = (undefined1 *)(*(int *)(in_r0 + 0x88) + 0x86);
    if (iVar3 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
  }
  piVar2 = *(int **)(in_r0 + 0x8c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    iVar3 = ZombieCafe::isAmpouleRaid_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    puVar5 = (undefined1 *)(*(int *)(in_r0 + 0x8c) + 0x86);
    if (iVar3 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
    }
  }
  puVar8 = (uint *)(in_r0 + 0x90);
  uVar9 = *puVar8;
  if (uVar9 != 0) {
    iVar3 = ZombieCafe::isEventRaid_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    piVar2 = (int *)*puVar8;
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 0x20))(piVar2,0);
      uVar6 = *puVar8;
    }
    else {
      (**(code **)(*piVar2 + 0x20))(piVar2,1);
      uVar6 = *puVar8;
    }
    bVar1 = iVar3 != 0;
    uVar9 = (uint)bVar1;
    *(bool *)(uVar6 + 0x86) = bVar1;
  }
  iVar7 = *(int *)(in_r0 + 0x84);
  iVar3 = *(int *)(iVar7 + 0x10);
  uVar11 = *(undefined4 *)(iVar7 + 4);
  iVar7 = *(int *)(iVar7 + 8);
  if (uVar9 == 0) {
    iVar4 = __divsi3(iVar3,10);
    iVar10 = iVar4 << 2;
  }
  else {
    iVar4 = (int)(((uint)(iVar3 >> 0x1f) >> 0x1c) + iVar3) >> 4;
    iVar10 = iVar4 * 5;
  }
  iVar3 = (iVar7 - iVar3 / 2) + iVar4 * 3;
  piVar2 = *(int **)(in_r0 + 0x88);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,uVar11,iVar3);
    iVar3 = iVar3 + iVar10;
  }
  piVar2 = *(int **)(in_r0 + 0x8c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,uVar11,iVar3);
    iVar3 = iVar3 + iVar10;
  }
  piVar2 = *(int **)(in_r0 + 0x90);
  if ((piVar2 != (int *)0x0) && ((char)piVar2[5] != '\0')) {
    (**(code **)(*piVar2 + 0x14))(piVar2,uVar11,iVar3);
  }
  return;
}


