/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00144838 GameStateFriendCafe::onFeastEnded */

/* GameStateFriendCafe::onFeastEnded(GameStateFriendCafe*, FeastTask*) */

void GameStateFriendCafe::onFeastEnded(GameStateFriendCafe *param_1,FeastTask *param_2)

{
  int iVar1;
  CharacterInstance *pCVar2;
  Vector<CharacterInstance*> *this;
  float fVar3;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  pCVar2 = *(CharacterInstance **)(param_2 + 0x24);
  if (iVar1 == 3) {
    this = (Vector<CharacterInstance*> *)(param_1 + 300);
    Vector<CharacterInstance*>::indexOf(this,pCVar2);
    fVar3 = (float)__floatsisf();
    Vector<float>::removeElement((Vector<float> *)(param_1 + 0x10c),fVar3);
    pCVar2 = *(CharacterInstance **)(param_2 + 0x24);
  }
  else {
    if (pCVar2 == *(CharacterInstance **)(param_1 + 0x128)) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      goto LAB_00144896;
    }
    this = (Vector<CharacterInstance*> *)(param_1 + 0x138);
  }
  iVar1 = Vector<CharacterInstance*>::indexOf(this,pCVar2);
  Vector<CharacterInstance*>::removeElementAt(this,iVar1);
LAB_00144896:
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  else if (param_1[0xc3] == (GameStateFriendCafe)0x0) {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x44) = 1;
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0x144),*(CharacterInstance **)(param_2 + 0x24)
            );
  return;
}


