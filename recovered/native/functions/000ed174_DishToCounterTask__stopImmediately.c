/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ed174 DishToCounterTask::stopImmediately */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ed19e) */
/* WARNING: Removing unreachable block (ram,0x000ed19e) */
/* DishToCounterTask::stopImmediately() */

void __thiscall DishToCounterTask::stopImmediately(DishToCounterTask *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  FoodStack *this_00;
  ZombieCafe *this_01;
  Cafe *this_02;
  
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 0x10))();
  }
  iVar1 = CapcomApp::getInstance();
  this_00 = *(FoodStack **)(this + 0x40);
  this_01 = *(ZombieCafe **)(iVar1 + 4);
  if (this_00 == (FoodStack *)0x0) {
    this[5] = (DishToCounterTask)0x0;
    goto LAB_000ed2b2;
  }
  switch(this[0x24]) {
  case (DishToCounterTask)0x3:
  case (DishToCounterTask)0x4:
  case (DishToCounterTask)0x5:
  case (DishToCounterTask)0x6:
    this_02 = *(Cafe **)(this + 0x28);
    iVar1 = FoodStack::getRecipe(this_00);
    iVar1 = Cafe::getAppropriateCounterForDish
                      (this_02,(uint)*(ushort *)(iVar1 + 0x12),
                       (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
    *(int *)(this + 0x34) = iVar1;
    if (iVar1 != 0) {
      completeObjective(this);
      FoodStack::getXp(*(FoodStack **)(this + 0x40));
      uVar2 = __floatsisf();
      uVar2 = __mulsf3(uVar2,*(undefined4 *)
                              ((*(int *)(this_01 + 0x680) + -1) * 4 +
                              **(int **)(DAT_000ed2bc + 0xed1e4)));
      __mulsf3(uVar2,*(undefined4 *)(**(int **)(this_01 + 0x590) + DAT_000ed2c0));
      iVar1 = __fixsfsi();
      ServingCounter::addFood(*(ServingCounter **)(this + 0x34),*(FoodStack **)(this + 0x40));
      *(undefined4 *)(this + 0x40) = 0;
      goto LAB_000ed258;
    }
    break;
  case (DishToCounterTask)0x7:
  case (DishToCounterTask)0x8:
  case (DishToCounterTask)0x9:
  case (DishToCounterTask)0xa:
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this_01 + DAT_000ed2c4),this_00);
    completeObjective(this);
    FoodStack::getXp(*(FoodStack **)(this + 0x40));
    uVar2 = __floatsisf();
    uVar2 = __mulsf3(uVar2,*(undefined4 *)
                            ((*(int *)(this_01 + 0x680) + -1) * 4 +
                            **(int **)(DAT_000ed2c8 + 0xed238)));
    __mulsf3(uVar2,*(undefined4 *)(**(int **)(this_01 + 0x590) + DAT_000ed2c0));
    iVar1 = __fixsfsi();
LAB_000ed258:
    iVar3 = __divsi3(iVar1,0xfffffffd);
    iVar1 = iVar1 + iVar3;
    iVar3 = ZombieCafe::isExperienceBoost(this_01);
    if (iVar3 != 0) {
      uVar2 = ZombieCafe::getExperienceBoostRate();
      uVar4 = __floatsisf(iVar1);
      __mulsf3(uVar4,uVar2);
      iVar1 = __fixsfsi();
    }
    iVar3 = ZombieCafe::checkCafeLevelMax(this_01);
    if ((iVar3 == 0) && (0 < iVar1)) {
      ZombieCafe::addXp(this_01,iVar1);
    }
  }
  CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
  *(undefined4 *)(this + 0x40) = 0;
  this[5] = (DishToCounterTask)0x1;
LAB_000ed2b2:
  Task::finish((Task *)this);
  return;
}


