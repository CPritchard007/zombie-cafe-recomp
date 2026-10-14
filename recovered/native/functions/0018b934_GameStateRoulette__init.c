/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018b934 GameStateRoulette::init */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0018bd9c) */
/* WARNING: Removing unreachable block (ram,0x0018bd9c) */
/* GameStateRoulette::init() */

void __thiscall GameStateRoulette::init(GameStateRoulette *this)

{
  undefined4 uVar1;
  int iVar2;
  ScreenElement *this_00;
  CImage *pCVar3;
  ImageElement *pIVar4;
  int iVar5;
  int iVar6;
  ZCImageButton *pZVar7;
  char *pcVar8;
  String *this_01;
  BitmapTextElement *pBVar9;
  CImage *pCVar10;
  CImage *pCVar11;
  ConfirmDialog *this_02;
  NoticeDialog *this_03;
  int iVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
  int *piVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float fVar17;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar12 = DAT_0018bc68 + 0x18b940;
  local_1c = **(int **)(iVar12 + DAT_0018bc6c);
  L_PrintLog((char *)(DAT_0018bc74 + 0x18b950),(char *)(DAT_0018bc70 + 0x18b94e));
  iVar5 = DAT_0018bc7c;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0018bc78) = 0xc;
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  iVar6 = DAT_0018bc80;
  uVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + iVar5));
  sprintf(acStack_11c,(char *)(DAT_0018bc84 + 0x18b978),uVar1);
  L_PrintLog((char *)(DAT_0018bc88 + 0x18b984),acStack_11c);
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  piVar16 = *(int **)(iVar12 + DAT_0018bc8c);
  iVar14 = *piVar16;
  iVar2 = SmDev();
  uVar1 = FontManager::addFont(iVar14,SUB41(*(undefined4 *)(iVar6 + 0x18b982 + iVar2 * 4 + 0x24),0))
  ;
  *(undefined4 *)(this + 0x18) = uVar1;
  iVar14 = *piVar16;
  iVar2 = SmDev();
  uVar1 = FontManager::addFont(iVar14,SUB41(*(undefined4 *)(iVar6 + 0x18b982 + iVar2 * 4 + 0x3c),0))
  ;
  *(undefined4 *)(this + 0x1c) = uVar1;
  CapcomApp::getInstance();
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar15 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar3 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),2,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x48) = pIVar4;
  (*pcVar15)(this_00,pIVar4);
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc90),0x22,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar4,pCVar3,extraout_s0_00,extraout_s1_00,(uchar)DAT_0018bc94,SUB41(DAT_0018bc98,0));
  *(ImageElement **)(this + 0x58) = pIVar4;
  (*pcVar15)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc7c),0x19,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_01,extraout_s1_01,'\0',false);
  *(ImageElement **)(this + 0x4c) = pIVar4;
  (*pcVar15)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc90),0x17,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 100) = pIVar4;
  (*pcVar15)(piVar16,pIVar4);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc7c),0x26,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  *(ImageElement **)(this + 0x6c) = pIVar4;
  iVar5 = SmDev();
  iVar2 = DAT_0018bc9c + 0x18baf8;
  *(undefined4 *)(pIVar4 + 0x68) = *(undefined4 *)(iVar2 + iVar5 * 4 + 0x48);
  iVar14 = *(int *)(this + 0x6c);
  iVar6 = SmDev();
  iVar5 = DAT_0018bc7c;
  *(undefined4 *)(iVar14 + 0x6c) = *(undefined4 *)(iVar2 + iVar6 * 4 + 0x60);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x15,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
  iVar5 = DAT_0018bc7c;
  *(ImageElement **)(this + 0x70) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x1f,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_02,extraout_s1_02,'\0',false);
  iVar5 = DAT_0018bc7c;
  *(ImageElement **)(this + 0x5c) = pIVar4;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x1f,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,extraout_s0_03,extraout_s1_03,'\0',false);
  iVar6 = DAT_0018bca4;
  iVar5 = DAT_0018bca0;
  *(ImageElement **)(this + 0x60) = pIVar4;
  pIVar4[0x60] = (ImageElement)0x1;
  L_PrintLog((char *)(iVar5 + 0x18bb96),(char *)(iVar6 + 0x18bb98));
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc7c),3,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'$',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x7c) = pZVar7;
  (*pcVar15)(piVar16,pZVar7);
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc7c),0x18,false);
  pZVar7 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar7,'\x14',pCVar3,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x80) = pZVar7;
  (*pcVar15)(piVar16,pZVar7);
  L_PrintLog((char *)(DAT_0018bca8 + 0x18bc1a),(char *)(DAT_0018bcac + 0x18bc1c));
  piVar16 = *(int **)(this + 0x80);
  if (this[DAT_0018bcb0] == (GameStateRoulette)0x0) {
    pcVar15 = *(code **)(*piVar16 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bc7c),0x24,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
    *(ImageElement **)(this + 0x8c) = pIVar4;
    (*pcVar15)(piVar16,pIVar4);
    pcVar8 = (char *)(DAT_0018bcb4 + 0x18bc64);
    pcVar13 = &UNK_0018bc66 + DAT_0018bcb8;
  }
  else {
    pcVar15 = *(code **)(*piVar16 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bea0),0x25,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\t',true);
    *(ImageElement **)(this + 0x8c) = pIVar4;
    (*pcVar15)(piVar16,pIVar4);
    pcVar8 = (char *)(DAT_0018bea4 + 0x18bcf8);
    pcVar13 = (char *)(DAT_0018bea8 + 0x18bcfa);
  }
  L_PrintLog(pcVar8,pcVar13);
  iVar5 = ZombieCafe::calUserRankId
                    (*(ZombieCafe **)(this + 0xc),
                     (uint)(byte)(*(ZombieCafe **)(this + 0xc))[DAT_0018beac]);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  if (iVar5 == 0) {
LAB_0018be26:
    uVar1 = 0xff000000;
  }
  else {
    piVar16 = *(int **)(this + 0x14);
    pcVar15 = *(code **)(*piVar16 + 0x2c);
    pCVar3 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018bea0),iVar5 + 0x27,false);
    pIVar4 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar4,pCVar3,'\x12',true);
    *(ImageElement **)(this + 0x78) = pIVar4;
    (*pcVar15)(piVar16,pIVar4);
    piVar16 = *(int **)(this + 0x14);
    pcVar15 = *(code **)(*piVar16 + 0x2c);
    String::String(aSStack_174,(char *)(DAT_0018beb0 + 0x18bd54));
    pBVar9 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement
              (pBVar9,aSStack_174,*(undefined4 *)(*(int *)(this + 0xc) + DAT_0018beb4),DAT_0018beb8,
               1,1,10,0,0);
    *(BitmapTextElement **)(this + 0x44) = pBVar9;
    (*pcVar15)(piVar16,pBVar9);
    String::~String(aSStack_174);
    piVar16 = *(int **)(this + 0x44);
    pcVar15 = *(code **)(*piVar16 + 0x44);
    switch(iVar5) {
    case 1:
      String::String(aSStack_16c,(char *)(DAT_0018bebc + 0x18bdae));
      (*pcVar15)(piVar16,aSStack_16c);
      this_01 = aSStack_16c;
      break;
    case 2:
      String::String(aSStack_164,(char *)(DAT_0018bec0 + 0x18bdc2));
      (*pcVar15)(piVar16,aSStack_164);
      this_01 = aSStack_164;
      break;
    case 3:
      String::String(aSStack_15c,(char *)(DAT_0018bec4 + 0x18bdd6));
      (*pcVar15)(piVar16,aSStack_15c);
      this_01 = aSStack_15c;
      break;
    case 4:
      String::String(aSStack_154,(char *)(DAT_0018bec8 + 0x18bdea));
      (*pcVar15)(piVar16,aSStack_154);
      this_01 = aSStack_154;
      break;
    case 5:
      String::String(aSStack_14c,(char *)(DAT_0018becc + 0x18bdfe));
      (*pcVar15)(piVar16,aSStack_14c);
      this_01 = aSStack_14c;
      break;
    default:
      String::String(aSStack_144,(char *)(DAT_0018bed0 + 0x18be18));
      (*pcVar15)(piVar16,aSStack_144);
      String::~String(aSStack_144);
      goto LAB_0018be26;
    }
    String::~String(this_01);
    uVar1 = DAT_0018beb8;
  }
  piVar16 = *(int **)(this + 0x80);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  String::valueOf((int)aSStack_13c);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_13c,*(undefined4 *)(*(int *)(this + 0xc) + DAT_0018beb4),uVar1,1,1,0x12,
             0,0);
  *(BitmapTextElement **)(this + 0x88) = pBVar9;
  (*pcVar15)(piVar16,pBVar9);
  iVar5 = DAT_0018bed8;
  String::~String(aSStack_13c);
  pcVar8 = (char *)(iVar5 + 0x18be80);
  L_PrintLog(pcVar8,(char *)(DAT_0018bedc + 0x18be84));
  if (this[DAT_0018bee0] == (GameStateRoulette)0x0) {
    L_PrintLog(pcVar8,(char *)(DAT_0018c1dc + 0x18bef0));
    initRoulette(this);
  }
  else {
    L_PrintLog(pcVar8,(char *)(DAT_0018bee4 + 0x18be96));
    initFurniture(this);
  }
  L_PrintLog((char *)(DAT_0018c1e0 + 0x18bf00),(char *)(DAT_0018c1e4 + 0x18bf02));
  String::String(aSStack_134,(char *)(DAT_0018c1e8 + 0x18bf0c));
  piVar16 = *(int **)(this + 0x14);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_12c,aSStack_134);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar9,aSStack_12c,*(undefined4 *)(*(int *)(this + 0xc) + DAT_0018c1ec),0xffffffff,1,1,
             0x11,0,0);
  *(BitmapTextElement **)(this + 0x84) = pBVar9;
  (*pcVar15)(piVar16,pBVar9);
  String::~String(aSStack_12c);
  piVar16 = *(int **)(this + 0x54);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0018c1f0),0x29,false);
  pIVar4 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar4,pCVar3,'!',true);
  *(ImageElement **)(this + DAT_0018c1f4) = pIVar4;
  (*pcVar15)(piVar16,pIVar4);
  piVar16 = *(int **)(this + 0x54);
  pcVar15 = *(code **)(*piVar16 + 0x2c);
  String::String(aSStack_124,0);
  iVar6 = *(int *)(this + 0xc);
  iVar5 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_0018c1f8 + iVar5 * 4 + 0x18bffe) + 0x136) * 4 + iVar6);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar9,aSStack_124,uVar1,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xe30) = pBVar9;
  (*pcVar15)(piVar16,pBVar9);
  String::~String(aSStack_124);
  L_PrintLog((char *)(DAT_0018c1fc + 0x18bff4),(char *)(DAT_0018c200 + 0x18bff6));
  iVar6 = DAT_0018c208;
  *(undefined4 *)(this + DAT_0018c204) = 0;
  iVar5 = DAT_0018c1f0;
  *(undefined4 *)(this + DAT_0018c20c) = 0;
  *(undefined4 *)(this + iVar6) = 0;
  this[0x9f0] = (GameStateRoulette)0x0;
  *(undefined4 *)(this + DAT_0018c210) = 0;
  this[DAT_0018c214] = (GameStateRoulette)0x0;
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x22,false);
  *(CImage **)(this + DAT_0018c218) = pCVar3;
  pCVar10 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),8,false)
  ;
  *(CImage **)(this + 0xe40) = pCVar10;
  pCVar11 = (CImage *)
            PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x10,false);
  *(CImage **)(this + DAT_0018c21c) = pCVar11;
  this_02 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_02,pCVar3,pCVar10,pCVar11,0,extraout_s0_04,(CImage *)0x3f800000)
  ;
  iVar6 = DAT_0018c220;
  *(ConfirmDialog **)(this + DAT_0018c220) = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + iVar6),100);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),0x22,false);
  *(CImage **)(this + DAT_0018c224) = pCVar3;
  pCVar10 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar5),8,false)
  ;
  *(CImage **)(this + 0xe50) = pCVar10;
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(this_03,pCVar3,pCVar10,extraout_s0_05);
  iVar5 = DAT_0018c228;
  *(NoticeDialog **)(this + DAT_0018c228) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  fVar17 = (float)ScreenElement::setOrder(*(ScreenElement **)(this + iVar5),0x66);
  ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar17,false);
  L_PrintLog((char *)(DAT_0018c22c + 0x18c0ea),(char *)(DAT_0018c230 + 0x18c0ec));
  uVar1 = CImage::getRefCount(*(CImage **)(*(int *)(this + 0xc) + DAT_0018c234));
  sprintf(acStack_11c,(char *)(DAT_0018c238 + 0x18c102),uVar1);
  L_PrintLog((char *)(DAT_0018c23c + 0x18c10c),acStack_11c);
  String::~String(aSStack_134);
  if (local_1c == **(int **)(iVar12 + DAT_0018c240)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


