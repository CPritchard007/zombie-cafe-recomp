/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4a76 Menu::removeSelection */

/* Menu::removeSelection() */

void __thiscall Menu::removeSelection(Menu *this)

{
  Menu *pMVar1;
  
  pMVar1 = this + 0x6a;
  if ((*pMVar1 == (Menu)0x0) && (-1 < *(int *)(this + 0x60))) {
    *pMVar1 = (Menu)0x1;
    (**(code **)(**(int **)(this + 100) + 0x40))(*(int **)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x60) = 0xffffffff;
    *pMVar1 = (Menu)0x0;
  }
  return;
}


