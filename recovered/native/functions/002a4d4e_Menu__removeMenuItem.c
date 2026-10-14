/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4d4e Menu::removeMenuItem */

/* Menu::removeMenuItem(int) */

void __thiscall Menu::removeMenuItem(Menu *this,int param_1)

{
  MenuItem *this_00;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x38))) {
    if (param_1 == *(int *)(this + 0x60)) {
      (**(code **)(*(int *)this + 0x54))(this);
      if (param_1 == *(int *)(this + 0x60)) {
        (**(code **)(*(int *)this + 0x50))(this);
      }
      if (param_1 == *(int *)(this + 0x60)) {
        (**(code **)(*(int *)this + 0x60))(this);
      }
    }
    this_00 = (MenuItem *)
              CapcomOrderableList<ScreenElement*>::get
                        ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),param_1);
    MenuItem::setMenu(this_00,(Menu *)0x0,true,true);
    if ((this[0x69] != (Menu)0x0) && (this_00 != (MenuItem *)0x0)) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
    if (param_1 < *(int *)(this + 0x38)) {
      CapcomOrderableList<ScreenElement*>::deleteNode
                ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),param_1);
    }
  }
  return;
}


