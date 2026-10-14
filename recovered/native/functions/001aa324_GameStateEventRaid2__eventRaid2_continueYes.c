/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa324 GameStateEventRaid2::eventRaid2_continueYes */

/* GameStateEventRaid2::eventRaid2_continueYes(GameStateEventRaid2*) */

void GameStateEventRaid2::eventRaid2_continueYes(GameStateEventRaid2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  Task *pTVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  CharacterInstance *this;
  int iVar8;
  int local_b4;
  int local_b0;
  char acStack_9c [128];
  int local_1c;
  
  piVar6 = *(int **)(DAT_001aa454 + 0x1aa330);
  local_b4 = 0;
  local_b0 = 0;
  local_1c = *piVar6;
  do {
    if ((byte)param_1[local_b4 + 0x148] != 0xff) {
      this = *(CharacterInstance **)
              ((uint)(byte)param_1[local_b4 + 0x148] * 4 + *(int *)(param_1 + 0x124));
      iVar8 = *(int *)(this + 0x8c);
      uVar1 = Character::getMaxEnergy();
      uVar2 = Character::getMaxEnergy();
      iVar3 = __aeabi_fcmplt(uVar1,0);
      if (iVar3 == 0) {
        iVar3 = __aeabi_fcmpgt(uVar1,uVar2);
        if (iVar3 != 0) {
          uVar1 = uVar2;
        }
      }
      else {
        uVar1 = 0;
      }
      *(undefined4 *)(iVar8 + 0x40) = uVar1;
      *(undefined4 *)(iVar8 + 0x50) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      this[0x84] = (CharacterInstance)0x1;
      CharacterInstance::clearTasks();
      pTVar4 = (Task *)operator_new(0x2c);
      iVar3 = DAT_001aa458;
      *(undefined4 *)(pTVar4 + 0xc) = 0;
      iVar3 = *(int *)(iVar3 + 0x1aa3b6);
      *(undefined4 *)(pTVar4 + 0x18) = 0;
      *(undefined4 *)(pTVar4 + 0x14) = 0;
      *(int *)pTVar4 = iVar3 + 8;
      *(Task **)(pTVar4 + 0x10) = pTVar4 + 8;
      iVar3 = DAT_001aa45c;
      *(CharacterInstance **)(pTVar4 + 0x20) = this;
      pTVar4[4] = (Task)0x0;
      piVar7 = *(int **)(iVar3 + 0x1aa3ce);
      pTVar4[5] = (Task)0x0;
      iVar5 = *piVar7 + 1;
      *piVar7 = iVar5;
      iVar3 = DAT_001aa460;
      *(int *)(pTVar4 + 0x1c) = iVar5;
      *(int *)pTVar4 = *(int *)(iVar3 + 0x1aa3e0) + 8;
      *(undefined4 *)(pTVar4 + 0x24) = 1;
      pTVar4[0x28] = (Task)0x0;
      CharacterInstance::addTask(this,pTVar4);
      *(undefined1 *)(iVar8 + 0x44) = 4;
      local_b0 = local_b0 + 1;
    }
    local_b4 = local_b4 + 1;
  } while (local_b4 != 6);
  ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),local_b0);
  ZombieCafe::save();
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_001aa464 + 0x1aa430),local_b0);
  sendMalta(param_1,(char *)(DAT_001aa468 + 0x1aa43e),acStack_9c);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


