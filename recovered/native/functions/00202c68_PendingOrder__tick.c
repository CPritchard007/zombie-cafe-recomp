/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202c68 PendingOrder::tick */

/* PendingOrder::tick(long) */

void PendingOrder::tick(long param_1)

{
  String SVar1;
  String SVar2;
  int iVar3;
  int iVar4;
  Recipe *this;
  CapcomOrderableList<Furniture*> *this_00;
  undefined4 uVar5;
  String *pSVar6;
  int *piVar7;
  NoticeDialog *pNVar8;
  ZombieCafe *this_01;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x60) + 0x9c) + 0x14) == '\0') {
    return;
  }
  iVar3 = CapcomApp::getInstance();
  this_01 = *(ZombieCafe **)(iVar3 + 4);
  iVar4 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  iVar3 = DAT_00202ed0;
  if (iVar4 == 0) {
    return;
  }
  iVar4 = ScreenElement::contains
                    (*(ScreenElement **)(*(int *)(param_1 + 0x60) + 0x98),
                     *(int *)(this_01 + DAT_00202ed0) >> 0x10,
                     (int)(short)*(int *)(this_01 + DAT_00202ed0));
  if (iVar4 == 0) {
    return;
  }
  iVar4 = ZCImageButton::contains
                    (*(ZCImageButton **)(param_1 + 0x84),*(long *)(this_01 + iVar3),extraout_s0,
                     extraout_s1);
  if (iVar4 == 0) {
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x88),*(long *)(this_01 + iVar3),extraout_s0_00
                       ,extraout_s1_00);
    if (iVar3 == 0) {
      return;
    }
    ZombieCafe::playEffect((int)this_01,extraout_s0_01);
LAB_00202e74:
    Vector<Order*>::removeElement
              ((Vector<Order*> *)(this_01 + DAT_00202ee8),*(Order **)(param_1 + 0x80));
    PendingOrderDialog::show(*(PendingOrderDialog **)(param_1 + 0x60));
  }
  else {
    ZombieCafe::playEffect((int)this_01,extraout_s0_00);
    this = (Recipe *)
           (*(int *)(this_01 + 0x4e8) + (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x18) * 0x1c);
    if (*(int *)(this_01 + 0x680) < (int)(uint)(byte)this[0x16]) {
      pNVar8 = *(NoticeDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xd0);
      Vector<String>::elementAt((int)aSStack_50);
      Vector<String>::elementAt((int)aSStack_48);
      NoticeDialog::show(pNVar8,aSStack_50,aSStack_48,0,0);
      String::~String(aSStack_48);
      pSVar6 = aSStack_50;
    }
    else {
      iVar4 = *(int *)(this_01 + DAT_00202edc);
      iVar3 = Recipe::getCost(this,*(uchar *)(*(int *)(param_1 + 0x80) + 0x19));
      if (iVar4 < iVar3) {
        pNVar8 = *(NoticeDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xd0);
        Vector<String>::elementAt((int)aSStack_40);
        Vector<String>::elementAt((int)aSStack_38);
        NoticeDialog::show(pNVar8,aSStack_40,aSStack_38,0,0);
        String::~String(aSStack_38);
        pSVar6 = aSStack_40;
      }
      else {
        this_00 = (CapcomOrderableList<Furniture*> *)
                  Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this_01 + 0x7e8),'\x01',0);
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
        do {
          piVar7 = *(int **)(this_00 + 0x10);
          if (piVar7 == (int *)0x0) goto LAB_00202dfc;
          iVar3 = *piVar7;
          *(int *)(this_00 + 0x10) = piVar7[2];
          if (iVar3 == 0) {
            piVar7 = (int *)0x0;
            goto LAB_00202dfc;
          }
        } while (*(char *)(iVar3 + 0x2e) != '\0');
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 100);
        pSVar6 = *(String **)(param_1 + 0x80);
        SVar1 = pSVar6[0x18];
        SVar2 = pSVar6[0x19];
        String::String(aSStack_30,pSVar6);
        GameStateCafe::cook(uVar5,iVar3,SVar1,SVar2,*(undefined4 *)(pSVar6 + 0x10),
                            *(undefined4 *)(pSVar6 + 0x14),0,aSStack_30);
        String::~String(aSStack_30);
        piVar7 = (int *)0x1;
LAB_00202dfc:
        CapcomOrderableList<Furniture*>::removeAll(this_00);
        operator_delete(this_00);
        if (piVar7 != (int *)0x0) goto LAB_00202e74;
        pNVar8 = *(NoticeDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xd0);
        Vector<String>::elementAt((int)aSStack_28);
        Vector<String>::elementAt((int)aSStack_20);
        NoticeDialog::show(pNVar8,aSStack_28,aSStack_20,0,0);
        String::~String(aSStack_20);
        pSVar6 = aSStack_28;
      }
    }
    String::~String(pSVar6);
  }
  this_01[DAT_00202eec] = (ZombieCafe)0x1;
  return;
}


