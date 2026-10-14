/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ffcf4 CookingOrder::tick */

/* CookingOrder::tick(long) */

void CookingOrder::tick(long param_1)

{
  int iVar1;
  int iVar2;
  CharacterInstance *this;
  DishToCounterTask *this_00;
  int *piVar3;
  Recipe *this_01;
  String *this_02;
  ConfirmDialog *pCVar4;
  FoodStack *this_03;
  NoticeDialog *pNVar5;
  ZombieCafe *this_04;
  int iVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  int local_80;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_001fffec + 0x1ffd04),(char *)(DAT_001fffe8 + 0x1ffd02));
  iVar6 = DAT_001ffff0 + 0x1ffd12;
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x60) + 0xb0) + 0x14) == '\0') {
    return;
  }
  iVar1 = CapcomApp::getInstance();
  this_04 = *(ZombieCafe **)(iVar1 + 4);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_04);
  iVar1 = DAT_001ffff4;
  if (iVar2 == 0) {
    return;
  }
  iVar2 = ScreenElement::contains
                    (*(ScreenElement **)(*(int *)(param_1 + 0x60) + 0x98),
                     *(int *)(this_04 + DAT_001ffff4) >> 0x10,
                     (int)(short)*(int *)(this_04 + DAT_001ffff4));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(param_1 + 0x80),*(long *)(this_04 + iVar1),extraout_s0,
                     extraout_s1);
  if (iVar2 == 0) {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(param_1 + 0x84),*(long *)(this_04 + iVar1),extraout_s0_00
                       ,extraout_s1_00);
    if (iVar1 == 0) {
      return;
    }
    ZombieCafe::playEffect((int)this_04,extraout_s0_01);
    pCVar4 = *(ConfirmDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x80);
    Vector<String>::elementAt((int)aSStack_30);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    ConfirmDialog::show(pCVar4,aSStack_30,aSStack_28,aSStack_20,
                        *(undefined4 *)(iVar6 + DAT_0020001c),param_1);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this_02 = aSStack_30;
  }
  else {
    ZombieCafe::playEffect((int)this_04,extraout_s0_00);
    if (*(char *)(param_1 + 0xa1) == '\0') {
      local_80 = 1;
      if (*(char *)(param_1 + 0xa0) == '\0') {
        this_03 = *(FoodStack **)(*(int *)(param_1 + 0x7c) + 100);
        iVar1 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70),1000);
        this_01 = (Recipe *)FoodStack::getRecipe(this_03);
        local_80 = Recipe::getFinishToxinCost(this_01,(uchar)this_03[8],iVar1);
      }
      iVar1 = ZombieCafe::getToxin(this_04);
      if (iVar1 < local_80) goto LAB_001fff72;
      pCVar4 = *(ConfirmDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x80);
      Vector<String>::elementAt((int)aSStack_68);
      String::valueOf((int)aSStack_60);
      String::operator+(aSStack_58,aSStack_68,aSStack_60);
      Vector<String>::elementAt((int)aSStack_50);
      String::operator+(aSStack_48,aSStack_58,aSStack_50);
      Vector<String>::elementAt((int)aSStack_40);
      Vector<String>::elementAt((int)aSStack_38);
      ConfirmDialog::show(pCVar4,aSStack_48,aSStack_40,aSStack_38,
                          *(undefined4 *)(iVar6 + DAT_00200010),param_1);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
      this_02 = aSStack_68;
    }
    else {
      this = (CharacterInstance *)
             GameStateCafe::findStaffForCookEndTask
                       (*(GameStateCafe **)(*(int *)(param_1 + 0x60) + 100),
                        *(Stove **)(param_1 + 0x7c),2);
      if (this != (CharacterInstance *)0x0) {
        CharacterInstance::stopTasks(this);
        this_00 = (DishToCounterTask *)operator_new(0x48);
        DishToCounterTask::DishToCounterTask
                  (this_00,this,*(Cafe **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x14),
                   *(Stove **)(param_1 + 0x7c));
        CharacterInstance::addTask(this,(Task *)this_00);
        CookCommandBar::close(*(CookCommandBar **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xb4))
        ;
        CapcomLinkedList<PendingItem*>::remove
                  ((CapcomLinkedList<PendingItem*> *)(*(int *)(param_1 + 0x60) + 0xbc),
                   (PendingItem *)param_1);
        piVar3 = *(int **)(*(int *)(param_1 + 0x60) + 0xb0);
        (**(code **)(*piVar3 + 0x34))(piVar3,param_1);
        (**(code **)(**(int **)(param_1 + 0x60) + 0x20))(*(int **)(param_1 + 0x60),0);
        (**(code **)(*(int *)param_1 + 4))(param_1);
        return;
      }
      pNVar5 = *(NoticeDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xd0);
      Vector<String>::elementAt((int)aSStack_78);
      Vector<String>::elementAt((int)aSStack_70);
      NoticeDialog::show(pNVar5,aSStack_78,aSStack_70,0,0);
      String::~String(aSStack_70);
      this_02 = aSStack_78;
    }
  }
  String::~String(this_02);
LAB_001fff72:
  this_04[DAT_00200020] = (ZombieCafe)0x1;
  return;
}


