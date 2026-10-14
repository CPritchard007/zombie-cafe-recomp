/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103b20 FurnitureButton::FurnitureButton */

/* FurnitureButton::FurnitureButton(FurnitureData*, int, int, CImage**, bool, bool) */

FurnitureButton * __thiscall
FurnitureButton::FurnitureButton
          (FurnitureButton *this,FurnitureData *param_1,int param_2,int param_3,CImage **param_4,
          bool param_5,bool param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  ImageElement *pIVar4;
  uint uVar5;
  ScreenElement *pSVar6;
  int iVar7;
  undefined4 uVar8;
  CImage *pCVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  int local_68;
  String aSStack_58 [6];
  FurnitureButton FStack_52;
  StringUtil aSStack_50 [8];
  String aSStack_48 [8];
  StringUtil aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar11 = DAT_00103da0 + 0x103b42;
  uVar12 = *(undefined4 *)(*(short *)(param_1 + 0x3c) * 4 + *(int *)param_1);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x60) = uVar12;
  this[100] = (FurnitureButton)0x0;
  iVar7 = *(int *)(iVar11 + DAT_00103da8);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(int *)this = iVar7 + 8;
  *(CImage ***)(this + 0x6c) = param_4;
  *(FurnitureData **)(this + 0x68) = param_1;
  this[0x80] = (FurnitureButton)param_5;
  local_68 = 0x24;
  if (param_1[0x38] == (FurnitureData)0x0) {
    local_68 = 0x1d;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x54);
  iVar7 = __aeabi_fcmpgt(uVar12,0);
  if (iVar7 == 0) {
    sVar3 = *(short *)(param_1 + 0x4c);
    if (sVar3 < 1) {
      sVar3 = *(short *)(param_1 + 0x50);
      if (sVar3 < 1) {
        *(undefined4 *)(this + 0x70) = 0;
        goto LAB_00103ce2;
      }
      uVar1 = **(undefined1 **)(iVar11 + DAT_00103dc0);
      uVar2 = **(undefined1 **)(iVar11 + DAT_00103dbc);
      pIVar4 = (ImageElement *)operator_new(0x98);
      uVar12 = __floatsisf((int)sVar3);
      uVar8 = __floatunsisf(uVar1);
      uVar12 = __divsf3(uVar12,uVar8);
      uVar8 = __floatunsisf(uVar2);
      uVar8 = __subsf3(uVar8,DAT_00103db4);
      __mulsf3(uVar12,uVar8);
      iVar7 = __fixsfsi();
      ImageElement::ImageElement(pIVar4,param_4[iVar7 + 200],0,'\t',true);
    }
    else {
      uVar1 = **(undefined1 **)(iVar11 + DAT_00103db8);
      uVar2 = **(undefined1 **)(iVar11 + DAT_00103dbc);
      pIVar4 = (ImageElement *)operator_new(0x98);
      uVar12 = __floatsisf((int)sVar3);
      uVar8 = __floatunsisf(uVar1);
      uVar12 = __divsf3(uVar12,uVar8);
      uVar8 = __floatunsisf(uVar2);
      uVar8 = __subsf3(uVar8,DAT_00103db4);
      __mulsf3(uVar12,uVar8);
      iVar7 = __fixsfsi();
      ImageElement::ImageElement(pIVar4,param_4[iVar7 + 0x56],0,'\t',true);
    }
  }
  else {
    uVar8 = **(undefined4 **)(iVar11 + DAT_00103dac);
    uVar1 = **(undefined1 **)(iVar11 + DAT_00103db0);
    pIVar4 = (ImageElement *)operator_new(0x98);
    uVar12 = __divsf3(uVar12,uVar8);
    uVar8 = __floatunsisf(uVar1);
    uVar8 = __subsf3(uVar8,DAT_00103db4);
    __mulsf3(uVar12,uVar8);
    iVar7 = __fixsfsi();
    ImageElement::ImageElement(pIVar4,param_4[iVar7 + 0x60],0,'\t',true);
  }
  *(ImageElement **)(this + 0x70) = pIVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
LAB_00103ce2:
  iVar7 = SmDev();
  uVar8 = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar11 + DAT_00103dc4));
  pIVar4 = (ImageElement *)operator_new(0x98);
  pCVar9 = param_4[local_68];
  uVar12 = __floatsisf(param_3);
  __subsf3(uVar12,uVar8);
  uVar5 = __fixsfsi();
  ImageElement::ImageElement(pIVar4,pCVar9,uVar5 & 0xffff,'\f',true);
  *(ImageElement **)(this + 0x74) = pIVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
  String::valueOf((int)aSStack_58);
  StringUtil::getEncodingString(aSStack_50,'\0');
  uVar12 = String::getBytes(aSStack_58,aSStack_50,0,0,0);
  *(undefined4 *)(this + 0x84) = uVar12;
  String::~String((String *)aSStack_50);
  this[0x88] = FStack_52;
  uVar5 = *(uint *)(param_1 + 0x48);
  *(uint *)(this + 0x8c) = uVar5;
  if (!param_5) {
    *(uint *)(this + 0x8c) = uVar5 & 0xffffff | 0x60000000;
    *(undefined4 *)(this + 0x90) = DAT_00103dc8;
    if (param_6) {
      String::valueOf((int)aSStack_48);
      String::operator=(aSStack_58,aSStack_48);
      String::~String(aSStack_48);
    }
    else {
      String::operator=(aSStack_58,0);
    }
    StringUtil::getEncodingString(aSStack_40,'\0');
    uVar12 = String::getBytes(aSStack_58,aSStack_40,0,0,0);
    *(undefined4 *)(this + 0x94) = uVar12;
    String::~String((String *)aSStack_40);
    this[0x98] = FStack_52;
  }
  iVar7 = CapcomApp::getInstance();
  iVar7 = *(int *)(iVar7 + 4);
  String::String(aSStack_38,0);
  pSVar6 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar6,aSStack_38,*(undefined4 *)(iVar7 + DAT_00103f84),0xffffffff
             ,0xff000000,1,1,10,0,0);
  *(ScreenElement **)(this + 0x78) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_38);
  uVar14 = ScreenElement::localToParentCoordsBig
                     ((ScreenElement *)this,*(int *)(*(int *)(this + 0x74) + 0xc) >> 1,
                      param_3 - (*(int *)(*(int *)(this + 0x74) + 0x10) >> 1));
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),(int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
  piVar10 = *(int **)(this + 0x78);
  pcVar13 = *(code **)(*piVar10 + 0x44);
  String::String(aSStack_30,*(char **)(this + 0x84));
  (*pcVar13)(piVar10,aSStack_30);
  String::~String(aSStack_30);
  if (!param_5) {
    String::String(aSStack_28,0);
    pSVar6 = (ScreenElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              ((BitmapTextElement *)pSVar6,aSStack_28,*(undefined4 *)(iVar7 + DAT_00103f84),
               0xffffffff,0xff000000,1,1,0x12,0,0);
    *(ScreenElement **)(this + 0x7c) = pSVar6;
    ScreenElement::addChild((ScreenElement *)this,pSVar6);
    String::~String(aSStack_28);
    uVar14 = ScreenElement::localToParentCoordsBig((ScreenElement *)this,param_2 >> 1,param_3 >> 1);
    (**(code **)(**(int **)(this + 0x7c) + 0x14))
              (*(int **)(this + 0x7c),(int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
    piVar10 = *(int **)(this + 0x7c);
    pcVar13 = *(code **)(*piVar10 + 0x44);
    String::String(aSStack_20,*(char **)(this + 0x94));
    (*pcVar13)(piVar10,aSStack_20);
    String::~String(aSStack_20);
  }
  String::~String(aSStack_58);
  return this;
}


