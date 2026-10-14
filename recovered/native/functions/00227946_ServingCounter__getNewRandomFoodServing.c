/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227946 ServingCounter::getNewRandomFoodServing */

/* ServingCounter::getNewRandomFoodServing(bool) */

undefined8 __thiscall ServingCounter::getNewRandomFoodServing(ServingCounter *this,bool param_1)

{
  FoodStack *this_00;
  int iVar1;
  ushort *puVar2;
  uchar *puVar3;
  FoodStack *this_01;
  int iVar4;
  
  this_01 = *(FoodStack **)(this + 100);
  if (this_01 != (FoodStack *)0x0) {
    iVar4 = *(int *)(this + 0x70);
    if (iVar4 == -1) {
      this_01 = (FoodStack *)0x0;
    }
    else {
      puVar3 = *(uchar **)(iVar4 * 4 + *(int *)(this + 0x74));
      this_01 = (FoodStack *)operator_new(0x24);
      FoodStack::FoodStack(this_01,*puVar3,puVar3[8]);
      *(undefined4 *)(this_01 + 4) = 1;
      if (param_1) {
        *(int *)(this + 100) = *(int *)(this + 100) + -1;
        iVar1 = *(int *)(puVar3 + 4);
        *(int *)(puVar3 + 4) = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          this_00 = (FoodStack *)
                    Vector<FoodStack*>::removeElementAt((Vector<FoodStack*> *)(this + 0x6c),iVar4);
          if (this_00 != (FoodStack *)0x0) {
            FoodStack::~FoodStack(this_00);
            operator_delete(this_00);
          }
          if ((*(int *)(this + 0x3c) != 0) &&
             (**(short **)(*(int *)(this + 0x3c) + 100) == *(short *)this_01)) {
            if (*(int *)(this + 100) == 0) {
              (**(code **)(*(int *)this + 0x20))(this);
            }
            else {
              puVar2 = *(ushort **)(*(int *)(this + 0x70) * 4 + *(int *)(this + 0x74));
              attach(this,(uint)*puVar2,(uint)(byte)puVar2[4]);
            }
          }
        }
        this[0x78] = (ServingCounter)0x1;
      }
    }
  }
  return CONCAT44(this,this_01);
}


