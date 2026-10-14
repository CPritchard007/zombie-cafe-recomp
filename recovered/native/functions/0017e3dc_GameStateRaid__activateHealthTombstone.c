/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e3dc GameStateRaid::activateHealthTombstone */

/* GameStateRaid::activateHealthTombstone(GameStateRaid*) */

void GameStateRaid::activateHealthTombstone(GameStateRaid *param_1)

{
  CharacterInstance *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x9d0);
  if ((((0 < iVar1) && (*(char *)(iVar3 + DAT_0017e458) != '\0')) &&
      (iVar2 = 0x9d0, *(char *)(iVar3 + DAT_0017e45c) == '\0')) ||
     (((iVar1 = *(int *)(iVar3 + DAT_0017e464), 0 < iVar1 &&
       (*(char *)(iVar3 + DAT_0017e468) != '\0')) &&
      (iVar2 = DAT_0017e464, *(char *)(iVar3 + DAT_0017e46c) == '\0')))) {
    *(int *)(iVar3 + iVar2) = iVar1 + -1;
  }
  iVar1 = DAT_0017e460;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xb0) + 1; iVar3 = iVar3 + 1) {
    if ((*(char *)(*(int *)(param_1 + 0xc) + iVar1) == '\0') ||
       (*(char *)(*(int *)(param_1 + 0xc) + DAT_0017e470) != '\0')) {
      iVar2 = 2;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0xb4));
    }
    else {
      iVar2 = 4;
      this = *(CharacterInstance **)(iVar3 * 4 + *(int *)(param_1 + 0xb4));
    }
    CharacterInstance::startPowerUp(this,iVar2);
  }
  return;
}


