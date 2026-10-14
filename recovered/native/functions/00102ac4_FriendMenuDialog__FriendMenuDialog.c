/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00102ac4 FriendMenuDialog::FriendMenuDialog */

/* FriendMenuDialog::FriendMenuDialog(CImage**, CImage**, unsigned char, bool, unsigned char*, int)
    */

FriendMenuDialog * __thiscall
FriendMenuDialog::FriendMenuDialog
          (FriendMenuDialog *this,CImage **param_1,CImage **param_2,uchar param_3,bool param_4,
          uchar *param_5,int param_6)

{
  uchar uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  CImage *pCVar11;
  ImageElement *this_00;
  ScreenElement *pSVar12;
  FriendMenuElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ZCImageButton *pZVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar28;
  int local_48;
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_00102ed0 + 0x102ae0) + 8;
  iVar4 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar4 + 0x40);
  iVar4 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar4 + 0x50);
  iVar4 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar4 + 0x44);
  iVar4 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar4 + 0x50);
  *(CImage ***)(this + 0x68) = param_1;
  *(CImage ***)(this + 0x6c) = param_2;
  this[0xa5] = (FriendMenuDialog)param_4;
  *(int *)(this + 0xac) = param_6;
  ScreenElement::setAnchor((ScreenElement *)this,param_3);
  this[0x60] = (FriendMenuDialog)0x0;
  iVar9 = CapcomApp::getInstance();
  iVar4 = DAT_00102ed4;
  iVar9 = *(int *)(iVar9 + 4);
  *(int *)(this + 100) = iVar9;
  pvVar10 = operator_new__((uint)*(byte *)(iVar9 + iVar4));
  *(void **)(this + 0xa8) = pvVar10;
  memset(pvVar10,0,(uint)*(byte *)(*(int *)(this + 100) + iVar4));
  *(undefined2 *)(this + 0xa2) = 0xff;
  pCVar11 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 100) + 0x7f0),2,false)
  ;
  this_00 = (ImageElement *)operator_new(0x98);
  uVar1 = __mulsf3(uVar5,uVar6);
  bVar2 = (bool)__mulsf3(uVar7,uVar8);
  uVar5 = 0x14;
  uVar6 = 0;
  ImageElement::ImageElement(this_00,pCVar11,extraout_s0,extraout_s1,uVar1,bVar2);
  *(ImageElement **)(this + 0x70) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x70) + 0xc),
             (int)*(short *)(*(int *)(this + 0x70) + 0x10),*(code **)(*(int *)this + 0x18),uVar5,
             uVar6);
  Vector<String>::elementAt((int)aSStack_20);
  iVar24 = *(int *)(this + 100);
  iVar4 = SmDev();
  iVar9 = *(int *)(this + 0xc);
  uVar5 = *(undefined4 *)((*(int *)(DAT_00102edc + iVar4 * 4 + 0x102c22) + 0x136) * 4 + iVar24);
  iVar4 = CImage::getHeight(param_1[6]);
  pSVar12 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar12,aSStack_20,uVar5,0xffffffff,1,1,
             iVar4 >> 2 & 0xffffU | iVar9 / 2 << 0x10,0,0,0x11,0,0);
  *(ScreenElement **)(this + 0x98) = pSVar12;
  ScreenElement::addChild((ScreenElement *)this,pSVar12);
  String::~String(aSStack_20);
  puVar21 = *(undefined4 **)(DAT_00102ee0 + 0x102c46);
  uVar5 = *puVar21;
  uVar7 = puVar21[2];
  uVar19 = puVar21[3];
  uVar6 = puVar21[4];
  uVar25 = puVar21[1];
  uVar8 = puVar21[5];
  uVar20 = puVar21[6];
  uVar22 = puVar21[7];
  pFVar13 = (FriendMenuElement *)operator_new(0x9c);
  uVar14 = __fixsfsi(uVar25);
  uVar15 = __fixsfsi(uVar5);
  uVar26 = uVar14 & 0xffff | uVar15 << 0x10;
  uVar14 = __fixsfsi(uVar19);
  uVar16 = __fixsfsi(uVar7);
  uVar14 = (uVar14 & 0xffff) - uVar26;
  FriendMenuElement::FriendMenuElement
            (pFVar13,param_1,param_2,
             (int)(uVar14 & 0xffff | ((uVar16 & 0xffff) - (uVar15 & 0xffff)) * 0x10000) >> 0x10,
             (int)(short)uVar14,'\t',param_6);
  *(FriendMenuElement **)(this + 0x74) = pFVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pFVar13);
  pFVar13 = (FriendMenuElement *)operator_new(0x9c);
  uVar14 = __fixsfsi(uVar8);
  uVar15 = __fixsfsi(uVar6);
  uVar27 = uVar14 & 0xffff | uVar15 << 0x10;
  uVar14 = __fixsfsi(uVar22);
  uVar16 = __fixsfsi(uVar20);
  uVar14 = (uVar14 & 0xffff) - uVar27;
  FriendMenuElement::FriendMenuElement
            (pFVar13,param_1,param_2,
             (int)(uVar14 & 0xffff | ((uVar16 & 0xffff) - (uVar15 & 0xffff)) * 0x10000) >> 0x10,
             (int)(short)uVar14,'\t',param_6);
  *(FriendMenuElement **)(this + 0x78) = pFVar13;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pFVar13);
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\n',param_1[1],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x7c) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x7c),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\"',param_1[2],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x80) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x80),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'!',param_1[6],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x84) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x84),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\x14',param_1[3],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x88) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x88),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\x14',*param_1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x8c) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x8c),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\x14',param_1[3],(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x90) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x90),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  pZVar17 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar17,'\x14',*param_1,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x94) = pZVar17;
  uVar28 = ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar17);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x94),(float)uVar28,(float)((ulonglong)uVar28 >> 0x20));
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(int *)(this + 0xc) >> 1,*(undefined4 *)(this + 0x10));
  FUN_0010168a(*(undefined4 *)(this + 0x74),uVar26);
  FUN_0010168a(*(undefined4 *)(this + 0x78),uVar27);
  uVar6 = *(undefined4 *)(this + 0x7c);
  uVar5 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x70),0,
                     *(int *)(*(ScreenElement **)(this + 0x70) + 0x10) >> 1);
  FUN_0010168a(uVar6,uVar5);
  pSVar12 = *(ScreenElement **)(this + 0x70);
  uVar6 = *(undefined4 *)(this + 0x80);
  uVar5 = ScreenElement::localToParentCoords
                    (pSVar12,*(int *)(pSVar12 + 0xc),*(int *)(pSVar12 + 0x10) >> 1);
  FUN_0010168a(uVar6,uVar5);
  uVar6 = *(undefined4 *)(this + 0x84);
  uVar5 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x70),
                     *(int *)(*(ScreenElement **)(this + 0x70) + 0xc),0);
  FUN_0010168a(uVar6,uVar5);
  iVar4 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x74),
                     *(int *)(*(ScreenElement **)(this + 0x74) + 0xc) >> 1,0);
  iVar9 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x78),
                     *(int *)(*(ScreenElement **)(this + 0x78) + 0xc) >> 1,0);
  uVar5 = *(undefined4 *)(*(int *)(this + 0x74) + 8);
  sVar3 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x70),0,
                     *(int *)(*(ScreenElement **)(this + 0x70) + 0x10));
  (**(code **)(**(int **)(this + 0x88) + 0x14))(*(int **)(this + 0x88),iVar4 >> 0x10,uVar5);
  (**(code **)(**(int **)(this + 0x8c) + 0x14))(*(int **)(this + 0x8c),iVar4 >> 0x10,(int)sVar3);
  (**(code **)(**(int **)(this + 0x90) + 0x14))(*(int **)(this + 0x90),iVar9 >> 0x10,uVar5);
  (**(code **)(**(int **)(this + 0x94) + 0x14))(*(int **)(this + 0x94),iVar9 >> 0x10,(int)sVar3);
  pvVar10 = operator_new(0x28);
  iVar4 = DAT_00103084;
  iVar9 = 0;
  *(undefined4 *)((int)pvVar10 + 8) = 0;
  uVar5 = *(undefined4 *)(iVar4 + 0x102f76);
  *(undefined4 *)((int)pvVar10 + 4) = 0;
  *(undefined1 *)((int)pvVar10 + 0x18) = 0;
  *(undefined4 *)((int)pvVar10 + 0x1c) = uVar5;
  *(void **)((int)pvVar10 + 0xc) = pvVar10;
  *(undefined4 *)((int)pvVar10 + 0x14) = 0;
  *(undefined4 *)((int)pvVar10 + 0x10) = 0;
  local_48 = 0;
  *(void **)(this + 0x9c) = pvVar10;
  for (; local_48 < (int)(uint)*(byte *)(*(int *)(this + 100) + DAT_00103088);
      local_48 = local_48 + 1) {
    puVar18 = (undefined1 *)operator_new(0x10);
    *(undefined4 *)(puVar18 + 4) = 10;
    pvVar10 = operator_new__(10);
    *(void **)(puVar18 + 0xc) = pvVar10;
    memset(pvVar10,0,*(size_t *)(puVar18 + 4));
    *(undefined4 *)(puVar18 + 8) = 0xffffffff;
    iVar4 = 0;
    *puVar18 = (undefined1)local_48;
    do {
      iVar23 = iVar4 + iVar9;
      iVar24 = iVar23 >> 3;
      if (param_5 == (uchar *)0x0) {
        uVar14 = (int)(uint)*(byte *)(*(int *)(*(int *)(this + 100) + 0x1c) + iVar24) >>
                 (iVar23 + iVar24 * -8 & 0xffU);
      }
      else {
        uVar14 = (int)(uint)param_5[iVar24] >> (iVar23 + iVar24 * -8 & 0xffU);
      }
      if ((uVar14 & 1) != 0) {
        Vector<bool>::addElement((Vector<bool> *)(puVar18 + 4),(bool)('\x01' - (iVar4 == 0)));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    if (*(int *)(puVar18 + 8) == -1) {
      if (*(void **)(puVar18 + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)(puVar18 + 0xc));
      }
      operator_delete(puVar18);
    }
    else {
      CapcomOrderableList<RecipeAndVariants*>::addOrdered(*(RecipeAndVariants **)(this + 0x9c));
    }
    iVar9 = iVar9 + 10;
  }
  this[0xa0] = (FriendMenuDialog)0xff;
  setPage(this,0);
  return this;
}


