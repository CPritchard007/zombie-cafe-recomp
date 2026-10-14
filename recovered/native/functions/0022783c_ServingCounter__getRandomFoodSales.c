/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022783c ServingCounter::getRandomFoodSales */

/* ServingCounter::getRandomFoodSales(int) */

int __thiscall ServingCounter::getRandomFoodSales(ServingCounter *this,int param_1)

{
  short sVar1;
  Recipe *this_00;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  FoodStack *pFVar5;
  int iVar6;
  int iVar7;
  int local_28;
  
  local_28 = *(int *)(this + 100);
  if (local_28 != 0) {
    iVar7 = 0;
    local_28 = 0;
    while (iVar7 < param_1) {
      iVar3 = *(int *)(this + 0x70);
      if ((iVar3 < 0) ||
         (pFVar5 = *(FoodStack **)(iVar3 * 4 + *(int *)(this + 0x74)), pFVar5 == (FoodStack *)0x0))
      break;
      iVar6 = param_1 - iVar7;
      if (*(int *)(pFVar5 + 4) < param_1 - iVar7) {
        iVar6 = *(int *)(pFVar5 + 4);
      }
      iVar7 = iVar7 + iVar6;
      *(int *)(this + 100) = *(int *)(this + 100) - iVar6;
      this_00 = (Recipe *)FoodStack::getRecipe(pFVar5);
      iVar2 = Recipe::getSellPrice(this_00,(uchar)pFVar5[8]);
      local_28 = local_28 + iVar6 * iVar2;
      if (iVar6 < *(int *)(pFVar5 + 4)) {
        *(int *)(pFVar5 + 4) = *(int *)(pFVar5 + 4) - iVar6;
      }
      else {
        sVar1 = *(short *)pFVar5;
        pFVar5 = (FoodStack *)
                 Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x6c),iVar3);
        if (pFVar5 != (FoodStack *)0x0) {
          FoodStack::~FoodStack(pFVar5);
          operator_delete(pFVar5);
        }
        if ((*(int *)(this + 0x3c) != 0) && (**(short **)(*(int *)(this + 0x3c) + 100) == sVar1)) {
          if ((*(int *)(this + 100) == 0) || (*(int *)(this + 0x70) < 0)) {
            (**(code **)(*(int *)this + 0x20))(this);
          }
          else {
            puVar4 = *(ushort **)(*(int *)(this + 0x70) * 4 + *(int *)(this + 0x74));
            attach(this,(uint)*puVar4,(uint)(byte)puVar4[4]);
          }
        }
      }
    }
    this[0x78] = (ServingCounter)0x1;
  }
  return local_28;
}


