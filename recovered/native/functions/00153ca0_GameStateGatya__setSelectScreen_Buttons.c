/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153ca0 GameStateGatya::setSelectScreen_Buttons */

/* GameStateGatya::setSelectScreen_Buttons() */

void __thiscall GameStateGatya::setSelectScreen_Buttons(GameStateGatya *this)

{
  CImage *pCVar1;
  ZCImageButton *pZVar2;
  PackedImage *this_00;
  int iVar3;
  BitmapTextElement *pBVar4;
  ImageElement *pIVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *local_80;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  checkGatyaEv7();
  if (this[0xce] != (GameStateGatya)0x0) {
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),5,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar1,'\x11',true);
    *(ImageElement **)(this + 0x58) = pIVar5;
    (*pcVar6)(piVar7,pIVar5);
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,*(CImage **)(this + DAT_001540e0),'\x11',false);
    *(ImageElement **)(this + 0x60) = pIVar5;
    uVar10 = (*pcVar6)(piVar7,pIVar5);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x60),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),1,false);
    pZVar2 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar2,'\"',pCVar1,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x5c) = pZVar2;
    (*pcVar6)(piVar7,pZVar2);
    piVar7 = *(int **)(this + 0x5c);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_78,0);
    iVar8 = *(int *)(this + 0xc);
    iVar3 = SmDev();
    uVar9 = *(undefined4 *)((*(int *)(DAT_001540e8 + iVar3 * 4 + 0x153de2) + 0x136) * 4 + iVar8);
    pBVar4 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar4,aSStack_78,uVar9,0xffffffff,1,1,10,0,0);
    *(BitmapTextElement **)(this + 100) = pBVar4;
    (*pcVar6)(piVar7,pBVar4);
    String::~String(aSStack_78);
    piVar7 = *(int **)(this + 100);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)aSStack_70);
    (*pcVar6)(piVar7,aSStack_70);
    String::~String(aSStack_70);
  }
  if ((this[0xec] != (GameStateGatya)0x0) || (this[0x10c] != (GameStateGatya)0x0)) {
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),7,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar1,'\x11',true);
    *(ImageElement **)(this + 0x68) = pIVar5;
    (*pcVar6)(piVar7,pIVar5);
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0xec0),'\x11',false);
    *(ImageElement **)(this + 0x6c) = pIVar5;
    uVar10 = (*pcVar6)(piVar7,pIVar5);
    ImageElement::setScale
              (*(ImageElement **)(this + 0x6c),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    if (this[0xec] != (GameStateGatya)0x0) {
      piVar7 = *(int **)(this + 0x28);
      pcVar6 = *(code **)(*piVar7 + 0x2c);
      pCVar1 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),2,false);
      pZVar2 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0x70) = pZVar2;
      (*pcVar6)(piVar7,pZVar2);
      piVar7 = *(int **)(this + 0x70);
      pcVar6 = *(code **)(*piVar7 + 0x2c);
      String::String(aSStack_68,0);
      iVar8 = *(int *)(this + 0xc);
      iVar3 = SmDev();
      uVar9 = *(undefined4 *)((*(int *)(DAT_001540ec + iVar3 * 4 + 0x153f20) + 0x136) * 4 + iVar8);
      pBVar4 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar4,aSStack_68,uVar9,0xff000000,1,1,10,0,0);
      *(BitmapTextElement **)(this + 0x74) = pBVar4;
      (*pcVar6)(piVar7,pBVar4);
      String::~String(aSStack_68);
      piVar7 = *(int **)(this + 0x74);
      pcVar6 = *(code **)(*piVar7 + 0x44);
      String::valueOf((int)aSStack_60);
      (*pcVar6)(piVar7,aSStack_60);
      String::~String(aSStack_60);
      piVar7 = *(int **)(this + 0x70);
      pcVar6 = *(code **)(*piVar7 + 0x2c);
      pCVar1 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x26,false);
      pIVar5 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar5,pCVar1,'\n',true);
      *(ImageElement **)(this + 200) = pIVar5;
      (*pcVar6)(piVar7,pIVar5);
    }
    if (this[0x10c] != (GameStateGatya)0x0) {
      piVar7 = *(int **)(this + 0x28);
      pcVar6 = *(code **)(*piVar7 + 0x2c);
      pCVar1 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),3,false);
      pZVar2 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(this + 0x78) = pZVar2;
      (*pcVar6)(piVar7,pZVar2);
      piVar7 = *(int **)(this + 0x78);
      pcVar6 = *(code **)(*piVar7 + 0x2c);
      String::String(aSStack_58,0);
      iVar8 = *(int *)(this + 0xc);
      iVar3 = SmDev();
      uVar9 = *(undefined4 *)((*(int *)(DAT_001540f0 + iVar3 * 4 + 0x15401c) + 0x136) * 4 + iVar8);
      pBVar4 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar4,aSStack_58,uVar9,0xff000000,1,1,10,0,0);
      *(BitmapTextElement **)(this + 0x7c) = pBVar4;
      (*pcVar6)(piVar7,pBVar4);
      String::~String(aSStack_58);
      piVar7 = *(int **)(this + 0x7c);
      pcVar6 = *(code **)(*piVar7 + 0x44);
      String::valueOf((int)aSStack_50);
      (*pcVar6)(piVar7,aSStack_50);
      String::~String(aSStack_50);
    }
  }
  piVar7 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x11',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x80) = pZVar2;
  (*pcVar6)(piVar7,pZVar2);
  if (this[300] == (GameStateGatya)0x0) goto LAB_001542ec;
  piVar7 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),7,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar1,'\x11',true);
  *(ImageElement **)(this + 0x84) = pIVar5;
  (*pcVar6)(piVar7,pIVar5);
  piVar7 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + DAT_001540f4),'\x11',false);
  *(ImageElement **)(this + 0x88) = pIVar5;
  uVar10 = (*pcVar6)(piVar7,pIVar5);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x88),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar7 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),2,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x8c) = pZVar2;
  (*pcVar6)(piVar7,pZVar2);
  piVar7 = *(int **)(this + 0x8c);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_48,0);
  iVar8 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00154220 + iVar3 * 4 + 0x1541b0) + 0x136) * 4 + iVar8);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar4,aSStack_48,uVar9,0xff000000,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0x90) = pBVar4;
  (*pcVar6)(piVar7,pBVar4);
  String::~String(aSStack_48);
  piVar7 = *(int **)(this + 0x90);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::valueOf((int)aSStack_40);
  (*pcVar6)(piVar7,aSStack_40);
  String::~String(aSStack_40);
  piVar7 = *(int **)(this + 0x28);
  if (this[0xcd] == (GameStateGatya)0x0) {
    local_80 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),3,false);
    pZVar2 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
LAB_00154258:
    *(ZCImageButton **)(this + 0x94) = pZVar2;
  }
  else {
    local_80 = *(code **)(*piVar7 + 0x2c);
    this_00 = *(PackedImage **)(*(int *)(this + 0xc) + 0x810);
    if (**(char **)(DAT_00154224 + 0x1541b8) == '\0') {
      pCVar1 = (CImage *)PackedImage::getImage(this_00,0x2a,false);
      pZVar2 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
      goto LAB_00154258;
    }
    pCVar1 = (CImage *)PackedImage::getImage(this_00,0x2b,false);
    pZVar2 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar2,'\x14',pCVar1,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0x94) = pZVar2;
  }
  (*local_80)(piVar7,pZVar2);
  piVar7 = *(int **)(this + 0x94);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  String::String(aSStack_38,0);
  iVar8 = *(int *)(this + 0xc);
  iVar3 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00154620 + iVar3 * 4 + 0x1542f4) + 0x136) * 4 + iVar8);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar4,aSStack_38,uVar9,0xff000000,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0x98) = pBVar4;
  (*pcVar6)(piVar7,pBVar4);
  String::~String(aSStack_38);
  piVar7 = *(int **)(this + 0x98);
  pcVar6 = *(code **)(*piVar7 + 0x44);
  String::valueOf((int)aSStack_30);
  (*pcVar6)(piVar7,aSStack_30);
  String::~String(aSStack_30);
LAB_001542ec:
  piVar7 = *(int **)(this + 0x28);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'\x11',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x9c) = pZVar2;
  (*pcVar6)(piVar7,pZVar2);
  if (this[0x14c] != (GameStateGatya)0x0) {
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),5,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar1,'\x11',true);
    *(ImageElement **)(this + 0xa8) = pIVar5;
    (*pcVar6)(piVar7,pIVar5);
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x2d,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar1,'\x11',false);
    *(ImageElement **)(this + 0xac) = pIVar5;
    uVar10 = (*pcVar6)(piVar7,pIVar5);
    ImageElement::setScale
              (*(ImageElement **)(this + 0xac),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x2e,false);
    pZVar2 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar2,'\x12',pCVar1,(CImage *)0x0,0,0,false);
    *(ZCImageButton **)(this + 0xb0) = pZVar2;
    uVar10 = (*pcVar6)(piVar7,pZVar2);
    ImageButton::setScale
              (*(ImageButton **)(this + 0xb0),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    piVar7 = *(int **)(this + 0xac);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_28,0);
    iVar8 = *(int *)(this + 0xc);
    iVar3 = SmDev();
    uVar9 = *(undefined4 *)((*(int *)(DAT_00154628 + iVar3 * 4 + 0x154494) + 0x136) * 4 + iVar8);
    pBVar4 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar4,aSStack_28,uVar9,DAT_0015462c,1,1,0x22,0,0);
    *(BitmapTextElement **)(this + 0xb4) = pBVar4;
    (*pcVar6)(piVar7,pBVar4);
    String::~String(aSStack_28);
    ZombieCafe::getGatyaTicket(*(ZombieCafe **)(this + 0xc));
    piVar7 = *(int **)(this + 0xb4);
    pcVar6 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)aSStack_20);
    (*pcVar6)(piVar7,aSStack_20);
    String::~String(aSStack_20);
    piVar7 = *(int **)(this + 0x28);
    pcVar6 = *(code **)(*piVar7 + 0x2c);
    pCVar1 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0,false);
    pZVar2 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(pZVar2,'\x11',pCVar1,(CImage *)0x0,0,0,true);
    *(ZCImageButton **)(this + 0xb8) = pZVar2;
    (*pcVar6)(piVar7,pZVar2);
  }
  iVar3 = DAT_00154630;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x24))
  ;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x2c))
  ;
  (**(code **)(**(int **)(this + 0x24) + 0x2c))(*(int **)(this + 0x24),*(undefined4 *)(this + 0x28))
  ;
  piVar7 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x2e,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar1,'\x14',true);
  *(ImageElement **)(this + 0xa0) = pIVar5;
  (*pcVar6)(piVar7,pIVar5);
  piVar7 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x2d,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar1,'\x11',true);
  *(ImageElement **)(this + 0xa4) = pIVar5;
  (*pcVar6)(piVar7,pIVar5);
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  piVar7 = *(int **)(this + 0xa4);
  (**(code **)(*piVar7 + 0x20))(piVar7,0);
  piVar7 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar7 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00154634),3,false);
  pZVar2 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar2,'$',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x208) = pZVar2;
  (*pcVar6)(piVar7,pZVar2);
  return;
}


