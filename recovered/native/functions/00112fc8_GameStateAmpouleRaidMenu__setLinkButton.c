/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112fc8 GameStateAmpouleRaidMenu::setLinkButton */

/* GameStateAmpouleRaidMenu::setLinkButton() */

void GameStateAmpouleRaidMenu::setLinkButton(void)

{
  int in_r0;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(in_r0 + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    iVar2 = ZombieCafe::isWeekRaid_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    puVar4 = (undefined1 *)(*(int *)(in_r0 + 0x4c) + 0x86);
    if (iVar2 == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = 1;
    }
  }
  piVar1 = *(int **)(in_r0 + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    iVar2 = ZombieCafe::isEventRaid_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    puVar4 = (undefined1 *)(*(int *)(in_r0 + 0x50) + 0x86);
    if (iVar2 == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = 1;
    }
  }
  piVar1 = *(int **)(in_r0 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    iVar2 = ZombieCafe::isEventRaid2_Advent(*(ZombieCafe **)(in_r0 + 0xc));
    puVar4 = (undefined1 *)(*(int *)(in_r0 + 0x54) + 0x86);
    if (iVar2 == 0) {
      *puVar4 = 0;
    }
    else {
      *puVar4 = 1;
    }
  }
  iVar3 = *(int *)(in_r0 + 0x48);
  piVar1 = *(int **)(in_r0 + 0x4c);
  iVar5 = *(int *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 4);
  iVar2 = (int)(((uint)(iVar5 >> 0x1f) >> 0x1c) + iVar5) >> 4;
  iVar3 = (*(int *)(iVar3 + 8) - iVar5 / 2) + iVar2 * 3;
  iVar2 = iVar2 * 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,uVar6,iVar3);
    iVar3 = iVar3 + iVar2;
  }
  piVar1 = *(int **)(in_r0 + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,uVar6,iVar3);
    iVar3 = iVar3 + iVar2;
  }
  piVar1 = *(int **)(in_r0 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,uVar6,iVar3);
  }
  return;
}


