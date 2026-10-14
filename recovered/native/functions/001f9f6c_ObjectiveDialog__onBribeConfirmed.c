/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f9f6c ObjectiveDialog::onBribeConfirmed */

/* ObjectiveDialog::onBribeConfirmed(ObjectiveDialog*) */

void ObjectiveDialog::onBribeConfirmed(ObjectiveDialog *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_001f9fe8 + 0x1f9f78);
  L_PrintLog(pcVar4,(char *)(DAT_001f9fec + 0x1f9f7c));
  CRAMHoover::beginTrackEvent(*(char **)(*(int *)(param_1 + 0x60) + 0x840));
  ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0x60));
  CRAMHoover::endTrackEvent();
  iVar1 = DAT_001f9ff4;
  iVar2 = ObjectiveSystem::getObjectiveCount
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + DAT_001f9ff4));
  iVar3 = ObjectiveSystem::getSetProgressCompletion
                    (*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar1));
  ZombieCafe::spendToxin
            (*(ZombieCafe **)(param_1 + 0x60),(iVar2 - iVar3) * **(int **)(DAT_001f9ff8 + 0x1f9fba))
  ;
  ObjectiveSystem::completeSetProgress(*(ObjectiveSystem **)(*(int *)(param_1 + 0x60) + iVar1));
  L_PrintLog(pcVar4,(char *)(DAT_001f9ffc + 0x1f9fd4));
  Quest::runQuest(*(int *)(*(int *)(param_1 + 0x60) + 0x40),0xc,(int *)0xffffffff);
  return;
}


