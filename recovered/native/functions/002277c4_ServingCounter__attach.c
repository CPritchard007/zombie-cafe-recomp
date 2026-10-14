/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002277c4 ServingCounter::attach */

/* ServingCounter::attach(int, int) */

void __thiscall ServingCounter::attach(ServingCounter *this,int param_1,int param_2)

{
  int iVar1;
  Food *this_00;
  code *pcVar2;
  FoodStack aFStack_3c [40];
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x7e8);
  (**(code **)(*(int *)this + 0x20))(this);
  FoodStack::FoodStack(aFStack_3c,(uchar)param_1,(uchar)param_2);
  pcVar2 = *(code **)(*(int *)this + 0x1c);
  this_00 = (Food *)operator_new(0x70);
  Food::Food(this_00,*(FurnitureData **)
                      (**(int **)(DAT_00227838 + 0x227804) * 4 + *(int *)(iVar1 + 0x94)),aFStack_3c,
             '\0');
  (*pcVar2)(this,this_00);
  FoodStack::~FoodStack(aFStack_3c);
  return;
}


