/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c25d4 Cafe::populateWithCustomers */

/* Cafe::populateWithCustomers(GameStateCafe*) */

void __thiscall Cafe::populateWithCustomers(Cafe *this,GameStateCafe *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CapcomOrderableList<Furniture*> *this_00;
  int iVar5;
  CharacterInstance *this_01;
  uint uVar6;
  FoodStack *this_02;
  int *piVar7;
  Food *this_03;
  ServingCounter *this_04;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_48;
  uint local_3c;
  int local_30;
  uint local_2c;
  
  iVar1 = CapcomApp::getInstance();
  iVar12 = *(int *)(iVar1 + 4);
  iVar11 = DAT_000c27d8 + 0xc25ea;
  pbVar9 = *(byte **)(iVar11 + DAT_000c27dc);
  uVar2 = __floatsisf(*pbVar9);
  uVar3 = ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_1 + 0xc));
  uVar4 = __floatsisf((uint)**(byte **)(iVar11 + DAT_000c27e0) - (uint)*pbVar9);
  uVar3 = __mulsf3(uVar3,uVar4);
  uVar2 = __addsf3(uVar2,uVar3);
  iVar1 = 0;
  uVar10 = (uint)**(byte **)(iVar11 + DAT_000c27e4);
  uVar6 = -uVar10;
  if (uVar10 != uVar6 && !SBORROW4(uVar10,uVar6)) {
    uVar3 = arc4random(0);
    __aeabi_uidivmod(uVar3,uVar10 << 1);
    iVar1 = extraout_r1 + uVar6;
  }
  uVar3 = __floatsisf(iVar1);
  __addsf3(uVar2,uVar3);
  iVar1 = __fixsfsi();
  this_00 = (CapcomOrderableList<Furniture*> *)createDistanceSortedFurnitureList(this,'\x02',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  local_48 = 0;
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar5 != 0) {
    local_48 = local_48 + *(int *)(iVar5 + 100);
  }
  local_3c = (uint)(*(char *)(*(int *)(iVar12 + 0x590) + 0x44) == '\x01');
  iVar12 = iVar12 + DAT_000c27e8;
  for (iVar5 = 0; iVar5 < *(int *)(iVar12 + 4) + 1; iVar5 = iVar5 + 1) {
    if (*(char *)(*(int *)(iVar5 * 4 + *(int *)(iVar12 + 8)) + 0x44) == '\x01') {
      local_3c = 1;
    }
  }
  iVar12 = 0;
  do {
    if (iVar1 <= iVar12) {
      CapcomOrderableList<Furniture*>::removeAll(this_00);
      operator_delete(this_00);
      return;
    }
    this_01 = (CharacterInstance *)GameStateCafe::spawnCustomer(param_1,false);
    uVar2 = arc4random();
    __aeabi_uidivmod(uVar2,0x1e);
    local_2c = local_3c;
    if (local_3c != 0) {
      uVar6 = CapcomMath::random((uint)**(byte **)(iVar11 + DAT_000c27ec));
      local_2c = 1 - (((int)uVar6 >> 0x1f) + (uint)(**(byte **)(iVar11 + DAT_000c27f0) <= uVar6));
    }
    local_30 = 0;
    do {
      (**(code **)(*(int *)this_01 + 0x1c))(this_01,1000);
      if (((local_48 != 0) && (local_2c != 0)) &&
         (iVar5 = CharacterInstance::isWaitingForFood(this_01), iVar5 != 0)) {
        iVar5 = CapcomMath::random(local_48);
        *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
        while (this_04 = (ServingCounter *)CapcomOrderableList<Furniture*>::nextItem(this_00),
              this_04 != (ServingCounter *)0x0) {
          if (iVar5 < *(int *)(this_04 + 100)) {
            this_02 = (FoodStack *)ServingCounter::getNewRandomFoodServing(this_04,true);
            local_48 = local_48 + -1;
            piVar7 = (int *)getTableChairIsFacing(this,(int)*(short *)(this_01 + 0x2c));
            pcVar8 = *(code **)(*piVar7 + 0x1c);
            this_03 = (Food *)operator_new(0x70);
            Food::Food(this_03,*(FurnitureData **)
                                (**(int **)(iVar11 + DAT_000c27f4) * 4 + *(int *)(this + 0x94)),
                       this_02,'\0');
            (*pcVar8)(piVar7,this_03);
            *(undefined1 *)((int)piVar7 + 0x2e) = 1;
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
      local_30 = local_30 + 1;
    } while (local_30 < extraout_r1_00 + 0x1e);
    CapcomOrderableList<CafeObject*>::sort
              ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)this_01);
    iVar12 = iVar12 + 1;
  } while( true );
}


