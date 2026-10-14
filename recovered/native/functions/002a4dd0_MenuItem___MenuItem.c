/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4dd0 MenuItem::~MenuItem */

/* MenuItem::~MenuItem() */

MenuItem * __thiscall MenuItem::~MenuItem(MenuItem *this)

{
  *(int *)this = *(int *)(DAT_002a4de8 + 0x2a4dda) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


