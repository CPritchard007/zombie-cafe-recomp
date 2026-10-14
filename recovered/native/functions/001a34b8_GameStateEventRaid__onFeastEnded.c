/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a34b8 GameStateEventRaid::onFeastEnded */

/* GameStateEventRaid::onFeastEnded(GameStateEventRaid*, FeastTask*) */

void GameStateEventRaid::onFeastEnded(GameStateEventRaid *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  if (iVar1 == 3) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0xf0),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0xf0),iVar1);
  }
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x108),*(CharacterInstance **)(param_2 + 0x24)
            );
  return;
}


