/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5538 Scrollbar::Scrollbar */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Scrollbar::Scrollbar(bool, int, int, long, int, int, unsigned char) */

Scrollbar * __thiscall
Scrollbar::Scrollbar
          (Scrollbar *this,bool param_1,int param_2,int param_3,long param_4,int param_5,int param_6
          ,uchar param_7)

{
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_4 >> 0x10,(int)(short)param_4,param_5,param_6,param_7,
             (ScreenElement *)0x0);
  *(int *)this = *(int *)(_FUN_002a5580 + 0x2a556a) + 8;
  this[0x60] = (Scrollbar)param_1;
  *(int *)(this + 100) = param_2;
  *(undefined4 *)(this + 0x6c) = 0;
  *(int *)(this + 0x68) = param_3;
  return this;
}


