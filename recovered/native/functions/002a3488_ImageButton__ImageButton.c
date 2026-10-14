/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3488 ImageButton::ImageButton */

/* ImageButton::ImageButton(unsigned char, CImage*, CImage*, int, int, bool) */

ImageButton * __thiscall
ImageButton::ImageButton
          (ImageButton *this,uchar param_1,CImage *param_2,CImage *param_3,int param_4,int param_5,
          bool param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3548 + 0x2a34a4) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  this[0x88] = (ImageButton)param_6;
  if (param_6) {
    *(undefined4 *)(this + 0x6c) = uVar4;
    *(undefined4 *)(this + 0x70) = uVar2;
  }
  else {
    *(undefined4 *)(this + 0x6c) = 0x3f800000;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
  }
  init(this,param_2,param_3,param_4,param_5,(CImage *)0x0,0,0);
  this[0x15] = (ImageButton)param_1;
  if (param_2 == (CImage *)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  else {
    if (param_6) {
      CImage::getWidth(param_2);
      uVar3 = __floatsisf();
      __mulsf3(uVar3,uVar4);
      uVar4 = __fixsfsi();
      *(undefined4 *)(this + 0xc) = uVar4;
      CImage::getHeight(param_2);
      uVar4 = __floatsisf();
      __mulsf3(uVar4,uVar2);
      uVar2 = __fixsfsi();
    }
    else {
      uVar2 = CImage::getWidth(param_2);
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar2 = CImage::getHeight(param_2);
    }
    *(undefined4 *)(this + 0x10) = uVar2;
  }
  return this;
}


