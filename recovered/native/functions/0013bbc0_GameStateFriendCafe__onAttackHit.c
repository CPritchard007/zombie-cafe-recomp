/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bbc0 GameStateFriendCafe::onAttackHit */

/* GameStateFriendCafe::onAttackHit(GameStateFriendCafe*, AttackTask*) */

void GameStateFriendCafe::onAttackHit(GameStateFriendCafe *param_1,AttackTask *param_2)

{
  int iVar1;
  CharacterInstance *this;
  int iVar2;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x13c) + 1; iVar2 = iVar2 + 1) {
    this = *(CharacterInstance **)(iVar2 * 4 + *(int *)(param_1 + 0x140));
    iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(this + 0x8c) + 0x40),0);
    if (((iVar1 == 0) &&
        (iVar1 = Cafe::isInside(*(Cafe **)(param_1 + 0x34),(int)*(short *)(this + 0x2c)), iVar1 != 0
        )) && (this[0xa9] == (CharacterInstance)0x0)) {
      CharacterInstance::stopTasks(this);
      if (*(char *)(**(int **)(this + 0x8c) + DAT_0013bc54) == '\0') {
        local_28 = local_28 + 1;
      }
      else {
        local_24 = local_24 + 1;
      }
      this[0xa8] = (CharacterInstance)0x1;
      this[0xa9] = (CharacterInstance)0x1;
    }
  }
  if (param_2[0x28] == (AttackTask)0x0) {
    CharacterInstance::groupScream(local_28,local_24);
  }
  return;
}


