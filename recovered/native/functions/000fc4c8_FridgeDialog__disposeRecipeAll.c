/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fc4c8 FridgeDialog::disposeRecipeAll */

/* FridgeDialog::disposeRecipeAll(void*) */

void FridgeDialog::disposeRecipeAll(void *param_1)

{
  int iVar1;
  int iVar2;
  Vector<FoodStack*> *this;
  FoodStack *this_00;
  int iVar3;
  int local_34;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(short *)((int)param_1 + 0xce) = (short)*(undefined4 *)((int)param_1 + 0xe8);
  *(undefined1 *)((int)param_1 + 0xd0) = 0;
  *(undefined1 *)((int)param_1 + 0x100) = 1;
  hide((FridgeDialog *)param_1);
  iVar3 = *(int *)(*(int *)((int)param_1 + 200) + 4);
  local_34 = iVar3 << 2;
  for (iVar3 = iVar3 + 1; 0 < iVar3; iVar3 = iVar3 + -1) {
    this_00 = *(FoodStack **)(*(int *)(*(int *)((int)param_1 + 200) + 8) + local_34);
    if (this_00 != (FoodStack *)0x0) {
      FoodStack::getRecipe(this_00);
      iVar1 = ZombieCafe::isRecipeUnlocked
                        (*(ZombieCafe **)((int)param_1 + 0x60),(uint)*(ushort *)this_00,
                         (uchar)this_00[8]);
      if (iVar1 != 0) {
        String::String(aSStack_28,(String *)(this_00 + 0xc));
        iVar1 = operator==(aSStack_28,0);
        iVar2 = 1;
        if (iVar1 == 0) {
          String::String(aSStack_20,(String *)(this_00 + 0x14));
          iVar2 = operator==(aSStack_20,0);
          String::~String(aSStack_20);
        }
        String::~String(aSStack_28);
        if ((iVar2 != 0) &&
           (this = (Vector<FoodStack*> *)(*(int *)((int)param_1 + 0x60) + DAT_000fc5c8),
           iVar3 + -1 <= *(int *)(this + 4))) {
          *(undefined4 *)(*(int *)(this + 8) + local_34) = 0;
          Vector<FoodStack*>::move(this,iVar3,-1);
          *(int *)(this + 4) = *(int *)(this + 4) + -1;
        }
      }
    }
    local_34 = local_34 + -4;
  }
  *(undefined1 *)((int)param_1 + 0x100) = 0;
  refreshPage((FridgeDialog *)param_1);
  show((FridgeDialog *)param_1,false);
  return;
}


