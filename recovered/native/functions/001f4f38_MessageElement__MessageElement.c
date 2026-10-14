/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4f38 MessageElement::MessageElement */

/* MessageElement::MessageElement(CImage**, unsigned char) */

void __thiscall MessageElement::MessageElement(MessageElement *this,CImage **param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  ImageElement *pIVar3;
  CImage *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZCImageButton *pZVar7;
  BitmapTextElement *pBVar8;
  ScreenElement *pSVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar10 = DAT_001f52e4 + 0x1f4f46;
  local_1c = **(int **)(iVar10 + DAT_001f52e8);
  ScreenElement::ScreenElement((ScreenElement *)this,0,0,0,0,param_2,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar10 + DAT_001f52ec) + 8;
  iVar1 = CapcomApp::getInstance();
  iVar14 = DAT_001f52f4;
  iVar2 = DAT_001f52f0;
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(iVar1 + 4);
  L_PrintLog((char *)(iVar14 + 0x1f4f7c),(char *)(iVar2 + 0x1f4f7e));
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  iVar2 = SmDev();
  if (iVar2 == 2) {
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,param_1[0x1a],'$',true);
  }
  else {
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    pCVar4 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x84) + 0x7f0),1,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar3,pCVar4,extraout_s0,extraout_s1,(uchar)DAT_001f52f8,(bool)(uchar)DAT_001f52f8);
  }
  *(ImageElement **)(this + 100) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  L_PrintLog((char *)(DAT_001f52fc + 0x1f5000),(char *)(DAT_001f5300 + 0x1f5002));
  iVar2 = SmDev();
  piVar13 = *(int **)(iVar10 + DAT_001f5304);
  if ((iVar2 == 4) || (iVar2 = SmDev(), iVar2 == 3)) {
    String::String(aSStack_13c,*(String **)(iVar10 + DAT_001f5308));
    pCVar4 = (CImage *)CImage::createImage(aSStack_13c,0);
    String::~String(aSStack_13c);
    Vector<CImage*>::addElement((Vector<CImage*> *)*piVar13,pCVar4);
    L_PrintLog((char *)(DAT_001f530c + 0x1f5048),(char *)(DAT_001f5310 + 0x1f504a));
    sprintf(acStack_11c,(char *)(DAT_001f5314 + 0x1f5058),*(int *)(*piVar13 + 4) + 1);
    L_PrintLog((char *)(DAT_001f5318 + 0x1f5064),acStack_11c);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar4,'\f',true);
  }
  else {
    String::String(aSStack_134,(char *)(DAT_001f53ac + 0x1f53a0));
    pCVar4 = (CImage *)CImage::createImage(aSStack_134,0);
    String::~String(aSStack_134);
    Vector<CImage*>::addElement((Vector<CImage*> *)*piVar13,pCVar4);
    L_PrintLog((char *)(DAT_001f531c + 0x1f509a),(char *)(DAT_001f5320 + 0x1f509c));
    sprintf(acStack_11c,(char *)(DAT_001f5324 + 0x1f50aa),*(int *)(*piVar13 + 4) + 1);
    L_PrintLog((char *)(DAT_001f5328 + 0x1f50b6),acStack_11c);
    iVar2 = CapcomApp::getInstance();
    uVar5 = *(undefined4 *)(iVar2 + 0x4c);
    iVar2 = CapcomApp::getInstance();
    uVar6 = *(undefined4 *)(iVar2 + 0x4c);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (pIVar3,pCVar4,extraout_s0_00,extraout_s1_00,(uchar)uVar5,SUB41(uVar6,0));
  }
  *(ImageElement **)(this + 0x60) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  L_PrintLog((char *)(DAT_001f532c + 0x1f50f4),(char *)(DAT_001f5330 + 0x1f50f6));
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',param_1[0x82],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',param_1[0x84],(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x78) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar13 = *(int **)(this + 100);
  pcVar11 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_12c,0);
  iVar14 = *(int *)(this + 0x84);
  iVar2 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_001f5334 + 0x1f516a) + 0x136) * 4 + iVar14);
  iVar2 = SmDev();
  uVar12 = *(uint *)(DAT_001f5338 + iVar2 * 4 + 0x1f5198);
  pBVar8 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar8,aSStack_12c,uVar5,**(undefined4 **)(iVar10 + DAT_001f533c),0,0,0,0,0,0x24,
             uVar12 & 0xff,1);
  *(BitmapTextElement **)(this + 0x7c) = pBVar8;
  (*pcVar11)(piVar13,pBVar8);
  String::~String(aSStack_12c);
  *(undefined4 *)(*(int *)(this + 0x7c) + 0x88) = 0;
  iVar14 = *(int *)(this + 0x7c);
  iVar2 = SmDev();
  *(undefined4 *)(iVar14 + 0x80) = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar10 + DAT_001f5340));
  *(undefined1 *)(*(int *)(this + 0x7c) + 0x7f) = 10;
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,param_1[0x1c],'\"',true);
  *(ImageElement **)(this + 0x6c) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,param_1[0x18],'\"',true);
  *(ImageElement **)(this + 0x68) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,param_1[0x4d],'\"',true);
  *(ImageElement **)(this + 0x70) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  String::String(aSStack_124,0);
  iVar14 = *(int *)(this + 0x84);
  iVar2 = SmDev();
  uVar5 = *(undefined4 *)((*(int *)(DAT_001f5344 + iVar2 * 4 + 0x1f528c) + 0x136) * 4 + iVar14);
  iVar2 = SmDev();
  uVar12 = *(uint *)(DAT_001f5348 + iVar2 * 4 + 0x1f528a);
  pSVar9 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar9,aSStack_124,uVar5,0xffffffff,1,1,0,0,0,0x22,uVar12 & 0xff,1
            );
  *(ScreenElement **)(this + 0x80) = pSVar9;
  ScreenElement::addChild((ScreenElement *)this,pSVar9);
  String::~String(aSStack_124);
  iVar14 = DAT_001f5350;
  iVar2 = DAT_001f534c;
  this[0x14] = (MessageElement)0x0;
  L_PrintLog((char *)(iVar2 + 0x1f52be),(char *)(iVar14 + 0x1f52c0));
  if (local_1c != **(int **)(iVar10 + DAT_001f52e8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


