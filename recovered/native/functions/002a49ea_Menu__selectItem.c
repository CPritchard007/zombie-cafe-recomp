/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a49ea Menu::selectItem */

/* Menu::selectItem(MenuItem*) */

void Menu::selectItem(MenuItem *param_1)

{
  int in_r1;
  int iVar1;
  MenuItem *pMVar2;
  
  pMVar2 = param_1 + 0x24;
  iVar1 = 0;
  while (pMVar2 = *(MenuItem **)(pMVar2 + 8), pMVar2 != (MenuItem *)0x0) {
    if (*(int *)pMVar2 == in_r1) goto LAB_002a4a0c;
    iVar1 = iVar1 + 1;
  }
  iVar1 = -1;
LAB_002a4a0c:
  (**(code **)(*(int *)param_1 + 0x58))(param_1,iVar1);
  return;
}


