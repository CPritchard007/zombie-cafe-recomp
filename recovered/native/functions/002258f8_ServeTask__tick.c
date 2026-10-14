/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002258f8 ServeTask::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00225942) */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00225d7c) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00225f08) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00225adc) */
/* WARNING: Removing unreachable block (ram,0x00225d7c) */
/* WARNING: Removing unreachable block (ram,0x00225f08) */
/* WARNING: Removing unreachable block (ram,0x00225942) */
/* WARNING: Removing unreachable block (ram,0x00225adc) */
/* ServeTask::tick(long) */

void __thiscall ServeTask::tick(ServeTask *this,long param_1)

{
  undefined4 *puVar1;
  short sVar2;
  CapcomOrderableList<Furniture*> *this_00;
  FollowTask *pFVar3;
  undefined4 uVar4;
  Food *this_01;
  CafeObject *this_02;
  bool bVar5;
  undefined4 *puVar6;
  code *pcVar7;
  PackedImage *this_03;
  void *pvVar8;
  Cafe *this_04;
  int iVar9;
  ServeTask *pSVar10;
  int *piVar11;
  int iVar12;
  ServeTask SVar13;
  float extraout_s0;
  float fVar14;
  float extraout_s0_00;
  float extraout_s0_01;
  short local_20;
  
  iVar12 = DAT_00225c18 + 0x225904;
  if (this[4] != (ServeTask)0x0) {
    return;
  }
  SVar13 = (ServeTask)0x1;
  if (*(char *)(*(int *)(this + 0x40) + 0x34) == '\x02') {
    SVar13 = (ServeTask)(*(char *)(*(int *)(*(int *)(this + 0x40) + 0x8c) + 4) == '\x01');
  }
  pSVar10 = this + 0x4a;
  *pSVar10 = SVar13;
  Character::work(*(Character **)(*(int *)(this + 0x20) + 0x8c),param_1);
  sVar2 = (short)param_1;
  switch(this[0x24]) {
  case (ServeTask)0x0:
    (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),param_1);
    if (this[0x4a] == (ServeTask)0x0) {
      if (*(char *)(*(int *)(this + 0x34) + 4) == '\0') {
        return;
      }
      CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false)
      ;
      if ((this[0x3c] == (ServeTask)0x0) && (*(char *)(*(int *)(this + 0x34) + 5) != '\0')) {
        this[0x24] = (ServeTask)0x1;
      }
      else {
        Task::finish((Task *)this,false);
      }
      piVar11 = *(int **)(this + 0x34);
      if (piVar11 == (int *)0x0) {
        return;
      }
      goto LAB_00225e9c;
    }
  default:
switchD_00225942_default:
    bVar5 = false;
LAB_00225f4a:
    Task::finish((Task *)this,bVar5);
    return;
  case (ServeTask)0x1:
    if (*pSVar10 != (ServeTask)0x0) {
      Task::finish((Task *)this,false);
    }
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false);
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x30) + 4));
    *(undefined2 *)(this + 0x48) = **(undefined2 **)(iVar12 + DAT_00225c20);
    SVar13 = (ServeTask)0x2;
    break;
  case (ServeTask)0x2:
    if (*pSVar10 != (ServeTask)0x0) {
      Task::finish((Task *)this,false);
    }
    sVar2 = *(short *)(this + 0x48) - sVar2;
    *(short *)(this + 0x48) = sVar2;
    if (-1 < sVar2) {
      return;
    }
    iVar12 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x28));
    if (0 < iVar12) {
      iVar12 = CapcomApp::getInstance();
      iVar9 = *(int *)(iVar12 + 4);
      iVar12 = arc4random();
      switch((iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f) & 7) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
      }
      ZombieCafe::playEffect(iVar9,extraout_s0);
      iVar12 = ServingCounter::getNewRandomFoodServing(*(ServingCounter **)(this + 0x30),true);
      SVar13 = (ServeTask)0xb;
      *(int *)(this + 0x38) = iVar12;
      if (iVar12 == 0) break;
      goto LAB_00225f6c;
    }
    goto switchD_00225942_default;
  case (ServeTask)0x3:
    if (*(char *)(*(int *)(this + 0x40) + 0x34) == '\x02') {
      iVar9 = Cafe::getTableChairIsFacing
                        (*(Cafe **)(this + 0x28),(int)*(short *)(*(int *)(this + 0x40) + 0x2c));
      *(int *)(this + 0x2c) = iVar9;
      if (iVar9 == 0) {
        return;
      }
      if (*(char *)(iVar9 + 0x2e) != '\0') {
        return;
      }
      if (*(int **)(this + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x34) + 4))();
        *(undefined4 *)(this + 0x34) = 0;
      }
      pFVar3 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (pFVar3,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x2c),
                 *(Cafe **)(this + 0x28),'\x04',false);
      *(FollowTask **)(this + 0x34) = pFVar3;
      (**(code **)(*(int *)pFVar3 + 8))(pFVar3);
      iVar9 = (**(code **)(**(int **)(this + 0x34) + 0x34))();
      if ((iVar9 != 0) || (*(char *)((int)*(int **)(this + 0x34) + 5) != '\0')) {
        if (*(int **)(this + 0x44) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x44) + 4))();
          *(undefined4 *)(this + 0x44) = 0;
        }
        iVar9 = CapcomApp::getInstance();
        this_03 = *(PackedImage **)(*(int *)(iVar9 + 4) + DAT_00225c24);
        iVar9 = FoodStack::getRecipe(*(FoodStack **)(this + 0x38));
        uVar4 = PackedImage::getImage(this_03,(int)*(short *)(iVar9 + 0x14),false);
        *(undefined4 *)(this + 0x44) = uVar4;
        fVar14 = (float)CharacterInstance::stopReplacementInAnimation
                                  (*(CharacterInstance **)(this + 0x20),0);
        CharacterInstance::replaceInAnimation
                  (*(CharacterInstance **)(this + 0x20),0,*(CImage **)(this + 0x44),fVar14,
                   (uchar)**(undefined4 **)(iVar12 + DAT_00225c28),false,false,0);
        SVar13 = (ServeTask)0x4;
        break;
      }
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
    }
    goto LAB_00225c12;
  case (ServeTask)0x4:
    if (*pSVar10 == (ServeTask)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),param_1);
      if (*(char *)(*(int *)(this + 0x34) + 4) == '\0') {
        return;
      }
      CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false)
      ;
      piVar11 = *(int **)(this + 0x34);
      SVar13 = (ServeTask)0x3;
      if (*(char *)((int)piVar11 + 5) != '\0') {
        SVar13 = (ServeTask)0x5;
      }
      this[0x24] = SVar13;
      goto LAB_00225e9c;
    }
    Vector<CharacterInstance*>::removeElement
              ((Vector<CharacterInstance*> *)(*(int *)(this + 0x28) + 0xa4),
               *(CharacterInstance **)(this + 0x40));
    if (*(int **)(this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
    }
LAB_00225c12:
    SVar13 = (ServeTask)0x8;
    break;
  case (ServeTask)0x5:
    if ((*(char *)(*(int *)(this + 0x40) + 0x34) == '\x02') &&
       (*(char *)(*(int *)(this + 0x2c) + 0x2e) == '\0')) {
      CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false)
      ;
      CharacterInstance::turnToward
                (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x2c) + 4));
      *(int *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x14) =
           *(int *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x14) + 1;
      *(undefined2 *)(this + 0x48) = **(undefined2 **)(iVar12 + DAT_00225f74);
      SVar13 = (ServeTask)0x6;
      break;
    }
LAB_00225f6c:
    SVar13 = (ServeTask)0x3;
    break;
  case (ServeTask)0x6:
    if (*pSVar10 == (ServeTask)0x0) {
      sVar2 = *(short *)(this + 0x48) - sVar2;
      *(short *)(this + 0x48) = sVar2;
      if (-1 < sVar2) goto switchD_00225942_caseD_7;
      CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
      piVar11 = *(int **)(this + 0x2c);
      pcVar7 = *(code **)(*piVar11 + 0x1c);
      local_20 = *(short *)(*(int *)*(Character **)(*(int *)(this + 0x20) + 0x8c) + DAT_00225f78);
      sVar2 = Character::getAdditionCharisma(*(Character **)(*(int *)(this + 0x20) + 0x8c));
      local_20 = local_20 + sVar2;
      this_01 = (Food *)operator_new(0x70);
      if (100 < local_20) {
        local_20 = 100;
      }
      Food::Food(this_01,*(FurnitureData **)
                          (**(int **)(iVar12 + DAT_00225f7c) * 4 +
                          *(int *)(*(int *)(this + 0x28) + 0x94)),*(FoodStack **)(this + 0x38),
                 (uchar)local_20);
      (*pcVar7)(piVar11,this_01);
      *(undefined1 *)(*(int *)(this + 0x2c) + 0x2e) = 1;
      pvVar8 = *(void **)(this + 0x38);
      if (pvVar8 != (void *)0x0) {
        String::~String((String *)((int)pvVar8 + 0x14));
        String::~String((String *)((int)pvVar8 + 0xc));
        operator_delete(pvVar8);
      }
      *(undefined4 *)(this + 0x38) = 0;
      iVar9 = arc4random();
      switch((iVar9 + (iVar9 >> 0x1f) ^ iVar9 >> 0x1f) & 7) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
      }
      iVar9 = CapcomApp::getInstance();
      ZombieCafe::playEffect(*(int *)(iVar9 + 4),extraout_s0_00);
      SVar13 = (ServeTask)0x7;
    }
    else {
      Vector<CharacterInstance*>::removeElement
                ((Vector<CharacterInstance*> *)(*(int *)(this + 0x28) + 0xa4),
                 *(CharacterInstance **)(this + 0x40));
      SVar13 = (ServeTask)0x8;
    }
    this[0x24] = SVar13;
  case (ServeTask)0x7:
switchD_00225942_caseD_7:
    iVar9 = (**(code **)(**(int **)(*(int *)(this + 0x20) + 0x90) + 0x1c))();
    if (iVar9 == 0) {
      return;
    }
    iVar9 = (**(code **)(**(int **)(this + 0x20) + 0x20))();
    if (iVar9 == 2) {
      *(int *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x2c) =
           *(int *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x2c) +
           **(int **)(iVar12 + DAT_00225f80);
    }
    bVar5 = true;
    goto LAB_00225f4a;
  case (ServeTask)0x8:
    piVar11 = *(int **)(this + 0x34);
    if (piVar11 == (int *)0x0) {
      this_04 = *(Cafe **)(this + 0x28);
      iVar9 = FoodStack::getRecipe(*(FoodStack **)(this + 0x38));
      this_02 = (CafeObject *)
                Cafe::getAppropriateCounterForDish
                          (this_04,(uint)*(ushort *)(iVar9 + 0x12),
                           (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
      *(CafeObject **)(this + 0x30) = this_02;
      if (this_02 == (CafeObject *)0x0) {
        return;
      }
      CafeObject::addRemoveListener
                (this_02,*(_func_void_void_ptr_CafeObject_ptr **)(iVar12 + DAT_00225f84),this);
      if (*(int **)(this + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x34) + 4))();
        *(undefined4 *)(this + 0x34) = 0;
      }
      pFVar3 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (pFVar3,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x30),
                 *(Cafe **)(this + 0x28),'\x04',false);
      *(FollowTask **)(this + 0x34) = pFVar3;
      (**(code **)(*(int *)pFVar3 + 8))(pFVar3);
      iVar12 = (**(code **)(**(int **)(this + 0x34) + 0x34))();
      if (iVar12 != 0) {
        return;
      }
      if (*(char *)((int)*(int **)(this + 0x34) + 5) != '\0') {
        return;
      }
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
      return;
    }
    (**(code **)(*piVar11 + 0x14))(piVar11,param_1);
    if (*(char *)(*(int *)(this + 0x34) + 4) == '\0') {
      return;
    }
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false);
    piVar11 = *(int **)(this + 0x34);
    if (*(char *)((int)piVar11 + 5) != '\0') {
      this[0x24] = (ServeTask)0x9;
    }
LAB_00225e9c:
    (**(code **)(*piVar11 + 4))();
    *(undefined4 *)(this + 0x34) = 0;
    return;
  case (ServeTask)0x9:
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false);
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x30) + 4));
    *(undefined2 *)(this + 0x48) = **(undefined2 **)(iVar12 + DAT_00225f74);
    SVar13 = (ServeTask)0xa;
    break;
  case (ServeTask)0xa:
    sVar2 = *(short *)(this + 0x48) - sVar2;
    *(short *)(this + 0x48) = sVar2;
    if (-1 < sVar2) {
      return;
    }
    iVar12 = CapcomApp::getInstance();
    iVar9 = *(int *)(iVar12 + 4);
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
    iVar12 = arc4random();
    switch((iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f) & 7) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    }
    ZombieCafe::playEffect(iVar9,extraout_s0_01);
    ServingCounter::addFood(*(ServingCounter **)(this + 0x30),*(FoodStack **)(this + 0x38));
    bVar5 = false;
    *(undefined4 *)(this + 0x38) = 0;
    goto LAB_00225f4a;
  case (ServeTask)0xb:
    this_00 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList
                        (*(Cafe **)(this + 0x28),'\x02',
                         (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
    *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
    while( true ) {
      do {
        puVar6 = *(undefined4 **)(this_00 + 0x10);
        if (puVar6 != (undefined4 *)0x0) {
          puVar1 = puVar6 + 2;
          puVar6 = (undefined4 *)*puVar6;
          *(undefined4 *)(this_00 + 0x10) = *puVar1;
        }
        *(undefined4 **)(this + 0x30) = puVar6;
        if (puVar6 == (undefined4 *)0x0) goto LAB_002259d8;
      } while (puVar6[0x19] == 0);
      if (*(int **)(this + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x34) + 4))();
        *(undefined4 *)(this + 0x34) = 0;
      }
      pFVar3 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (pFVar3,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x30),
                 *(Cafe **)(this + 0x28),'\0',false);
      *(FollowTask **)(this + 0x34) = pFVar3;
      (**(code **)(*(int *)pFVar3 + 8))(pFVar3);
      iVar12 = (**(code **)(**(int **)(this + 0x34) + 0x34))();
      if ((iVar12 != 0) || (*(char *)((int)*(int **)(this + 0x34) + 5) != '\0')) break;
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
    }
LAB_002259d8:
    CapcomOrderableList<Furniture*>::removeAll(this_00);
    operator_delete(this_00);
    if (*(int *)(this + 0x34) == 0) {
      iVar12 = CapcomApp::getInstance();
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(iVar12 + 4) + DAT_00225c1c),'C',false);
      Task::finish((Task *)this,false);
    }
    SVar13 = (ServeTask)0x0;
  }
  this[0x24] = SVar13;
  return;
}


