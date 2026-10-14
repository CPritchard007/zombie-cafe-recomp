/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bcf4 GameStateFriendCafe::activateHealthTombstone */

/* GameStateFriendCafe::activateHealthTombstone(GameStateFriendCafe*) */

void GameStateFriendCafe::activateHealthTombstone(GameStateFriendCafe *param_1)

{
  CharacterInstance *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x9d0);
  if ((((0 < iVar1) && (*(char *)(iVar3 + DAT_0013bd70) != '\0')) &&
      (iVar2 = 0x9d0, *(char *)(iVar3 + DAT_0013bd74) == '\0')) ||
     (((iVar1 = *(int *)(iVar3 + DAT_0013bd7c), 0 < iVar1 &&
       (*(char *)(iVar3 + DAT_0013bd80) != '\0')) &&
      (iVar2 = DAT_0013bd7c, *(char *)(iVar3 + DAT_0013bd84) == '\0')))) {
    *(int *)(iVar3 + iVar2) = iVar1 + -1;
  }
  iVar1 = DAT_0013bd78;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x154) + 1; iVar3 = iVar3 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0xc) + iVar1) == '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc) + DAT_0013bd88) != '\0')) {
      iVar2 = 2;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0x158));
    }
    else {
      iVar2 = 4;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0x158));
    }
    CharacterInstance::startPowerUp(this,iVar2);
  }
  return;
}


