/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5584 Scrollbar::Scrollbar */

/* Scrollbar::Scrollbar(bool, unsigned char) */

Scrollbar * __thiscall Scrollbar::Scrollbar(Scrollbar *this,bool param_1,uchar param_2)

{
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a55b8 + 0x2a559c) + 8;
  this[0x60] = (Scrollbar)param_1;
  ScreenElement::setAnchor((ScreenElement *)this,param_2);
  return this;
}


