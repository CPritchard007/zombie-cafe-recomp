/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fb188 ObjectiveDialog::updateObjective */

/* ObjectiveDialog::updateObjective() */

void __thiscall ObjectiveDialog::updateObjective(ObjectiveDialog *this)

{
  byte bVar1;
  undefined4 uVar2;
  String *this_00;
  BitmapTextElement *pBVar3;
  int iVar4;
  ProgressBar *this_01;
  ImageElement *this_02;
  ImageElement *this_03;
  ZCImageButton *this_04;
  int iVar5;
  int iVar6;
  int *piVar7;
  ObjectiveDialog *pOVar8;
  code *pcVar9;
  int local_120;
  String aSStack_110 [6];
  short sStack_10a;
  StringUtil aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  StringUtil aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  StringUtil aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
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
  
  L_PrintLog((char *)(DAT_001fb3cc + 0x1fb19e),(char *)(DAT_001fb3d0 + 0x1fb1a0));
  while (-1 < *(int *)(this + 0xf8)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<BitmapTextElement*>::removeElementAt
                      ((Vector<BitmapTextElement*> *)(this + 0xf4),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x104)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<ProgressBar*>::removeElementAt((Vector<ProgressBar*> *)(this + 0x100),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x110)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<BitmapTextElement*>::removeElementAt
                      ((Vector<BitmapTextElement*> *)(this + 0x10c),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0xec)) {
    **(undefined4 **)(this + 0xf0) = 0;
    Vector<int>::move((Vector<int> *)(this + 0xe8),1,-1);
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + -1;
  }
  while (-1 < *(int *)(this + 0x11c)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<ImageElement*>::removeElementAt((Vector<ImageElement*> *)(this + 0x118),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x128)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<ImageElement*>::removeElementAt((Vector<ImageElement*> *)(this + 0x124),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x134)) {
    pcVar9 = *(code **)(*(int *)this + 0x34);
    uVar2 = Vector<ZCImageButton*>::removeElementAt((Vector<ZCImageButton*> *)(this + 0x130),0);
    piVar7 = (int *)(*pcVar9)(this,uVar2);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
  }
  free(*(void **)(this + 0x164));
  *(undefined4 *)(this + 0x164) = 0;
  iVar5 = DAT_001fb3d4;
  ObjectiveSystem::getObjectiveCount(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb3d4));
  ObjectiveSystem::getSetProgressCompletion(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar5));
  String::valueOf((int)aSStack_110);
  StringUtil::getEncodingString(aSStack_108,'\0');
  uVar2 = String::getBytes(aSStack_110,aSStack_108,0,0,0);
  *(undefined4 *)(this + 0x164) = uVar2;
  String::~String((String *)aSStack_108);
  *(int *)(this + 0x168) = (int)sStack_10a;
  piVar7 = *(int **)(this + 0xd8);
  pcVar9 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_100,*(char **)(this + 0x164));
  (*pcVar9)(piVar7,aSStack_100);
  String::~String(aSStack_100);
  local_120 = 0;
  do {
    iVar5 = ObjectiveSystem::getObjectiveCount
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
    if (iVar5 <= local_120) {
      piVar7 = *(int **)(this + 0xd4);
      pcVar9 = *(code **)(*piVar7 + 0x44);
      ObjectiveSystem::isSetComplete(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      Vector<String>::elementAt((int)aSStack_58);
      (*pcVar9)(piVar7,aSStack_58);
      String::~String(aSStack_58);
      piVar7 = *(int **)(this + 0x7c);
      pcVar9 = *(code **)(*piVar7 + 0x20);
      bVar1 = ObjectiveSystem::isSetComplete
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      (*pcVar9)(piVar7,bVar1 ^ 1);
      piVar7 = *(int **)(this + 0xd8);
      pcVar9 = *(code **)(*piVar7 + 0x20);
      bVar1 = ObjectiveSystem::isSetComplete
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      (*pcVar9)(piVar7,bVar1 ^ 1);
      piVar7 = *(int **)(this + 0xd8);
      pcVar9 = *(code **)(*piVar7 + 0x44);
      String::String(aSStack_50,*(char **)(this + 0x164));
      (*pcVar9)(piVar7,aSStack_50);
      String::~String(aSStack_50);
      iVar5 = ObjectiveSystem::getSetCompletion
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      uVar2 = ObjectiveSystem::getObjectiveCount
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      __divsi3(iVar5 * 100,uVar2);
      String::valueOf((int)aSStack_40);
      Vector<String>::elementAt((int)aSStack_38);
      String::operator+(aSStack_48,aSStack_40,aSStack_38);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      piVar7 = *(int **)(this + 200);
      pcVar9 = *(code **)(*piVar7 + 0x44);
      String::String(aSStack_30,aSStack_48);
      (*pcVar9)(piVar7,aSStack_30);
      String::~String(aSStack_30);
      iVar5 = 0;
      pOVar8 = this;
      do {
        iVar6 = ObjectiveSystem::getBonusStreak
                          (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
        if (iVar6 < iVar5) {
          piVar7 = *(int **)(pOVar8 + 0xa0);
          pcVar9 = *(code **)(*piVar7 + 0x20);
        }
        else {
          piVar7 = *(int **)(pOVar8 + 0xa0);
          pcVar9 = *(code **)(*piVar7 + 0x20);
        }
        (*pcVar9)(piVar7,iVar6 >= iVar5);
        iVar5 = iVar5 + 1;
        pOVar8 = pOVar8 + 4;
      } while (iVar5 != 3);
      piVar7 = *(int **)(this + 0xbc);
      pcVar9 = *(code **)(*piVar7 + 0x44);
      ObjectiveSystem::getBonusStreak(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      Vector<String>::elementAt((int)aSStack_28);
      (*pcVar9)(piVar7,aSStack_28);
      String::~String(aSStack_28);
      piVar7 = *(int **)(this + 0xc0);
      pcVar9 = *(code **)(*piVar7 + 0x44);
      ObjectiveSystem::getBonusStreak(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      Vector<String>::elementAt((int)aSStack_20);
      (*pcVar9)(piVar7,aSStack_20);
      String::~String(aSStack_20);
      iVar5 = ObjectiveSystem::getBonusStreak
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fbb10));
      pcVar9 = *(code **)(**(int **)(this + 0xbc) + 0x20);
      if (iVar5 != 0) {
        (*pcVar9)(*(int **)(this + 0xbc),1);
        piVar7 = *(int **)(this + 0xc0);
        pcVar9 = *(code **)(*piVar7 + 0x20);
      }
      else {
        (*pcVar9)();
        piVar7 = *(int **)(this + 0xc0);
        pcVar9 = *(code **)(*piVar7 + 0x20);
      }
      (*pcVar9)(piVar7,iVar5 != 0);
      layout(this);
      L_PrintLog((char *)(DAT_001fbb28 + 0x1fb9e2),(char *)(DAT_001fbb2c + 0x1fb9e4));
      String::~String(aSStack_48);
      String::~String(aSStack_110);
      return;
    }
    String::String(aSStack_f8);
    iVar5 = ObjectiveSystem::getObjectiveGoal
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb3d4),local_120);
    if (iVar5 == 1) {
      ObjectiveSystem::getObjectiveType
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb3d4),local_120);
      Vector<String>::elementAt((int)aSStack_f0);
      String::String(aSStack_e8,(char *)(DAT_001fb3e0 + 0x1fb386));
      ObjectiveSystem::getObjectiveGoal
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb3d4),local_120);
      String::valueOf((int)aSStack_e0);
      StringUtil::replace(aSStack_d8,aSStack_f0,aSStack_e8,aSStack_e0);
      String::operator=(aSStack_f8,aSStack_d8);
      String::~String((String *)aSStack_d8);
      String::~String(aSStack_e0);
      String::~String(aSStack_e8);
      this_00 = aSStack_f0;
    }
    else {
      ObjectiveSystem::getObjectiveType
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
      Vector<String>::elementAt((int)aSStack_d0);
      String::String(aSStack_c8,(char *)(DAT_001fb7a0 + 0x1fb408));
      ObjectiveSystem::getObjectiveGoal
                (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
      String::valueOf((int)aSStack_c0);
      StringUtil::replace(aSStack_b8,aSStack_d0,aSStack_c8,aSStack_c0);
      String::operator=(aSStack_f8,aSStack_b8);
      String::~String((String *)aSStack_b8);
      String::~String(aSStack_c0);
      String::~String(aSStack_c8);
      this_00 = aSStack_d0;
    }
    String::~String(this_00);
    iVar5 = ObjectiveSystem::getObjectiveType
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    if (iVar5 == 4) {
      iVar6 = *(int *)(*(int *)(this + 0x60) + 0x4e8);
      iVar5 = ObjectiveSystem::getObjectiveRecipeIndex
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
      String::String(aSStack_b0,(String *)(iVar6 + iVar5 * 0x1c));
      String::String(aSStack_a8,(char *)(DAT_001fb7a4 + 0x1fb480));
      String::operator+(aSStack_a0,aSStack_b0,aSStack_a8);
      String::String(aSStack_98,aSStack_f8);
      String::operator+(aSStack_90,aSStack_a0,aSStack_98);
      String::operator=(aSStack_f8,aSStack_90);
      String::~String(aSStack_90);
      String::~String(aSStack_98);
      String::~String(aSStack_a0);
      String::~String(aSStack_a8);
      String::~String(aSStack_b0);
    }
    String::String(aSStack_88,aSStack_f8);
    iVar6 = *(int *)(this + 0x60);
    iVar5 = SmDev();
    uVar2 = *(undefined4 *)((*(int *)(DAT_001fb7a8 + iVar5 * 4 + 0x1fb4f2) + 0x136) * 4 + iVar6);
    pBVar3 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar3,aSStack_88,uVar2,0xff000000,0,0,0x11,0,0);
    Vector<BitmapTextElement*>::addElement((Vector<BitmapTextElement*> *)(this + 0xf4),pBVar3);
    String::~String(aSStack_88);
    pBVar3[0x7f] = (BitmapTextElement)0x14;
    (**(code **)(*(int *)this + 0x2c))(this,pBVar3);
    iVar5 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    iVar6 = ObjectiveSystem::getObjectiveGoal
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    iVar4 = SmDev();
    iVar4 = *(int *)(DAT_001fb7ac + iVar4 * 4 + 0x1fb580);
    this_01 = (ProgressBar *)operator_new(0x84);
    ProgressBar::ProgressBar(this_01,iVar5,iVar6,0xb1,0xad,-0x1000000,iVar4);
    Vector<ProgressBar*>::addElement((Vector<ProgressBar*> *)(this + 0x100),this_01);
    (**(code **)(*(int *)this_01 + 0x1c))(this_01,0x11);
    (**(code **)(*(int *)this + 0x2c))(this,this_01);
    ObjectiveSystem::getObjectiveCompletion
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    String::valueOf((int)aSStack_78);
    String::operator+(aSStack_70,(char *)aSStack_78);
    ObjectiveSystem::getObjectiveGoal
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    String::valueOf((int)aSStack_68);
    String::operator+(aSStack_80,aSStack_70,aSStack_68);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    String::String(aSStack_60,aSStack_80);
    iVar6 = *(int *)(this + 0x60);
    iVar5 = SmDev();
    uVar2 = *(undefined4 *)((*(int *)(iVar5 * 4 + DAT_001fb7b4 + 0x1fb5f4) + 0x136) * 4 + iVar6);
    pBVar3 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar3,aSStack_60,uVar2,0xff000000,1,1,0x22,0,0);
    Vector<BitmapTextElement*>::addElement((Vector<BitmapTextElement*> *)(this + 0x10c),pBVar3);
    String::~String(aSStack_60);
    pBVar3[0x7f] = (BitmapTextElement)0x22;
    (**(code **)(*(int *)this + 0x2c))(this,pBVar3);
    this_02 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_02,*(CImage **)(this + 0x90),'\n',true);
    Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0x118),this_02);
    (**(code **)(*(int *)this + 0x2c))(this,this_02);
    this_03 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_03,*(CImage **)(this + 0x94),'\n',true);
    Vector<ImageElement*>::addElement((Vector<ImageElement*> *)(this + 0x124),this_03);
    (**(code **)(*(int *)this + 0x2c))(this,this_03);
    this_04 = (ZCImageButton *)operator_new(0xa0);
    ZCImageButton::ZCImageButton(this_04,'\n',*(CImage **)(this + 0x9c),(CImage *)0x0,0,0,true);
    Vector<ZCImageButton*>::addElement((Vector<ZCImageButton*> *)(this + 0x130),this_04);
    this_04[0x93] = (ZCImageButton)0x1;
    (**(code **)(*(int *)this + 0x2c))(this,this_04);
    Vector<int>::addElement((Vector<int> *)(this + 0xe8),-1);
    iVar5 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    iVar6 = ObjectiveSystem::getObjectiveGoal
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
    if (iVar5 == iVar6) {
      iVar5 = ObjectiveSystem::getObjectiveCompleted
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fb79c),local_120);
      if (iVar5 != 0) {
        (**(code **)(*(int *)pBVar3 + 0x20))(pBVar3,0);
        (**(code **)(*(int *)this_02 + 0x20))(this_02,1);
        uVar2 = 1;
        pcVar9 = *(code **)(*(int *)this_03 + 0x20);
        goto LAB_001fb776;
      }
      (**(code **)(*(int *)pBVar3 + 0x20))(pBVar3,0);
      (**(code **)(*(int *)this_02 + 0x20))(this_02,0);
      (**(code **)(*(int *)this_03 + 0x20))(this_03,0);
      uVar2 = 1;
      pcVar9 = *(code **)(*(int *)this_04 + 0x20);
    }
    else {
      (**(code **)(*(int *)pBVar3 + 0x20))(pBVar3,1);
      (**(code **)(*(int *)this_02 + 0x20))(this_02,0);
      uVar2 = 0;
      pcVar9 = *(code **)(*(int *)this_03 + 0x20);
LAB_001fb776:
      (*pcVar9)(this_03,uVar2);
      uVar2 = 0;
      pcVar9 = *(code **)(*(int *)this_04 + 0x20);
    }
    (*pcVar9)(this_04,uVar2);
    String::~String(aSStack_80);
    String::~String(aSStack_f8);
    local_120 = local_120 + 1;
  } while( true );
}


