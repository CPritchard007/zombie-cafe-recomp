/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a49b8 Menu::removeMenuItem */

/* Menu::removeMenuItem(MenuItem*) */

undefined4 __thiscall Menu::removeMenuItem(Menu *this,MenuItem *param_1)

{
  int iVar1;
  Menu *pMVar2;
  
  pMVar2 = this + 0x24;
  iVar1 = 0;
  while( true ) {
    pMVar2 = *(Menu **)(pMVar2 + 8);
    if (pMVar2 == (Menu *)0x0) {
      return 0;
    }
    if (*(MenuItem **)pMVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(this + 0x38) <= iVar1) {
    return 0;
  }
  (**(code **)(*(int *)this + 0x44))(this,iVar1);
  return 1;
}


