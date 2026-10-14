/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3222 ImageButton::init */

/* ImageButton::init(CImage*, CImage*, int, int, CImage*, int, int) */

void __thiscall
ImageButton::init(ImageButton *this,CImage *param_1,CImage *param_2,int param_3,int param_4,
                 CImage *param_5,int param_6,int param_7)

{
  *(int *)(this + 0x74) = param_3;
  *(CImage **)(this + 100) = param_2;
  *(int *)(this + 0x78) = param_4;
  *(CImage **)(this + 0x60) = param_1;
  *(CImage **)(this + 0x68) = param_5;
  *(int *)(this + 0x7c) = param_6;
  *(int *)(this + 0x80) = param_7;
  this[0x86] = (ImageButton)0x1;
  this[0x87] = (ImageButton)0x0;
  this[0x85] = (ImageButton)0x0;
  this[0x84] = (ImageButton)0x0;
  this[0x89] = (ImageButton)0x0;
  return;
}


