/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025aab4 FurnitureStorageButton::FurnitureStorageButton */

/* FurnitureStorageButton::FurnitureStorageButton(FurnitureData*, int, int, CImage**, int, bool) */

FurnitureStorageButton * __thiscall
FurnitureStorageButton::FurnitureStorageButton
          (FurnitureStorageButton *this,FurnitureData *param_1,int param_2,int param_3,
          CImage **param_4,int param_5,bool param_6)

{
  int iVar1;
  ScreenElement *pSVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  String aSStack_38 [6];
  FurnitureStorageButton FStack_32;
  StringUtil aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  uVar5 = *(undefined4 *)(*(short *)(param_1 + 0x3c) * 4 + *(int *)param_1);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x60) = uVar5;
  this[100] = (FurnitureStorageButton)0x0;
  iVar1 = DAT_0025ac00;
  *(undefined4 *)(this + 0x78) = 0;
  *(int *)this = *(int *)(iVar1 + 0x25aaea) + 8;
  *(FurnitureData **)(this + 0x6c) = param_1;
  *(CImage ***)(this + 0x70) = param_4;
  *(int *)(this + 0x74) = param_5;
  String::valueOf((int)aSStack_38);
  StringUtil::getEncodingString(aSStack_30,'\0');
  uVar5 = String::getBytes(aSStack_38,aSStack_30,0,0,0);
  *(undefined4 *)(this + 0x78) = uVar5;
  String::~String((String *)aSStack_30);
  this[0x7c] = FStack_32;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x48);
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  String::String(aSStack_28,0);
  pSVar2 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar2,aSStack_28,*(undefined4 *)(iVar1 + DAT_0025ac08),0xffffffff
             ,0xff000000,1,1,9,0,0);
  *(ScreenElement **)(this + 0x90) = pSVar2;
  ScreenElement::addChild((ScreenElement *)this,pSVar2);
  String::~String(aSStack_28);
  iVar1 = ScreenElement::localToParentCoordsBig((ScreenElement *)this,0,*(int *)(this + 0x10) >> 1);
  piVar3 = *(int **)(this + 0x90);
  (**(code **)(*piVar3 + 0x14))(piVar3,iVar1 >> 0x10,(int)(short)iVar1);
  piVar3 = *(int **)(this + 0x90);
  pcVar4 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_20,*(char **)(this + 0x78));
  (*pcVar4)(piVar3,aSStack_20);
  String::~String(aSStack_20);
  String::~String(aSStack_38);
  return this;
}


