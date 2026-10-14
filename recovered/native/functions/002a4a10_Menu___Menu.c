/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4a10 Menu::~Menu */

/* Menu::~Menu() */

Menu * __thiscall Menu::~Menu(Menu *this)

{
  *(int *)this = *(int *)(DAT_002a4a28 + 0x2a4a1a) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


