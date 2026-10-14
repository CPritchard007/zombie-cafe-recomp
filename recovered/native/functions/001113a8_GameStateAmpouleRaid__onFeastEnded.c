/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001113a8 GameStateAmpouleRaid::onFeastEnded */

/* GameStateAmpouleRaid::onFeastEnded(GameStateAmpouleRaid*, FeastTask*) */

void GameStateAmpouleRaid::onFeastEnded(GameStateAmpouleRaid *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  if (iVar1 == 3) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(param_1 + 0xf4),
                       *(CharacterInstance **)(param_2 + 0x24));
    Vector<CharacterInstance*>::removeElementAt
              ((Vector<CharacterInstance*> *)(param_1 + 0xf4),iVar1);
  }
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x10c),*(CharacterInstance **)(param_2 + 0x24)
            );
  return;
}


