/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fff58 FriendCafeHudElement::FriendCafeHudElement */

/* FriendCafeHudElement::FriendCafeHudElement(void (*)(void*, int), void*) */

void __thiscall
FriendCafeHudElement::FriendCafeHudElement
          (FriendCafeHudElement *this,_func_void_void_ptr_int *param_1,void *param_2)

{
  int iVar1;
  void *__s;
  int iVar2;
  CImage *pCVar3;
  ImageElement *pIVar4;
  ZCImageButton *pZVar5;
  BitmapTextElement *pBVar6;
  TrueTypeTextElement *pTVar7;
  RatingBar *this_00;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  ImageButton *this_01;
  int iVar13;
  Vector<TrueTypeTextElement*> *this_02;
  ScreenElement *pSVar14;
  FriendCafeHudElement *pFVar15;
  undefined4 uVar16;
  Vector<ZCImageButton*> *this_03;
  undefined4 uVar17;
  int iVar18;
  float extraout_s0;
  undefined8 uVar19;
  undefined8 uVar20;
  code *local_1f0;
  String aSStack_1c4 [8];
  String aSStack_1bc [8];
  String aSStack_1b4 [8];
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  String aSStack_19c [8];
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  undefined4 local_134;
  undefined4 local_130;
  ImageElement *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  ImageElement *local_120;
  char acStack_11c [256];
  int local_1c;
  _func_void_void_ptr_int *p_Stack_18;
  
  iVar1 = DAT_0010034c + 0xfff66;
  local_1c = **(int **)(iVar1 + DAT_00100350);
  p_Stack_18 = param_1;
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar1 + DAT_00100354) + 8;
  *(undefined4 *)(this + 0x7c) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x84) = __s;
  memset(__s,0,*(int *)(this + 0x7c) << 2);
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  Vector<FriendCafeHudElement::NewIndicator>::Vector
            ((Vector<FriendCafeHudElement::NewIndicator> *)(this + 0x8c));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  iVar2 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar2 + 4);
  *(_func_void_void_ptr_int **)(this + 0x74) = param_1;
  *(undefined4 *)(this + 0x70) = uVar9;
  *(void **)(this + 0x78) = param_2;
  iVar2 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  iVar2 = DAT_00100358;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100358),4,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + 0x98) = pIVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0x76,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\f',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x60) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 0x60);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_1c4,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_0010035c) * 8));
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_1c4,*(undefined4 *)(*(int *)(this + 0x70) + DAT_00100360),0xffffffff,1,1
             ,0x12,0,0);
  *(BitmapTextElement **)(this + 0xc4) = pBVar6;
  (*pcVar10)(piVar12,pBVar6);
  String::~String(aSStack_1c4);
  *(undefined1 *)(*(int *)(this + 0x60) + 0x86) = 0;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xbc,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa8) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 0xa8);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xbb,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xac) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 0xac);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xd9,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0xb0) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 0xb0);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xb4) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  __mulsf3(uVar9,DAT_00100364);
  this_01 = *(ImageButton **)(this + 0xb4);
  uVar19 = __addsf3(uVar9,uVar9);
  ImageButton::setScale(this_01,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  pcVar10 = *(code **)(**(int **)(this + 0xb4) + 0x2c);
  String::String(aSStack_1bc,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_00100368) * 8));
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_0010036c + iVar2 * 4 + 0x10023e) + 0x136) * 4 + iVar13);
  iVar2 = *(int *)(this + 0xb4);
  uVar16 = *(undefined4 *)(iVar2 + 0x10);
  uVar17 = *(undefined4 *)(iVar2 + 0xc);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_1bc,uVar9,0xffffffff,0,1,0,uVar17,uVar16,0x12,0,0);
  *(BitmapTextElement **)(this + 0xdc) = pBVar6;
  (*pcVar10)(iVar2,pBVar6);
  String::~String(aSStack_1bc);
  (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
  iVar2 = DAT_00100358;
  *(undefined1 *)(*(int *)(this + 0xdc) + 0x7f) = 0x11;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\f',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 100) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 100);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_1b4,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_00100370) * 8));
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_1b4,*(undefined4 *)(*(int *)(this + 0x70) + DAT_00100360),0xffffffff,1,1
             ,0x12,0,0);
  *(BitmapTextElement **)(this + 200) = pBVar6;
  (*pcVar10)(piVar12,pBVar6);
  String::~String(aSStack_1b4);
  iVar2 = DAT_00100358;
  *(undefined1 *)(*(int *)(this + 100) + 0x86) = 0;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),10,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\f',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x6c) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  piVar12 = *(int **)(this + 0x6c);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_1ac,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_00100770) * 8));
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar6,aSStack_1ac,*(undefined4 *)(*(int *)(this + 0x70) + DAT_00100774),0xffffffff,1,1
             ,0x12,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar6;
  (*pcVar10)(piVar12,pBVar6);
  String::~String(aSStack_1ac);
  iVar2 = DAT_00100778;
  *(undefined1 *)(*(int *)(this + 0x6c) + 0x86) = 0;
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0x18,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa0) = pZVar5;
  (*pcVar10)(piVar12,pZVar5);
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100778),0x23,false)
  ;
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + 0x9c) = pIVar4;
  (*pcVar10)(piVar12,pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100778),0xa9,false)
  ;
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'!',pCVar3,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0xa4) = pZVar5;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar5);
  iVar13 = **(int **)(iVar1 + DAT_0010077c);
  iVar2 = SmDev();
  uVar9 = FontManager::addFont(iVar13,SUB41(*(undefined4 *)(DAT_00100780 + iVar2 * 4 + 0x1004ee),0))
  ;
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_19c,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                 **(int **)(iVar1 + DAT_00100784) * 8));
  String::operator+(aSStack_1a4,(int)param_2 + 0x18,aSStack_19c);
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement(pTVar7,aSStack_1a4,uVar9,0xffffffff,1,1,9,0);
  *(TrueTypeTextElement **)(this + 0xe0) = pTVar7;
  (*pcVar10)(piVar12,pTVar7);
  String::~String(aSStack_1a4);
  String::~String(aSStack_19c);
  piVar12 = *(int **)(iVar1 + DAT_00100788);
  this_02 = (Vector<TrueTypeTextElement*> *)*piVar12;
  uVar9 = *(undefined4 *)(this + 0xe0);
  iVar2 = *(int *)(this_02 + 4) + 2;
  if (*(int *)this_02 < iVar2) {
    iVar13 = *(int *)this_02 * 2;
    if (iVar13 < iVar2) {
      iVar13 = iVar2;
    }
    Vector<TrueTypeTextElement*>::resize(this_02,iVar13,-1);
  }
  iVar13 = DAT_00100790;
  iVar2 = DAT_0010078c;
  iVar11 = *(int *)(this_02 + 4);
  *(int *)(this_02 + 4) = iVar11 + 1;
  *(undefined4 *)((iVar11 + 1) * 4 + *(int *)(this_02 + 8)) = uVar9;
  L_PrintLog((char *)(iVar2 + 0x100568),(char *)(iVar13 + 0x10056a));
  sprintf(acStack_11c,(char *)(DAT_00100794 + 0x100578),*(int *)(*piVar12 + 4) + 1);
  L_PrintLog((char *)(DAT_00100798 + 0x100584),acStack_11c);
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::String(aSStack_194,0);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_0010079c + iVar2 * 4 + 0x1005fc) + 0x136) * 4 + iVar13);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_194,uVar9,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xe8) = pBVar6;
  (*pcVar10)(piVar12,pBVar6);
  String::~String(aSStack_194);
  uVar9 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100778),0x20,false);
  *(undefined4 *)(this + 0xf8) = uVar9;
  uVar9 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100778),0x36,false);
  *(undefined4 *)(this + 0xfc) = uVar9;
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  pCVar3 = (CImage *)GameStateFriendCafe::getModifiedRating((GameStateFriendCafe *)param_2);
  this_00 = (RatingBar *)operator_new(0x9c);
  RatingBar::RatingBar
            (this_00,extraout_s0,pCVar3,*(CImage **)(this + 0xf8),*(CImage **)(this + 0xfc),false);
  *(RatingBar **)(this + 0x100) = this_00;
  (*pcVar10)(piVar12,this_00);
  (**(code **)(**(int **)(this + 0x100) + 0x1c))(*(int **)(this + 0x100),0x11);
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x2c);
  String::valueOf((int)aSStack_18c);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_001007a0 + iVar2 * 4 + 0x1006ea) + 0x136) * 4 + iVar13);
  pBVar6 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar6,aSStack_18c,uVar9,0xffffffff,1,1,9,0,0);
  *(BitmapTextElement **)(this + 0xe4) = pBVar6;
  (*pcVar10)(piVar12,pBVar6);
  String::~String(aSStack_18c);
  iVar11 = *(int *)(*(int *)(this + 0x98) + 0x10);
  piVar12 = *(int **)(this + 0xe4);
  pcVar10 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_184,(char *)(DAT_001007a4 + 0x1006d0));
  (*pcVar10)(piVar12,aSStack_184);
  String::~String(aSStack_184);
  piVar12 = *(int **)(this + 0xe8);
  pcVar10 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_17c,(char *)(DAT_001007a8 + 0x1006fa));
  (*pcVar10)(piVar12,aSStack_17c);
  String::~String(aSStack_17c);
  iVar2 = (**(code **)(**(int **)(this + 0xe8) + 0x5c))();
  (**(code **)(**(int **)(this + 0xe4) + 0x5c))();
  layout(this);
  uVar9 = *(undefined4 *)(*(int *)(this + 0x98) + 0xc);
  iVar13 = SmDev();
  uVar17 = *(undefined4 *)(DAT_001007ac + iVar13 * 4 + 0x100742);
  piVar12 = *(int **)(this + 0xa0);
  pcVar10 = *(code **)(*piVar12 + 0x14);
  iVar13 = SmDev();
  iVar11 = iVar11 >> 4;
  iVar8 = iVar11 * 4;
  uVar9 = __floatsisf(uVar9);
  uVar16 = __floatsisf(iVar8);
  uVar16 = __addsf3(uVar17,uVar16);
  __subsf3(uVar9,uVar16);
  __fixsfsi();
  uVar9 = __floatsisf();
  __addsf3(uVar9,*(undefined4 *)(iVar13 * 4 + *(int *)(iVar1 + DAT_00100a40)));
  uVar16 = __fixsfsi();
  uVar19 = (*pcVar10)(piVar12,uVar16,iVar11);
  ImageButton::setScale
            (*(ImageButton **)(this + 0xa0),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  iVar18 = *(int *)(*(int *)(this + 0xa0) + 0xc);
  iVar13 = SmDev();
  uVar16 = *(undefined4 *)(iVar13 * 4 + *(int *)(iVar1 + DAT_00100a44));
  piVar12 = *(int **)(this + 0x9c);
  pcVar10 = *(code **)(*piVar12 + 0x14);
  iVar13 = SmDev();
  uVar17 = __floatsisf(iVar18 + iVar2);
  uVar16 = __addsf3(uVar17,uVar16);
  __subsf3(uVar9,uVar16);
  __fixsfsi();
  uVar9 = __floatsisf();
  __addsf3(uVar9,*(undefined4 *)(iVar13 * 4 + *(int *)(iVar1 + DAT_00100a48)));
  uVar9 = __fixsfsi();
  (*pcVar10)(piVar12,uVar9,iVar11);
  piVar12 = *(int **)(this + 0xe8);
  uVar9 = *(undefined4 *)(*(int *)(this + 0x9c) + 0xc);
  iVar2 = SmDev();
  uVar9 = __floatsisf(uVar9);
  pSVar14 = *(ScreenElement **)(this + 0x9c);
  __addsf3(uVar9,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_00100a4c)));
  iVar2 = __fixsfsi();
  iVar2 = ScreenElement::localToParentCoords(pSVar14,iVar2,*(int *)(pSVar14 + 0x10) >> 1);
  (**(code **)(*piVar12 + 0x14))(piVar12,iVar2 >> 0x10,(int)(short)iVar2);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),(*(int *)(*(int *)(this + 0x70) + 0x10) >> 0x10) + -10,
             (short)*(int *)(*(int *)(this + 0x70) + 0x10) + -10);
  piVar12 = *(int **)(this + 0xa4);
  uVar9 = *(undefined4 *)(this + 0xc);
  pcVar10 = *(code **)(*piVar12 + 0x14);
  iVar2 = SmDev();
  uVar9 = __floatsisf(uVar9);
  __subsf3(uVar9,*(undefined4 *)(DAT_00100a50 + iVar2 * 4 + 0x1008de));
  uVar9 = __fixsfsi();
  uVar19 = (*pcVar10)(piVar12,uVar9,*(undefined4 *)(*(int *)(this + 0x98) + 0x10));
  uVar19 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa8),(float)uVar19,
                      (float)((ulonglong)uVar19 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0xac),(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  iVar2 = *(int *)(this + 0x70);
  if ((*(char *)(iVar2 + DAT_00100a54) == '\0') && (*(char *)(iVar2 + DAT_00100a58) == '\0')) {
    if ((*(char *)(iVar2 + DAT_00100d58) == '\0') && (*(char *)(iVar2 + DAT_00100d5c) == '\0'))
    goto LAB_00100ae4;
    uVar9 = *(undefined4 *)(this + 0xc);
    local_1f0 = *(code **)(**(int **)(this + 0xac) + 0x14);
    iVar2 = SmDev();
    uVar9 = __floatsisf(uVar9);
    iVar13 = *(int *)(this + 0xac);
    uVar9 = __subsf3(uVar9,*(undefined4 *)(DAT_00100d60 + iVar2 * 4 + 0x100aa4));
    __divsi3(*(undefined4 *)(iVar13 + 0xc),3);
    uVar16 = __floatsisf();
    __subsf3(uVar9,uVar16);
    uVar9 = __fixsfsi();
    uVar19 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x98) + 0x10));
    __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00100d50,DAT_00100d54);
    uVar16 = __fixdfsi();
  }
  else {
    uVar9 = *(undefined4 *)(this + 0xc);
    pcVar10 = *(code **)(**(int **)(this + 0xa8) + 0x14);
    iVar2 = SmDev();
    uVar9 = __floatsisf(uVar9);
    iVar13 = *(int *)(this + 0xa8);
    uVar9 = __subsf3(uVar9,*(undefined4 *)(DAT_00100a5c + iVar2 * 4 + 0x10094c));
    __divsi3(*(undefined4 *)(iVar13 + 0xc),3);
    uVar16 = __floatsisf();
    __subsf3(uVar9,uVar16);
    uVar9 = __fixsfsi();
    uVar19 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x98) + 0x10));
    __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00100a38,DAT_00100a3c);
    uVar16 = __fixdfsi();
    (*pcVar10)(iVar13,uVar9,uVar16);
    if ((*(char *)(*(int *)(this + 0x70) + DAT_00100a60) == '\0') &&
       (*(char *)(*(int *)(this + 0x70) + DAT_00100a64) == '\0')) goto LAB_00100ae4;
    uVar9 = *(undefined4 *)(this + 0xc);
    local_1f0 = *(code **)(**(int **)(this + 0xac) + 0x14);
    iVar2 = SmDev();
    uVar9 = __floatsisf(uVar9);
    iVar13 = *(int *)(this + 0xac);
    uVar9 = __subsf3(uVar9,*(undefined4 *)(DAT_00100a68 + iVar2 * 4 + 0x1009c8));
    __divsi3(*(undefined4 *)(iVar13 + 0xc),3);
    uVar16 = __floatsisf();
    __subsf3(uVar9,uVar16);
    uVar9 = __fixsfsi();
    uVar19 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x98) + 0x10));
    uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00100a38,DAT_00100a3c);
    uVar20 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xa8) + 0x10));
    uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __floatsidf(iVar11);
    __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
             (int)((ulonglong)uVar20 >> 0x20));
    uVar16 = __fixdfsi();
  }
  (*local_1f0)(iVar13,uVar9,uVar16);
LAB_00100ae4:
  if (*(char *)(*(int *)(this + 0x70) + DAT_00100d64) != '\0') {
    piVar12 = *(int **)(this + 0xb0);
    uVar9 = *(undefined4 *)(this + 0xc);
    pcVar10 = *(code **)(*piVar12 + 0x14);
    iVar2 = SmDev();
    uVar9 = __floatsisf(uVar9);
    __subsf3(uVar9,*(undefined4 *)(DAT_00100d68 + iVar2 * 4 + 0x100b14));
    uVar9 = __fixsfsi();
    uVar19 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x98) + 0x10));
    uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00100d50,DAT_00100d54);
    uVar20 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xa8) + 0x10));
    uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xac) + 0x10));
    uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                      (int)((ulonglong)uVar20 >> 0x20));
    uVar20 = __floatsidf(iVar11);
    __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
             (int)((ulonglong)uVar20 >> 0x20));
    uVar16 = __fixdfsi();
    (*pcVar10)(piVar12,uVar9,uVar16);
  }
  piVar12 = *(int **)(this + 0xb4);
  (**(code **)(*piVar12 + 0x14))
            (piVar12,*(int *)(*(int *)(this + 0x70) + 0x10) >> 0x10,
             (short)*(int *)(*(int *)(this + 0x70) + 0x10) - iVar11);
  iVar2 = *(int *)(this + 0xb4);
  (**(code **)(**(int **)(this + 0xdc) + 0x14))
            (*(int **)(this + 0xdc),*(int *)(iVar2 + 0xc) / 2,*(int *)(iVar2 + 0x10) / 2);
  (**(code **)(**(int **)(this + 0xe0) + 0x14))(*(int **)(this + 0xe0),iVar8,iVar11);
  piVar12 = *(int **)(this + 0xe4);
  pcVar10 = *(code **)(*piVar12 + 0x14);
  iVar18 = *(int *)(*(int *)(this + 0xe0) + 4);
  iVar13 = *(int *)(*(int *)(this + 0xe0) + 0xc);
  iVar2 = SmDev();
  uVar9 = __floatsisf(iVar11);
  __addsf3(uVar9,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar1 + DAT_00100d6c)));
  uVar9 = __fixsfsi();
  (*pcVar10)(piVar12,iVar18 + iVar13 + iVar8,uVar9);
  iVar2 = *(int *)(this + 0xe0);
  (**(code **)(**(int **)(this + 0x100) + 0x14))
            (*(int **)(this + 0x100),*(int *)(iVar2 + 0xc) / 2 + *(int *)(iVar2 + 4),
             *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10));
  iVar2 = DAT_00100d70;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00100d70),7,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  this_03 = (Vector<ZCImageButton*> *)(this + 0x7c);
  Vector<ZCImageButton*>::addElement(this_03,pZVar5);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0x102,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  Vector<ZCImageButton*>::addElement(this_03,pZVar5);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xf7,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  Vector<ZCImageButton*>::addElement(this_03,pZVar5);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xf9,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  Vector<ZCImageButton*>::addElement(this_03,pZVar5);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + iVar2),0xd,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'\x12',pCVar3,(CImage *)0x0,0,0,false);
  Vector<ZCImageButton*>::addElement(this_03,pZVar5);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x80) + 1; iVar2 = iVar2 + 1) {
    pSVar14 = *(ScreenElement **)(iVar2 * 4 + *(int *)(this + 0x84));
    ScreenElement::addChild((ScreenElement *)this,pSVar14);
    (**(code **)(*(int *)pSVar14 + 0x20))(pSVar14,0);
  }
  String::String(aSStack_174,0);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_0010111c + iVar2 * 4 + 0x100db2) + 0x136) * 4 + iVar13);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_174,uVar9,0xffffffff,0xff000000,1,1,0x11,0,0);
  pFVar15 = this + 0xec;
  *(ScreenElement **)pFVar15 = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_174);
  (**(code **)(**(int **)pFVar15 + 0x20))(*(int **)pFVar15,0);
  piVar12 = *(int **)pFVar15;
  pcVar10 = *(code **)(*piVar12 + 0x44);
  String::valueOf((int)aSStack_15c);
  String::operator+(aSStack_164,(char *)aSStack_15c);
  String::valueOf((int)aSStack_154);
  String::operator+(aSStack_16c,aSStack_164,aSStack_154);
  (*pcVar10)(piVar12,aSStack_16c);
  String::~String(aSStack_16c);
  String::~String(aSStack_154);
  String::~String(aSStack_164);
  String::~String(aSStack_15c);
  String::String(aSStack_14c,0);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00101128 + iVar2 * 4 + 0x100e78) + 0x136) * 4 + iVar13);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_14c,uVar9,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xd0) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_14c);
  piVar12 = *(int **)(this + 0xd0);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  String::String(aSStack_144,0);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_0010112c + iVar2 * 4 + 0x100edc) + 0x136) * 4 + iVar13);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_144,uVar9,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xd4) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_144);
  piVar12 = *(int **)(this + 0xd4);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  String::String(aSStack_13c,0);
  iVar13 = *(int *)(this + 0x70);
  iVar2 = SmDev();
  uVar9 = *(undefined4 *)((*(int *)(DAT_00101130 + iVar2 * 4 + 0x100f40) + 0x136) * 4 + iVar13);
  pSVar14 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar14,aSStack_13c,uVar9,0xffffffff,0xff000000,1,1,0x11,0,0);
  *(ScreenElement **)(this + 0xd8) = pSVar14;
  ScreenElement::addChild((ScreenElement *)this,pSVar14);
  String::~String(aSStack_13c);
  piVar12 = *(int **)(this + 0xd8);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  uVar9 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x70) + DAT_00101134),0x1e,false);
  *(undefined4 *)(this + 0x88) = uVar9;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x80) + 1; iVar2 = iVar2 + 1) {
    local_134 = 0;
    local_130 = 0;
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,*(CImage **)(this + 0x88),0,'\"',true);
    local_12c = pIVar4;
    Vector<FriendCafeHudElement::NewIndicator>::addElement
              ((Vector<FriendCafeHudElement::NewIndicator> *)(this + 0x8c),local_134,local_130,
               pIVar4);
    ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
    (**(code **)(*(int *)pIVar4 + 0x20))(pIVar4,0);
  }
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,*(CImage **)(this + 0x88),0,'\"',true);
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(ImageElement **)(this + 0xc0) = pIVar4;
  local_128 = 0;
  local_124 = 0;
  local_120 = pIVar4;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pIVar4);
  piVar12 = *(int **)(this + 0xc0);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  if (local_1c != **(int **)(iVar1 + DAT_00101138)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


