/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120658 GameStateCafe::completeStoreSale */

/* GameStateCafe::completeStoreSale(GameStateCafe*) */

undefined8 GameStateCafe::completeStoreSale(GameStateCafe *param_1)

{
  ServingCounter *this;
  FoodStack *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ServingCounter *this_00;
  int iVar5;
  int iVar6;
  
  this_00 = *(ServingCounter **)(param_1 + 0x40);
  if (*(char *)(*(int *)(this_00 + 0x38) + 0x44) == '\x02') {
    while (pFVar1 = (FoodStack *)ServingCounter::getNewRandomFoodStack(this_00,true),
          pFVar1 != (FoodStack *)0x0) {
      this = (ServingCounter *)
             Cafe::getAppropriateCounterForDish
                       (*(Cafe **)(param_1 + 0x14),(uint)*(ushort *)pFVar1,0);
      ServingCounter::addFood(this,pFVar1);
    }
  }
  iVar4 = DAT_00120704;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x34);
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0x38) + 0x38) != '\0') {
    iVar5 = **(int **)(DAT_00120700 + 0x12069a) * iVar5;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + DAT_00120704));
  uVar3 = __floatsisf(iVar5);
  uVar3 = __mulsf3(uVar3,**(undefined4 **)(DAT_00120708 + 0x1206b6));
  __addsf3(uVar2,uVar3);
  uVar3 = __fixsfsi();
  *(undefined4 *)(iVar6 + iVar4) = uVar3;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x38);
  if (*(char *)(iVar4 + 0x44) == '\x0e') {
    resetTombstone(param_1,-*(int *)(iVar4 + 0x24));
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return CONCAT44(uVar2,param_1);
}


