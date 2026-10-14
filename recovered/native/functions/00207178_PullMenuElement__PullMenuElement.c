/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00207178 PullMenuElement::PullMenuElement */

/* PullMenuElement::PullMenuElement(bool (*)(void*, int), void*) */

PullMenuElement * __thiscall
PullMenuElement::PullMenuElement
          (PullMenuElement *this,_func_bool_void_ptr_int *param_1,void *param_2)

{
  int iVar1;
  CImage *pCVar2;
  ImageElement *pIVar3;
  ScreenElement *this_00;
  ZCImageButton *pZVar4;
  BitmapTextElement *pBVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  String aSStack_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  ImageElement *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ImageElement *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ImageElement *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ImageElement *local_28;
  undefined4 local_24;
  undefined4 local_20;
  ImageElement *local_1c;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_00207584 + 0x207192) + 8;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(this + 100) = iVar1;
  *(_func_bool_void_ptr_int **)(this + 0x68) = param_1;
  *(void **)(this + 0x6c) = param_2;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  this[0xe0] = (PullMenuElement)0x0;
  this[0xe1] = (PullMenuElement)0x0;
  this[0xe2] = (PullMenuElement)0x0;
  this[0xe3] = (PullMenuElement)0x0;
  this[0xe4] = (PullMenuElement)0x0;
  this[0xe5] = (PullMenuElement)0x0;
  this[0xe6] = (PullMenuElement)0x0;
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar1 + 0x7f0),0xc,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\n',true);
  *(ImageElement **)(this + 0xcc) = pIVar3;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar3);
  iVar1 = *(int *)(this + 0xcc);
  iVar9 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,iVar9,iVar1,'\n',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0xd0) = this_00;
  ScreenElement::addChild((ScreenElement *)this,this_00);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + 0x7f0),0xd,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x74) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  iVar1 = DAT_00207588;
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_00207588),0xf7,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x78) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),0xf9,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),0xfb,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),0xfe,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x84) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),0xff,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x88) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + iVar1),0xfd,false);
  pZVar4 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar4,'\x12',pCVar2,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x8c) = pZVar4;
  (*pcVar6)(piVar7,pZVar4);
  uVar10 = CapcomApp::getInstance();
  uVar10 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x8c),(float)uVar10,
                      (float)((ulonglong)uVar10 >> 0x20));
  uVar10 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x78),(float)uVar10,
                      (float)((ulonglong)uVar10 >> 0x20));
  uVar10 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x7c),(float)uVar10,
                      (float)((ulonglong)uVar10 >> 0x20));
  uVar10 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x80),(float)uVar10,
                      (float)((ulonglong)uVar10 >> 0x20));
  uVar10 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x84),(float)uVar10,
                      (float)((ulonglong)uVar10 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x88),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar7 = *(int **)(this + 0xd0);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_5c,0);
  iVar9 = *(int *)(this + 100);
  iVar1 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(DAT_0020758c + iVar1 * 4 + 0x207486) + 0x136) * 4 + iVar9);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_5c,uVar8,0xffffffff,0xff000000,1,1,0x14,0,0);
  *(BitmapTextElement **)(this + 0xd4) = pBVar5;
  (*pcVar6)(piVar7,pBVar5);
  String::~String(aSStack_5c);
  iVar9 = *(int *)(this + 0xd4);
  iVar1 = SmDev();
  *(undefined4 *)(iVar9 + 0xbc) = *(undefined4 *)(DAT_00207590 + iVar1 * 4 + 0x2074f6);
  (**(code **)(**(int **)(this + 0xd4) + 0x20))(*(int **)(this + 0xd4),1);
  uVar8 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + DAT_00207588),0x1e,false);
  *(undefined4 *)(this + 0x70) = uVar8;
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x70),0,'\x12',true);
  *(undefined4 *)(this + 0x90) = 0;
  local_54 = 0;
  *(undefined4 *)(this + 0x94) = 0;
  local_50 = 0;
  *(ImageElement **)(this + 0x98) = pIVar3;
  local_4c = pIVar3;
  (**(code **)(**(int **)(this + 0xd0) + 0x2c))(*(int **)(this + 0xd0),pIVar3);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x70),0,'\x12',true);
  *(undefined4 *)(this + 0x9c) = 0;
  local_48 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  local_44 = 0;
  *(ImageElement **)(this + 0xa4) = pIVar3;
  local_40 = pIVar3;
  (**(code **)(**(int **)(this + 0xd0) + 0x2c))(*(int **)(this + 0xd0),pIVar3);
  (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x70),0,'\x12',true);
  *(undefined4 *)(this + 0xa8) = 0;
  local_3c = 0;
  *(undefined4 *)(this + 0xac) = 0;
  local_38 = 0;
  *(ImageElement **)(this + 0xb0) = pIVar3;
  local_34 = pIVar3;
  (**(code **)(**(int **)(this + 0xd0) + 0x2c))(*(int **)(this + 0xd0),pIVar3);
  (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x70),0,'\x12',true);
  *(undefined4 *)(this + 0xb4) = 0;
  local_30 = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  local_2c = 0;
  *(ImageElement **)(this + 0xbc) = pIVar3;
  local_28 = pIVar3;
  (**(code **)(**(int **)(this + 0xd0) + 0x2c))(*(int **)(this + 0xd0),pIVar3);
  (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x70),0,'\x12',true);
  *(undefined4 *)(this + 0xc0) = 0;
  local_24 = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  local_20 = 0;
  *(ImageElement **)(this + 200) = pIVar3;
  local_1c = pIVar3;
  (**(code **)(**(int **)(this + 0xd0) + 0x2c))(*(int **)(this + 0xd0),pIVar3);
  (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0x60] = (PullMenuElement)0x0;
  this[0x61] = (PullMenuElement)0x0;
  this[0xf8] = (PullMenuElement)0x0;
  this[0xf9] = (PullMenuElement)0x0;
  return this;
}


