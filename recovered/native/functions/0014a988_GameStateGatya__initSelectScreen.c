/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014a988 GameStateGatya::initSelectScreen */

/* GameStateGatya::initSelectScreen() */

void __thiscall GameStateGatya::initSelectScreen(GameStateGatya *this)

{
  CImage *pCVar1;
  int iVar2;
  ImageElement *pIVar3;
  ZCImageButton *this_00;
  BitmapTextElement *pBVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar9;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar7 = *(int **)(this + 0x14);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0014ac48),2,false);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)(DAT_0014ac4c + iVar2 * 4 + 0x14aa06);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar1,extraout_s0,extraout_s1,(uchar)uVar6,false);
  *(ImageElement **)(this + 0x1e8) = pIVar3;
  (*pcVar5)(piVar7,pIVar3);
  piVar7 = *(int **)(this + 0x1e8);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),6,false);
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + DAT_0014ac50) = this_00;
  (*pcVar5)(piVar7,this_00);
  piVar7 = *(int **)(this + 0x1e8);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_30,0);
  iVar8 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_0014ac54 + iVar2 * 4 + 0x14aaae) + 0x136) * 4 + iVar8);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar4,aSStack_30,uVar6,0xffffffff,1,1,0x22,0,0);
  *(BitmapTextElement **)(this + DAT_0014ac58) = pBVar4;
  (*pcVar5)(piVar7,pBVar4);
  String::~String(aSStack_30);
  piVar7 = *(int **)(this + 0x1e8);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),4,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar1,'!',true);
  *(ImageElement **)(this + DAT_0014ac5c) = pIVar3;
  (*pcVar5)(piVar7,pIVar3);
  piVar7 = *(int **)(this + 0x1e8);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_28,0);
  iVar8 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_0014ac60 + iVar2 * 4 + 0x14ab4c) + 0x136) * 4 + iVar8);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar4,aSStack_28,uVar6,0xffffffff,1,1,0x22,0,0);
  *(BitmapTextElement **)(this + 0xee0) = pBVar4;
  (*pcVar5)(piVar7,pBVar4);
  String::~String(aSStack_28);
  piVar7 = *(int **)(this + 0x14);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),8,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar1,'\x11',false);
  *(ImageElement **)(this + 0x54) = pIVar3;
  (*pcVar5)(piVar7,pIVar3);
  uVar9 = __mulsf3(*(undefined4 *)(this + DAT_0014ac64),DAT_0014ac68);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x54),(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar7 = *(int **)(this + 0x1e8);
  pcVar5 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_20,(char *)(DAT_0014ac6c + 0x14ab7c));
  iVar8 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar6 = *(undefined4 *)((*(int *)(DAT_0014ac70 + iVar2 * 4 + 0x14abfc) + 0x136) * 4 + iVar8);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar4,aSStack_20,uVar6,0xff000000,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xbc) = pBVar4;
  (*pcVar5)(piVar7,pBVar4);
  String::~String(aSStack_20);
  piVar7 = *(int **)(this + 0xbc);
  (**(code **)(*piVar7 + 0x20))(piVar7,0);
  *(undefined4 *)(this + DAT_0014ac74) = 0xffffffff;
  *(undefined4 *)(this + DAT_0014ac78) = 0xffffffff;
  this[0xe40] = (GameStateGatya)0x1;
  *(undefined4 *)(this + 0xea0) = 0;
  *(undefined4 *)(this + DAT_0014ac7c) = 0;
  *(undefined4 *)(this + DAT_0014ac80) = 0;
  return;
}


