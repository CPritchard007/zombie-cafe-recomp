/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3cf8 ImageElement::ImageElement */

/* ImageElement::ImageElement(CImage*, long, int, int, unsigned char, bool) */

ImageElement * __thiscall
ImageElement::ImageElement
          (ImageElement *this,CImage *param_1,long param_2,int param_3,int param_4,uchar param_5,
          bool param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = __floatsisf(1 - (uint)param_6);
  iVar2 = CapcomApp::getInstance();
  uVar3 = __floatsisf((uint)param_6);
  uVar4 = __floatsisf(param_3);
  uVar5 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x40));
  uVar5 = __addsf3(uVar1,uVar5);
  __mulsf3(uVar4,uVar5);
  iVar2 = __fixsfsi();
  iVar6 = CapcomApp::getInstance();
  uVar4 = __floatsisf(param_4);
  uVar5 = __mulsf3(uVar3,*(undefined4 *)(iVar6 + 0x44));
  uVar5 = __addsf3(uVar1,uVar5);
  __mulsf3(uVar4,uVar5);
  iVar6 = __fixsfsi();
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_2 >> 0x10,(int)(short)param_2,iVar2,iVar6,param_5,
             (ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3e30 + 0x2a3da4) + 8;
  iVar2 = CapcomApp::getInstance();
  uVar4 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x40));
  uVar4 = __addsf3(uVar1,uVar4);
  *(undefined4 *)(this + 0x68) = uVar4;
  iVar2 = CapcomApp::getInstance();
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x44));
  uVar1 = __addsf3(uVar1,uVar3);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = uVar1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x68);
  *(CImage **)(this + 100) = param_1;
  this[0x60] = (ImageElement)0x0;
  this[0x91] = (ImageElement)0x0;
  this[0x92] = (ImageElement)0x0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0;
  this[0x90] = (ImageElement)param_6;
  return this;
}


