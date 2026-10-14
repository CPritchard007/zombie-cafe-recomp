/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3374 ImageButton::ImageButton */

/* ImageButton::ImageButton(long, int, int, unsigned char, CImage*, CImage*, int, int, bool) */

ImageButton * __thiscall
ImageButton::ImageButton
          (ImageButton *this,long param_1,int param_2,int param_3,uchar param_4,CImage *param_5,
          CImage *param_6,int param_7,int param_8,bool param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = __floatsisf(1 - (uint)param_9);
  iVar2 = CapcomApp::getInstance();
  uVar3 = __floatsisf((uint)param_9);
  uVar4 = __floatsisf(param_2);
  uVar5 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x40));
  uVar5 = __addsf3(uVar1,uVar5);
  __mulsf3(uVar4,uVar5);
  iVar2 = __fixsfsi();
  iVar6 = CapcomApp::getInstance();
  uVar4 = __floatsisf(param_3);
  uVar5 = __mulsf3(uVar3,*(undefined4 *)(iVar6 + 0x44));
  uVar5 = __addsf3(uVar1,uVar5);
  __mulsf3(uVar4,uVar5);
  iVar6 = __fixsfsi();
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_1 >> 0x10,(int)(short)param_1,iVar2,iVar6,param_4,
             (ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a3484 + 0x2a341c) + 8;
  iVar2 = CapcomApp::getInstance();
  uVar4 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x40));
  uVar4 = __addsf3(uVar1,uVar4);
  *(undefined4 *)(this + 0x6c) = uVar4;
  iVar2 = CapcomApp::getInstance();
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x44));
  uVar1 = __addsf3(uVar1,uVar3);
  *(undefined4 *)(this + 0x70) = uVar1;
  this[0x88] = (ImageButton)param_9;
  init(this,param_5,param_6,param_7,param_8,(CImage *)0x0,0,0);
  return this;
}


