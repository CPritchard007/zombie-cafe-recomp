/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b93cc GameStateEventRaid3::onAttackEnded */

/* GameStateEventRaid3::onAttackEnded(GameStateEventRaid3*, AttackTask*) */

void GameStateEventRaid3::onAttackEnded(GameStateEventRaid3 *param_1,AttackTask *param_2)

{
  int iVar1;
  
  if ((param_2[5] != (AttackTask)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))(), iVar1 == 2)) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0x11c),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0x11c),iVar1);
    Vector<CharacterInstance*>::addElement
              ((Vector<CharacterInstance*> *)(param_1 + 0x134),
               *(CharacterInstance **)(param_2 + 0x24));
    addKillCount(param_1,1,
                 (int)*(short *)(**(int **)(*(int *)(param_2 + 0x24) + 0x8c) + DAT_001b9430));
    updateKillPointText(param_1);
    updateKillCountText(param_1);
  }
  return;
}


