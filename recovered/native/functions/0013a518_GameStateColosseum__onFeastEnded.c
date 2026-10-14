/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013a518 GameStateColosseum::onFeastEnded */

/* GameStateColosseum::onFeastEnded(GameStateColosseum*, FeastTask*) */

void GameStateColosseum::onFeastEnded(GameStateColosseum *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  if (iVar1 == 3) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0x108),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0x108),iVar1);
  }
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x120),*(CharacterInstance **)(param_2 + 0x24)
            );
  return;
}


