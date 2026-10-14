/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019f260 GameStateEventRaid::continueYes2 */

/* GameStateEventRaid::continueYes2(GameStateEventRaid*) */

void GameStateEventRaid::continueYes2(GameStateEventRaid *param_1)

{
  Task *pTVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  CharacterInstance *this;
  Character *this_00;
  float fVar5;
  int local_ac;
  char acStack_9c [128];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0019f368 + 0x19f26c);
  local_ac = 0;
  local_1c = *piVar3;
  do {
    if ((byte)param_1[local_ac + 0x128] != 0xff) {
      this = *(CharacterInstance **)
              ((uint)(byte)param_1[local_ac + 0x128] * 4 + *(int *)(param_1 + 0x104));
      this_00 = *(Character **)(this + 0x8c);
      fVar5 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(this_00,fVar5);
      *(undefined4 *)(this_00 + 0x50) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      this[0x84] = (CharacterInstance)0x1;
      CharacterInstance::clearTasks();
      pTVar1 = (Task *)operator_new(0x2c);
      iVar4 = DAT_0019f36c;
      *(undefined4 *)(pTVar1 + 0xc) = 0;
      *(undefined4 *)(pTVar1 + 0x18) = 0;
      iVar4 = *(int *)(iVar4 + 0x19f2cc);
      *(undefined4 *)(pTVar1 + 0x14) = 0;
      *(CharacterInstance **)(pTVar1 + 0x20) = this;
      *(int *)pTVar1 = iVar4 + 8;
      *(Task **)(pTVar1 + 0x10) = pTVar1 + 8;
      iVar4 = DAT_0019f370;
      pTVar1[4] = (Task)0x0;
      pTVar1[5] = (Task)0x0;
      iVar2 = **(int **)(iVar4 + 0x19f2e4) + 1;
      **(int **)(iVar4 + 0x19f2e4) = iVar2;
      iVar4 = DAT_0019f374;
      *(int *)(pTVar1 + 0x1c) = iVar2;
      *(int *)pTVar1 = *(int *)(iVar4 + 0x19f2f6) + 8;
      *(undefined4 *)(pTVar1 + 0x24) = 1;
      pTVar1[0x28] = (Task)0x0;
      CharacterInstance::addTask(this,pTVar1);
      this_00[0x44] = (Character)0x4;
    }
    local_ac = local_ac + 1;
  } while (local_ac != 6);
  param_1[0x18] = (GameStateEventRaid)0x2;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x60),true);
  ZombieCafe::save();
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_0019f378 + 0x19f346),0);
  sendMalta(param_1,(char *)(DAT_0019f37c + 0x19f354),acStack_9c);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


