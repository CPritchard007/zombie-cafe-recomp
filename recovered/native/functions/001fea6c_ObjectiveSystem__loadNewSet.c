/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fea6c ObjectiveSystem::loadNewSet */

/* ObjectiveSystem::loadNewSet() */

void __thiscall ObjectiveSystem::loadNewSet(ObjectiveSystem *this)

{
  void *pvVar1;
  Objective *pOVar2;
  undefined4 uVar3;
  Vector<Objective*> *this_00;
  
  this_00 = (Vector<Objective*> *)(this + 4);
  while (-1 < *(int *)(this + 8)) {
    pvVar1 = (void *)Vector<Objective*>::removeElementAt(this_00,0);
    operator_delete(pvVar1);
  }
  pOVar2 = (Objective *)createRaidObjective(this);
  Vector<Objective*>::addElement(this_00,pOVar2);
  pOVar2 = (Objective *)createCookingObjective(this);
  Vector<Objective*>::addElement(this_00,pOVar2);
  if ((*(uint *)(this + 0x18) & 3) == 0) {
    pOVar2 = (Objective *)createCafeObjective();
    Vector<Objective*>::addElement(this_00,pOVar2);
    pOVar2 = (Objective *)createSocialObjective();
  }
  else {
    pOVar2 = (Objective *)createSpendingObjective();
    Vector<Objective*>::addElement(this_00,pOVar2);
    pOVar2 = (Objective *)createServingObjective();
  }
  Vector<Objective*>::addElement(this_00,pOVar2);
  uVar3 = CCSecondsSince1970();
  *(undefined4 *)(this + 0x1c) = uVar3;
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)this + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)this);
  CRAMHoover::endTrackEvent();
  return;
}


