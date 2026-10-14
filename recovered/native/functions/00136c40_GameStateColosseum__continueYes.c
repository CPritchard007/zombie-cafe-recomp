/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136c40 GameStateColosseum::continueYes */

/* GameStateColosseum::continueYes(GameStateColosseum*) */

void GameStateColosseum::continueYes(GameStateColosseum *param_1)

{
  Task *pTVar1;
  int iVar2;
  int *piVar3;
  Character *this;
  int iVar4;
  CharacterInstance *this_00;
  int iVar5;
  float fVar6;
  int local_b0;
  char acStack_9c [128];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00136d4c + 0x136c4c);
  iVar5 = 0;
  local_1c = *piVar3;
  local_b0 = 0;
  do {
    if ((byte)param_1[iVar5 + 0x140] != 0xff) {
      this_00 = *(CharacterInstance **)
                 ((uint)(byte)param_1[iVar5 + 0x140] * 4 + *(int *)(param_1 + 0x11c));
      this = *(Character **)(this_00 + 0x8c);
      fVar6 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(this,fVar6);
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined4 *)(this_00 + 0x88) = 0;
      this_00[0x84] = (CharacterInstance)0x1;
      CharacterInstance::clearTasks();
      pTVar1 = (Task *)operator_new(0x2c);
      iVar4 = DAT_00136d50;
      *(undefined4 *)(pTVar1 + 0xc) = 0;
      *(undefined4 *)(pTVar1 + 0x18) = 0;
      iVar4 = *(int *)(iVar4 + 0x136cb0);
      *(undefined4 *)(pTVar1 + 0x14) = 0;
      *(CharacterInstance **)(pTVar1 + 0x20) = this_00;
      *(int *)pTVar1 = iVar4 + 8;
      *(Task **)(pTVar1 + 0x10) = pTVar1 + 8;
      iVar4 = DAT_00136d54;
      pTVar1[4] = (Task)0x0;
      pTVar1[5] = (Task)0x0;
      iVar2 = **(int **)(iVar4 + 0x136cc8) + 1;
      **(int **)(iVar4 + 0x136cc8) = iVar2;
      iVar4 = DAT_00136d58;
      *(int *)(pTVar1 + 0x1c) = iVar2;
      iVar4 = *(int *)(iVar4 + 0x136cda);
      *(undefined4 *)(pTVar1 + 0x24) = 1;
      *(int *)pTVar1 = iVar4 + 8;
      pTVar1[0x28] = (Task)0x0;
      CharacterInstance::addTask(this_00,pTVar1);
      this[0x44] = (Character)0x4;
      local_b0 = local_b0 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),local_b0);
  ZombieCafe::save();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_00136d5c + 0x136d28),local_b0);
  sendMalta(param_1,(char *)(DAT_00136d60 + 0x136d36),acStack_9c);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


