/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe328 ObjectiveSystem::orderFood */

/* ObjectiveSystem::orderFood() */

void __thiscall ObjectiveSystem::orderFood(ObjectiveSystem *this)

{
  int iVar1;
  int iVar2;
  Objective *this_00;
  
  iVar1 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)this + DAT_001fe370),'S')
  ;
  iVar2 = 0;
  if (iVar1 != 0) {
    for (; iVar2 < *(int *)(this + 8) + 1; iVar2 = iVar2 + 1) {
      this_00 = *(Objective **)(iVar2 * 4 + *(int *)(this + 0xc));
      if ((*(short *)this_00 == 9) &&
         (iVar1 = isObjectiveProgressComplete(this,this_00), iVar1 == 0)) {
        Objective::addCompletion(this_00,1);
      }
    }
  }
  return;
}


