/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018448c GameStateRaid::onFeastEnded */

/* GameStateRaid::onFeastEnded(GameStateRaid*, FeastTask*) */

undefined8 GameStateRaid::onFeastEnded(GameStateRaid *param_1,FeastTask *param_2)

{
  int iVar1;
  Vector<CharacterInstance*> *this;
  int iVar2;
  FeastTask *local_1c;
  
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar1 == 3) {
    this = (Vector<CharacterInstance*> *)(param_1 + 0xc4);
    local_1c = *(FeastTask **)(param_1 + 200);
    for (iVar1 = 0; iVar1 <= (int)local_1c; iVar1 = iVar1 + 1) {
      if (*(int *)(iVar1 * 4 + *(int *)(param_1 + 0xcc)) == iVar2) goto LAB_001844f4;
    }
  }
  else {
    iVar1 = 0;
    if (iVar2 == *(int *)(param_1 + 0xf8)) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      local_1c = param_2;
      goto LAB_001844f8;
    }
    this = (Vector<CharacterInstance*> *)(param_1 + 0xb8);
    local_1c = *(FeastTask **)(param_1 + 0xbc);
    for (; iVar1 <= (int)local_1c; iVar1 = iVar1 + 1) {
      if (*(int *)(iVar1 * 4 + *(int *)(param_1 + 0xc0)) == iVar2) goto LAB_001844f4;
    }
  }
  iVar1 = -1;
LAB_001844f4:
  Vector<CharacterInstance*>::removeElementAt(this,iVar1);
LAB_001844f8:
  if (param_2[5] == (FeastTask)0x0) {
    CharacterInstance::startFading(*(CharacterInstance **)(param_2 + 0x24));
  }
  Vector<CharacterInstance*>::addElement
            ((Vector<CharacterInstance*> *)(param_1 + 0xfc),*(CharacterInstance **)(param_2 + 0x24))
  ;
  return CONCAT44(local_1c,param_1);
}


