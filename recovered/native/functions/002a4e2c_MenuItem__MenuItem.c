/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4e2c MenuItem::MenuItem */

/* MenuItem::MenuItem(int, int, int, int, unsigned char) */

MenuItem * __thiscall
MenuItem::MenuItem(MenuItem *this,int param_1,int param_2,int param_3,int param_4,uchar param_5)

{
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_1,param_2,param_3,param_4,param_5,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a4e64 + 0x2a4e50) + 8;
  this[0x65] = (MenuItem)0x0;
  this[100] = (MenuItem)0x1;
  *(undefined4 *)(this + 0x60) = 0;
  return this;
}


