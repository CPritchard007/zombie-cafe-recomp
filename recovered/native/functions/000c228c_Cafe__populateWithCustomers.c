/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c228c Cafe::populateWithCustomers */

/* Cafe::populateWithCustomers(GameStateRaid*) */

void __thiscall Cafe::populateWithCustomers(Cafe *this,GameStateRaid *param_1)

{
  byte bVar1;
  int iVar2;
  CapcomOrderableList<Furniture*> *this_00;
  int iVar3;
  CharacterInstance *this_01;
  undefined4 uVar4;
  int iVar5;
  FoodStack *this_02;
  int *piVar6;
  Food *this_03;
  ServingCounter *this_04;
  int extraout_r1;
  code *pcVar7;
  int iVar8;
  int local_3c;
  int local_34;
  
  iVar8 = **(int **)(DAT_000c23f0 + 0xc2298);
  iVar2 = GameStateRaid::getActualLevel(param_1);
  iVar2 = *(int *)((iVar2 + -1) * 4 + iVar8);
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  iVar8 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar3 != 0) {
    iVar8 = iVar8 + *(int *)(iVar3 + 100);
  }
  local_3c = 0;
  do {
    if (iVar2 <= local_3c) {
      CapcomOrderableList<Furniture*>::removeAll(this_00);
      operator_delete(this_00);
      return;
    }
    this_01 = (CharacterInstance *)GameStateRaid::spawnCustomer(param_1,true);
    uVar4 = arc4random();
    __aeabi_uidivmod(uVar4,0x1e);
    iVar3 = CapcomMath::random((uint)**(byte **)(DAT_000c23f4 + 0xc22ee));
    local_34 = 0;
    bVar1 = **(byte **)(DAT_000c23f8 + 0xc22fe);
    do {
      (**(code **)(*(int *)this_01 + 0x1c))(this_01,1000);
      if (((iVar8 != 0) && (iVar3 < (int)(uint)bVar1)) &&
         (iVar5 = CharacterInstance::isWaitingForFood(this_01), iVar5 != 0)) {
        iVar5 = CapcomMath::random(iVar8);
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
        while (this_04 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_00),
              this_04 != (ServingCounter *)0x0) {
          if (iVar5 < *(int *)(this_04 + 100)) {
            this_02 = (FoodStack *)ServingCounter::getNewRandomFoodServing(this_04,true);
            piVar6 = (int *)getTableChairIsFacing(this,(int)*(short *)(this_01 + 0x2c));
            pcVar7 = *(code **)(*piVar6 + 0x1c);
            iVar8 = iVar8 + -1;
            this_03 = (Food *)operator_new(0x70);
            Food::Food(this_03,*(FurnitureData **)
                                (**(int **)(DAT_000c23fc + 0xc2364) * 4 + *(int *)(this + 0x94)),
                       this_02,'\0');
            (*pcVar7)(piVar6,this_03);
            *(undefined1 *)((int)piVar6 + 0x2e) = 1;
            Vector<CharacterInstance*>::removeElement
                      ((Vector<CharacterInstance*> *)(this + 0xa4),this_01);
            if (this_02 != (FoodStack *)0x0) {
              FoodStack::~FoodStack(this_02);
              operator_delete(this_02);
            }
            break;
          }
          iVar5 = iVar5 - *(int *)(this_04 + 100);
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < extraout_r1 + 0x1e);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)this_01);
    local_3c = local_3c + 1;
  } while( true );
}


