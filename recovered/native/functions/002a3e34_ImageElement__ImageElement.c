/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3e34 ImageElement::ImageElement */

/* ImageElement::ImageElement(CImage*, long, int, int, float, float, unsigned char, bool) */

ImageElement * __thiscall
ImageElement::ImageElement
          (ImageElement *this,CImage *param_1,long param_2,int param_3,int param_4,float param_5,
          float param_6,uchar param_7,bool param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 in_stack_00000005;
  undefined3 in_stack_00000009;
  uchar in_stack_0000000c;
  ImageElement in_stack_00000010;
  
  uVar1 = __floatsisf(1 - (uint)(byte)in_stack_00000010);
  iVar2 = CapcomApp::getInstance();
  uVar3 = __floatsisf((uint)(byte)in_stack_00000010);
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
            ((ScreenElement *)this,param_2 >> 0x10,(int)(short)param_2,iVar2,iVar6,in_stack_0000000c
             ,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3f78 + 0x2a3edc) + 8;
  iVar2 = CapcomApp::getInstance();
  uVar4 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x40));
  uVar4 = __addsf3(uVar1,uVar4);
  uVar4 = __mulsf3(_param_7,uVar4);
  *(undefined4 *)(this + 0x68) = uVar4;
  iVar2 = CapcomApp::getInstance();
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x44));
  uVar1 = __addsf3(uVar1,uVar3);
  uVar1 = __mulsf3(_param_8,uVar1);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x70) = _param_7;
  *(undefined4 *)(this + 0x7c) = _param_8;
  *(CImage **)(this + 100) = param_1;
  this[0x60] = (ImageElement)0x0;
  this[0x91] = (ImageElement)0x0;
  this[0x92] = (ImageElement)0x0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0;
  this[0x90] = in_stack_00000010;
  return this;
}


