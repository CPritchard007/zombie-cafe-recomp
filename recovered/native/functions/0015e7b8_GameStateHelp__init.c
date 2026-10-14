/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015e7b8 GameStateHelp::init */

/* GameStateHelp::init() */

void __thiscall GameStateHelp::init(GameStateHelp *this)

{
  uchar uVar1;
  bool bVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  int iVar5;
  undefined4 uVar6;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s1;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar11 = *(int **)(DAT_0015eb88 + 0x15e7c4);
  local_1c = *piVar11;
  L_PrintLog((char *)(DAT_0015eb90 + 0x15e7ce),(char *)(DAT_0015eb8c + 0x15e7d0));
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0015eb94) = 4;
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  iVar9 = DAT_0015eb98;
  pcVar10 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0015eb98),4,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x18) = pIVar4;
  (*pcVar10)(this_00,pIVar4);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0x1d,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
  *(ImageElement **)(this + 0x20) = pIVar4;
  (*pcVar10)(piVar12,pIVar4);
  iVar5 = CapcomApp::getInstance();
  uVar6 = __mulsf3(*(undefined4 *)(iVar5 + 0x40),DAT_0015eb9c);
  uVar1 = __mulsf3(uVar6,DAT_0015eba0);
  iVar5 = CapcomApp::getInstance();
  uVar6 = __mulsf3(*(undefined4 *)(iVar5 + 0x44),DAT_0015eba4);
  bVar2 = (bool)__mulsf3(uVar6,DAT_0015eba8);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x24) = pIVar4;
  (*pcVar10)(piVar12,pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0x1c,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\f',true);
  *(ImageElement **)(this + 0x1c) = pIVar4;
  iVar5 = SmDev();
  if (iVar5 == 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x2c))
              (*(int **)(this + 0x14),*(undefined4 *)(this + 0x1c));
  }
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),5,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x28) = pZVar7;
  (*pcVar10)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),9,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x2c) = pZVar7;
  (*pcVar10)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0xb,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x30) = pZVar7;
  (*pcVar10)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0x24,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x34) = pZVar7;
  (*pcVar10)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x34);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_134,(char *)(DAT_0015ebac + 0x15e9ee));
  iVar13 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(iVar5 * 4 + DAT_0015ebb0 + 0x15ea02) + 0x136) * 4 + iVar13);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_134,uVar6,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x38) = pBVar8;
  (*pcVar10)(piVar12,pBVar8);
  String::~String(aSStack_134);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar9),0x24,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\"',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x3c) = pZVar7;
  (*pcVar10)(piVar12,pZVar7);
  piVar12 = *(int **)(this + 0x3c);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_12c,(char *)(DAT_0015ebb4 + 0x15ea86));
  iVar5 = *(int *)(this + 0xc);
  iVar9 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(iVar9 * 4 + DAT_0015ebb8 + 0x15ea9a) + 0x136) * 4 + iVar5);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar8,aSStack_12c,uVar6,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0x40) = pBVar8;
  (*pcVar10)(piVar12,pBVar8);
  String::~String(aSStack_12c);
  uVar6 = CCServer::getMyUdid(*(void **)(*(int *)(this + 0xc) + DAT_0015ebbc));
  sprintf(acStack_11c,(char *)(DAT_0015ebc0 + 0x15eaea),uVar6);
  piVar12 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_124,acStack_11c);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_124,*(undefined4 *)(*(int *)(this + 0xc) + 0x4e0),0xffffffff,0xff000000,
             1,1,10,0,0);
  *(BitmapTextElement **)(this + 0x4c) = pBVar8;
  (*pcVar10)(piVar12,pBVar8);
  String::~String(aSStack_124);
  javaShowWebView();
  javaLaunchURL(DAT_0015ebc4 + 0x15eb42);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  if (local_1c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


