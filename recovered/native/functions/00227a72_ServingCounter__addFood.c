/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227a72 ServingCounter::addFood */

/* ServingCounter::addFood(FoodStack*) */

void __thiscall ServingCounter::addFood(ServingCounter *this,FoodStack *param_1)

{
  FoodStack *this_00;
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 0x70) + 1 <= iVar2) {
      Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this + 0x6c),param_1);
      *(int *)(this + 100) = *(int *)(this + 100) + *(int *)(param_1 + 4);
      this[0x78] = (ServingCounter)0x1;
      attach(this,(uint)*(ushort *)param_1,(uint)(byte)param_1[8]);
      return;
    }
    psVar1 = *(short **)(iVar2 * 4 + *(int *)(this + 0x74));
    if ((*(short *)param_1 == *psVar1) && (param_1[8] == *(FoodStack *)(psVar1 + 4))) break;
    iVar2 = iVar2 + 1;
  }
  *(int *)(this + 100) = *(int *)(this + 100) + *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(psVar1 + 2);
  this[0x78] = (ServingCounter)0x1;
  attach(this,(uint)*(ushort *)param_1,(uint)(byte)param_1[8]);
  this_00 = (FoodStack *)
            Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x6c),iVar2);
  if (this_00 != (FoodStack *)0x0) {
    FoodStack::~FoodStack(this_00);
    operator_delete(this_00);
  }
  Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(this + 0x6c),param_1);
  return;
}


