/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bd8c GameStateFriendCafe::activatePowerTombstone */

/* GameStateFriendCafe::activatePowerTombstone(GameStateFriendCafe*) */

void GameStateFriendCafe::activatePowerTombstone(GameStateFriendCafe *param_1)

{
  CharacterInstance *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + DAT_0013be08);
  if ((((0 < iVar1) && (*(char *)(iVar3 + DAT_0013be0c) != '\0')) &&
      (iVar2 = DAT_0013be08, *(char *)(iVar3 + DAT_0013be10) == '\0')) ||
     (((iVar1 = *(int *)(iVar3 + DAT_0013be18), 0 < iVar1 &&
       (*(char *)(iVar3 + DAT_0013be1c) != '\0')) &&
      (iVar2 = DAT_0013be18, *(char *)(iVar3 + 0x9e0) == '\0')))) {
    *(int *)(iVar3 + iVar2) = iVar1 + -1;
  }
  iVar1 = DAT_0013be14;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x154) + 1; iVar3 = iVar3 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0xc) + iVar1) == '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc) + DAT_0013be20) != '\0')) {
      iVar2 = 1;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0x158));
    }
    else {
      iVar2 = 3;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0x158));
    }
    CharacterInstance::startPowerUp(this,iVar2);
  }
  return;
}


