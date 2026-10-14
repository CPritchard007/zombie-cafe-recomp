/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4a3e Menu::addMenuItem */

/* Menu::addMenuItem(MenuItem*) */

void __thiscall Menu::addMenuItem(Menu *this,MenuItem *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_1 != (MenuItem *)0x0) {
    pvVar1 = operator_new(0xc);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(void **)(*(int *)(this + 0x30) + 8) = pvVar1;
    *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 4) = *(int *)(this + 0x30);
    puVar2 = *(undefined4 **)(*(int *)(this + 0x30) + 8);
    *(undefined4 **)(this + 0x30) = puVar2;
    *puVar2 = param_1;
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    MenuItem::setMenu(param_1,this,false,true);
  }
  return;
}


