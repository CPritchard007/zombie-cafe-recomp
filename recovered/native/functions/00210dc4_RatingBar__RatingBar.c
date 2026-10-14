/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210dc4 RatingBar::RatingBar */

/* RatingBar::RatingBar(float, CImage*, CImage*, CImage*, bool) */

undefined8 __thiscall
RatingBar::RatingBar
          (RatingBar *this,float param_1,CImage *param_2,CImage *param_3,CImage *param_4,
          bool param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 in_stack_00000001;
  RatingBar in_stack_00000004;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  uVar1 = DAT_00210ec4;
  *(int *)this = *(int *)(DAT_00210ec0 + 0x210de8) + 8;
  __mulsf3(param_2,uVar1);
  uVar1 = __fixsfsi();
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  iVar2 = CapcomApp::getInstance();
  uVar1 = *(undefined4 *)(iVar2 + 4);
  *(CImage **)(this + 0x60) = param_3;
  *(undefined4 *)(this + 0x6c) = uVar1;
  if (param_3 != (CImage *)0x0) {
    *(undefined4 *)(param_3 + 0x2c) = uVar4;
    uVar1 = __divsf3(0x3f800000,uVar4);
    *(undefined4 *)(param_3 + 0x30) = uVar1;
  }
  *(CImage **)(this + 100) = param_4;
  if (param_4 != (CImage *)0x0) {
    *(undefined4 *)(param_4 + 0x2c) = uVar4;
    uVar1 = __divsf3(0x3f800000,uVar4);
    *(undefined4 *)(param_4 + 0x30) = uVar1;
  }
  *(int *)(this + 0x68) = _param_5;
  if (_param_5 != 0) {
    *(undefined4 *)(_param_5 + 0x2c) = uVar4;
    uVar1 = __divsf3(0x3f800000,uVar4);
    *(undefined4 *)(_param_5 + 0x30) = uVar1;
  }
  iVar2 = CImage::getWidth(param_4);
  iVar3 = CImage::getWidth(param_3);
  *(int *)(this + 0x80) = iVar2 - iVar3 >> 1;
  iVar2 = CImage::getHeight(param_4);
  iVar3 = CImage::getHeight(param_3);
  *(int *)(this + 0x84) = iVar2 - iVar3 >> 1;
  iVar2 = CImage::getWidth(param_4);
  iVar3 = CImage::getHeight(param_4);
  ScreenElement::setSize((ScreenElement *)this,iVar2 * 5,iVar3);
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x98] = in_stack_00000004;
  return CONCAT44(this,this);
}


