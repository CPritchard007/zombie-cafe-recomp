/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4cca Menu::removeAllMenuItems */

/* Menu::removeAllMenuItems() */

void __thiscall Menu::removeAllMenuItems(Menu *this)

{
  MenuItem *this_00;
  int iVar1;
  
  (**(code **)(*(int *)this + 0x60))();
  iVar1 = *(int *)(this + 0x38);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    this_00 = (MenuItem *)
              CapcomOrderableList<ScreenElement*>::get
                        ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),iVar1);
    MenuItem::setMenu(this_00,(Menu *)0x0,false,false);
  }
  if (this[0x69] == (Menu)0x0) {
    ScreenElement::removeAllChildren((ScreenElement *)this);
  }
  else {
    ScreenElement::deleteChildren((ScreenElement *)this);
  }
  return;
}


