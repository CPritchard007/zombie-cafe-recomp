/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00130228 GameStateCafe::prepareNotifications */

/* GameStateCafe::prepareNotifications() */

void __thiscall GameStateCafe::prepareNotifications(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *pCVar1;
  int iVar2;
  undefined4 uVar3;
  Stove *this_00;
  Furniture *pFVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar11;
  int local_84;
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  CapcomDate aCStack_28 [8];
  String aSStack_20 [12];
  
  iVar9 = DAT_001305b4;
  String::String(aSStack_70,0);
  String::String(aSStack_68,0);
  pCVar1 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x01',0);
  iVar2 = DAT_001305b8;
  *(undefined4 *)(pCVar1 + 0x10) = *(undefined4 *)(pCVar1 + 8);
  *(undefined4 *)(*(int *)(this + 0xc) + iVar2 + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_001305bc + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_001305c0 + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0xc) + 0xbe4) = 0xffffffff;
  while (this_00 = (Stove *)CapcomOrderableList<Furniture*>::nextItem(pCVar1),
        this_00 != (Stove *)0x0) {
    if ((((this_00[0x2e] != (Stove)0x0) && (*(int *)(this_00 + 0x7c) != 0)) &&
        (iVar2 = Stove::isDoneCooking(this_00), iVar2 == 0)) &&
       (iVar2 = Stove::isBurned(this_00), iVar2 == 0)) {
      iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this_00 + 100));
      iVar5 = *(int *)(this_00 + 0x70);
      uVar6 = *(undefined4 *)(**(int **)(*(int *)(this_00 + 0x7c) + 0x8c) + 0xb30);
      uVar7 = *(undefined4 *)(*(int *)(this_00 + 0x38) + 0x60);
      CapcomDate::now((CapcomDate *)&local_48);
      uVar3 = __floatsisf(iVar2 * 1000 - iVar5);
      uVar6 = __mulsf3(uVar6,uVar7);
      __divsf3(uVar3,uVar6);
      uVar3 = __fixsfsi();
      __divsi3(uVar3,1000);
      CapcomDate::addSeconds((int)&local_48);
      Vector<CapcomDate>::addElement(*(int *)(this + 0xc) + DAT_001305b8,local_48,local_44);
      iVar2 = *(int *)(this + 0xc);
      FoodStack::getRecipe(*(FoodStack **)(this_00 + 100));
      Recipe::getFullName((char)&stack0xffffffec + 0xb4);
      Vector<String>::elementAt((int)aSStack_58);
      String::operator+(aSStack_50,aSStack_60,aSStack_58);
      Vector<String>::addElement((Vector<String> *)(iVar2 + DAT_001305bc),aSStack_50);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
    }
    if (((this_00[0x2e] != (Stove)0x0) && (iVar2 = Stove::isBurned(this_00), iVar2 == 0)) &&
       (iVar2 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this_00 + 100)),
       **(int **)(iVar9 + 0x130240 + DAT_001305c8) <= iVar2)) {
      uVar3 = Stove::burnTimeRemaining(this_00);
      Stove::cookTimeRemaining(this_00);
      CapcomDate::now((CapcomDate *)&local_48);
      __divsi3(uVar3,1000);
      CapcomDate::addSeconds((int)&local_48);
      Vector<CapcomDate>::addElement(*(int *)(this + 0xc) + DAT_001305c0,local_48,local_44);
      iVar2 = *(int *)(this + 0xc);
      FoodStack::getRecipe(*(FoodStack **)(this_00 + 100));
      Recipe::getFullName((char)&stack0xffffffec + 0xd4);
      Vector<String>::elementAt((int)aSStack_38);
      String::operator+(aSStack_30,aSStack_40,aSStack_38);
      Vector<String>::addElement((Vector<String> *)(iVar2 + 0xbe0),aSStack_30);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
    }
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar1);
  operator_delete(pCVar1);
  pCVar1 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x04',0);
  *(undefined4 *)(pCVar1 + 0x10) = *(undefined4 *)(pCVar1 + 8);
  local_84 = 0;
  while (pFVar4 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar1),
        pFVar4 != (Furniture *)0x0) {
    iVar2 = Cafe::getTableChairIsFacing(*(Cafe **)(this + 0x14),pFVar4);
    local_84 = local_84 + (uint)(iVar2 != 0);
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar1);
  operator_delete(pCVar1);
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x20) + 1; iVar2 = iVar2 + 1) {
  }
  fVar10 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(this + 0xc));
  iVar2 = customerEntryRate(this,fVar10);
  uVar3 = customerNotServedProbability(this,extraout_s0,iVar2,extraout_s1);
  uVar11 = customerDepartureRate(this,extraout_s0_00,extraout_s1_00);
  uVar6 = cafeFullProbability(this,local_84,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  iVar5 = Cafe::getFoodStackStockSize(*(Cafe **)(this + 0x14));
  iVar8 = *(int *)(this + 0xc);
  CapcomDate::now(aCStack_28);
  memcpy((void *)(iVar8 + DAT_001305d8),aCStack_28,7);
  if (iVar5 == 0) {
    String::operator=((String *)(*(int *)(this + 0xc) + DAT_001305e4),0);
  }
  else {
    iVar8 = *(int *)(this + 0xc) + DAT_001305d8;
    uVar7 = __floatsisf(iVar5);
    uVar6 = __subsf3(0x3f800000,uVar6);
    uVar6 = __mulsf3(iVar2,uVar6);
    uVar3 = __subsf3(0x3f800000,uVar3);
    uVar3 = __mulsf3(uVar6,uVar3);
    __divsf3(uVar7,uVar3);
    __fixsfsi();
    uVar3 = __floatsisf();
    __divsf3(uVar3,**(undefined4 **)(iVar9 + 0x130240 + DAT_001305dc));
    uVar3 = __fixsfsi();
    __divsi3(uVar3,1000);
    CapcomDate::addSeconds(iVar8);
    iVar9 = *(int *)(this + 0xc);
    Vector<String>::elementAt((int)aSStack_20);
    String::operator=((String *)(iVar9 + DAT_001305e4),aSStack_20);
    String::~String(aSStack_20);
  }
  String::~String(aSStack_68);
  String::~String(aSStack_70);
  return;
}


