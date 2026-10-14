/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e2c4 GameStateCafe::onAttackEnded */

/* GameStateCafe::onAttackEnded(GameStateCafe*, AttackTask*) */

undefined8 GameStateCafe::onAttackEnded(GameStateCafe *param_1,AttackTask *param_2)

{
  short sVar1;
  int iVar2;
  FeastTask *this;
  TaskListener *pTVar3;
  MoveTask *this_00;
  undefined4 uVar4;
  short *psVar5;
  CharacterInstance *pCVar6;
  GameStateCafe *pGVar7;
  AttackTask *pAVar8;
  
  pCVar6 = *(CharacterInstance **)(param_2 + 0x24);
  pGVar7 = param_1;
  pAVar8 = param_2;
  if (param_2[5] == (AttackTask)0x0) {
    if (pCVar6 != (CharacterInstance *)0x0) {
      if ((*(char *)(*(int *)(pCVar6 + 0x8c) + 4) != '\x01') &&
         (iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar6 + 0x8c) + 0x40),0), iVar2 == 0)) {
        CharacterInstance::stopTasks(pCVar6);
        iVar2 = CapcomMath::random(2);
        if (iVar2 == 0) {
          psVar5 = (short *)(*(int *)(param_1 + 0x14) + 0x9a);
        }
        else {
          psVar5 = (short *)(*(int *)(param_1 + 0x14) + 0x98);
        }
        sVar1 = *psVar5;
        this_00 = (MoveTask *)operator_new(0x48);
        pCVar6 = *(CharacterInstance **)(param_2 + 0x24);
        pGVar7 = (GameStateCafe *)&DAT_00000009;
        pAVar8 = (AttackTask *)0x0;
        MoveTask::MoveTask(this_00,pCVar6,*(Cafe **)(param_1 + 0x14),(int)sVar1,'\t',false);
        CharacterInstance::addTask(pCVar6,(Task *)this_00);
      }
    }
  }
  else {
    if (*(CharacterInstance **)(param_1 + 0x54) == pCVar6) {
      CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
    }
    iVar2 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))();
    if (iVar2 == 2) {
      pCVar6 = *(CharacterInstance **)(param_2 + 0x20);
      this = (FeastTask *)operator_new(0x40);
      FeastTask::FeastTask
                (this,pCVar6,*(CharacterInstance **)(param_2 + 0x24),*(Cafe **)(param_1 + 0x14));
      CharacterInstance::addTask(pCVar6,(Task *)this);
      Task::addStartedListener
                ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(DAT_0011e3b4 + 0x11e314),param_1);
      pTVar3 = (TaskListener *)operator_new(0xc);
      *pTVar3 = (TaskListener)0x2;
      uVar4 = *(undefined4 *)(DAT_0011e3b8 + 0x11e32c);
      *(GameStateCafe **)(pTVar3 + 8) = param_1;
      *(undefined4 *)(pTVar3 + 4) = uVar4;
      CapcomLinkedList<Task::TaskListener*>::add
                ((CapcomLinkedList<Task::TaskListener*> *)(this + 8),pTVar3);
      Task::addFinishedListener
                ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(DAT_0011e3bc + 0x11e342),param_1);
    }
  }
  return CONCAT44(pAVar8,pGVar7);
}


