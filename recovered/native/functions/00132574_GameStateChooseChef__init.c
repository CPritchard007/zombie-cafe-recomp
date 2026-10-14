/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00132574 GameStateChooseChef::init */

/* GameStateChooseChef::init() */

void __thiscall GameStateChooseChef::init(GameStateChooseChef *this)

{
  int iVar1;
  ScreenElement *this_00;
  CImage *pCVar2;
  ImageElement *pIVar3;
  int iVar4;
  BitmapTextElement *pBVar5;
  ZCImageButton *pZVar6;
  CImage *pCVar7;
  CImage *pCVar8;
  ConfirmDialog *this_01;
  BuyToxinDialog *this_02;
  NoticeDialog *this_03;
  void *pvVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  GameStateChooseChef *pGVar14;
  int iVar15;
  undefined4 uVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar17;
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_00132934 + 0x132582;
  local_1c = **(int **)(iVar1 + DAT_00132938);
  L_PrintLog((char *)(DAT_00132940 + 0x132590),(char *)(DAT_0013293c + 0x13258e));
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_00132944) = 6;
  ZombieCafe::loadMenuImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadDialogImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadZombieCollectionImages(*(ZombieCafe **)(this + 0xc));
  this_00 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(this_00,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = this_00;
  pcVar10 = *(code **)(*(int *)this_00 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00132948),2,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x18) = pIVar3;
  (*pcVar10)(this_00,pIVar3);
  iVar4 = DAT_0013294c;
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013294c),0x1d,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\t',true);
  *(ImageElement **)(this + 0x1c) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x2f,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'!',true);
  *(ImageElement **)(this + 0xc0) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013294c),0x29,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'!',true);
  *(ImageElement **)(this + 0xc4) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013294c),0x28,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'!',true);
  *(ImageElement **)(this + 200) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_14c,0);
  iVar15 = *(int *)(this + 0xc);
  iVar4 = SmDev();
  uVar16 = *(undefined4 *)((*(int *)(DAT_00132950 + iVar4 * 4 + 0x132712) + 0x136) * 4 + iVar15);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_14c,uVar16,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xcc) = pBVar5;
  (*pcVar10)(piVar13,pBVar5);
  String::~String(aSStack_14c);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_144,0);
  iVar15 = *(int *)(this + 0xc);
  iVar4 = SmDev();
  uVar16 = *(undefined4 *)((*(int *)(DAT_00132954 + iVar4 * 4 + 0x132772) + 0x136) * 4 + iVar15);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_144,uVar16,0xffffffff,1,1,10,0,0);
  *(BitmapTextElement **)(this + 0xd0) = pBVar5;
  (*pcVar10)(piVar13,pBVar5);
  String::~String(aSStack_144);
  if (this[0xb4] == (GameStateChooseChef)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 0x20))(*(int **)(this + 0xc0),0);
    (**(code **)(**(int **)(this + 0xc4) + 0x20))(*(int **)(this + 0xc4),0);
    (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
    (**(code **)(**(int **)(this + 0xcc) + 0x20))(*(int **)(this + 0xcc),0);
    (**(code **)(**(int **)(this + 0xd0) + 0x20))(*(int **)(this + 0xd0),0);
  }
  (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
  iVar15 = **(int **)(iVar1 + DAT_00132958);
  iVar4 = SmDev();
  uVar16 = FontManager::addFont
                     (iVar15,SUB41(*(undefined4 *)(DAT_0013295c + iVar4 * 4 + 0x13283c),0));
  iVar4 = DAT_0013294c;
  *(undefined4 *)(this + 0x54) = uVar16;
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x19,false);
  iVar4 = DAT_0013294c;
  *(undefined4 *)(this + 0x40) = uVar16;
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x20,false);
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(this + 0x44) = uVar16;
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,*(CImage **)(this + 0x40),'\x12',true);
  *(ImageElement **)(this + 0x20) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0013294c),0x22,false);
  iVar4 = DAT_0013294c;
  *(undefined4 *)(this + 0x4c) = uVar16;
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x22,false);
  piVar13 = *(int **)(this + 0x14);
  *(undefined4 *)(this + 0x48) = uVar16;
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (pIVar3,*(CImage **)(this + 0x48),extraout_s0_00,extraout_s1_00,(uchar)DAT_00132960,
             false);
  *(ImageElement **)(this + 0x28) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  String::String(aSStack_13c,0);
  iVar15 = *(int *)(this + 0xc);
  iVar4 = SmDev();
  uVar16 = *(undefined4 *)((*(int *)(DAT_00132964 + iVar4 * 4 + 0x132906) + 0x136) * 4 + iVar15);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  puVar11 = *(undefined4 **)(iVar1 + DAT_00132968);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_13c,uVar16,0xffffffff,*puVar11,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x2c) = pBVar5;
  (*pcVar10)(piVar13,pBVar5);
  String::~String(aSStack_13c);
  piVar13 = *(int **)(this + 0x2c);
  pcVar10 = *(code **)(*piVar13 + 0x44);
  iVar4 = SmDev();
  if (iVar4 == 0) {
    Vector<String>::elementAt((int)aSStack_134);
  }
  else {
    String::String(aSStack_134,(char *)(DAT_00132d1c + 0x132978));
  }
  (*pcVar10)(piVar13,aSStack_134);
  String::~String(aSStack_134);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  Vector<String>::elementAt((int)aSStack_12c);
  iVar15 = *(int *)(this + 0xc);
  iVar4 = SmDev();
  uVar16 = *(undefined4 *)((*(int *)(DAT_00132d24 + iVar4 * 4 + 0x132a0e) + 0x136) * 4 + iVar15);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_12c,uVar16,*puVar11,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x30) = pBVar5;
  (*pcVar10)(piVar13,pBVar5);
  String::~String(aSStack_12c);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00132d28),0x1a,false);
  pIVar3 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar3,pCVar2,'\x11',true);
  *(ImageElement **)(this + 0x24) = pIVar3;
  (*pcVar10)(piVar13,pIVar3);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00132d28),3,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x12',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x34) = pZVar6;
  (*pcVar10)(piVar13,pZVar6);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00132d28),0,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\"',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x38) = pZVar6;
  uVar17 = (*pcVar10)(piVar13,pZVar6);
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x34),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x38),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00132d28),0x25,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'\x14',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x9c) = pZVar6;
  pcVar10 = *(code **)(*(int *)pZVar6 + 0x2c);
  Vector<String>::elementAt((int)aSStack_124);
  iVar15 = *(int *)(this + 0xc);
  iVar4 = SmDev();
  uVar16 = *(undefined4 *)((*(int *)(DAT_00132d34 + iVar4 * 4 + 0x132b80) + 0x136) * 4 + iVar15);
  pBVar5 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar5,aSStack_124,uVar16,0xffffffff,1,1,0x12,0,0);
  *(BitmapTextElement **)(this + 0xa0) = pBVar5;
  (*pcVar10)(pZVar6,pBVar5);
  pGVar14 = this + 0x9c;
  String::~String(aSStack_124);
  FUN_00131c7c(*(undefined4 *)(this + 0xa0),
               ((int)*(short *)(*(int *)pGVar14 + 0xc) >> 1) << 0x10 |
               (int)*(short *)(*(int *)pGVar14 + 0x10) >> 1 & 0xffffU);
  (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  iVar4 = DAT_00132d28;
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)pGVar14);
  piVar13 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar13 + 0x2c);
  pCVar2 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),5,false);
  pZVar6 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar6,'$',pCVar2,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x3c) = pZVar6;
  (*pcVar10)(piVar13,pZVar6);
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x26,false);
  *(undefined4 *)(this + 0x84) = uVar16;
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x27,false);
  *(undefined4 *)(this + 0x88) = uVar16;
  uVar16 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x30,false);
  *(undefined4 *)(this + 0x8c) = uVar16;
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x22,false);
  *(CImage **)(this + 0xd8) = pCVar2;
  pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),8,false);
  *(CImage **)(this + 0xdc) = pCVar7;
  pCVar8 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar4),0x10,false);
  *(CImage **)(this + 0xe0) = pCVar8;
  this_01 = (ConfirmDialog *)operator_new(0x9c);
  ConfirmDialog::ConfirmDialog(this_01,pCVar2,pCVar7,pCVar8,0,extraout_s0_01,(CImage *)0x3f800000);
  *(ConfirmDialog **)(this + 0xd4) = this_01;
  (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xd4),100);
  this_02 = (BuyToxinDialog *)operator_new(0xe4);
  BuyToxinDialog::BuyToxinDialog(this_02);
  pGVar14 = this + 0xe4;
  *(BuyToxinDialog **)pGVar14 = this_02;
  (**(code **)(*(int *)this_02 + 0x1c))(this_02,0x12);
  (**(code **)(**(int **)pGVar14 + 0x20))(*(int **)pGVar14,0);
  iVar4 = *(int *)pGVar14;
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar1 + DAT_00132d38);
  *(GameStateChooseChef **)(iVar4 + 0xb4) = this;
  ScreenElement::setOrder(*(ScreenElement **)pGVar14,0x65);
  this_03 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog
            (this_03,*(CImage **)(this + 0xd8),*(CImage **)(this + 0xdc),extraout_s0_02);
  *(NoticeDialog **)(this + 0xe8) = this_03;
  (**(code **)(*(int *)this_03 + 0x1c))(this_03,0x12);
  ScreenElement::setOrder(*(ScreenElement **)(this + 0xe8),0x66);
  sprintf(acStack_11c,(char *)(DAT_00132d40 + 0x132cec),
          (uint)*(ushort *)(*(int *)(this + 0xc) + DAT_00132d3c));
  iVar15 = 0;
  L_PrintLog((char *)(DAT_00132d44 + 0x132cf8),acStack_11c);
  pvVar9 = operator_new(0x28);
  iVar4 = DAT_00132d48;
  *(undefined4 *)((int)pvVar9 + 8) = 0;
  *(undefined4 *)((int)pvVar9 + 4) = 0;
  *(undefined1 *)((int)pvVar9 + 0x18) = 0;
  uVar16 = *(undefined4 *)(iVar1 + iVar4);
  *(void **)((int)pvVar9 + 0xc) = pvVar9;
  *(undefined4 *)((int)pvVar9 + 0x14) = 0;
  *(undefined4 *)((int)pvVar9 + 0x1c) = uVar16;
  *(undefined4 *)((int)pvVar9 + 0x10) = 0;
  *(void **)(this + 0xb0) = pvVar9;
  do {
    if ((int)(uint)*(ushort *)(*(int *)(this + 0xc) + DAT_00132ea0) <= iVar15) {
      if (local_1c != **(int **)(iVar1 + DAT_00132ea4)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return;
    }
    iVar4 = *(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00132e98) + iVar15 * 4);
    if ((*(char *)(iVar4 + DAT_00132e9c) != '\0') &&
       ((this[0xb4] != (GameStateChooseChef)0x0 || (*(int *)(iVar4 + 0xb20) == 0)))) {
      for (iVar12 = 0; iVar12 <= *(int *)(this + 0xa8); iVar12 = iVar12 + 1) {
        if (*(int *)(iVar12 * 4 + *(int *)(this + 0xac)) == iVar4) goto LAB_00132dc0;
      }
      sprintf(acStack_11c,(char *)(DAT_00132ea8 + 0x132e6c),iVar15);
      L_PrintLog((char *)(DAT_00132eac + 0x132e76),acStack_11c);
      iVar4 = *(int *)(this + 0xa4);
      uVar16 = *(undefined4 *)(*(int *)(*(int *)(this + 0xc) + DAT_00132e98) + iVar15 * 4);
      iVar12 = *(int *)(this + 0xa8) + 2;
      if (iVar4 < iVar12) {
        iVar4 = iVar4 * 2;
        if (iVar4 < iVar12) {
          iVar4 = iVar12;
        }
        Vector<CharacterData*>::resize((Vector<CharacterData*> *)(this + 0xa4),iVar4,-1);
      }
      iVar4 = *(int *)(this + 0xa8);
      *(int *)(this + 0xa8) = iVar4 + 1;
      *(undefined4 *)((iVar4 + 1) * 4 + *(int *)(this + 0xac)) = uVar16;
      CapcomOrderableList<CharacterData*>::addOrdered(*(CharacterData **)(this + 0xb0));
    }
LAB_00132dc0:
    iVar15 = iVar15 + 1;
  } while( true );
}


