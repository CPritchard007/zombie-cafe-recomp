/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00161af8 GameStateMainMenu::init */

/* GameStateMainMenu::init() */

void __thiscall GameStateMainMenu::init(GameStateMainMenu *this)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  ZombieCafe *this_00;
  ScreenElement *this_01;
  CImage *pCVar4;
  ImageElement *pIVar5;
  ZCImageButton *pZVar6;
  int iVar7;
  FacebookNagDialog *this_02;
  uint uVar8;
  GameStateMainMenu *pGVar9;
  CImage *pCVar10;
  NoticeDialog *this_03;
  CImage *pCVar11;
  ConfirmDialog *this_04;
  SaveDataConfirmDialog *this_05;
  char *pcVar12;
  code *pcVar13;
  int iVar14;
  char *pcVar15;
  int *piVar16;
  undefined4 uVar17;
  GameStateMainMenu *pGVar18;
  char *pcVar19;
  pthread_mutex_t *__mutex;
  int *piVar20;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  undefined8 uVar21;
  float extraout_s1_00;
  char acStack_5c [64];
  int local_1c;
  
  iVar14 = DAT_00161edc + 0x161b04;
  piVar20 = *(int **)(iVar14 + DAT_00161ee0);
  local_1c = *piVar20;
  pcVar19 = (char *)(DAT_00161ee4 + 0x161b10);
  pcVar15 = (char *)(DAT_00161ee8 + 0x161b12);
  L_PrintLog(pcVar15,pcVar19);
  L_PrintLog((char *)(DAT_00161eec + 0x161b24),(char *)(DAT_00161ef0 + 0x161b26));
  L_PrintLog(pcVar15,pcVar19);
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_00161ef4) = 0;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(iVar3 + 0x44);
  L_UploadAndroidAnalytics();
  javaFacebook2(8,DAT_00161ef8 + 0x161b54);
  iVar3 = CapcomApp::getInstance();
  if (*(char *)(iVar3 + 0x54) != '\0') {
    ZombieCafe::recordHooverSessionTime(*(ZombieCafe **)(this + 0xc));
  }
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadShopImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadFurnitureImages(*(ZombieCafe **)(this + 0xc));
  iVar3 = DAT_00161f04;
  L_PrintLog((char *)(DAT_00161efc + 0x161b94),(char *)(DAT_00161f00 + 0x161b96));
  iVar3 = CCServer::GetNickName(*(void **)(*(int *)(this + 0xc) + iVar3));
  **(char **)(iVar14 + DAT_00161f08) = '\x01' - (iVar3 == 0);
  this_00 = *(ZombieCafe **)(this + 0xc);
  **(undefined4 **)(iVar14 + DAT_00161f0c) = *(undefined4 *)(this_00 + 0x680);
  ZombieCafe::loadGetEntryInfo(this_00);
  ZombieCafe::getGameInfo(*(ZombieCafe **)(this + 0xc));
  this_01 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_01,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_01;
  pcVar13 = *(code **)(*(int *)this_01 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),0,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0x18) = pIVar5;
  (*pcVar13)(this_01,pIVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),4,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x48) = pZVar6;
  (*pcVar13)(piVar16,pZVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),7,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x4c) = pZVar6;
  (*pcVar13)(piVar16,pZVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),5,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x50) = pZVar6;
  (*pcVar13)(piVar16,pZVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),6,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x54) = pZVar6;
  (*pcVar13)(piVar16,pZVar6);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00161f10),0xe,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\x12',true);
  *(ImageElement **)(this + 0x28) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  iVar3 = ZombieCafe::calUserRankId
                    (*(ZombieCafe **)(this + 0xc),
                     (uint)(byte)(*(ZombieCafe **)(this + 0xc))[DAT_00161f14]);
  *(undefined4 *)(this + 0x60) = 0;
  if (iVar3 != 0) {
    iVar7 = CapcomApp::getInstance();
    uVar17 = *(undefined4 *)(iVar7 + 0x40);
    iVar7 = CapcomApp::getInstance();
    uVar1 = __mulsf3(uVar17,*(undefined4 *)(iVar7 + 0x50));
    iVar7 = CapcomApp::getInstance();
    uVar17 = *(undefined4 *)(iVar7 + 0x44);
    iVar7 = CapcomApp::getInstance();
    bVar2 = (bool)__mulsf3(uVar17,*(undefined4 *)(iVar7 + 0x50));
    piVar16 = *(int **)(this + 0x14);
    pcVar13 = *(code **)(*piVar16 + 0x2c);
    pCVar4 = (CImage *)
             PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),iVar3 + 6,false);
    pIVar5 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0,extraout_s1,uVar1,bVar2);
    *(ImageElement **)(this + 0x60) = pIVar5;
    (*pcVar13)(piVar16,pIVar5);
  }
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),2,false);
  *(undefined4 *)(this + 0x3c) = uVar17;
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),1,false);
  piVar16 = *(int **)(this + 0x14);
  *(undefined4 *)(this + 0x40) = uVar17;
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x3c),'\x11',true);
  *(ImageElement **)(this + 0x30) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x800),8,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,'\t',true);
  *(ImageElement **)(this + 0x2c) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  this_02 = (FacebookNagDialog *)operator_new(0x8c);
  FacebookNagDialog::FacebookNagDialog(this_02);
  *(FacebookNagDialog **)(this + 0x90) = this_02;
  (*pcVar13)(piVar16,this_02);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00161f10),0xf,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x44) = pZVar6;
  uVar21 = (*pcVar13)(piVar16,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x44),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  piVar16 = *(int **)(this + 0x90);
  (**(code **)(*piVar16 + 0x1c))(piVar16,0x12);
  piVar16 = *(int **)(this + 0x90);
  (**(code **)(*piVar16 + 0x20))(piVar16,0);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00161f10),0x31,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x68) = pZVar6;
  (*pcVar13)(piVar16,pZVar6);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00162308),0x33,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x70) = pZVar6;
  uVar21 = (*pcVar13)(piVar16,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x70),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00162308),0x32,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar4,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x6c) = pZVar6;
  uVar21 = (*pcVar13)(piVar16,pZVar6);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x6c),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00162308),0x34,false);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,pCVar4,extraout_s0_00,extraout_s1_00,'\0',false);
  *(ImageElement **)(this + 100) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_0016230c)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_00162310)));
  uVar8 = uVar8 & 0xffff | iVar3 << 0x10;
  *(uint *)(this + 0x130) = uVar8;
  *(uint *)(this + 0x138) = uVar8;
  iVar3 = SmDev();
  uVar17 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162314)));
  *(undefined4 *)(this + 0x134) = uVar17;
  this[300] = (GameStateMainMenu)0x1;
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00162308),0xc,false);
  iVar3 = DAT_00162308;
  *(undefined4 *)(this + 0x34) = uVar17;
  uVar17 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0xd,false);
  piVar16 = *(int **)(this + 0x14);
  *(undefined4 *)(this + 0x38) = uVar17;
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x34),'\x11',true);
  *(ImageElement **)(this + 0x1c) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x34),'\x11',true);
  *(ImageElement **)(this + 0x20) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pIVar5 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar5,*(CImage **)(this + 0x34),'\x11',true);
  *(ImageElement **)(this + 0x24) = pIVar5;
  (*pcVar13)(piVar16,pIVar5);
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162318)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_0016231c)));
  *(uint *)(this + 0x100) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162320)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_00162324)));
  *(uint *)(this + 0x104) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162328)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_0016232c)));
  *(uint *)(this + 0x108) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162330)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_00162334)));
  *(uint *)(this + 0x10c) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162338)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_0016233c)));
  *(uint *)(this + 0x110) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162340)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_00162344)));
  *(uint *)(this + 0x114) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162348)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_0016234c)));
  *(uint *)(this + 0x118) = uVar8 & 0xffff | iVar3 << 0x10;
  iVar3 = SmDev();
  iVar3 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar14 + DAT_00162350)));
  iVar7 = SmDev();
  uVar8 = __fixsfsi(*(undefined4 *)(iVar7 * 4 + *(int *)(iVar14 + DAT_00162354)));
  iVar7 = 0;
  *(uint *)(this + 0x11c) = uVar8 & 0xffff | iVar3 << 0x10;
  *(undefined4 *)(this + 0xf4) = 2;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 5;
  *(undefined4 *)(this + 0xe8) = 700;
  *(undefined4 *)(this + 0xec) = 400;
  *(undefined4 *)(this + 0xf0) = DAT_00162358;
  pGVar18 = this;
  do {
    iVar3 = *(int *)(this + (*(int *)(this + iVar7 + 0xf4) + 0x40) * 4);
    iVar7 = iVar7 + 4;
    uVar17 = __floatsisf(iVar3 >> 0x10);
    *(undefined4 *)(pGVar18 + 0xb8) = uVar17;
    pGVar9 = pGVar18 + 0xbc;
    uVar17 = __floatsisf((int)(short)iVar3);
    pGVar18 = pGVar18 + 8;
    *(undefined4 *)pGVar9 = uVar17;
  } while (iVar7 != 0xc);
  setFlyPos(this);
  this[0x120] = (GameStateMainMenu)0x0;
  iVar3 = DAT_00162308;
  this[DAT_0016235c] = (GameStateMainMenu)0x0;
  this[0x122] = (GameStateMainMenu)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x22,false);
  *(CImage **)(this + 0x88) = pCVar4;
  pCVar10 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001625e8),8,false);
  *(CImage **)(this + 0x8c) = pCVar10;
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_03,pCVar4,pCVar10,extraout_s0_01);
  *(NoticeDialog **)(this + 0x84) = this_03;
  (*pcVar13)(piVar16,this_03);
  (**(code **)(**(int **)(this + 0x84) + 0x1c))(*(int **)(this + 0x84),0x12);
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001625ec) = 1;
  CCServer::GetServerTime
            (*(void **)((int)*(void **)(this + 0xc) + DAT_001625f0),*(void **)(this + 0xc),-1);
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001625f4) = 1;
  ZombieCafe::simulateTimers(*(ZombieCafe **)(this + 0xc));
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_001625e8),0x22,false);
  iVar3 = DAT_001625e8;
  *(CImage **)(this + 0x78) = pCVar4;
  pCVar10 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),8,false)
  ;
  iVar3 = DAT_001625e8;
  *(CImage **)(this + 0x7c) = pCVar10;
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar3),0x10,false);
  *(CImage **)(this + 0x80) = pCVar11;
  this_04 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_04,pCVar4,pCVar10,pCVar11,0,extraout_s0_02,(CImage *)0x3f800000)
  ;
  *(ConfirmDialog **)(this + 0x74) = this_04;
  (*pcVar13)(piVar16,this_04);
  (**(code **)(**(int **)(this + 0x74) + 0x1c))(*(int **)(this + 0x74),0x12);
  piVar16 = *(int **)(this + 0x14);
  pcVar13 = *(code **)(*piVar16 + 0x2c);
  this_05 = (SaveDataConfirmDialog *)operator_new(0xd0);
  SaveDataConfirmDialog::SaveDataConfirmDialog(this_05);
  *(SaveDataConfirmDialog **)(this + 0x140) = this_05;
  (*pcVar13)(piVar16,this_05);
  (**(code **)(**(int **)(this + 0x140) + 0x1c))(*(int **)(this + 0x140),0x12);
  ZombieCafe::loadlottery
            ((void *)**(undefined4 **)(iVar14 + DAT_001625f8),*(void **)(this + 0xc),
             *(int *)((int)*(void **)(this + 0xc) + 0x728));
  iVar3 = DAT_00162604;
  if (**(int **)(iVar14 + DAT_001625fc) == 0) {
    pcVar15 = *(char **)(iVar14 + DAT_00162600);
    if (*pcVar15 == '\0') {
      __mutex = (pthread_mutex_t *)(DAT_00162604 + 0x16251e);
      pthread_mutex_lock(__mutex);
      *(undefined4 *)(iVar3 + 0x162526) = 0;
      pthread_mutex_unlock(__mutex);
      pcVar19 = (char *)(DAT_0016260c + 0x1624cc);
      pcVar12 = (char *)(DAT_00162610 + 0x1624ce);
      **(undefined4 **)(iVar14 + DAT_00162608) = 0;
      L_PrintLog(pcVar19,pcVar12);
      iVar3 = CCServer::RetrieveMyGameState
                        (*(void **)(*(int *)(this + 0xc) + DAT_001625f0),
                         *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(iVar14 + DAT_00162614),
                         *(_func_void_void_ptr_ccServerFailureCode **)(iVar14 + DAT_00162618),this);
      *pcVar15 = iVar3 == 1;
      if (iVar3 == 1) {
        iVar3 = DAT_0016261c + 0x1624fa;
      }
      else {
        iVar3 = DAT_00162620 + 0x162500;
      }
      uVar17 = *(undefined4 *)(*(int *)(this + 0xc) + 0x728);
      snprintf(acStack_5c,0x40,(char *)(DAT_00162624 + 0x162510),iVar3,uVar17);
      L_PrintLog((char *)(DAT_00162628 + 0x16251c),acStack_5c);
      if (((*pcVar15 != '\0') && (-1 < *(long *)(*(int *)(this + 0xc) + 0x728))) &&
         (iVar3 = CEvent::wait((CEvent *)(&UNK_001625ac + DAT_0016262c),
                               *(long *)(*(int *)(this + 0xc) + 0x728),1), iVar3 == 0)) {
        *pcVar15 = '\0';
      }
      if (*pcVar15 == '\0') {
        iVar3 = DAT_00162634 + 0x162554;
      }
      else {
        iVar3 = DAT_00162630 + 0x16254e;
      }
      snprintf(acStack_5c,0x40,(char *)(DAT_00162638 + 0x16255c),iVar3,uVar17);
      L_PrintLog((char *)(DAT_0016263c + 0x162566),acStack_5c);
    }
  }
  InfoBarClass::init_webView((int)(this + 0x150),0,1);
  InfoBarClass::start_infobar((InfoBarClass *)(this + 0x150),(char *)(DAT_00162640 + 0x162582));
  L_PrintLog((char *)(DAT_00162644 + 0x16258c),(char *)(DAT_00162648 + 0x16258e));
  this[0x13e] = (GameStateMainMenu)0x1;
  if (local_1c != *piVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


