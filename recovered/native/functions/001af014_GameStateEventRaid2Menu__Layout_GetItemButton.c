/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af014 GameStateEventRaid2Menu::Layout_GetItemButton */

/* GameStateEventRaid2Menu::Layout_GetItemButton() */

void GameStateEventRaid2Menu::Layout_GetItemButton(void)

{
  GameStateEventRaid2Menu *in_r0;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  piVar1 = *(int **)(in_r0 + 0x78);
  if (*(char *)(*(int *)(DAT_001af070 + 0x1af020) + 0x19) != '\0') {
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    piVar1 = *(int **)(in_r0 + 0x7c);
    uVar3 = 1;
    pcVar4 = *(code **)(*piVar1 + 0x20);
    goto LAB_001af06c;
  }
  if ((char)piVar1[5] == '\0') {
    iVar2 = isGetEventRaid2Item(in_r0);
    if (0 < iVar2) {
      piVar1 = *(int **)(in_r0 + 0x78);
      uVar3 = 1;
      pcVar4 = *(code **)(*piVar1 + 0x20);
      goto LAB_001af050;
    }
  }
  else {
    iVar2 = isGetEventRaid2Item(in_r0);
    if (iVar2 < 1) {
      piVar1 = *(int **)(in_r0 + 0x78);
      pcVar4 = *(code **)(*piVar1 + 0x20);
      uVar3 = 0;
LAB_001af050:
      (*pcVar4)(piVar1,uVar3);
    }
  }
  piVar1 = *(int **)(in_r0 + 0x7c);
  uVar3 = 0;
  pcVar4 = *(code **)(*piVar1 + 0x20);
LAB_001af06c:
  (*pcVar4)(piVar1,uVar3);
  return;
}


