/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4ad8 Menu::Menu */

/* Menu::Menu(int) */

Menu * __thiscall Menu::Menu(Menu *this,int param_1)

{
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a4b08 + 0x2a4aec) + 8;
  this[0x68] = (Menu)0x0;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  this[0x69] = (Menu)0x0;
  return this;
}


