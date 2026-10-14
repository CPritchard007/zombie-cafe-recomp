/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229c54 StealFoodTask::start */

/* StealFoodTask::start() */

undefined8 StealFoodTask::start(void)

{
  undefined4 *puVar1;
  Task *in_r0;
  int iVar2;
  CapcomOrderableList<Furniture*> *this;
  FollowTask *this_00;
  undefined4 in_r1;
  undefined4 *puVar3;
  Task *pTVar4;
  
  pTVar4 = in_r0;
  Task::start(in_r0);
  in_r0[0x44] = (Task)0x0;
  *(undefined4 *)(in_r0 + 0x34) = 0;
  iVar2 = Cafe::getFoodStackStockSize(*(Cafe **)(in_r0 + 0x28));
  if (0 < iVar2) {
    this = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList
                     (*(Cafe **)(in_r0 + 0x28),'\x02',(int)*(short *)(*(int *)(in_r0 + 0x20) + 0x2c)
                     );
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    while( true ) {
      do {
        puVar3 = *(undefined4 **)(this + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          puVar1 = puVar3 + 2;
          puVar3 = (undefined4 *)*puVar3;
          *(undefined4 *)(this + 0x10) = *puVar1;
        }
        *(undefined4 **)(in_r0 + 0x2c) = puVar3;
        if (puVar3 == (undefined4 *)0x0) goto LAB_00229cdc;
      } while (puVar3[0x19] == 0);
      this_00 = (FollowTask *)operator_new(0x50);
      pTVar4 = (Task *)0x0;
      in_r1 = 0;
      FollowTask::FollowTask
                (this_00,*(CharacterInstance **)(in_r0 + 0x20),*(CafeObject **)(in_r0 + 0x2c),
                 *(Cafe **)(in_r0 + 0x28),'\0',false);
      *(FollowTask **)(in_r0 + 0x40) = this_00;
      (**(code **)(*(int *)this_00 + 8))(this_00);
      iVar2 = (**(code **)(**(int **)(in_r0 + 0x40) + 0x34))();
      if (iVar2 != 0) break;
      if (*(char *)((int)*(int **)(in_r0 + 0x40) + 5) != '\0') break;
      (**(code **)(**(int **)(in_r0 + 0x40) + 4))();
      *(undefined4 *)(in_r0 + 0x40) = 0;
    }
LAB_00229cdc:
    CapcomOrderableList<Furniture*>::removeAll(this);
    operator_delete(this);
  }
  if (*(int *)(in_r0 + 0x40) == 0) {
    Task::finish(in_r0,false);
  }
  return CONCAT44(in_r1,pTVar4);
}


