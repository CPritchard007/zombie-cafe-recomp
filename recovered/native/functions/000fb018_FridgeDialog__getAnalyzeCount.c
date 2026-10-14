/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fb018 FridgeDialog::getAnalyzeCount */

/* FridgeDialog::getAnalyzeCount() */

int __thiscall FridgeDialog::getAnalyzeCount(FridgeDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FoodStack *this_00;
  int iVar4;
  int local_30;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar2 = *(int *)(*(int *)(this + 200) + 4);
  local_30 = 0;
  for (iVar4 = 0; iVar4 < iVar2 + 1; iVar4 = iVar4 + 1) {
    this_00 = *(FoodStack **)(iVar4 * 4 + *(int *)(*(int *)(this + 200) + 8));
    if (this_00 != (FoodStack *)0x0) {
      FoodStack::getRecipe(this_00);
      iVar1 = ZombieCafe::isRecipeUnlocked
                        (*(ZombieCafe **)(this + 0x60),(uint)*(ushort *)this_00,(uchar)this_00[8]);
      if (iVar1 != 0) {
        String::String(aSStack_28,(String *)(this_00 + 0xc));
        iVar1 = operator==(aSStack_28,0);
        iVar3 = 1;
        if (iVar1 == 0) {
          String::String(aSStack_20,(String *)(this_00 + 0x14));
          iVar3 = operator==(aSStack_20,0);
          String::~String(aSStack_20);
        }
        String::~String(aSStack_28);
        local_30 = local_30 + (uint)(iVar3 != 0);
      }
    }
  }
  return local_30;
}


