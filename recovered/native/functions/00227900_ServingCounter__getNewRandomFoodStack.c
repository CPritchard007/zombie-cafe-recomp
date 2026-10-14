/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227900 ServingCounter::getNewRandomFoodStack */

/* ServingCounter::getNewRandomFoodStack(bool) */

int __thiscall ServingCounter::getNewRandomFoodStack(ServingCounter *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 100);
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(this + 0x70);
    iVar2 = 0;
    if ((iVar3 != -1) && (iVar2 = *(int *)(iVar3 * 4 + *(int *)(this + 0x74)), param_1)) {
      iVar1 = iVar1 - *(int *)(iVar2 + 4);
      *(int *)(this + 100) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*(int *)this + 0x20))(this);
      }
      this[0x78] = (ServingCounter)0x1;
      Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x6c),iVar3);
    }
  }
  return iVar2;
}


