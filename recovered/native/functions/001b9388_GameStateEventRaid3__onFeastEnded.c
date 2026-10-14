/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b9388 GameStateEventRaid3::onFeastEnded */

/* GameStateEventRaid3::onFeastEnded(GameStateEventRaid3*, FeastTask*) */

void GameStateEventRaid3::onFeastEnded(GameStateEventRaid3 *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  if (iVar1 == 3) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0x11c),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0x11c),iVar1);
  }
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x134),*(CharacterInstance **)(param_2 + 0x24)
            );
  return;
}


