/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002048e0 PlantCommandBar::PlantCommandBar */

/* PlantCommandBar::PlantCommandBar(ConfirmDialog*, NoticeDialog*, void (*)(void*, int), void*, void
   (*)(void*, int), void*, void (*)(void*, Furniture*), void*) */

PlantCommandBar * __thiscall
PlantCommandBar::PlantCommandBar
          (PlantCommandBar *this,ConfirmDialog *param_1,NoticeDialog *param_2,
          _func_void_void_ptr_int *param_3,void *param_4,_func_void_void_ptr_int *param_5,
          void *param_6,_func_void_void_ptr_Furniture_ptr *param_7,void *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ScreenElement *pSVar6;
  ZCImageButton *pZVar7;
  int *piVar8;
  BitmapTextElement *pBVar9;
  ProgressBar *this_00;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  code *pcVar13;
  int iVar14;
  PlantCommandBar *pPVar15;
  int *piVar16;
  undefined4 uVar17;
  float extraout_s0;
  float fVar18;
  float extraout_s1;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar10 = DAT_00204a5c + 0x2048ee;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar10 + DAT_00204a60) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  *(ConfirmDialog **)(this + 0x78) = param_1;
  *(NoticeDialog **)(this + 0x7c) = param_2;
  *(_func_void_void_ptr_Furniture_ptr **)(this + 0xe4) = param_7;
  *(void **)(this + 0xe8) = param_8;
  *(_func_void_void_ptr_int **)(this + 0xd4) = param_3;
  *(void **)(this + 0xd8) = param_4;
  *(_func_void_void_ptr_int **)(this + 0xdc) = param_5;
  *(void **)(this + 0xe0) = param_6;
  iVar1 = CapcomApp::getInstance();
  iVar11 = *(int *)(iVar1 + 4);
  *(int *)(this + 0x74) = iVar11;
  iVar1 = DAT_00204a64;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = (PlantCommandBar)0x0;
  this[0xd2] = (PlantCommandBar)0x0;
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar11 + iVar1),0x1a,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x84) = pIVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar5);
  String::String(aSStack_50,0);
  iVar14 = *(int *)(this + 0x74);
  iVar11 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(iVar11 * 4 + DAT_00204a68 + 0x20499c) + 0x136) * 4 + iVar14);
  pSVar6 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar6,aSStack_50,uVar17,0xffffffff,1,1,0,0,0,9,0,0);
  *(ScreenElement **)(this + 0x9c) = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_50);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + iVar1),6,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  iVar11 = SmDev();
  iVar14 = *(int *)(this + 0x84);
  if (iVar11 == 0) {
    ScreenElement::setSize
              ((ScreenElement *)this,
               (*(int *)(*(int *)(this + 0x60) + 0xc) >> 1) + *(int *)(iVar14 + 0xc),
               (*(int *)(*(int *)(this + 0x60) + 0x10) >> 1) + *(int *)(iVar14 + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar11 = *(int *)(this + 0x60);
    iVar14 = *(int *)(this + 0x84);
    *(int *)(this + 0xc) = *(int *)(iVar14 + 0xc) + (*(int *)(iVar11 + 0xc) >> 1);
  }
  else {
    ScreenElement::setSize((ScreenElement *)this,*(int *)(iVar14 + 0xc),*(int *)(iVar14 + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar14 = *(int *)(this + 0x84);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar14 + 0xc);
    iVar11 = *(int *)(this + 0x60);
  }
  *(int *)(this + 0x10) = *(int *)(iVar14 + 0x10) + (*(int *)(iVar11 + 0xc) >> 1);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),0,*(undefined4 *)(this + 0x10));
  uVar12 = *(undefined4 *)(this + 0xc);
  iVar11 = SmDev();
  uVar17 = *(undefined4 *)(iVar11 * 4 + *(int *)(iVar10 + DAT_00204ea4));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + iVar1),0xe8,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  uVar12 = __floatsisf(uVar12);
  __subsf3(uVar12,uVar17);
  iVar11 = __fixsfsi();
  piVar8 = *(int **)(this + 0x6c);
  (**(code **)(*piVar8 + 0x14))(piVar8,iVar11,*(int *)(this + 0x10) - piVar8[4]);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + iVar1),0x1d,false);
  *(undefined4 *)(this + 0x90) = uVar17;
  piVar8 = *(int **)(this + 0x6c);
  pcVar13 = *(code **)(*piVar8 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x90),0,'\t',true);
  *(ImageElement **)(this + 0xac) = pIVar5;
  (*pcVar13)(piVar8,pIVar5);
  piVar8 = *(int **)(this + 0x6c);
  pcVar13 = *(code **)(*piVar8 + 0x2c);
  String::valueOf((int)aSStack_48);
  iVar14 = *(int *)(this + 0x74);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_00204eac + 0x204b76) + 0x136) * 4 + iVar14);
  iVar1 = SmDev();
  iVar14 = *(int *)(iVar10 + DAT_00204eb0);
  uVar17 = *(undefined4 *)(iVar1 * 4 + iVar14);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  uVar20 = 1;
  uVar19 = 0;
  uVar21 = 0;
  __fixsfsi(uVar17);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_48,uVar12,0xff000000);
  *(BitmapTextElement **)(this + 0xb8) = pBVar9;
  (*pcVar13)(piVar8,pBVar9);
  String::~String(aSStack_48);
  piVar8 = *(int **)(this + 0xb8);
  pcVar13 = *(code **)(*piVar8 + 0x14);
  (*pcVar13)(piVar8,*(undefined4 *)(*(int *)(this + 0xac) + 0xc),0,pcVar13,uVar19,uVar20,uVar21);
  iVar1 = *(int *)(*(int *)(this + 0x6c) + 0xc);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_00204eb4),0xe7,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  piVar8 = *(int **)(this + 0x70);
  (**(code **)(*piVar8 + 0x14))
            (piVar8,(iVar11 - iVar1) - iVar1 / 2,*(int *)(this + 0x10) - piVar8[4]);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_00204eb4),0x24,false)
  ;
  *(undefined4 *)(this + 0x8c) = uVar17;
  piVar8 = *(int **)(this + 0x70);
  pcVar13 = *(code **)(*piVar8 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x8c),0,'\t',true);
  *(ImageElement **)(this + 0xa8) = pIVar5;
  (*pcVar13)(piVar8,pIVar5);
  piVar8 = *(int **)(this + 0x70);
  pcVar13 = *(code **)(*piVar8 + 0x2c);
  String::valueOf((int)aSStack_40);
  iVar11 = *(int *)(this + 0x74);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_00204eb8 + 0x204ca4) + 0x136) * 4 + iVar11);
  iVar1 = SmDev();
  uVar17 = *(undefined4 *)(iVar14 + iVar1 * 4);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  uVar20 = 1;
  uVar19 = 0;
  uVar21 = 0;
  uVar17 = __fixsfsi(uVar17);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_40,uVar12,0xff000000,uVar19,uVar20,uVar21,uVar17,0,9,0,0);
  *(BitmapTextElement **)(this + 0xb4) = pBVar9;
  (*pcVar13)(piVar8,pBVar9);
  String::~String(aSStack_40);
  piVar8 = *(int **)(this + 0xb4);
  (**(code **)(*piVar8 + 0x14))(piVar8,*(undefined4 *)(*(int *)(this + 0xa8) + 0xc),0);
  uVar17 = PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x74) + DAT_00204eb4),DAT_00204ebc,false);
  *(undefined4 *)(this + 0x94) = uVar17;
  piVar8 = *(int **)(this + 0x70);
  pcVar13 = *(code **)(*piVar8 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x94),0x180000,'\t',true);
  *(ImageElement **)(this + 0xb0) = pIVar5;
  (*pcVar13)(piVar8,pIVar5);
  piVar8 = *(int **)(this + 0xb0);
  (**(code **)(*piVar8 + 0x20))(piVar8,0);
  uVar12 = *(undefined4 *)(this + 0xc);
  iVar1 = SmDev();
  uVar17 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar10 + DAT_00204ea4));
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_00204eb4),0xe9,false)
  ;
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'!',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar7;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar7);
  uVar12 = __floatsisf(uVar12);
  __subsf3(uVar12,uVar17);
  uVar17 = __fixsfsi();
  piVar8 = *(int **)(this + 0x68);
  (**(code **)(*piVar8 + 0x14))(piVar8,uVar17,*(int *)(this + 0x10) - piVar8[4]);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  this_00 = (ProgressBar *)operator_new(0x84);
  ProgressBar::ProgressBar(this_00,100,100,'&','\'',-1,-1);
  pPVar15 = this + 0xa4;
  *(ProgressBar **)pPVar15 = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(**(int **)pPVar15 + 0x1c))(*(int **)pPVar15,10);
  ProgressBar::setValue(*(ProgressBar **)pPVar15,0,false);
  piVar8 = *(int **)pPVar15;
  piVar16 = *(int **)(iVar10 + DAT_00204ec0);
  iVar11 = *piVar8;
  iVar1 = *piVar16;
  uVar17 = __floatsisf(*(int *)(*(int *)(this + 0x84) + 0x10) - piVar8[4]);
  uVar3 = __mulsf3(uVar3,DAT_00204ec4);
  __addsf3(uVar17,uVar3);
  uVar3 = __fixsfsi();
  (**(code **)(iVar11 + 0x14))(piVar8,iVar1,uVar3);
  String::String(aSStack_38,0);
  iVar11 = *(int *)(this + 0x74);
  iVar1 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(iVar1 * 4 + DAT_00204ec8 + 0x204e62) + 0x136) * 4 + iVar11);
  iVar1 = SmDev();
  uVar3 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar10 + DAT_00204eb0));
  pSVar6 = (ScreenElement *)operator_new(0xc0);
  uVar19 = 1;
  uVar12 = 0;
  uVar20 = 0;
  uVar3 = __fixsfsi(uVar3);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar6,aSStack_38,uVar17,0xffffffff,uVar12,uVar19,uVar20,uVar3,0,9
             ,0,0);
  pPVar15 = this + 0xa0;
  *(ScreenElement **)pPVar15 = pSVar6;
  ScreenElement::addChild((ScreenElement *)this,pSVar6);
  String::~String(aSStack_38);
  fVar18 = (float)(**(code **)(**(int **)pPVar15 + 0x20))(*(int **)pPVar15,0);
  piVar8 = *(int **)pPVar15;
  pcVar13 = *(code **)(*piVar8 + 0x44);
  String::valueOf(aSStack_28,fVar18);
  String::String(aSStack_20,(char *)(DAT_00205008 + 0x204f10));
  String::operator+(aSStack_30,aSStack_28,aSStack_20);
  (*pcVar13)(piVar8,aSStack_30);
  String::~String(aSStack_30);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  piVar8 = *(int **)(this + 0xa0);
  iVar1 = *(int *)(this + 0xa4);
  iVar11 = *piVar8;
  uVar3 = __floatsisf(*piVar16 + *(int *)(iVar1 + 0xc));
  uVar2 = __mulsf3(uVar2,DAT_0020500c);
  __addsf3(uVar3,uVar2);
  uVar2 = __fixsfsi();
  (**(code **)(iVar11 + 0x14))
            (piVar8,uVar2,*(int *)(*(int *)(this + 0x84) + 0x10) - *(int *)(iVar1 + 0x10));
  *(undefined2 *)(this + 0xc6) = 0;
  setPlant(this,0);
  return this;
}


