/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdcc8 Objective::addCompletion */

/* Objective::addCompletion(int) */

void __thiscall Objective::addCompletion(Objective *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  *(int *)(this + 4) = param_1 + iVar1;
  if (*(int *)(this + 8) < param_1 + iVar1) {
    *(int *)(this + 4) = *(int *)(this + 8);
  }
  return;
}


