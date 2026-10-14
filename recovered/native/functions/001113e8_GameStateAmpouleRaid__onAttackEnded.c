/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001113e8 GameStateAmpouleRaid::onAttackEnded */

/* GameStateAmpouleRaid::onAttackEnded(GameStateAmpouleRaid*, AttackTask*) */

void GameStateAmpouleRaid::onAttackEnded(GameStateAmpouleRaid *param_1,AttackTask *param_2)

{
  int iVar1;
  
  if ((param_2[5] != (AttackTask)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))(), iVar1 == 2)) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0xf4),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0xf4),iVar1);
    Vector<CharacterInstance*>::addElement
              ((Vector<CharacterInstance*> *)(param_1 + 0x10c),
               *(CharacterInstance **)(param_2 + 0x24));
  }
  return;
}


