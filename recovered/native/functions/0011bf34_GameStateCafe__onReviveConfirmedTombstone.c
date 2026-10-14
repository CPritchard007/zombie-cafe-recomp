/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bf34 GameStateCafe::onReviveConfirmedTombstone */

/* GameStateCafe::onReviveConfirmedTombstone(GameStateCafe*) */

void GameStateCafe::onReviveConfirmedTombstone(GameStateCafe *param_1)

{
  undefined4 uVar1;
  int iVar2;
  GameStateCafe *pGVar3;
  float extraout_s0;
  float fVar4;
  
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x50)) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((0 < *(int *)(iVar2 + DAT_0011c00c)) && (*(char *)(iVar2 + 0x9f0) != '\0')) {
      *(int *)(iVar2 + DAT_0011c00c) = *(int *)(iVar2 + DAT_0011c00c) + -1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0011c010) = 1;
      uVar1 = Character::getMaxEnergy();
      __aeabi_fcmplt(uVar1,0x3f800000);
      Character::setCurrentEnergy(*(Character **)(*(int *)(param_1 + 0x54) + 0x8c),extraout_s0);
      pGVar3 = param_1 + 0xac;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x50) = 0;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) = 0;
      setRemainCharacter(param_1,*(CharacterInstance **)(param_1 + 0x54),true);
      CharacterCommandBar::removeButton(*(int *)pGVar3);
      CharacterCommandBar::addHealButton
                (*(CharacterCommandBar **)pGVar3,
                 *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0011c014 + 0x11bfc0),param_1);
      CharacterCommandBar::addWorkButton
                (*(CharacterCommandBar **)pGVar3,
                 *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0011c018 + 0x11bfce),param_1);
      iVar2 = *(int *)(param_1 + 0xc);
      if (*(char *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0011c01c) == '\0') {
        fVar4 = (float)CapcomMath::random(2);
      }
      else {
        fVar4 = (float)CapcomMath::random(2);
      }
      ZombieCafe::playEffect(iVar2,fVar4);
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0011c020) = 1;
    }
  }
  return;
}


