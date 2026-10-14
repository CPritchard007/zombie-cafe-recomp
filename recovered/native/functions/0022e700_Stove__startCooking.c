/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e700 Stove::startCooking */

/* Stove::startCooking(unsigned char, unsigned char, Furniture*) */

undefined8 __thiscall
Stove::startCooking(Stove *this,uchar param_1,uchar param_2,Furniture *param_3)

{
  Stove SVar1;
  FoodStack *this_00;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 100);
  if (pvVar2 != (void *)0x0) {
    String::~String((String *)((int)pvVar2 + 0x14));
    String::~String((String *)((int)pvVar2 + 0xc));
    operator_delete(pvVar2);
  }
  this_00 = (FoodStack *)operator_new(0x24);
  FoodStack::FoodStack(this_00,param_1,param_2);
  *(FoodStack **)(this + 100) = this_00;
  SVar1 = (Stove)(**(code **)(*(int *)this + 0x1c))(this,param_3);
  this[0x2e] = SVar1;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return CONCAT44(param_3,(uint)param_2);
}


