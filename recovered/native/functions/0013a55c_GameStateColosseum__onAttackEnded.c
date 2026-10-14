/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013a55c GameStateColosseum::onAttackEnded */

/* GameStateColosseum::onAttackEnded(GameStateColosseum*, AttackTask*) */

void GameStateColosseum::onAttackEnded(GameStateColosseum *param_1,AttackTask *param_2)

{
  int iVar1;
  
  if ((param_2[5] != (AttackTask)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))(), iVar1 == 2)) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0x108),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0x108),iVar1);
    Vector<CharacterInstance*>::addElement
              ((Vector<CharacterInstance*> *)(param_1 + 0x120),
               *(CharacterInstance **)(param_2 + 0x24));
    if (*(ushort *)(**(int **)(*(int *)(param_2 + 0x24) + 0x8c) + DAT_0013a5d0) == DAT_0013a5d4) {
      addKillCount(param_1,10);
      *(undefined4 *)(param_1 + 0xc4) = 0x14;
    }
    else {
      addKillCount(param_1,1);
    }
    updateKillCountText(param_1);
  }
  return;
}


