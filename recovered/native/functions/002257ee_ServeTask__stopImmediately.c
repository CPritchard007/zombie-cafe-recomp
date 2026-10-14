/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002257ee ServeTask::stopImmediately */

/* ServeTask::stopImmediately() */

void __thiscall ServeTask::stopImmediately(ServeTask *this)

{
  ServingCounter *this_00;
  FoodStack *this_01;
  void *pvVar1;
  
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 0x10))();
  }
  if ((*(ushort **)(this + 0x38) != (ushort *)0x0) &&
     (this_00 = (ServingCounter *)
                Cafe::getAppropriateCounterForDish
                          (*(Cafe **)(this + 0x28),(uint)**(ushort **)(this + 0x38),
                           (int)*(short *)(*(int *)(this + 0x20) + 0x2c)),
     this_00 != (ServingCounter *)0x0)) {
    this_01 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(this_01,**(uchar **)(this + 0x38),1,(*(uchar **)(this + 0x38))[8]);
    ServingCounter::addFood(this_00,this_01);
    pvVar1 = *(void **)(this + 0x38);
    if (pvVar1 != (void *)0x0) {
      String::~String((String *)((int)pvVar1 + 0x14));
      String::~String((String *)((int)pvVar1 + 0xc));
      operator_delete(pvVar1);
    }
    *(undefined4 *)(this + 0x38) = 0;
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
  }
  if (this[4] == (ServeTask)0x0) {
    FUN_002257c0(this);
  }
  return;
}


