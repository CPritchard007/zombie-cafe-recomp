/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206a78 ProgressBar::ProgressBar */

/* ProgressBar::ProgressBar(int, int, unsigned char, unsigned char, int, int) */

ProgressBar * __thiscall
ProgressBar::ProgressBar
          (ProgressBar *this,int param_1,int param_2,uchar param_3,uchar param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ScreenElement *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  float extraout_s0;
  float extraout_s1;
  undefined4 local_30;
  
  iVar11 = DAT_00206d20;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar11 = iVar11 + 0x206a98;
  *(int *)this = *(int *)(iVar11 + DAT_00206d24) + 8;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar1 + 4);
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  *(int *)(this + 100) = param_1;
  *(int *)(this + 0x68) = param_1;
  if (param_2 < 1) {
    param_2 = 1;
  }
  *(int *)(this + 0x6c) = param_2;
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_00206d28),(uint)param_3,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\t',true);
  *(ImageElement **)(this + 0x74) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_00206d28),(uint)param_3,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'!',true);
  *(ImageElement **)(this + 0x78) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  *(undefined1 *)(*(int *)(this + 0x74) + 0x60) = 1;
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x80) = this_00;
  ScreenElement::addChild((ScreenElement *)this,this_00);
  pCVar4 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_00206d28),(uint)param_4,false);
  local_30 = uVar2;
  if (param_6 != -1) {
    iVar1 = SmDev();
    uVar6 = CImage::getWidth(pCVar4);
    uVar7 = __floatsisf(param_6 + *(int *)(iVar1 * 4 + *(int *)(iVar11 + DAT_00206d2c)) * -2);
    uVar6 = __floatsisf(uVar6);
    local_30 = __divsf3(uVar7,uVar6);
  }
  pIVar5 = (ImageElement *)operator_new(0x98);
  uVar6 = 10;
  uVar7 = 0;
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,(uchar)local_30,SUB41(uVar3,0));
  *(ImageElement **)(this + 0x7c) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  piVar10 = *(int **)(this + 0x7c);
  pcVar12 = *(code **)(*piVar10 + 0x14);
  iVar1 = SmDev();
  iVar9 = *(int *)(iVar11 + DAT_00206d2c);
  (*pcVar12)(piVar10,*(undefined4 *)(iVar1 * 4 + iVar9),*(int *)(*(int *)(this + 0x74) + 0x10) / 2,
             iVar9,uVar6,uVar7);
  piVar10 = *(int **)(this + 0x7c);
  pcVar12 = *(code **)(*piVar10 + 0x18);
  iVar1 = __divsi3(*(int *)(this + 100) * *(int *)(this + 0xc),*(undefined4 *)(this + 0x6c));
  pCVar4 = (CImage *)piVar10[0x19];
  CImage::getWidth(pCVar4);
  iVar8 = piVar10[0x1a];
  iVar11 = 0;
  if (-1 < iVar1) {
    uVar6 = __floatsisf();
    __mulsf3(uVar6,iVar8);
    iVar11 = __fixsfsi();
    if (iVar1 < iVar11) {
      iVar11 = iVar1;
    }
  }
  uVar6 = __floatsisf((int)*(short *)(pCVar4 + 0x22));
  uVar6 = __mulsf3(uVar6,*(undefined4 *)(pCVar4 + 0x2c));
  uVar7 = __floatsisf((int)*(short *)(pCVar4 + 0x24));
  uVar6 = __addsf3(uVar6,uVar7);
  uVar7 = __floatsisf((int)*(short *)(pCVar4 + 0x28));
  __addsf3(uVar6,uVar7);
  __fixsfsi();
  uVar6 = __floatsisf();
  __mulsf3(uVar6,uVar3);
  uVar3 = __fixsfsi();
  (*pcVar12)(piVar10,iVar11,uVar3);
  if (param_6 == -1) {
    uVar3 = CImage::getWidth(*(CImage **)(*(int *)(this + 0x7c) + 100));
    iVar11 = SmDev();
    uVar3 = __floatsisf(uVar3);
    uVar2 = __mulsf3(uVar3,uVar2);
    uVar3 = __floatsisf(*(int *)(iVar9 + iVar11 * 4) << 1);
    __addsf3(uVar2,uVar3);
    param_6 = __fixsfsi();
    iVar11 = *(int *)(*(int *)(this + 0x74) + 0x10);
  }
  else {
    iVar11 = *(int *)(*(int *)(this + 0x74) + 0x10);
  }
  ScreenElement::setSize((ScreenElement *)this,param_6,iVar11);
  (**(code **)(**(int **)(this + 0x74) + 0x14))(*(int **)(this + 0x74),0,0);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0xc),0);
  *(int *)(*(int *)(this + 0x80) + 0x18) = param_5;
  (**(code **)(**(int **)(this + 0x80) + 0x18))
            (*(int **)(this + 0x80),
             *(int *)(this + 0xc) + *(int *)(*(int *)(this + 0x74) + 0xc) * -2 + 1,
             *(int *)(this + 0x10) + 1);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(*(int *)(this + 0x74) + 0xc),0);
  (**(code **)(**(int **)(this + 0x80) + 0x1c))(*(int **)(this + 0x80),9);
  return this;
}


