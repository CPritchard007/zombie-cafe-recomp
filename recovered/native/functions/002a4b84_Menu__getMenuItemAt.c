/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4b84 Menu::getMenuItemAt */

/* Menu::getMenuItemAt(int) const */

void __thiscall Menu::getMenuItemAt(Menu *this,int param_1)

{
  CapcomOrderableList<ScreenElement*>::get
            ((CapcomOrderableList<ScreenElement*> *)(this + 0x24),param_1);
  return;
}


