/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001164c0 GameStateBackupSelection::init */

/* GameStateBackupSelection::init() */

undefined4 __thiscall GameStateBackupSelection::init(GameStateBackupSelection *this)

{
  ScreenElement *pSVar1;
  int iVar2;
  BitmapTextElement *pBVar3;
  CCOptions *this_00;
  CImage *pCVar4;
  ZCImageButton *pZVar5;
  CImage *pCVar6;
  NoticeDialog *pNVar7;
  int iVar8;
  void *pvVar9;
  code *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  GameStateBackupSelection *pGVar15;
  int iVar16;
  undefined4 uVar17;
  float extraout_s0;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_64;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar8 = DAT_0011657c + 0x1164cc;
  pSVar1 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar1,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x14) = pSVar1;
  *(undefined4 *)(pSVar1 + 0x18) = 0xff000000;
  piVar14 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar14 + 0x2c);
  String::String(aSStack_50,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_00116580) * 8));
  iVar16 = *(int *)(this + 0xc);
  iVar2 = SmDev();
  uVar17 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_00116584 + 0x116514) + 0x136) * 4 + iVar16);
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  uVar18 = 1;
  uVar19 = 1;
  BitmapTextElement::BitmapTextElement(pBVar3,aSStack_50,uVar17,0xffffffff,1,1,0x11,0,0);
  *(BitmapTextElement **)(this + 0x30) = pBVar3;
  (*pcVar10)(piVar14,pBVar3);
  String::~String(aSStack_50);
  pGVar15 = this + 0x18;
  local_64 = 0;
  do {
    pcVar11 = *(char **)(this + 0xc);
    if (local_64 == 1) {
      this_00 = *(CCOptions **)(pcVar11 + 0xa00);
      pvVar9 = (void *)((int)&DAT_0011657c + DAT_0011658c);
    }
    else {
      this_00 = *(CCOptions **)(pcVar11 + 0xa00);
      if (local_64 == 2) {
        pvVar9 = (void *)(DAT_00116934 + 0x116596);
      }
      else {
        pvVar9 = (void *)(DAT_00116588 + 0x116570);
      }
    }
    pcVar11 = (char *)CCOptions::GetCString(this_00,pvVar9,(char *)0x0,pcVar11);
    if (pcVar11 != (char *)0x0) {
      strtod(pcVar11,(char **)0x0);
      Platform::getFormattedDateAndTime((double)CONCAT44(uVar19,uVar18));
      piVar14 = *(int **)(this + 0x14);
      pcVar10 = *(code **)(*piVar14 + 0x2c);
      pSVar1 = (ScreenElement *)operator_new(0x60);
      ScreenElement::ScreenElement(pSVar1,(ScreenElement *)0x0);
      *(ScreenElement **)pGVar15 = pSVar1;
      (*pcVar10)(piVar14,pSVar1);
      piVar14 = *(int **)pGVar15;
      pcVar10 = *(code **)(*piVar14 + 0x2c);
      String::String(aSStack_40,aSStack_48);
      iVar16 = *(int *)(this + 0xc);
      iVar2 = SmDev();
      uVar17 = *(undefined4 *)((*(int *)(DAT_00116938 + iVar2 * 4 + 0x116604) + 0x136) * 4 + iVar16)
      ;
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar3,aSStack_40,uVar17,0xffffffff,1,1,9,0,0);
      *(BitmapTextElement **)(pGVar15 + 0xc) = pBVar3;
      (*pcVar10)(piVar14,pBVar3);
      String::~String(aSStack_40);
      piVar14 = *(int **)pGVar15;
      pcVar10 = *(code **)(*piVar14 + 0x2c);
      pCVar4 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0011693c),0xb,false);
      pZVar5 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar5,'\t',pCVar4,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(pGVar15 + 0x20) = pZVar5;
      (*pcVar10)(piVar14,pZVar5);
      pcVar10 = *(code **)(**(int **)(pGVar15 + 0x20) + 0x2c);
      String::String(aSStack_38,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                     **(int **)(iVar8 + DAT_00116940) * 8));
      iVar16 = *(int *)(this + 0xc);
      iVar2 = SmDev();
      uVar18 = *(undefined4 *)((*(int *)(DAT_00116944 + iVar2 * 4 + 0x1166ca) + 0x136) * 4 + iVar16)
      ;
      iVar2 = *(int *)(pGVar15 + 0x20);
      uVar17 = *(undefined4 *)(iVar2 + 0xc);
      uVar19 = *(undefined4 *)(iVar2 + 0x10);
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                (pBVar3,aSStack_38,uVar18,0xffffffff,0,0,0,uVar17,uVar19,9,0,0);
      *(BitmapTextElement **)(pGVar15 + 0x38) = pBVar3;
      (*pcVar10)(iVar2,pBVar3);
      String::~String(aSStack_38);
      *(undefined1 *)(*(int *)(pGVar15 + 0x38) + 0x7f) = 0x12;
      (**(code **)(**(int **)(pGVar15 + 0x20) + 0x20))(*(int **)(pGVar15 + 0x20),0);
      piVar14 = *(int **)pGVar15;
      pcVar10 = *(code **)(*piVar14 + 0x2c);
      pCVar4 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0xc) + DAT_0011693c),0x12,false);
      pZVar5 = (ZCImageButton *)operator_new(0xa0);
      ZCImageButton::ZCImageButton(pZVar5,'!',pCVar4,(CImage *)0x0,0,0,true);
      *(ZCImageButton **)(pGVar15 + 0x2c) = pZVar5;
      (*pcVar10)(piVar14,pZVar5);
      pcVar10 = *(code **)(**(int **)(pGVar15 + 0x2c) + 0x2c);
      String::String(aSStack_30,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                     **(int **)(iVar8 + DAT_00116948) * 8));
      iVar16 = *(int *)(this + 0xc);
      iVar2 = SmDev();
      uVar12 = *(undefined4 *)((*(int *)(DAT_0011694c + iVar2 * 4 + 0x11679c) + 0x136) * 4 + iVar16)
      ;
      iVar2 = *(int *)(pGVar15 + 0x2c);
      uVar17 = *(undefined4 *)(iVar2 + 0xc);
      uVar13 = *(undefined4 *)(iVar2 + 0x10);
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      uVar18 = 0;
      uVar19 = 0;
      BitmapTextElement::BitmapTextElement
                (pBVar3,aSStack_30,uVar12,0xffffffff,0,0,0,uVar17,uVar13,9,0,0);
      *(BitmapTextElement **)(pGVar15 + 0x44) = pBVar3;
      (*pcVar10)(iVar2,pBVar3);
      String::~String(aSStack_30);
      *(undefined1 *)(*(int *)(pGVar15 + 0x44) + 0x7f) = 0x12;
      String::~String(aSStack_48);
    }
    iVar2 = DAT_0011693c;
    pGVar15 = pGVar15 + 4;
    local_64 = local_64 + 1;
  } while (local_64 != 3);
  piVar14 = *(int **)(this + 0x14);
  pcVar10 = *(code **)(*piVar14 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_0011693c),0x76,false);
  pZVar5 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar5,'$',pCVar4,(CImage *)0x0,0,0,true);
  *(ZCImageButton **)(this + 0x34) = pZVar5;
  (*pcVar10)(piVar14,pZVar5);
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),(*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10) + -10,
             (short)*(int *)(*(int *)(this + 0xc) + 0x10) + -10);
  pCVar4 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),5,false);
  pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + iVar2),10,false)
  ;
  pNVar7 = (NoticeDialog *)operator_new(0x90);
  NoticeDialog::NoticeDialog(pNVar7,pCVar4,pCVar6,extraout_s0);
  *(NoticeDialog **)(this + 0x68) = pNVar7;
  (**(code **)(*(int *)pNVar7 + 0x1c))(pNVar7,0x12);
  (**(code **)(**(int **)(this + 0x14) + 0x2c))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x68))
  ;
  CCOptions::SetBool(*(CCOptions **)(*(int *)(this + 0xc) + 0xa00),(void *)(DAT_00116950 + 0x116884)
                     ,(char *)0x0,0xa00);
  pNVar7 = *(NoticeDialog **)(this + 0x68);
  String::String(aSStack_28,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_00116954) * 8));
  String::String(aSStack_20,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                 **(int **)(iVar8 + DAT_00116958) * 8));
  NoticeDialog::show(pNVar7,aSStack_28,aSStack_20,0,0);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  return 1;
}


