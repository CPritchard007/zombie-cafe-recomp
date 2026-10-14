/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe198 ObjectiveSystem::raidCafe */

/* ObjectiveSystem::raidCafe(bool) */

void __thiscall ObjectiveSystem::raidCafe(ObjectiveSystem *this,bool param_1)

{
  short sVar1;
  int iVar2;
  Objective *this_00;
  int iVar3;
  
  iVar2 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(*(int *)this + DAT_001fe1f4),'S')
  ;
  iVar3 = 0;
  if (iVar2 != 0) {
    for (; iVar3 < *(int *)(this + 8) + 1; iVar3 = iVar3 + 1) {
      this_00 = *(Objective **)(iVar3 * 4 + *(int *)(this + 0xc));
      sVar1 = *(short *)this_00;
      if (param_1) {
        if ((ushort)(sVar1 - 1U) < 2) {
LAB_001fe1d4:
          iVar2 = isObjectiveProgressComplete(this,this_00);
          if (iVar2 == 0) {
            Objective::addCompletion(this_00,1);
          }
        }
      }
      else if ((sVar1 == 0) || (sVar1 == 2)) goto LAB_001fe1d4;
    }
  }
  return;
}


