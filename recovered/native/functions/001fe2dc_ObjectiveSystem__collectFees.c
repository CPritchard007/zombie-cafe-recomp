/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe2dc ObjectiveSystem::collectFees */

/* ObjectiveSystem::collectFees() */

void __thiscall ObjectiveSystem::collectFees(ObjectiveSystem *this)

{
  int iVar1;
  int iVar2;
  Objective *this_00;
  
  iVar1 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)this + DAT_001fe324),'S')
  ;
  iVar2 = 0;
  if (iVar1 != 0) {
    for (; iVar2 < *(int *)(this + 8) + 1; iVar2 = iVar2 + 1) {
      this_00 = *(Objective **)(iVar2 * 4 + *(int *)(this + 0xc));
      if ((*(short *)this_00 == 7) &&
         (iVar1 = isObjectiveProgressComplete(this,this_00), iVar1 == 0)) {
        Objective::addCompletion(this_00,1);
      }
    }
  }
  return;
}


