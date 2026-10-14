/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4a58 FindSeatTask::start */

/* FindSeatTask::start() */

undefined8 FindSeatTask::start(void)

{
  Furniture *pFVar1;
  Task *in_r0;
  CapcomOrderableList<Furniture*> *this;
  int iVar2;
  FollowTask *this_00;
  undefined4 in_r1;
  Furniture *pFVar3;
  Task *pTVar4;
  
  pTVar4 = in_r0;
  Task::start(in_r0);
  this = (CapcomOrderableList<Furniture*> *)
         Cafe::createDistanceSortedFurnitureList
                   (*(Cafe **)(in_r0 + 0x24),'\x04',(int)*(short *)(*(int *)(in_r0 + 0x20) + 0x2c));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  iVar2 = CapcomApp::getInstance();
  TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(iVar2 + 4) + DAT_000f4b5c),'K',false);
  while( true ) {
    do {
      do {
        pFVar3 = *(Furniture **)(this + 0x10);
        if (pFVar3 != (Furniture *)0x0) {
          pFVar1 = pFVar3 + 8;
          pFVar3 = *(Furniture **)pFVar3;
          *(undefined4 *)(this + 0x10) = *(undefined4 *)pFVar1;
        }
        *(Furniture **)(in_r0 + 0x30) = pFVar3;
        if (pFVar3 == (Furniture *)0x0) goto LAB_000f4b26;
      } while (pFVar3[0x2e] != (Furniture)0x0);
      pFVar3 = (Furniture *)Cafe::getTableChairIsFacing(*(Cafe **)(in_r0 + 0x24),pFVar3);
      *(Furniture **)(in_r0 + 0x34) = pFVar3;
    } while (((pFVar3 == (Furniture *)0x0) ||
             (iVar2 = Cafe::tableHasCustomer(*(Cafe **)(in_r0 + 0x24),pFVar3), iVar2 != 0)) ||
            ((*(char *)(*(int *)(in_r0 + 0x34) + 0x2e) != '\0' &&
             ((iVar2 = *(int *)(*(int *)(in_r0 + 0x34) + 0x3c), iVar2 == 0 ||
              (*(int *)(iVar2 + 0x38) ==
               *(int *)(**(int **)(DAT_000f4b60 + 0xf4ac8) * 4 +
                       *(int *)(*(int *)(in_r0 + 0x24) + 0x94))))))));
    this_00 = (FollowTask *)operator_new(0x50);
    pTVar4 = (Task *)0x0;
    in_r1 = 0;
    FollowTask::FollowTask
              (this_00,*(CharacterInstance **)(in_r0 + 0x20),*(CafeObject **)(in_r0 + 0x30),
               *(Cafe **)(in_r0 + 0x24),'\0',false);
    *(FollowTask **)(in_r0 + 0x2c) = this_00;
    (**(code **)(*(int *)this_00 + 8))(this_00);
    iVar2 = (**(code **)(**(int **)(in_r0 + 0x2c) + 0x34))();
    if (iVar2 != 0) break;
    if (*(char *)((int)*(int **)(in_r0 + 0x2c) + 5) != '\0') break;
    (**(code **)(**(int **)(in_r0 + 0x2c) + 4))();
    *(undefined4 *)(in_r0 + 0x2c) = 0;
  }
LAB_000f4b26:
  CapcomOrderableList<Furniture*>::removeAll(this);
  operator_delete(this);
  if (*(int *)(in_r0 + 0x30) == 0) {
    if (in_r0[4] == (Task)0x0) {
      FUN_000f40f4(in_r0);
    }
  }
  else {
    *(undefined1 *)(*(int *)(in_r0 + 0x30) + 0x2e) = 1;
  }
  return CONCAT44(in_r1,pTVar4);
}


