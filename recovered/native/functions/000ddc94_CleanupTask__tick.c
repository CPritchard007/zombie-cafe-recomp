/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddc94 CleanupTask::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ddccc) */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ddfe8) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000dddfc) */
/* WARNING: Removing unreachable block (ram,0x000ddfe8) */
/* WARNING: Removing unreachable block (ram,0x000ddccc) */
/* WARNING: Removing unreachable block (ram,0x000dddfc) */
/* CleanupTask::tick(long) */

void __thiscall CleanupTask::tick(CleanupTask *this,long param_1)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  Stove *pSVar4;
  CapcomOrderableList<Furniture*> *this_00;
  FollowTask *this_01;
  int *piVar5;
  CleanupTask CVar6;
  undefined4 *puVar7;
  int iVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  
  iVar8 = DAT_000ddfb0 + 0xddca0;
  if (this[4] != (CleanupTask)0x0) {
    return;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x20) + 0x20))();
  if (iVar3 == 2) {
    Character::work(*(Character **)(*(int *)(this + 0x20) + 0x8c),param_1);
  }
  CVar6 = (CleanupTask)0x0;
  switch(this[0x24]) {
  case (CleanupTask)0x0:
    pSVar4 = *(Stove **)(this + 0x2c);
    if (pSVar4[0x2e] == (Stove)0x0) {
      CVar6 = (CleanupTask)0x0;
      break;
    }
    if (((*(char *)(*(int *)(pSVar4 + 0x38) + 0x44) == '\x01') &&
        (iVar8 = Stove::isDoneCooking(pSVar4), iVar8 != 0)) &&
       (iVar8 = Stove::isBurned(*(Stove **)(this + 0x2c)), iVar8 == 0)) {
      (**(code **)(*(int *)this + 0xc))(this);
    }
    (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),param_1);
    if (*(char *)(*(int *)(this + 0x34) + 4) == '\0') {
      if (*(char *)(*(int *)(this + 0x2c) + 0x2e) != '\0') {
        return;
      }
      CVar6 = (CleanupTask)0x0;
      break;
    }
    if ((*(char *)(*(int *)(this + 0x34) + 5) == '\0') || (this[0x38] != (CleanupTask)0x0)) {
      this[5] = (CleanupTask)0x0;
      Task::finish((Task *)this);
    }
    else {
      this[0x24] = (CleanupTask)0x1;
    }
    piVar5 = *(int **)(this + 0x34);
    if (piVar5 == (int *)0x0) goto LAB_000ddf82;
    goto LAB_000ddf7c;
  case (CleanupTask)0x1:
    pSVar4 = *(Stove **)(this + 0x2c);
    if (pSVar4[0x2e] != (Stove)0x0) {
      if (((*(char *)(*(int *)(pSVar4 + 0x38) + 0x44) == '\x01') &&
          (iVar3 = Stove::isDoneCooking(pSVar4), iVar3 != 0)) &&
         (iVar3 = Stove::isBurned(*(Stove **)(this + 0x2c)), iVar3 == 0)) {
        (**(code **)(*(int *)this + 0xc))(this);
      }
      CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false)
      ;
      CharacterInstance::turnToward
                (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x2c) + 4));
      *(undefined2 *)(this + 0x40) = **(undefined2 **)(iVar8 + DAT_000ddfb4);
      CVar6 = (CleanupTask)0x2;
      goto LAB_000ddfac;
    }
    CVar6 = (CleanupTask)0x0;
    break;
  case (CleanupTask)0x2:
    pSVar4 = *(Stove **)(this + 0x2c);
    if (pSVar4[0x2e] != (Stove)0x0) {
      if (((*(char *)(*(int *)(pSVar4 + 0x38) + 0x44) == '\x01') &&
          (iVar8 = Stove::isDoneCooking(pSVar4), iVar8 != 0)) &&
         (iVar8 = Stove::isBurned(*(Stove **)(this + 0x2c)), iVar8 == 0)) {
        (**(code **)(*(int *)this + 0xc))(this);
        return;
      }
      sVar2 = *(short *)(this + 0x40) - (short)param_1;
      *(short *)(this + 0x40) = sVar2;
      if (-1 < sVar2) {
        return;
      }
      iVar8 = arc4random();
      switch((iVar8 + (iVar8 >> 0x1f) ^ iVar8 >> 0x1f) & 7) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
      }
      iVar8 = CapcomApp::getInstance();
      ZombieCafe::playEffect(*(int *)(iVar8 + 4),extraout_s0);
      piVar5 = (int *)(**(code **)(**(int **)(this + 0x2c) + 0x20))();
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      *(undefined1 *)(*(int *)(this + 0x2c) + 0x2e) = 0;
      if (*(char *)(*(int *)(*(Stove **)(this + 0x2c) + 0x38) + 0x44) == '\x01') {
        Stove::removeStatusNote(*(Stove **)(this + 0x2c));
        *(undefined1 *)(*(int *)(this + 0x2c) + 0x83) = 0;
      }
      this[0x24] = (CleanupTask)0x3;
      *(undefined4 *)(this + 0x2c) = 0;
      return;
    }
    CVar6 = (CleanupTask)0x0;
    break;
  case (CleanupTask)0x3:
    this_00 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList
                        (*(Cafe **)(this + 0x28),'\v',(int)*(short *)(*(int *)(this + 0x20) + 0x2c))
    ;
    *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
    while( true ) {
      puVar7 = *(undefined4 **)(this_00 + 0x10);
      if (puVar7 != (undefined4 *)0x0) {
        puVar1 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
        *(undefined4 *)(this_00 + 0x10) = *puVar1;
      }
      *(undefined4 **)(this + 0x30) = puVar7;
      if (puVar7 == (undefined4 *)0x0) goto LAB_000ddf32;
      this_01 = (FollowTask *)operator_new(0x50);
      FollowTask::FollowTask
                (this_01,*(CharacterInstance **)(this + 0x20),*(CafeObject **)(this + 0x30),
                 *(Cafe **)(this + 0x28),'\x04',false);
      *(FollowTask **)(this + 0x34) = this_01;
      (**(code **)(*(int *)this_01 + 8))(this_01);
      iVar3 = (**(code **)(**(int **)(this + 0x34) + 0x34))();
      if ((iVar3 != 0) || (*(char *)((int)*(int **)(this + 0x34) + 5) != '\0')) break;
      (**(code **)(**(int **)(this + 0x34) + 4))();
      *(undefined4 *)(this + 0x34) = 0;
      iVar3 = CapcomApp::getInstance();
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(iVar3 + 4) + DAT_000ddfbc),'C',false);
    }
    iVar3 = CapcomApp::getInstance();
    piVar5 = *(int **)(**(int **)(iVar8 + DAT_000ddfb8) * 4 +
                      *(int *)(*(int *)(*(int *)(iVar3 + 4) + 0x7e8) + 0x94));
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)((short)piVar5[0xf] * 4 + *piVar5);
    fVar9 = (float)CharacterInstance::stopReplacementInAnimation
                             (*(CharacterInstance **)(this + 0x20),0);
    CharacterInstance::replaceInAnimation
              (*(CharacterInstance **)(this + 0x20),0,*(CImage **)(this + 0x3c),fVar9,'\0',false,
               false,0);
LAB_000ddf32:
    CapcomOrderableList<Furniture*>::removeAll(this_00);
    operator_delete(this_00);
    if (*(int *)(this + 0x34) == 0) {
      return;
    }
    CVar6 = (CleanupTask)0x4;
    goto LAB_000ddfac;
  case (CleanupTask)0x4:
    (**(code **)(**(int **)(this + 0x34) + 0x14))(*(int **)(this + 0x34),param_1);
    if (*(char *)(*(int *)(this + 0x34) + 4) == '\0') {
      return;
    }
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x01',0xff,false);
    piVar5 = *(int **)(this + 0x34);
    CVar6 = (CleanupTask)0x3;
    if (*(char *)((int)piVar5 + 5) != '\0') {
      CVar6 = (CleanupTask)0x5;
    }
    this[0x24] = CVar6;
LAB_000ddf7c:
    (**(code **)(*piVar5 + 4))();
LAB_000ddf82:
    *(undefined4 *)(this + 0x34) = 0;
    return;
  case (CleanupTask)0x5:
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x05',0xff,false);
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x30) + 4));
    *(undefined2 *)(this + 0x40) = **(undefined2 **)(iVar8 + DAT_000ddfb4);
    CVar6 = (CleanupTask)0x6;
LAB_000ddfac:
    this[0x24] = CVar6;
    return;
  case (CleanupTask)0x6:
    sVar2 = *(short *)(this + 0x40) - (short)param_1;
    *(short *)(this + 0x40) = sVar2;
    if (-1 < sVar2) {
      return;
    }
    iVar8 = arc4random();
    switch((iVar8 + (iVar8 >> 0x1f) ^ iVar8 >> 0x1f) & 7) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    }
    iVar8 = CapcomApp::getInstance();
    ZombieCafe::playEffect(*(int *)(iVar8 + 4),extraout_s0_00);
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + 0x20),0);
    CVar6 = (CleanupTask)0x1;
  }
  this[5] = CVar6;
  Task::finish((Task *)this);
  return;
}


