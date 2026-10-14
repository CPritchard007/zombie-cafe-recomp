/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140870 GameStateFriendCafe::tickZombieWorkInterruptions */

/* GameStateFriendCafe::tickZombieWorkInterruptions(long) */

void __thiscall
GameStateFriendCafe::tickZombieWorkInterruptions(GameStateFriendCafe *this,long param_1)

{
  char cVar1;
  uchar uVar2;
  CharacterInstance CVar3;
  short sVar4;
  CapcomOrderableList<CharacterInstance*> *pCVar5;
  CharacterInstance *pCVar6;
  AttackTask *pAVar7;
  TaskListener *pTVar8;
  int iVar9;
  DaydreamTask *this_00;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  CharacterInstance *this_01;
  int iVar13;
  int local_24;
  
  iVar13 = DAT_00140ae0 + 0x140886;
  local_24 = 0;
  do {
    if (*(int *)(this + 0x28) + 1 <= local_24) {
      return;
    }
    this_01 = *(CharacterInstance **)(local_24 * 4 + *(int *)(this + 0x134));
    piVar10 = *(int **)(this_01 + 0x8c);
    cVar1 = (char)piVar10[0x11];
    if (cVar1 == '\x06') {
      if (piVar10[0x14] < 1) {
LAB_00140942:
        iVar11 = *(int *)(this_01 + 0xac) - param_1;
        *(int *)(this_01 + 0xac) = iVar11;
        *(int *)(this_01 + 0xa4) = *(int *)(this_01 + 0xa4) - param_1;
        if (iVar11 < 1) {
          iVar11 = CharacterInstance::isRestless(this_01);
          if ((iVar11 != 0) &&
             (iVar11 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00140af0),'\x16'),
             iVar11 != 0)) {
            CharacterInstance::stopTasks(this_01);
            pCVar5 = (CapcomOrderableList<CharacterInstance*> *)
                     Cafe::createDistanceSortedCustomerList(*(int *)(this + 0x34));
            if (0 < *(int *)(pCVar5 + 0x14)) {
              pCVar6 = (CharacterInstance *)CapcomOrderableList<CharacterInstance*>::get(pCVar5,0);
              CharacterInstance::stopTasks(this_01);
              CharacterInstance::groan(this_01);
              *(CharacterInstance **)(this_01 + 0x88) = pCVar6;
              pAVar7 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar7,this_01,pCVar6,*(Cafe **)(this + 0x34));
              CharacterInstance::addTask(this_01,(Task *)pAVar7);
              Task::addStartedListener
                        ((Task *)pAVar7,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00140ae4),
                         this);
              pTVar8 = (TaskListener *)operator_new(0xc);
              *pTVar8 = (TaskListener)0x2;
              uVar12 = *(undefined4 *)(iVar13 + DAT_00140ae8);
              *(GameStateFriendCafe **)(pTVar8 + 8) = this;
              *(undefined4 *)(pTVar8 + 4) = uVar12;
              CapcomLinkedList<Task::TaskListener*>::add
                        ((CapcomLinkedList<Task::TaskListener*> *)(pAVar7 + 8),pTVar8);
              Task::addFinishedListener
                        ((Task *)pAVar7,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00140aec),
                         this);
            }
            CapcomOrderableList<CharacterInstance*>::removeAll(pCVar5);
            operator_delete(pCVar5);
          }
          *(undefined4 *)(this_01 + 0xac) = **(undefined4 **)(iVar13 + DAT_00140af4);
        }
        if (*(int *)(this_01 + 0xa4) < 1) {
          iVar11 = **(int **)(iVar13 + DAT_00140af8);
          sVar4 = *(short *)(**(int **)(this_01 + 0x8c) + DAT_00140afc);
          iVar9 = CapcomMath::random(iVar11 * 2 - **(int **)(iVar13 + DAT_00140b00));
          *(int *)(this_01 + 0xa4) = sVar4 * iVar11 + iVar9;
          uVar2 = *(uchar *)(*(int *)(this_01 + 0x8c) + 0x44);
          CVar3 = this_01[0x34];
          CharacterInstance::stopTasks(this_01);
          this_00 = (DaydreamTask *)operator_new(0x38);
          DaydreamTask::DaydreamTask
                    (this_00,this_01,**(long **)(iVar13 + DAT_00140b04),*(Cafe **)(this + 0x34),
                     uVar2,(uchar)CVar3);
          CharacterInstance::addTask(this_01,(Task *)this_00);
          Task::addFinishedListener
                    ((Task *)this_00,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00140b08),this)
          ;
        }
      }
      else {
        piVar10[0x14] = piVar10[0x14] - param_1;
      }
    }
    else if (cVar1 == '\x04') {
      if (*(int *)(this_01 + 0x7c) == 0) {
        pCVar5 = (CapcomOrderableList<CharacterInstance*> *)
                 Cafe::createDistanceSortedCustomerList(*(int *)(this + 0x34));
        if (0 < *(int *)(pCVar5 + 0x14)) {
          pCVar6 = (CharacterInstance *)CapcomOrderableList<CharacterInstance*>::get(pCVar5,0);
          *(CharacterInstance **)(this_01 + 0x88) = pCVar6;
          pAVar7 = (AttackTask *)operator_new(0x40);
          AttackTask::AttackTask(pAVar7,this_01,pCVar6,*(Cafe **)(this + 0x34));
          CharacterInstance::addTask(this_01,(Task *)pAVar7);
          Task::addStartedListener
                    ((Task *)pAVar7,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00140ae4),this);
          pTVar8 = (TaskListener *)operator_new(0xc);
          *pTVar8 = (TaskListener)0x2;
          uVar12 = *(undefined4 *)(iVar13 + DAT_00140ae8);
          *(GameStateFriendCafe **)(pTVar8 + 8) = this;
          *(undefined4 *)(pTVar8 + 4) = uVar12;
          CapcomLinkedList<Task::TaskListener*>::add
                    ((CapcomLinkedList<Task::TaskListener*> *)(pAVar7 + 8),pTVar8);
          Task::addFinishedListener
                    ((Task *)pAVar7,*(_func_void_void_ptr_Task_ptr **)(iVar13 + DAT_00140aec),this);
        }
        CapcomOrderableList<CharacterInstance*>::removeAll(pCVar5);
        operator_delete(pCVar5);
      }
    }
    else {
      if (cVar1 != '\x03') goto LAB_00140942;
      sVar4 = *(short *)(*piVar10 + DAT_00140afc);
      iVar11 = **(int **)(iVar13 + DAT_00140af8);
      iVar9 = CapcomMath::random(iVar11 * 2 - **(int **)(iVar13 + DAT_00140b00));
      *(int *)(this_01 + 0xa4) = iVar11 * sVar4 + iVar9;
    }
    local_24 = local_24 + 1;
  } while( true );
}


