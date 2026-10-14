/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f88c GameStateRaid::activateBombTombstone */

/* GameStateRaid::activateBombTombstone(GameStateRaid*) */

void GameStateRaid::activateBombTombstone(GameStateRaid *param_1)

{
  int iVar1;
  Character *pCVar2;
  CharacterInstance *pCVar3;
  undefined4 uVar4;
  CharacterInstance *pCVar5;
  undefined4 uVar6;
  float fVar7;
  int local_28;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((0 < *(int *)(iVar1 + DAT_0017fa0c)) && (*(char *)(iVar1 + DAT_0017fa10) != '\0')) &&
     (*(char *)(iVar1 + DAT_0017fa14) == '\0')) {
    *(int *)(iVar1 + DAT_0017fa0c) = *(int *)(iVar1 + DAT_0017fa0c) + -1;
  }
  uVar4 = **(undefined4 **)(DAT_0017fa18 + 0x17f8b6);
  uVar6 = DAT_0017fa1c;
  if (param_1[0x13] == (GameStateRaid)0x0) {
    if ((param_1[0x15] == (GameStateRaid)0x0) && (param_1[0x16] == (GameStateRaid)0x0))
    goto LAB_0017f8dc;
    uVar6 = 0x3fc00000;
  }
  uVar4 = __mulsf3(uVar4,uVar6);
LAB_0017f8dc:
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0xbc) + 1; local_28 = local_28 + 1) {
    pCVar3 = *(CharacterInstance **)(local_28 * 4 + *(int *)(param_1 + 0xc0));
    pCVar5 = pCVar3 + 0x8c;
    pCVar2 = *(Character **)pCVar5;
    uVar6 = *(undefined4 *)(pCVar2 + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar6,0);
    if (iVar1 != 0) {
      fVar7 = (float)__subsf3(uVar6,uVar4);
      Character::setCurrentEnergy(pCVar2,fVar7);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)pCVar5 + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  for (local_28 = 0; local_28 < *(int *)(param_1 + 200) + 1; local_28 = local_28 + 1) {
    pCVar3 = *(CharacterInstance **)(local_28 * 4 + *(int *)(param_1 + 0xcc));
    pCVar5 = pCVar3 + 0x8c;
    pCVar2 = *(Character **)pCVar5;
    uVar6 = *(undefined4 *)(pCVar2 + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar6,0);
    if (iVar1 != 0) {
      fVar7 = (float)__subsf3(uVar6,uVar4);
      Character::setCurrentEnergy(pCVar2,fVar7);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)pCVar5 + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != 0) {
    pCVar2 = *(Character **)(iVar1 + 0x8c);
    uVar6 = *(undefined4 *)(pCVar2 + 0x40);
    iVar1 = __aeabi_fcmpgt(uVar6,0);
    if (iVar1 != 0) {
      fVar7 = (float)__subsf3(uVar6,uVar4);
      Character::setCurrentEnergy(pCVar2,fVar7);
      pCVar3 = *(CharacterInstance **)(param_1 + 0xf8);
      iVar1 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar3 + 0x8c) + 0x40),0);
      if (iVar1 != 0) {
        CharacterInstance::die(pCVar3);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  fVar7 = (float)CapcomMath::random(4);
  ZombieCafe::playEffect(iVar1,fVar7);
  beginShake(param_1,0x5a);
  return;
}


