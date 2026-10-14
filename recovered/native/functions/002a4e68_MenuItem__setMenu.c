/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4e68 MenuItem::setMenu */

/* MenuItem::setMenu(Menu*, bool, bool) */

void __thiscall MenuItem::setMenu(MenuItem *this,Menu *param_1,bool param_2,bool param_3)

{
  Menu *pMVar1;
  int iVar2;
  
  pMVar1 = *(Menu **)(this + 0x60);
  if (pMVar1 != param_1) {
    *(Menu **)(this + 0x60) = param_1;
    if ((pMVar1 != (Menu *)0x0) && (param_3)) {
      (**(code **)(*(int *)pMVar1 + 0x48))
                (pMVar1,this,param_2,*(code **)(*(int *)pMVar1 + 0x48),param_3);
    }
    if (((*(Menu **)(this + 0x60) != (Menu *)0x0) && (param_2)) &&
       (iVar2 = Menu::getMenuItemIndexOf(*(Menu **)(this + 0x60),this), iVar2 == 0)) {
      (**(code **)(**(int **)(this + 0x60) + 0x40))(*(int **)(this + 0x60),this);
    }
  }
  return;
}


