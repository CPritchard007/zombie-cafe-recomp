/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ff8b8 PendingOrderDialog::setSendFood */

/* PendingOrderDialog::setSendFood(FoodStack*, int) */

void __thiscall
PendingOrderDialog::setSendFood(PendingOrderDialog *this,FoodStack *param_1,int param_2)

{
  FoodStack *this_00;
  
  this_00 = *(FoodStack **)(this + 0xe8);
  *(undefined4 *)(this + 0xdc) = 1;
  if (this_00 != (FoodStack *)0x0) {
    FoodStack::~FoodStack(this_00);
    operator_delete(this_00);
  }
  *(FoodStack **)(this + 0xe8) = param_1;
  *(int *)(this + 0xe4) = param_2;
  return;
}


