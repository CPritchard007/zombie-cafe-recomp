/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236b4c WaitDialog::WaitDialog */

/* WaitDialog::WaitDialog(CImage*, CImage*, CImage*, bool, float, CImage*) */

WaitDialog * __thiscall
WaitDialog::WaitDialog
          (WaitDialog *this,CImage *param_1,CImage *param_2,CImage *param_3,bool param_4,
          float param_5,CImage *param_6)

{
  ImageElement *this_00;
  ScreenElement *pSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float extraout_s0;
  float extraout_s1;
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar2 = *(int *)(DAT_00236c64 + 0x236b66);
  *(WaitDialog **)(this + 0x7c) = this + 0x74;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar2 + 4);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this_00,param_1,extraout_s0,extraout_s1,(uchar)param_6,(bool)(uchar)param_6);
  *(ImageElement **)(this + 100) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  String::String(aSStack_20,0);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_00236c68 + 0x236bba) + 0x136) * 4 + iVar3);
  iVar2 = SmDev();
  uVar4 = *(uint *)(DAT_00236c6c + iVar2 * 4 + 0x236be6);
  pSVar1 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar1,aSStack_20,uVar5,0xffffffff,0,0,9,uVar4 & 0xff,1);
  *(ScreenElement **)(this + 0x70) = pSVar1;
  ScreenElement::addChild((ScreenElement *)this,pSVar1);
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0x70) + 0x7f) = 0x11;
  this[0x14] = (WaitDialog)0x0;
  return this;
}


