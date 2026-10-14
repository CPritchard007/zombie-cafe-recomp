/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e474 GameStateRaid::activatePowerTombstone */

/* GameStateRaid::activatePowerTombstone(GameStateRaid*) */

void GameStateRaid::activatePowerTombstone(GameStateRaid *param_1)

{
  CharacterInstance *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + DAT_0017e4f0);
  if ((((0 < iVar1) && (*(char *)(iVar3 + DAT_0017e4f4) != '\0')) &&
      (iVar2 = DAT_0017e4f0, *(char *)(iVar3 + DAT_0017e4f8) == '\0')) ||
     (((iVar1 = *(int *)(iVar3 + DAT_0017e500), 0 < iVar1 &&
       (*(char *)(iVar3 + DAT_0017e504) != '\0')) &&
      (iVar2 = DAT_0017e500, *(char *)(iVar3 + 0x9e0) == '\0')))) {
    *(int *)(iVar3 + iVar2) = iVar1 + -1;
  }
  iVar1 = DAT_0017e4fc;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xb0) + 1; iVar3 = iVar3 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0xc) + iVar1) == '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc) + DAT_0017e508) != '\0')) {
      iVar2 = 1;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0xb4));
    }
    else {
      iVar2 = 3;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0xb4));
    }
    CharacterInstance::startPowerUp(this,iVar2);
  }
  return;
}


