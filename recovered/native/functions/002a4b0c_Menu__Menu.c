/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4b0c Menu::Menu */

/* Menu::Menu(int, int, int, int, unsigned char) */

Menu * __thiscall
Menu::Menu(Menu *this,int param_1,int param_2,int param_3,int param_4,uchar param_5)

{
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_1,param_2,param_3,param_4,param_5,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a4b4c + 0x2a4b30) + 8;
  this[0x68] = (Menu)0x0;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  this[0x69] = (Menu)0x0;
  return this;
}


