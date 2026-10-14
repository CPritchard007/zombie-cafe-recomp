/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013cad0 GameStateFriendCafe::activateBombTombstone */

/* GameStateFriendCafe::activateBombTombstone(GameStateFriendCafe*) */

void GameStateFriendCafe::activateBombTombstone(GameStateFriendCafe *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CharacterInstance *pCVar3;
  int iVar4;
  float fVar5;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = DAT_0013cc38 + 0x13cae0;
  if (((0 < *(int *)(iVar1 + DAT_0013cc34)) && (*(char *)(iVar1 + DAT_0013cc3c) != '\0')) &&
     (*(char *)(iVar1 + DAT_0013cc40) == '\0')) {
    *(int *)(iVar1 + DAT_0013cc34) = *(int *)(iVar1 + DAT_0013cc34) + -1;
  }
  for (local_24 = 0; local_24 < *(int *)(param_1 + 0x13c) + 1; local_24 = local_24 + 1) {
    pCVar3 = *(CharacterInstance **)(local_24 * 4 + *(int *)(param_1 + 0x140));
    uVar2 = *(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar2,0);
    if (iVar1 != 0) {
      fVar5 = (float)__subsf3(uVar2,**(undefined4 **)(iVar4 + DAT_0013cc44));
      CharacterInstance::setCurrentEnergy(pCVar3,fVar5);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  for (local_24 = 0; local_24 < *(int *)(param_1 + 0x130) + 1; local_24 = local_24 + 1) {
    pCVar3 = *(CharacterInstance **)(local_24 * 4 + *(int *)(param_1 + 0x134));
    uVar2 = *(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar2,0);
    if (iVar1 != 0) {
      fVar5 = (float)__subsf3(uVar2,**(undefined4 **)(iVar4 + DAT_0013cc44));
      CharacterInstance::setCurrentEnergy(pCVar3,fVar5);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  pCVar3 = *(CharacterInstance **)(param_1 + 0x128);
  if (pCVar3 != (CharacterInstance *)0x0) {
    uVar2 = *(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar2,0);
    if (iVar1 != 0) {
      fVar5 = (float)__subsf3(uVar2,**(undefined4 **)(iVar4 + DAT_0013cc44));
      CharacterInstance::setCurrentEnergy(pCVar3,fVar5);
      pCVar3 = *(CharacterInstance **)(param_1 + 0x128);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  fVar5 = (float)CapcomMath::random(4);
  ZombieCafe::playEffect(iVar1,fVar5);
  beginShake(param_1,0x5a);
  return;
}


