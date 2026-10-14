/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001269a4 GameStateCafe::onFeastEnded */

/* GameStateCafe::onFeastEnded(GameStateCafe*, FeastTask*) */

void GameStateCafe::onFeastEnded(GameStateCafe *param_1,FeastTask *param_2)

{
  Vector<CharacterInstance*>::removeElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x28),*(CharacterInstance **)(param_2 + 0x24))
  ;
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  else {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x44) = 0;
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x34),*(CharacterInstance **)(param_2 + 0x24))
  ;
  return;
}


