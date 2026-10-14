/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ed2cc DishToCounterTask::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed2f2) */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed5e6) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed7a2) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed8d8) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed4a6) */
/* WARNING: Removing unreachable block (ram,0x000ed5e6) */
/* WARNING: Removing unreachable block (ram,0x000ed7a2) */
/* WARNING: Removing unreachable block (ram,0x000ed8d8) */
/* WARNING: Removing unreachable block (ram,0x000ed2f2) */
/* WARNING: Removing unreachable block (ram,0x000ed4a6) */
/* DishToCounterTask::tick(long) */

void __thiscall DishToCounterTask::tick(DishToCounterTask *this,long param_1)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  Recipe *this_00;
  CapcomOrderableList<ServingCounter*> *this_01;
  SServer *pSVar4;
  CapcomOrderableList<Furniture*> *this_02;
  FollowTask *pFVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  Cafe *pCVar11;
  StatusNote *pSVar12;
  CharacterInstance *this_03;
  int *piVar13;
  DishToCounterTask DVar14;
  undefined4 *puVar15;
  int iVar16;
  FoodStack *this_04;
  ZombieCafe *pZVar17;
  PackedImage *pPVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar19;
  float extraout_s0_02;
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  undefined1 auStack_dc [64];
  undefined1 auStack_9c [128];
  int local_1c;
  
  iVar16 = DAT_000ed600 + 0xed2d8;
  piVar13 = *(int **)(iVar16 + DAT_000ed604);
  local_1c = *piVar13;
  if (this[4] != (DishToCounterTask)0x0) goto LAB_000eda46;
  sVar3 = (short)param_1;
  switch(this[0x24]) {
  case (DishToCounterTask)0x0:
    (**(code **)(**(int **)(this + 0x3c) + 0x14))();
    if (*(char *)(*(int *)(this + 0x3c) + 4) == '\0') {
      if (*(char *)(*(int *)(this + 0x2c) + 0x2e) != '\0') goto LAB_000eda46;
      DVar14 = (DishToCounterTask)0x0;
      goto LAB_000eda3e;
    }
    if ((*(char *)(*(int *)(this + 0x3c) + 5) == '\0') || (this[0x44] != (DishToCounterTask)0x0)) {
      this[5] = (DishToCounterTask)0x0;
      Task::finish((Task *)this);
    }
    else {
      this[0x24] = (DishToCounterTask)0x1;
    }
    piVar6 = *(int **)(this + 0x3c);
    if (piVar6 != (int *)0x0) goto LAB_000ed580;
    goto LAB_000ed586;
  case (DishToCounterTask)0x1:
    if (*(char *)(*(int *)(this + 0x2c) + 0x2e) != '\0') {
      CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false)
      ;
      CharacterInstance::turnToward
                (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x2c) + 4));
      *(undefined2 *)(this + 0x46) = **(undefined2 **)(iVar16 + DAT_000ed608);
      DVar14 = (DishToCounterTask)0x2;
      break;
    }
    DVar14 = (DishToCounterTask)0x0;
    goto LAB_000eda3e;
  case (DishToCounterTask)0x2:
    iVar16 = *(int *)(this + 0x2c);
    if (*(char *)(iVar16 + 0x2e) != '\0') {
      sVar2 = *(short *)(this + 0x46);
      *(short *)(this + 0x46) = sVar2 - sVar3;
      if (-1 < (short)(sVar2 - sVar3)) goto LAB_000eda46;
      if ((*(char *)(iVar16 + 0x2e) != '\0') &&
         (this_04 = *(FoodStack **)(iVar16 + 100), this_04 != (FoodStack *)0x0)) {
        iVar7 = *(int *)(iVar16 + 0x70);
        this_00 = (Recipe *)FoodStack::getRecipe(this_04);
        iVar16 = Recipe::getCookTimeSeconds(this_00,(uchar)this_04[8]);
        if (iVar16 * 1000 <= iVar7) {
          *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(int *)(this + 0x2c) + 100);
          *(undefined4 *)(*(int *)(this + 0x2c) + 100) = 0;
          *(undefined1 *)(*(int *)(this + 0x2c) + 0x2e) = 0;
          piVar6 = (int *)Stove::stopCooking(*(Stove **)(this + 0x2c));
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 4))();
          }
          iVar16 = CapcomApp::getInstance();
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(iVar16 + 4) + DAT_000ed60c),',',true);
          String::String(aSStack_f4,(String *)(*(int *)(this + 0x40) + 0xc));
          iVar16 = operator==(aSStack_f4,0);
          String::~String(aSStack_f4);
          DVar14 = (DishToCounterTask)0x3;
          if (iVar16 == 0) {
            DVar14 = (DishToCounterTask)0x7;
          }
          break;
        }
      }
      DVar14 = (DishToCounterTask)0x0;
      goto LAB_000eda3e;
    }
    this[5] = (DishToCounterTask)0x0;
    goto LAB_000eda40;
  case (DishToCounterTask)0x3:
    pCVar11 = *(Cafe **)(this + 0x28);
    iVar7 = FoodStack::getRecipe(*(FoodStack **)(this + 0x40));
    this_01 = (CapcomOrderableList<ServingCounter*> *)
              Cafe::getAppropriateCountersForDish
                        (pCVar11,(uint)*(ushort *)(iVar7 + 0x12),
                         (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
    *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
    while( true ) {
      puVar15 = *(undefined4 **)(this_01 + 0x10);
      if (puVar15 != (undefined4 *)0x0) {
        puVar1 = puVar15 + 2;
        puVar15 = (undefined4 *)*puVar15;
        *(undefined4 *)(this_01 + 0x10) = *puVar1;
      }
      *(undefined4 **)(this + 0x34) = puVar15;
      if (puVar15 == (undefined4 *)0x0) goto LAB_000ed538;
      pFVar5 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (pFVar5,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x34),
                 *(Cafe **)(this + 0x28),'\x04',false);
      *(FollowTask **)(this + 0x3c) = pFVar5;
      (**(code **)(*(int *)pFVar5 + 8))(pFVar5);
      iVar7 = (**(code **)(**(int **)(this + 0x3c) + 0x34))();
      if ((iVar7 != 0) || (*(char *)((int)*(int **)(this + 0x3c) + 5) != '\0')) break;
      (**(code **)(**(int **)(this + 0x3c) + 4))();
      *(undefined4 *)(this + 0x3c) = 0;
    }
    CafeObject::addRemoveListener
              (*(CafeObject **)(this + 0x34),
               *(_func_void_void_ptr_CafeObject_ptr **)(iVar16 + DAT_000ed610),this);
    iVar7 = arc4random();
    switch((iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f) & 7) {
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
    iVar7 = CapcomApp::getInstance();
    ZombieCafe::playEffect(*(int *)(iVar7 + 4),extraout_s0);
    iVar7 = CapcomApp::getInstance();
    pPVar18 = *(PackedImage **)(*(int *)(iVar7 + 4) + DAT_000ed614);
    iVar7 = FoodStack::getRecipe(*(FoodStack **)(this + 0x40));
    uVar8 = PackedImage::getImage(pPVar18,(int)*(short *)(iVar7 + 0x14),false);
    *(undefined4 *)(this + 0x30) = uVar8;
    fVar19 = (float)CharacterInstance::stopReplacementInAnimation
                              (*(CharacterInstance **)(this + 0x20),0);
    CharacterInstance::replaceInAnimation
              (*(CharacterInstance **)(this + 0x20),0,*(CImage **)(this + 0x30),fVar19,
               (uchar)**(undefined4 **)(iVar16 + DAT_000ed618),false,false,0);
LAB_000ed538:
    CapcomOrderableList<ServingCounter*>::removeAll(this_01);
    operator_delete(this_01);
    if (*(int *)(this + 0x3c) == 0) goto LAB_000eda46;
    DVar14 = (DishToCounterTask)0x4;
    break;
  case (DishToCounterTask)0x4:
    (**(code **)(**(int **)(this + 0x3c) + 0x14))();
    if (*(char *)(*(int *)(this + 0x3c) + 4) == '\0') goto LAB_000eda46;
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false);
    piVar6 = *(int **)(this + 0x3c);
    DVar14 = (DishToCounterTask)0x3;
    if (*(char *)((int)piVar6 + 5) != '\0') {
      DVar14 = (DishToCounterTask)0x5;
    }
    goto LAB_000ed57c;
  case (DishToCounterTask)0x5:
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false);
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x34) + 4));
    *(undefined2 *)(this + 0x46) = **(undefined2 **)(iVar16 + DAT_000ed608);
    DVar14 = (DishToCounterTask)0x6;
    break;
  case (DishToCounterTask)0x6:
    sVar2 = *(short *)(this + 0x46);
    *(short *)(this + 0x46) = sVar2 - sVar3;
    if (-1 < (short)(sVar2 - sVar3)) goto LAB_000eda46;
    iVar7 = CapcomApp::getInstance();
    pZVar17 = *(ZombieCafe **)(iVar7 + 4);
    iVar7 = arc4random();
    switch((iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f) & 7) {
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
    ZombieCafe::playEffect((int)pZVar17,extraout_s0_00);
    completeObjective(this);
    FoodStack::getXp(*(FoodStack **)(this + 0x40));
    uVar8 = __floatsisf();
    uVar8 = __mulsf3(uVar8,*(undefined4 *)
                            ((*(int *)(pZVar17 + 0x680) + -1) * 4 +
                            **(int **)(iVar16 + DAT_000ed8fc)));
    __mulsf3(uVar8,*(undefined4 *)(**(int **)(pZVar17 + 0x590) + DAT_000ed900));
    iVar9 = __fixsfsi();
    ServingCounter::addFood(*(ServingCounter **)(this + 0x34),*(FoodStack **)(this + 0x40));
    memset(auStack_dc,0,0x40);
    pSVar4 = (SServer *)MALTAHoover::GetInstance();
    MALTAHoover::getFBID(pSVar4,(char *)**(undefined4 **)(iVar16 + DAT_000ed904));
    memset(auStack_9c,0,0x80);
    MALTAHoover::GetInstance();
    MALTAHoover::releaseRanking();
    *(undefined4 *)(this + 0x40) = 0;
    iVar7 = __divsi3(iVar9,0xfffffffd);
    iVar9 = iVar9 + iVar7;
    iVar7 = ZombieCafe::isExperienceBoost(pZVar17);
    if (iVar7 != 0) {
      uVar8 = ZombieCafe::getExperienceBoostRate();
      uVar10 = __floatsisf(iVar9);
      __mulsf3(uVar10,uVar8);
      iVar9 = __fixsfsi();
    }
    iVar7 = ZombieCafe::checkCafeLevelMax(pZVar17);
    if ((iVar7 == 0) && (0 < iVar9)) {
      ZombieCafe::addXp(pZVar17,iVar9);
      pCVar11 = *(Cafe **)(this + 0x28);
      String::valueOf((int)aSStack_ec);
      pSVar12 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar12,*(undefined4 *)(this + 0x20),1,aSStack_ec,
                 **(undefined4 **)(iVar16 + DAT_000ed908),0xffffffff,0);
      Cafe::addStatusNote(pCVar11,pSVar12);
      String::~String(aSStack_ec);
    }
    this_03 = *(CharacterInstance **)(this + 0x20);
    goto LAB_000ed9f4;
  case (DishToCounterTask)0x7:
    this_02 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList
                        (*(Cafe **)(this + 0x28),'\b',(int)*(short *)(*(int *)(this + 0x20) + 0x2c))
    ;
    *(undefined4 *)(this_02 + 0x10) = *(undefined4 *)(this_02 + 8);
    while( true ) {
      puVar15 = *(undefined4 **)(this_02 + 0x10);
      if (puVar15 != (undefined4 *)0x0) {
        puVar1 = puVar15 + 2;
        puVar15 = (undefined4 *)*puVar15;
        *(undefined4 *)(this_02 + 0x10) = *puVar1;
      }
      *(undefined4 **)(this + 0x38) = puVar15;
      if (puVar15 == (undefined4 *)0x0) goto LAB_000ed834;
      pFVar5 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (pFVar5,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x38),
                 *(Cafe **)(this + 0x28),'\x04',false);
      *(FollowTask **)(this + 0x3c) = pFVar5;
      (**(code **)(*(int *)pFVar5 + 8))(pFVar5);
      iVar7 = (**(code **)(**(int **)(this + 0x3c) + 0x34))();
      if ((iVar7 != 0) || (*(char *)((int)*(int **)(this + 0x3c) + 5) != '\0')) break;
      (**(code **)(**(int **)(this + 0x3c) + 4))();
      *(undefined4 *)(this + 0x3c) = 0;
    }
    CafeObject::addRemoveListener
              (*(CafeObject **)(this + 0x38),
               *(_func_void_void_ptr_CafeObject_ptr **)(iVar16 + DAT_000ed90c),this);
    iVar7 = arc4random();
    switch((iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f) & 7) {
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
    iVar7 = CapcomApp::getInstance();
    ZombieCafe::playEffect(*(int *)(iVar7 + 4),extraout_s0_01);
    iVar7 = CapcomApp::getInstance();
    pPVar18 = *(PackedImage **)(*(int *)(iVar7 + 4) + DAT_000ed910);
    iVar7 = FoodStack::getRecipe(*(FoodStack **)(this + 0x40));
    uVar8 = PackedImage::getImage(pPVar18,(int)*(short *)(iVar7 + 0x14),false);
    *(undefined4 *)(this + 0x30) = uVar8;
    fVar19 = (float)CharacterInstance::stopReplacementInAnimation
                              (*(CharacterInstance **)(this + 0x20),0);
    CharacterInstance::replaceInAnimation
              (*(CharacterInstance **)(this + 0x20),0,*(CImage **)(this + 0x30),fVar19,
               (uchar)**(undefined4 **)(iVar16 + DAT_000ed914),false,false,0);
LAB_000ed834:
    CapcomOrderableList<Furniture*>::removeAll(this_02);
    operator_delete(this_02);
    if (*(int *)(this + 0x3c) == 0) goto LAB_000eda46;
    DVar14 = (DishToCounterTask)0x8;
    break;
  case (DishToCounterTask)0x8:
    (**(code **)(**(int **)(this + 0x3c) + 0x14))();
    if (*(char *)(*(int *)(this + 0x3c) + 4) == '\0') goto LAB_000eda46;
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false);
    piVar6 = *(int **)(this + 0x3c);
    DVar14 = (DishToCounterTask)0x7;
    if (*(char *)((int)piVar6 + 5) != '\0') {
      DVar14 = (DishToCounterTask)0x9;
    }
LAB_000ed57c:
    this[0x24] = DVar14;
LAB_000ed580:
    (**(code **)(*piVar6 + 4))();
LAB_000ed586:
    *(undefined4 *)(this + 0x3c) = 0;
    goto LAB_000eda46;
  case (DishToCounterTask)0x9:
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false);
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x38) + 4));
    *(undefined2 *)(this + 0x46) = **(undefined2 **)(iVar16 + DAT_000ed918);
    DVar14 = (DishToCounterTask)0xa;
    break;
  case (DishToCounterTask)0xa:
    sVar2 = *(short *)(this + 0x46);
    *(short *)(this + 0x46) = sVar2 - sVar3;
    if (-1 < (short)(sVar2 - sVar3)) goto LAB_000eda46;
    iVar7 = CapcomApp::getInstance();
    pZVar17 = *(ZombieCafe **)(iVar7 + 4);
    iVar7 = arc4random();
    switch((iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f) & 7) {
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
    ZombieCafe::playEffect((int)pZVar17,extraout_s0_02);
    Vector<FoodStack*>::addElement
              ((Vector<FoodStack*> *)(pZVar17 + DAT_000eda58),*(FoodStack **)(this + 0x40));
    completeObjective(this);
    FoodStack::getXp(*(FoodStack **)(this + 0x40));
    uVar8 = __floatsisf();
    uVar8 = __mulsf3(uVar8,*(undefined4 *)
                            ((*(int *)(pZVar17 + 0x680) + -1) * 4 +
                            **(int **)(iVar16 + DAT_000eda5c)));
    __mulsf3(uVar8,*(undefined4 *)(**(int **)(pZVar17 + 0x590) + DAT_000eda60));
    iVar9 = __fixsfsi();
    iVar7 = __divsi3(iVar9,0xfffffffd);
    iVar9 = iVar9 + iVar7;
    iVar7 = ZombieCafe::isExperienceBoost(pZVar17);
    if (iVar7 != 0) {
      uVar8 = ZombieCafe::getExperienceBoostRate();
      uVar10 = __floatsisf(iVar9);
      __mulsf3(uVar10,uVar8);
      iVar9 = __fixsfsi();
    }
    iVar7 = ZombieCafe::checkCafeLevelMax(pZVar17);
    if ((iVar7 == 0) && (0 < iVar9)) {
      ZombieCafe::addXp(pZVar17,iVar9);
      pCVar11 = *(Cafe **)(this + 0x28);
      String::valueOf((int)aSStack_e4);
      pSVar12 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar12,*(undefined4 *)(this + 0x20),1,aSStack_e4,
                 **(undefined4 **)(iVar16 + DAT_000eda64),0xffffffff,0);
      Cafe::addStatusNote(pCVar11,pSVar12);
      String::~String(aSStack_e4);
    }
    this_03 = *(CharacterInstance **)(this + 0x20);
    *(undefined4 *)(this + 0x40) = 0;
LAB_000ed9f4:
    CharacterInstance::stopReplacementInAnimation(this_03,0);
    DVar14 = (DishToCounterTask)0x1;
    goto LAB_000eda3e;
  default:
    DVar14 = (DishToCounterTask)0x0;
LAB_000eda3e:
    this[5] = DVar14;
LAB_000eda40:
    Task::finish((Task *)this);
    goto LAB_000eda46;
  }
  this[0x24] = DVar14;
LAB_000eda46:
  if (local_1c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


