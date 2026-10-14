/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3a68 ImageElement::ImageElement */

/* ImageElement::ImageElement(CImage*, float, float, unsigned char, bool) */

ImageElement * __thiscall
ImageElement::ImageElement
          (ImageElement *this,CImage *param_1,float param_2,float param_3,uchar param_4,bool param_5
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uchar in_stack_00000000;
  ImageElement in_stack_00000004;
  
  uVar8 = (uint)param_5;
  uVar7 = (uint)param_4;
  CImage::getWidth(param_1);
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,uVar7);
  uVar2 = __floatsisf(1 - (uint)(byte)in_stack_00000004);
  iVar3 = CapcomApp::getInstance();
  uVar4 = __floatsisf((uint)(byte)in_stack_00000004);
  uVar5 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x40));
  uVar5 = __addsf3(uVar2,uVar5);
  __mulsf3(uVar1,uVar5);
  iVar3 = __fixsfsi();
  CImage::getHeight(param_1);
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,uVar8);
  iVar6 = CapcomApp::getInstance();
  uVar5 = __mulsf3(uVar4,*(undefined4 *)(iVar6 + 0x44));
  uVar5 = __addsf3(uVar2,uVar5);
  __mulsf3(uVar1,uVar5);
  iVar6 = __fixsfsi();
  ScreenElement::ScreenElement
            ((ScreenElement *)this,0,0,iVar3,iVar6,in_stack_00000000,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3bb4 + 0x2a3b16) + 8;
  iVar3 = CapcomApp::getInstance();
  uVar1 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x40));
  uVar1 = __addsf3(uVar2,uVar1);
  uVar1 = __mulsf3(uVar7,uVar1);
  *(undefined4 *)(this + 0x68) = uVar1;
  iVar3 = CapcomApp::getInstance();
  uVar1 = __mulsf3(uVar4,*(undefined4 *)(iVar3 + 0x44));
  uVar1 = __addsf3(uVar2,uVar1);
  uVar1 = __mulsf3(uVar8,uVar1);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(uint *)(this + 0x70) = uVar7;
  *(uint *)(this + 0x7c) = uVar8;
  *(CImage **)(this + 100) = param_1;
  this[0x60] = (ImageElement)0x0;
  this[0x91] = (ImageElement)0x0;
  this[0x92] = (ImageElement)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  this[0x90] = in_stack_00000004;
  return this;
}


