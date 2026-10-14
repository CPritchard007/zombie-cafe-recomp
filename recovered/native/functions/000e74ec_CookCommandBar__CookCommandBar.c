/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e74ec CookCommandBar::CookCommandBar */

/* CookCommandBar::CookCommandBar(ConfirmDialog*, NoticeDialog*, BuyToxinDialog*, void (*)(void*,
   Stove*), void*, void (*)(void*, Stove*), void*, void (*)(void*, Stove*), void*) */

CookCommandBar * __thiscall
CookCommandBar::CookCommandBar
          (CookCommandBar *this,ConfirmDialog *param_1,NoticeDialog *param_2,BuyToxinDialog *param_3
          ,_func_void_void_ptr_Stove_ptr *param_4,void *param_5,
          _func_void_void_ptr_Stove_ptr *param_6,void *param_7,
          _func_void_void_ptr_Stove_ptr *param_8,void *param_9)

{
  CImage *pCVar1;
  ImageElement *pIVar2;
  undefined4 uVar3;
  ScreenElement *pSVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar15 = DAT_000e76c8;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar15 = iVar15 + 0xe7506;
  iVar7 = *(int *)(iVar15 + DAT_000e76cc);
  *(ConfirmDialog **)(this + 0x78) = param_1;
  *(int *)this = iVar7 + 8;
  *(BuyToxinDialog **)(this + 0x80) = param_3;
  *(NoticeDialog **)(this + 0x7c) = param_2;
  *(_func_void_void_ptr_Stove_ptr **)(this + 0xbc) = param_4;
  *(void **)(this + 0xc0) = param_5;
  *(_func_void_void_ptr_Stove_ptr **)(this + 0xc4) = param_6;
  *(void **)(this + 200) = param_7;
  *(_func_void_void_ptr_Stove_ptr **)(this + 0xcc) = param_8;
  *(void **)(this + 0xd0) = param_9;
  iVar7 = CapcomApp::getInstance();
  iVar7 = *(int *)(iVar7 + 4);
  *(int *)(this + 0x74) = iVar7;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (CookCommandBar)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar7 + DAT_000e76d0),0x1a,false);
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,'\f',true);
  *(ImageElement **)(this + 0x8c) = pIVar2;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar2);
  *(undefined4 *)(this + 0x94) = 0;
  String::String(aSStack_30,0);
  iVar12 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar8 = *(undefined4 *)((*(int *)(iVar7 * 4 + DAT_000e76d4 + 0xe758e) + 0x136) * 4 + iVar12);
  iVar7 = SmDev();
  uVar3 = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar15 + DAT_000e76d8));
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  uVar17 = 1;
  uVar16 = 0;
  uVar18 = 0;
  uVar3 = __fixsfsi(uVar3);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_30,uVar8,0xffffffff,uVar16,uVar17,uVar18,uVar3,0,9,
             0,0);
  *(ScreenElement **)(this + 0x98) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_30);
  String::String(aSStack_28,0);
  iVar12 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_000e76dc + iVar7 * 4 + 0xe761a) + 0x136) * 4 + iVar12);
  pSVar4 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar4,aSStack_28,uVar3,DAT_000e76e0,0,1,9,0,0);
  *(ScreenElement **)(this + 0x9c) = pSVar4;
  ScreenElement::addChild((ScreenElement *)this,pSVar4);
  String::~String(aSStack_28);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e76d0),6,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  iVar7 = SmDev();
  if ((iVar7 == 0) || (iVar7 = SmDev(), iVar7 == 5)) {
    iVar7 = *(int *)(this + 0x8c);
    ScreenElement::setSize
              ((ScreenElement *)this,
               (*(int *)(*(int *)(this + 0x60) + 0xc) >> 1) + *(int *)(iVar7 + 0xc),
               (*(int *)(*(int *)(this + 0x60) + 0x10) >> 1) + *(int *)(iVar7 + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar12 = *(int *)(this + 0x8c);
    *(int *)(this + 0xc) = *(int *)(iVar12 + 0xc) + (*(int *)(*(int *)(this + 0x60) + 0xc) >> 1);
    iVar7 = *(int *)(*(int *)(this + 0x60) + 0x10);
  }
  else {
    iVar7 = *(int *)(this + 0x8c);
    ScreenElement::setSize((ScreenElement *)this,*(int *)(iVar7 + 0xc),*(int *)(iVar7 + 0x10));
    (**(code **)(**(int **)(this + 0x60) + 0x14))
              (*(int **)(this + 0x60),*(undefined4 *)(this + 0xc),0);
    iVar12 = *(int *)(this + 0x8c);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar12 + 0xc);
    iVar7 = *(int *)(*(int *)(this + 0x60) + 0xc);
  }
  *(int *)(this + 0x10) = *(int *)(iVar12 + 0x10) + (iVar7 >> 1);
  (**(code **)(**(int **)(this + 0x8c) + 0x14))
            (*(int **)(this + 0x8c),0,*(undefined4 *)(this + 0x10));
  iVar12 = *(int *)(this + 0xc);
  iVar9 = *(int *)(*(int *)(this + 0x60) + 0xc);
  iVar7 = SmDev();
  uVar3 = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar15 + DAT_000e7a78));
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7a7c),0x79,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  pcVar10 = *(code **)(**(int **)(this + 100) + 0x14);
  piVar11 = *(int **)(iVar15 + DAT_000e7a80);
  iVar13 = *piVar11;
  iVar7 = SmDev();
  uVar16 = *(undefined4 *)(iVar7 * 4 + iVar13);
  iVar7 = SmDev();
  uVar8 = __floatsisf(iVar12 - iVar9);
  __subsf3(uVar8,uVar3);
  iVar12 = __fixsfsi();
  uVar3 = __floatsisf(uVar16);
  iVar13 = *(int *)(iVar15 + DAT_000e7a84);
  __addsf3(uVar3,*(undefined4 *)(iVar7 * 4 + iVar13));
  iVar7 = __fixsfsi();
  iVar9 = *(int *)(this + 0x10) - *(int *)(*(int *)(this + 100) + 0x10);
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  (*pcVar10)(*(int *)(this + 100),iVar12,iVar7);
  iVar7 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0x74) + DAT_000e7a88),'\x03');
  if (iVar7 == 0) {
    *(undefined1 *)(*(int *)(this + 100) + 0x86) = 0;
  }
  iVar14 = *(int *)(*(int *)(this + 100) + 0xc);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7a7c),0x7a,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  iVar9 = *piVar11;
  pcVar10 = *(code **)(**(int **)(this + 0x68) + 0x14);
  iVar7 = SmDev();
  uVar3 = *(undefined4 *)(iVar7 * 4 + iVar9);
  iVar7 = SmDev();
  uVar3 = __floatsisf(uVar3);
  __addsf3(uVar3,*(undefined4 *)(iVar13 + iVar7 * 4));
  iVar7 = __fixsfsi();
  iVar9 = *(int *)(this + 0x10) - *(int *)(*(int *)(this + 0x68) + 0x10);
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  (*pcVar10)(*(int *)(this + 0x68),iVar12 - (iVar14 + (iVar14 >> 2)),iVar7);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7a7c),0x81,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar11 = *(int **)(this + 0x6c);
  iVar12 = *(int *)(*(int *)(this + 100) + 8);
  iVar7 = *(int *)(this + 0x10) - piVar11[4];
  if (iVar12 < *(int *)(this + 0x10) - piVar11[4]) {
    iVar7 = iVar12;
  }
  (**(code **)(*piVar11 + 0x14))(piVar11,*(undefined4 *)(*(int *)(this + 100) + 4),iVar7);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7a7c),0xea,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar1,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x70) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar11 = *(int **)(this + 0x70);
  iVar12 = *(int *)(*(int *)(this + 100) + 8);
  iVar7 = *(int *)(this + 0x10) - piVar11[4];
  if (iVar12 < *(int *)(this + 0x10) - piVar11[4]) {
    iVar7 = iVar12;
  }
  (**(code **)(*piVar11 + 0x14))(piVar11,*(undefined4 *)(*(int *)(this + 100) + 4),iVar7);
  piVar11 = *(int **)(this + 0x68);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7a7c),0x24,false)
  ;
  pIVar2 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar2,pCVar1,0,'\t',true);
  *(ImageElement **)(this + 0xa0) = pIVar2;
  (*pcVar10)(piVar11,pIVar2);
  piVar11 = *(int **)(this + 0x68);
  pcVar10 = *(code **)(*piVar11 + 0x2c);
  String::String(aSStack_20,0);
  iVar12 = *(int *)(this + 0x74);
  iVar7 = SmDev();
  uVar3 = *(undefined4 *)((*(int *)(DAT_000e7a8c + iVar7 * 4 + 0xe7988) + 0x136) * 4 + iVar12);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_20,uVar3,0xff000000,0xffffffff,1,1,0xc,0,0);
  *(BitmapTextElement **)(this + 0xa4) = pBVar6;
  (*pcVar10)(piVar11,pBVar6);
  String::~String(aSStack_20);
  piVar11 = *(int **)(this + 0xa4);
  iVar7 = *(int *)(iVar15 + DAT_000e7a94);
  if (*(char *)(*(int *)(this + 0x74) + DAT_000e7a90) == '\0') {
    pcVar10 = *(code **)(*piVar11 + 0x14);
    iVar12 = SmDev();
    uVar3 = *(undefined4 *)(iVar7 + iVar12 * 4);
    iVar7 = SmDev();
    uVar3 = __fixsfsi(uVar3);
    uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar15 + DAT_000e7a98)));
    (*pcVar10)(piVar11,uVar3,uVar8);
  }
  else {
    pcVar10 = *(code **)(*piVar11 + 0x14);
    iVar15 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar7 + iVar15 * 4));
    (*pcVar10)(piVar11,uVar3,0x5a);
  }
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  this[0xa8] = (CookCommandBar)0x64;
  return this;
}


