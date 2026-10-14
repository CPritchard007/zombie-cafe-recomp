/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238900 ZCImageButton::_paint */

/* ZCImageButton::_paint(CapcomGraphics*) */

void __thiscall ZCImageButton::_paint(ZCImageButton *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  if (this[0x92] == (ZCImageButton)0x0) {
    if ((*(int *)(this + 0x68) == 0) && (this[0x86] == (ZCImageButton)0x0)) {
      CapcomGraphics::setColorModulation(param_1,true);
      iVar1 = DAT_00238a20;
      goto LAB_002389c8;
    }
    if ((*(int *)(this + 100) != 0) || (this[0x87] == (ZCImageButton)0x0)) {
      if (this[0x93] == (ZCImageButton)0x0) {
        if (*(int *)(this + 0x60) == 0) {
          return;
        }
        if (*(int *)(this + 0x8c) == -1) {
          ScreenElement::paint((ScreenElement *)this,param_1);
          return;
        }
        CapcomGraphics::setColorModulation(param_1,true);
        CapcomGraphics::setColor(param_1,*(int *)(this + 0x8c));
        ScreenElement::paint((ScreenElement *)this,param_1);
        goto LAB_00238a16;
      }
      CapcomGraphics::setColorModulation(param_1,true);
      iVar1 = (uint)(byte)this[0x9c] * 0x10101 + DAT_00238a28;
      goto LAB_002389c8;
    }
    CapcomGraphics::setColorModulation(param_1,true);
    CapcomGraphics::setColor(param_1,DAT_00238a24);
    if (*(int *)(this + 0x60) == 0) {
      CapcomGraphics::setColor(param_1,0x22000000);
      iVar1 = __floatsisf(*(undefined4 *)(this + 4));
      __floatsisf(*(undefined4 *)(this + 8));
      __floatsisf(*(undefined4 *)(this + 0xc));
      uVar2 = __floatsisf(*(undefined4 *)(this + 0x10));
      CapcomGraphics::fillRect
                (param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3,
                 iVar1);
      goto LAB_00238a16;
    }
  }
  else {
    CapcomGraphics::setColorModulation(param_1,true);
    iVar1 = -0x1000000;
LAB_002389c8:
    CapcomGraphics::setColor(param_1,iVar1);
    if (*(int *)(this + 0x60) == 0) goto LAB_00238a16;
  }
  ScreenElement::paint((ScreenElement *)this,param_1);
LAB_00238a16:
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


