/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118270 GameStateCafe::onAttackHit */

/* GameStateCafe::onAttackHit(GameStateCafe*, AttackTask*) */

void GameStateCafe::onAttackHit(GameStateCafe *param_1,AttackTask *param_2)

{
  undefined4 uVar1;
  CharacterInstance *this;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x20);
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_00118334),'\x05',true);
  local_20 = 0;
  local_24 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x2c) + 1; iVar3 = iVar3 + 1) {
    this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0x30));
    iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this + 0x8c) + 0x40),0);
    if (((iVar2 == 0) &&
        (iVar2 = Cafe::isInside(*(Cafe **)(param_1 + 0x14),(int)*(short *)(this + 0x2c)), iVar2 != 0
        )) && (this[0xa9] == (CharacterInstance)0x0)) {
      CharacterInstance::stopTasks(this);
      if (*(char *)(**(int **)(this + 0x8c) + DAT_00118338) == '\0') {
        local_24 = local_24 + 1;
      }
      else {
        local_20 = local_20 + 1;
      }
      this[0xa8] = (CharacterInstance)0x1;
      this[0xa9] = (CharacterInstance)0x1;
    }
  }
  if (param_2[0x28] == (AttackTask)0x0) {
    CharacterInstance::groupScream(local_24,local_20);
    iVar2 = *(int *)(param_1 + 0xc);
    uVar1 = __subsf3(*(undefined4 *)(iVar2 + 0x688),**(undefined4 **)(DAT_0011833c + 0x118314));
    iVar3 = __aeabi_fcmpgt(uVar1,0);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    *(undefined4 *)(iVar2 + 0x688) = uVar1;
  }
  return;
}


