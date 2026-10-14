/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a34f8 GameStateEventRaid::onAttackEnded */

/* GameStateEventRaid::onAttackEnded(GameStateEventRaid*, AttackTask*) */

void GameStateEventRaid::onAttackEnded(GameStateEventRaid *param_1,AttackTask *param_2)

{
  int iVar1;
  
  if ((param_2[5] != (AttackTask)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))(), iVar1 == 2)) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0xf0),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0xf0),iVar1);
    Vector<CharacterInstance*>::addElement
              ((Vector<CharacterInstance*> *)(param_1 + 0x108),
               *(CharacterInstance **)(param_2 + 0x24));
  }
  return;
}


