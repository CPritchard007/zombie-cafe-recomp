/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001230f4 GameStateCafe::tickZombieWorkInterruptions */

/* GameStateCafe::tickZombieWorkInterruptions(long) */

void __thiscall GameStateCafe::tickZombieWorkInterruptions(GameStateCafe *this,long param_1)

{
  Character CVar1;
  uchar uVar2;
  CharacterInstance CVar3;
  ushort uVar4;
  short sVar5;
  Character *pCVar6;
  CapcomOrderableList<CharacterInstance*> *pCVar7;
  CharacterInstance *pCVar8;
  AttackTask *pAVar9;
  TaskListener *pTVar10;
  DaydreamTask *this_00;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  CharacterInstance *this_01;
  int iVar14;
  int local_24;
  
  iVar14 = DAT_001233ac + 0x123102;
  local_24 = 0;
  do {
    if (*(int *)(this + 0x20) + 1 <= local_24) {
      return;
    }
    this_01 = *(CharacterInstance **)(local_24 * 4 + *(int *)(this + 0x24));
    pCVar6 = *(Character **)(this_01 + 0x8c);
    CVar1 = pCVar6[0x44];
    if (CVar1 == (Character)0x6) {
      if (*(int *)(pCVar6 + 0x50) < 1) {
LAB_001231d2:
        iVar11 = *(int *)(this_01 + 0xac) - param_1;
        *(int *)(this_01 + 0xac) = iVar11;
        *(int *)(this_01 + 0xa4) = *(int *)(this_01 + 0xa4) - param_1;
        if (iVar11 < 1) {
          iVar11 = CharacterInstance::isRestless(this_01);
          if ((iVar11 != 0) &&
             (iVar11 = TutorialSystem::isTutorialCompleted
                                 (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001233bc),'P'),
             iVar11 != 0)) {
            CharacterInstance::stopTasks(this_01);
            pCVar7 = (CapcomOrderableList<CharacterInstance*> *)
                     Cafe::createDistanceSortedCustomerList(*(int *)(this + 0x14));
            if (0 < *(int *)(pCVar7 + 0x14)) {
              pCVar8 = (CharacterInstance *)CapcomOrderableList<CharacterInstance*>::get(pCVar7,0);
              CharacterInstance::stopTasks(this_01);
              CharacterInstance::groan(this_01);
              *(CharacterInstance **)(this_01 + 0x88) = pCVar8;
              pAVar9 = (AttackTask *)operator_new(0x40);
              AttackTask::AttackTask(pAVar9,this_01,pCVar8,*(Cafe **)(this + 0x14));
              CharacterInstance::addTask(this_01,(Task *)pAVar9);
              Task::addStartedListener
                        ((Task *)pAVar9,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_001233b0),
                         this);
              pTVar10 = (TaskListener *)operator_new(0xc);
              *pTVar10 = (TaskListener)0x2;
              uVar12 = *(undefined4 *)(iVar14 + DAT_001233b4);
              *(GameStateCafe **)(pTVar10 + 8) = this;
              *(undefined4 *)(pTVar10 + 4) = uVar12;
              CapcomLinkedList<Task::TaskListener*>::add
                        ((CapcomLinkedList<Task::TaskListener*> *)(pAVar9 + 8),pTVar10);
              Task::addFinishedListener
                        ((Task *)pAVar9,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_001233b8),
                         this);
            }
            CapcomOrderableList<CharacterInstance*>::removeAll(pCVar7);
            operator_delete(pCVar7);
          }
          *(undefined4 *)(this_01 + 0xac) = **(undefined4 **)(iVar14 + DAT_001233c0);
        }
        if (*(int *)(this_01 + 0xa4) < 1) {
          pCVar6 = *(Character **)(this_01 + 0x8c);
          uVar4 = *(ushort *)(*(int *)pCVar6 + DAT_001233c4);
          iVar11 = Character::getAdditionFocus(pCVar6);
          iVar13 = **(int **)(iVar14 + DAT_001233c8);
          sVar5 = __divsi3((int)(((uint)uVar4 + iVar11) * 0x10000) >> 0x10,10);
          iVar11 = CapcomMath::random(iVar13 * 2 - **(int **)(iVar14 + DAT_001233cc));
          *(int *)(this_01 + 0xa4) = sVar5 * iVar13 + iVar11;
          uVar2 = *(uchar *)(*(int *)(this_01 + 0x8c) + 0x44);
          CVar3 = this_01[0x34];
          CharacterInstance::stopTasks(this_01);
          this_00 = (DaydreamTask *)operator_new(0x38);
          DaydreamTask::DaydreamTask
                    (this_00,this_01,**(long **)(iVar14 + DAT_001233d0),*(Cafe **)(this + 0x14),
                     uVar2,(uchar)CVar3);
          CharacterInstance::addTask(this_01,(Task *)this_00);
          Task::addFinishedListener
                    ((Task *)this_00,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_001233d4),this)
          ;
        }
      }
      else {
        *(int *)(pCVar6 + 0x50) = *(int *)(pCVar6 + 0x50) - param_1;
        iVar11 = *(int *)(this_01 + 0x8c);
        if (*(int *)(iVar11 + 0x50) < 1) {
          *(undefined4 *)(iVar11 + 0x50) = 0;
          setRemainCharacter(this,this_01,false);
        }
      }
    }
    else if (CVar1 == (Character)0x4) {
      if (*(int *)(this_01 + 0x7c) == 0) {
        pCVar7 = (CapcomOrderableList<CharacterInstance*> *)
                 Cafe::createDistanceSortedCustomerList(*(int *)(this + 0x14));
        if (0 < *(int *)(pCVar7 + 0x14)) {
          pCVar8 = (CharacterInstance *)CapcomOrderableList<CharacterInstance*>::get(pCVar7,0);
          *(CharacterInstance **)(this_01 + 0x88) = pCVar8;
          pAVar9 = (AttackTask *)operator_new(0x40);
          AttackTask::AttackTask(pAVar9,this_01,pCVar8,*(Cafe **)(this + 0x14));
          CharacterInstance::addTask(this_01,(Task *)pAVar9);
          Task::addStartedListener
                    ((Task *)pAVar9,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_001233b0),this);
          pTVar10 = (TaskListener *)operator_new(0xc);
          *pTVar10 = (TaskListener)0x2;
          uVar12 = *(undefined4 *)(iVar14 + DAT_001233b4);
          *(GameStateCafe **)(pTVar10 + 8) = this;
          *(undefined4 *)(pTVar10 + 4) = uVar12;
          CapcomLinkedList<Task::TaskListener*>::add
                    ((CapcomLinkedList<Task::TaskListener*> *)(pAVar9 + 8),pTVar10);
          Task::addFinishedListener
                    ((Task *)pAVar9,*(_func_void_void_ptr_Task_ptr **)(iVar14 + DAT_001233b8),this);
        }
        CapcomOrderableList<CharacterInstance*>::removeAll(pCVar7);
        operator_delete(pCVar7);
      }
    }
    else {
      if (CVar1 != (Character)0x3) goto LAB_001231d2;
      uVar4 = *(ushort *)(*(int *)pCVar6 + DAT_001233c4);
      iVar11 = Character::getAdditionFocus(pCVar6);
      iVar13 = **(int **)(iVar14 + DAT_001233c8);
      sVar5 = __divsi3((int)(((uint)uVar4 + iVar11) * 0x10000) >> 0x10,10);
      iVar11 = CapcomMath::random(iVar13 * 2 - **(int **)(iVar14 + DAT_001233cc));
      *(int *)(this_01 + 0xa4) = sVar5 * iVar13 + iVar11;
    }
    local_24 = local_24 + 1;
  } while( true );
}


