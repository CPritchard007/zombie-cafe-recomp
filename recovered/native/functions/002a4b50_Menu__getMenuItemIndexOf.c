/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4b50 Menu::getMenuItemIndexOf */

/* Menu::getMenuItemIndexOf(MenuItem*) const */

int __thiscall Menu::getMenuItemIndexOf(Menu *this,MenuItem *param_1)

{
  int iVar1;
  Menu *pMVar2;
  
  pMVar2 = this + 0x24;
  iVar1 = 0;
  while( true ) {
    pMVar2 = *(Menu **)(pMVar2 + 8);
    if (pMVar2 == (Menu *)0x0) {
      return -1;
    }
    if (*(MenuItem **)pMVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


