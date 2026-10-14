/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012c284 GameStateCafe::giveFreeFood_ex */

/* GameStateCafe::giveFreeFood_ex() */

void __thiscall GameStateCafe::giveFreeFood_ex(GameStateCafe *this)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  FoodStack *this_00;
  MagicFridgeDialog *this_01;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ZombieCafe *pZVar12;
  Recipe *pRVar13;
  int local_7c;
  int local_74;
  undefined2 local_68;
  undefined2 local_64;
  Vector<RecipeAndVariant> aVStack_60 [8];
  int local_58;
  Vector<int> aVStack_54 [4];
  int local_50;
  int *local_4c;
  undefined4 local_48 [5];
  Recipe aRStack_34 [22];
  byte local_1e;
  
  iVar11 = DAT_0012c4e8 + 0x12c290;
  Vector<RecipeAndVariant>::Vector(aVStack_60);
  Vector<int>::Vector(aVStack_54);
  local_74 = 0;
  iVar10 = 0;
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(*(int *)(this + 0xc) + DAT_0012c4f0);
      iVar9 = iVar9 + 1) {
    local_7c = 1;
    do {
      pZVar12 = *(ZombieCafe **)(this + 0xc);
      iVar3 = ZombieCafe::isRecipeUnlocked(pZVar12,iVar9,(uchar)local_7c);
      if (iVar3 != 0) {
        Recipe::Recipe(aRStack_34,(Recipe *)(*(int *)(pZVar12 + 0x4e8) + iVar9 * 0x1c));
        iVar3 = *(int *)(*(int *)(this + 0xc) + 0x680) - (uint)local_1e;
        uVar4 = iVar3 >> 0x1f;
        iVar3 = **(int **)(iVar11 + DAT_0012c4ec) - (iVar3 + uVar4 ^ uVar4);
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar10 = iVar10 + (uint)local_1e * iVar3;
        Vector<int>::addElement(aVStack_54,iVar10);
        local_68 = CONCAT11((uchar)local_7c,(char)iVar9);
        Vector<RecipeAndVariant>::addElement(aVStack_60,local_68);
        String::~String((String *)aRStack_34);
        local_74 = local_74 + 1;
      }
      local_7c = local_7c + 1;
    } while (local_7c != 10);
  }
  if (local_74 < 5) {
    pRVar13 = (Recipe *)local_48;
    local_48[0] = *(undefined4 *)(DAT_0012c4f4 + 0x12c360);
    local_48[1] = *(undefined4 *)(DAT_0012c4f4 + 0x12c364);
    local_48[2] = *(undefined4 *)(DAT_0012c4f4 + 0x12c368);
    local_48[3] = *(undefined4 *)(DAT_0012c4f4 + 0x12c36c);
    local_48[4] = *(undefined4 *)(DAT_0012c4f4 + 0x12c370);
    do {
      iVar3 = *(int *)pRVar13;
      pRVar13 = pRVar13 + 4;
      pZVar12 = *(ZombieCafe **)(this + 0xc);
      iVar9 = ZombieCafe::isRecipeUnlocked(pZVar12,iVar3,'\x01');
      if (iVar9 == 0) {
        Recipe::Recipe(aRStack_34,(Recipe *)(*(int *)(pZVar12 + 0x4e8) + iVar3 * 0x1c));
        iVar9 = *(int *)(*(int *)(this + 0xc) + 0x680) - (uint)local_1e;
        uVar4 = iVar9 >> 0x1f;
        iVar9 = **(int **)(iVar11 + DAT_0012c4ec) - (iVar9 + uVar4 ^ uVar4);
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        iVar10 = iVar10 + iVar9 * (uint)local_1e;
        Vector<int>::addElement(aVStack_54,iVar10);
        local_7c._0_1_ = (undefined1)iVar3;
        local_64 = CONCAT11(1,(undefined1)local_7c);
        Vector<RecipeAndVariant>::addElement(aVStack_60,local_64);
        String::~String((String *)aRStack_34);
      }
    } while (pRVar13 != aRStack_34);
  }
  iVar9 = CapcomMath::random(iVar10);
  piVar5 = local_4c;
  for (iVar10 = 0; iVar10 < local_50 + 1; iVar10 = iVar10 + 1) {
    iVar3 = *piVar5;
    piVar5 = piVar5 + 1;
    if (iVar9 < iVar3) goto LAB_0012c3f4;
  }
  iVar10 = 0;
LAB_0012c3f4:
  pbVar7 = (byte *)(local_58 + iVar10 * 2);
  bVar1 = *pbVar7;
  bVar2 = pbVar7[1];
  iVar9 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc));
  if (iVar9 != 0) {
    iVar9 = *(int *)(this + 0xc);
    this_00 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(this_00,bVar1,bVar2);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar9 + DAT_0012c4f8),this_00);
  }
  if (*(MagicFridgeDialog **)(this + 0x120) == (MagicFridgeDialog *)0x0) {
    this_01 = (MagicFridgeDialog *)operator_new(0x9c);
    MagicFridgeDialog::MagicFridgeDialog(this_01,(uint)bVar1,(uint)bVar2,0);
    *(MagicFridgeDialog **)(this + 0x120) = this_01;
    iVar9 = *(int *)(*(int *)(this + 0xc) + 0x10);
    (**(code **)(*(int *)this_01 + 0x14))
              (this_01,(iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1,(int)(short)iVar9 / 2);
    (**(code **)(**(int **)(this + 0x120) + 0x1c))(*(int **)(this + 0x120),0x12);
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x120),(int)**(char **)(iVar11 + DAT_0012c4fc));
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
  if (local_4c != (int *)0x0) {
    operator_delete__(local_4c);
  }
  Vector<RecipeAndVariant>::~Vector(aVStack_60);
  return;
}


