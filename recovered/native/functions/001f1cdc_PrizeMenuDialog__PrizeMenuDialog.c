/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f1cdc PrizeMenuDialog::PrizeMenuDialog */

/* PrizeMenuDialog::PrizeMenuDialog(GameStatePrizeMenu*, Vector<PrizeItemStatus>*, ConfirmDialog*)
    */

void __thiscall
PrizeMenuDialog::PrizeMenuDialog
          (PrizeMenuDialog *this,GameStatePrizeMenu *param_1,Vector *param_2,ConfirmDialog *param_3)

{
  short sVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  CImage *pCVar7;
  ImageElement *this_00;
  ScreenElement *pSVar8;
  ZCImageButton *pZVar9;
  undefined4 *puVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar17;
  undefined4 uVar18;
  int local_174;
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  StringBuffer aSStack_158 [28];
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_001f1e48 + 0x1f1cec;
  local_1c = **(int **)(iVar3 + DAT_001f1e4c);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(iVar3 + DAT_001f1e50) + 8;
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(iVar4 + 0x40);
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(iVar4 + 0x44);
  *(GameStatePrizeMenu **)(this + 100) = param_1;
  *(ConfirmDialog **)(this + 0x98) = param_3;
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(iVar4 + 4);
  *(Vector **)(this + 0x8c) = param_2;
  piVar5 = (int *)operator_new(0xc);
  *piVar5 = 10;
  pvVar6 = operator_new__(0x140);
  piVar5[2] = (int)pvVar6;
  memset(pvVar6,0,*piVar5 << 5);
  piVar5[1] = -1;
  *(int **)(this + 0x90) = piVar5;
  piVar5 = (int *)operator_new(0xc);
  *piVar5 = 10;
  pvVar6 = operator_new__(0x28);
  piVar5[2] = (int)pvVar6;
  memset(pvVar6,0,*piVar5 << 2);
  piVar5[1] = -1;
  *(int **)(this + 0x94) = piVar5;
  for (local_174 = 0; local_174 < *(int *)(*(int *)(this + 0x8c) + 4) + 1; local_174 = local_174 + 1
      ) {
    puVar10 = (undefined4 *)(*(int *)(*(int *)(this + 0x8c) + 8) + local_174 * 0x20);
    local_13c = *puVar10;
    local_138 = puVar10[1];
    local_134 = puVar10[2];
    local_130 = puVar10[3];
    uStack_12c = puVar10[4];
    uStack_128 = puVar10[5];
    local_124 = puVar10[6];
    uStack_120 = puVar10[7];
    iVar12 = puVar10[1];
    sVar1 = *(short *)(puVar10 + 3);
    iVar4 = ZombieCafe::checkEventRaid2_half();
    if ((((iVar12 << 0x1f < 0) || ((iVar4 == 0 && (iVar12 << 0x1e < 0)))) && (iVar12 - 1U < 2)) &&
       (sVar1 != 8)) {
      local_130 = CONCAT22(local_130._2_2_,sVar1);
      local_138 = iVar12;
      Vector<PrizeItemStatus>::addElement
                (*(undefined4 *)(this + 0x90),local_13c,iVar12,local_134,local_130,uStack_12c,
                 uStack_128,local_124,uStack_120);
    }
  }
  for (local_174 = 0; local_174 < *(int *)(*(int *)(this + 0x8c) + 4) + 1; local_174 = local_174 + 1
      ) {
    puVar10 = (undefined4 *)(*(int *)(*(int *)(this + 0x8c) + 8) + local_174 * 0x20);
    local_13c = *puVar10;
    local_138 = puVar10[1];
    local_134 = puVar10[2];
    local_130 = puVar10[3];
    uStack_12c = puVar10[4];
    uStack_128 = puVar10[5];
    local_124 = puVar10[6];
    uStack_120 = puVar10[7];
    iVar12 = puVar10[1];
    sVar1 = *(short *)(puVar10 + 3);
    iVar4 = ZombieCafe::checkEventRaid2_half();
    if (iVar4 == 0) {
      iVar4 = iVar12 << 0x1e;
    }
    else {
      iVar4 = iVar12 << 0x1f;
    }
    if (((iVar4 < 0) && (iVar12 == 3)) && (sVar1 != 8)) {
      local_130 = CONCAT22(local_130._2_2_,sVar1);
      local_138 = iVar12;
      Vector<PrizeItemStatus>::addElement
                (*(undefined4 *)(this + 0x90),local_13c,3,local_134,local_130,uStack_12c,uStack_128,
                 local_124,uStack_120);
    }
  }
  this[0x9c] = (PrizeMenuDialog)0x0;
  pCVar7 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f2214),0x22,false)
  ;
  iVar4 = SmDev();
  uVar13 = *(undefined4 *)(DAT_001f2218 + iVar4 * 4 + 0x1f1ed2);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar2 = __mulsf3(uVar13,DAT_001f221c);
  uVar13 = 9;
  uVar18 = 1;
  ImageElement::ImageElement(this_00,pCVar7,extraout_s0,extraout_s1,uVar2,SUB41(DAT_001f2220,0));
  *(ImageElement **)(this + 0x68) = this_00;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)this_00);
  (**(code **)(*(int *)this + 0x18))
            (this,(int)*(short *)(*(int *)(this + 0x68) + 0xc),
             (int)*(short *)(*(int *)(this + 0x68) + 0x10),*(code **)(*(int *)this + 0x18),uVar13,
             uVar18);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x78) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  iVar14 = *(int *)(this + 0xc);
  StringBuffer::StringBuffer(aSStack_158);
  String::String(aSStack_170,(char *)(DAT_001f2224 + 0x1f1f2c));
  StringBuffer::append(aSStack_158,aSStack_170);
  String::~String(aSStack_170);
  String::valueOf((long)aSStack_168);
  StringBuffer::append(aSStack_158,aSStack_168);
  String::~String(aSStack_168);
  iVar12 = **(int **)(iVar3 + DAT_001f2228);
  iVar4 = SmDev();
  uVar13 = FontManager::addFont
                     (iVar12,SUB41(*(undefined4 *)(DAT_001f222c + iVar4 * 4 + 0x1f1fce),0));
  StringBuffer::toString();
  pSVar8 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar8,aSStack_160,uVar13,0xffffffff,1,1,0x11,0);
  *(ScreenElement **)(this + 0xa4) = pSVar8;
  ScreenElement::addChild((ScreenElement *)this,pSVar8);
  String::~String(aSStack_160);
  piVar5 = *(int **)(iVar3 + DAT_001f2230);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar5,*(TrueTypeTextElement **)(this + 0xa4));
  L_PrintLog((char *)(DAT_001f2234 + 0x1f1fd0),(char *)(DAT_001f2238 + 0x1f1fd2));
  sprintf(acStack_11c,(char *)(DAT_001f223c + 0x1f1fe0),*(int *)(*piVar5 + 4) + 1);
  L_PrintLog((char *)(DAT_001f2240 + 0x1f1fec),acStack_11c);
  piVar5 = *(int **)(this + 0x78);
  pcVar11 = *(code **)(*piVar5 + 0x14);
  iVar16 = *(int *)(*(int *)(this + 0xa4) + 0x10);
  iVar4 = SmDev();
  iVar12 = iVar14 * 7 >> 3;
  iVar15 = iVar14 - iVar12 >> 1;
  uVar13 = __floatsisf(iVar15 + iVar16 / 2);
  uVar18 = __floatsisf(*(undefined4 *)(DAT_001f2244 + iVar4 * 4 + 0x1f2046));
  uVar18 = __mulsf3(uVar18,*(undefined4 *)(this + 0xac));
  __addsf3(uVar13,uVar18);
  uVar13 = __fixsfsi();
  (*pcVar11)(piVar5,iVar15,uVar13);
  piVar5 = *(int **)(this + 0x78);
  iVar16 = *(int *)(this + 0x10);
  pcVar11 = *(code **)(*piVar5 + 0x18);
  iVar14 = *(int *)(*(int *)(this + 0xa4) + 0x10);
  iVar4 = SmDev();
  uVar13 = __floatsisf((iVar16 + iVar15 * -2) - iVar14);
  uVar18 = __floatsisf(*(undefined4 *)(DAT_001f2248 + iVar4 * 4 + 0x1f209e));
  uVar18 = __mulsf3(uVar18,*(undefined4 *)(this + 0xac));
  __subsf3(uVar13,uVar18);
  uVar13 = __fixsfsi();
  (*pcVar11)(piVar5,iVar12,uVar13);
  piVar5 = *(int **)(this + 0x78);
  pcVar11 = *(code **)(*piVar5 + 0x2c);
  pSVar8 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar8,(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x7c) = pSVar8;
  (*pcVar11)(piVar5,pSVar8);
  (**(code **)(**(int **)(this + 0x7c) + 0x18))(*(int **)(this + 0x7c),iVar12,0);
  iVar4 = DAT_001f224c;
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + DAT_001f224c),0xb,false);
  *(undefined4 *)(this + 0x80) = uVar13;
  uVar13 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar4),0x12,false);
  *(undefined4 *)(this + 0x84) = uVar13;
  *(undefined4 *)(this + 0xa0) = 0;
  this[0x14] = (PrizeMenuDialog)0x0;
  pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar4),3,false)
  ;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar9,'\x12',pCVar7,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x70) = pZVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  pCVar7 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x60) + iVar4),0,false)
  ;
  pZVar9 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar9,'\x12',pCVar7,(CImage *)0x0,0,0,false);
  *(ZCImageButton **)(this + 0x74) = pZVar9;
  ScreenElement::addChild((ScreenElement *)this,(ScreenElement *)pZVar9);
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(undefined4 *)(*(int *)(this + 0x78) + 4),
             *(undefined4 *)(*(int *)(this + 0x78) + 8));
  iVar4 = *(int *)(this + 0x78);
  uVar17 = (**(code **)(**(int **)(this + 0x74) + 0x14))
                     (*(int **)(this + 0x74),*(undefined4 *)(iVar4 + 4),
                      *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x10));
  uVar17 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x70),(float)uVar17,
                      (float)((ulonglong)uVar17 >> 0x20));
  ImageButton::setScale
            (*(ImageButton **)(this + 0x74),(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  updateTitle(this);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_158);
  if (local_1c != **(int **)(iVar3 + DAT_001f2250)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


