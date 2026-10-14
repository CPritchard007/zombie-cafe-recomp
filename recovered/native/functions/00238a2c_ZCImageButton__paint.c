/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238a2c ZCImageButton::paint */

/* ZCImageButton::paint(CapcomGraphics*) */

void __thiscall ZCImageButton::paint(ZCImageButton *this,CapcomGraphics *param_1)

{
  if ((this[0x87] == (ZCImageButton)0x0) &&
     ((this[0x91] != (ZCImageButton)0x0 ||
      ((((this[0x86] != (ZCImageButton)0x0 &&
         (*(char *)(*(int *)(this + 0x94) + DAT_00238a88) == '\0')) &&
        (*(int *)(*(int *)(this + 0x94) + 0x4b8) != 0)) && (this[0x90] != (ZCImageButton)0x0)))))) {
    this[0x87] = (ZCImageButton)0x1;
    _paint(this,param_1);
    this[0x87] = (ZCImageButton)0x0;
  }
  else {
    _paint(this,param_1);
  }
  return;
}


