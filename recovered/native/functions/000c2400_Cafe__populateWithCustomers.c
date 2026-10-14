/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c2400 Cafe::populateWithCustomers */

/* Cafe::populateWithCustomers(GameStateFriendCafe*) */

void __thiscall Cafe::populateWithCustomers(Cafe *this,GameStateFriendCafe *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  CapcomOrderableList<Furniture*> *this_00;
  int iVar7;
  CharacterInstance *this_01;
  int iVar8;
  FoodStack *this_02;
  int *piVar9;
  Food *this_03;
  ServingCounter *this_04;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int local_48;
  int local_3c;
  int local_34;
  
  iVar13 = DAT_000c25b8 + 0xc240e;
  pbVar11 = *(byte **)(iVar13 + DAT_000c25bc);
  uVar3 = __floatsisf(*pbVar11);
  uVar4 = GameStateFriendCafe::getModifiedRating(param_1);
  uVar5 = __floatsisf((uint)**(byte **)(iVar13 + DAT_000c25c0) - (uint)*pbVar11);
  uVar4 = __mulsf3(uVar4,uVar5);
  uVar3 = __addsf3(uVar3,uVar4);
  iVar6 = 0;
  uVar12 = (uint)**(byte **)(iVar13 + DAT_000c25c4);
  uVar2 = -uVar12;
  if (uVar12 != uVar2 && !SBORROW4(uVar12,uVar2)) {
    uVar4 = arc4random(0);
    __aeabi_uidivmod(uVar4,uVar12 << 1);
    iVar6 = extraout_r1 + uVar2;
  }
  uVar4 = __floatsisf(iVar6);
  __addsf3(uVar3,uVar4);
  iVar6 = __fixsfsi();
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  local_48 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while( true ) {
    iVar7 = CapcomOrderableList<Furniture*>::nextItem(this_00);
    if (iVar7 == 0) break;
    local_48 = local_48 + *(int *)(iVar7 + 100);
  }
  local_3c = 0;
  do {
    if (iVar6 <= local_3c) {
      CapcomOrderableList<Furniture*>::removeAll(this_00);
      operator_delete(this_00);
      return;
    }
    this_01 = (CharacterInstance *)GameStateFriendCafe::spawnCustomer(param_1,false);
    uVar3 = arc4random();
    __aeabi_uidivmod(uVar3,0x1e);
    iVar7 = CapcomMath::random((uint)**(byte **)(iVar13 + DAT_000c25c8));
    bVar1 = **(byte **)(iVar13 + DAT_000c25cc);
    local_34 = 0;
    do {
      (**(code **)(*(int *)this_01 + 0x1c))(this_01,1000);
      if (((local_48 != 0) && (iVar7 < (int)(uint)bVar1)) &&
         (iVar8 = CharacterInstance::isWaitingForFood(this_01), iVar8 != 0)) {
        iVar8 = CapcomMath::random(local_48);
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
        while (this_04 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_00),
              this_04 != (ServingCounter *)0x0) {
          if (iVar8 < *(int *)(this_04 + 100)) {
            this_02 = (FoodStack *)ServingCounter::getNewRandomFoodServing(this_04,true);
            local_48 = local_48 + -1;
            piVar9 = (int *)getTableChairIsFacing(this,(int)*(short *)(this_01 + 0x2c));
            pcVar10 = *(code **)(*piVar9 + 0x1c);
            this_03 = (Food *)operator_new(0x70);
            Food::Food(this_03,*(FurnitureData **)
                                (**(int **)(iVar13 + DAT_000c25d0) * 4 + *(int *)(this + 0x94)),
                       this_02,'\0');
            (*pcVar10)(piVar9,this_03);
            *(undefined1 *)((int)piVar9 + 0x2e) = 1;
            Vector<CharacterInstance*>::removeElement
                      ((Vector<CharacterInstance*> *)(this + 0xa4),this_01);
            if (this_02 != (FoodStack *)0x0) {
              FoodStack::~FoodStack(this_02);
              operator_delete(this_02);
            }
            break;
          }
          iVar8 = iVar8 - *(int *)(this_04 + 100);
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < extraout_r1_00 + 0x1e);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)this_01);
    local_3c = local_3c + 1;
  } while( true );
}


