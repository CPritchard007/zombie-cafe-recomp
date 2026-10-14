/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012c500 GameStateCafe::giveFreeFood */

/* GameStateCafe::giveFreeFood() */

void __thiscall GameStateCafe::giveFreeFood(GameStateCafe *this)

{
  byte bVar1;
  byte bVar2;
  ZombieCafe *this_00;
  int iVar3;
  uint uVar4;
  FoodStack *this_01;
  MagicFridgeDialog *this_02;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int local_5c;
  undefined2 local_50;
  Vector<RecipeAndVariant> aVStack_4c [8];
  int local_44;
  Vector<int> aVStack_40 [4];
  int local_3c;
  int *local_38;
  Recipe aRStack_34 [22];
  byte local_1e;
  
  Vector<RecipeAndVariant>::Vector(aVStack_4c);
  Vector<int>::Vector(aVStack_40);
  local_5c = 0;
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(*(int *)(this + 0xc) + DAT_0012c6b4);
      iVar9 = iVar9 + 1) {
    iVar10 = 0;
    do {
      this_00 = *(ZombieCafe **)(this + 0xc);
      iVar3 = ZombieCafe::isRecipeUnlocked(this_00,iVar9,(uchar)iVar10);
      if (iVar3 != 0) {
        Recipe::Recipe(aRStack_34,(Recipe *)(*(int *)(this_00 + 0x4e8) + iVar9 * 0x1c));
        iVar3 = *(int *)(*(int *)(this + 0xc) + 0x680) - (uint)local_1e;
        uVar4 = iVar3 >> 0x1f;
        iVar3 = **(int **)(DAT_0012c6b0 + 0x12c54e) - (iVar3 + uVar4 ^ uVar4);
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        local_5c = local_5c + (uint)local_1e * iVar3;
        Vector<int>::addElement(aVStack_40,local_5c);
        local_50 = CONCAT11((uchar)iVar10,(char)iVar9);
        Vector<RecipeAndVariant>::addElement(aVStack_4c,local_50);
        String::~String((String *)aRStack_34);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 10);
  }
  iVar9 = CapcomMath::random(local_5c);
  piVar5 = local_38;
  for (iVar10 = 0; iVar10 < local_3c + 1; iVar10 = iVar10 + 1) {
    iVar3 = *piVar5;
    piVar5 = piVar5 + 1;
    if (iVar9 < iVar3) goto LAB_0012c5c6;
  }
  iVar10 = 0;
LAB_0012c5c6:
  pbVar7 = (byte *)(local_44 + iVar10 * 2);
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  iVar9 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc));
  if (iVar9 != 0) {
    iVar9 = *(int *)(this + 0xc);
    this_01 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(this_01,bVar1,bVar2);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar9 + DAT_0012c6b8),this_01);
  }
  if (*(MagicFridgeDialog **)(this + 0x120) == (MagicFridgeDialog *)0x0) {
    this_02 = (MagicFridgeDialog *)operator_new(0x9c);
    MagicFridgeDialog::MagicFridgeDialog(this_02,(uint)bVar1,(uint)bVar2,0);
    *(MagicFridgeDialog **)(this + 0x120) = this_02;
    iVar9 = *(int *)(*(int *)(this + 0xc) + 0x10);
    (**(code **)(*(int *)this_02 + 0x14))
              (this_02,(iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1,(int)(short)iVar9 / 2);
    (**(code **)(**(int **)(this + 0x120) + 0x1c))(*(int **)(this + 0x120),0x12);
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x120),(int)**(char **)(DAT_0012c6bc + 0x12c64c));
    piVar5 = *(int **)(this + 0x78);
    uVar6 = *(undefined4 *)(this + 0x120);
    pcVar8 = *(code **)(*piVar5 + 0x2c);
  }
  else {
    MagicFridgeDialog::setRecipe(*(MagicFridgeDialog **)(this + 0x120),(uint)bVar1,(uint)bVar2,1);
    piVar5 = *(int **)(this + 0x120);
    uVar6 = 1;
    pcVar8 = *(code **)(*piVar5 + 0x20);
  }
  (*pcVar8)(piVar5,uVar6);
  if (local_38 != (int *)0x0) {
    operator_delete__(local_38);
  }
  Vector<RecipeAndVariant>::~Vector(aVStack_4c);
  return;
}


