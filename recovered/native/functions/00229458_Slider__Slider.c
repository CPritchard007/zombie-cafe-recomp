/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229458 Slider::Slider */

/* Slider::Slider(CImage*, CImage*, unsigned char) */

Slider * __thiscall Slider::Slider(Slider *this,CImage *param_1,CImage *param_2,uchar param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ImageElement *this_00;
  ZCImageButton *this_01;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002295fc + 0x229470) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar1 + 0x44);
  ScreenElement::setAnchor((ScreenElement *)this,param_3);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = __floatsisf((int)*(short *)(param_1 + 0x22));
  uVar3 = __mulsf3(uVar3,uVar8);
  uVar4 = __floatsisf((int)*(short *)(param_1 + 0x24));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(param_1 + 0x28));
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,uVar7);
  iVar5 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(param_2 + 0x22));
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x2c));
  uVar4 = __floatsisf((int)*(short *)(param_2 + 0x24));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(param_2 + 0x28));
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,uVar7);
  iVar1 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(param_1 + 0x20));
  uVar3 = __mulsf3(uVar3,uVar8);
  uVar4 = __floatsisf((int)*(short *)(param_1 + 0x2a));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(param_1 + 0x26));
  __addsf3(uVar3,uVar4);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,uVar2);
  iVar6 = __fixsfsi();
  if (iVar1 < iVar5) {
    iVar1 = iVar5;
  }
  ScreenElement::setSize((ScreenElement *)this,iVar6,iVar1);
  iVar1 = CapcomApp::getInstance();
  iVar5 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 4);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,param_1,iVar5 >> 1 & 0xffff,'\n',true);
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  this_01 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_01,'\n',param_2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = this_01;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_01);
  (**(code **)(**(int **)(this + 0x68) + 0x14))(*(int **)(this + 0x68),0,*(int *)(this + 0x10) >> 1)
  ;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x6c] = (Slider)0x0;
  return this;
}


