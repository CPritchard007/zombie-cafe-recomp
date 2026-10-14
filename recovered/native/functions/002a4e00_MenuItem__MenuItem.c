/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4e00 MenuItem::MenuItem */

/* MenuItem::MenuItem() */

MenuItem * __thiscall MenuItem::MenuItem(MenuItem *this)

{
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a4e28 + 0x2a4e14) + 8;
  this[0x65] = (MenuItem)0x0;
  this[100] = (MenuItem)0x1;
  *(undefined4 *)(this + 0x60) = 0;
  return this;
}


