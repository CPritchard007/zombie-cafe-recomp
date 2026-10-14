/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002279f0 ServingCounter::~ServingCounter */

/* ServingCounter::~ServingCounter() */

ServingCounter * __thiscall ServingCounter::~ServingCounter(ServingCounter *this)

{
  FoodStack *this_00;
  
  *(int *)this = *(int *)(DAT_00227a5c + 0x2279fa) + 8;
  detach(this);
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  while (-1 < *(int *)(this + 0x70)) {
    this_00 = (FoodStack *)
              Vector<FoodStack*>::removeElementAt
                        ((Vector<FoodStack*> *)(this + 0x6c),*(int *)(this + 0x70));
    if (this_00 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(this_00);
      operator_delete(this_00);
    }
  }
  if (*(void **)(this + 0x74) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x74));
  }
  Furniture::~Furniture((Furniture *)this);
  return this;
}


