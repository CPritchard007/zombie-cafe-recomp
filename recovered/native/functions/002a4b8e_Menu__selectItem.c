/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4b8e Menu::selectItem */

/* Menu::selectItem(int) */

undefined8 __thiscall Menu::selectItem(Menu *this,int param_1)

{
  int *piVar1;
  Menu *pMVar2;
  
  pMVar2 = this + 0x6a;
  if ((((*pMVar2 == (Menu)0x0) && (-1 < param_1)) && (param_1 < *(int *)(this + 0x38))) &&
     (piVar1 = (int *)CapcomOrderableList<ScreenElement*>::get
                                ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),param_1),
     (char)piVar1[0x19] != '\0')) {
    *pMVar2 = (Menu)0x1;
    if (-1 < *(int *)(this + 0x60)) {
      (**(code **)(**(int **)(this + 100) + 0x40))(*(int **)(this + 100),0);
    }
    (**(code **)(*piVar1 + 0x40))(piVar1,1);
    *(int **)(this + 100) = piVar1;
    *(int *)(this + 0x60) = param_1;
    this[0x6a] = (Menu)0x0;
  }
  return CONCAT44(pMVar2,this);
}


