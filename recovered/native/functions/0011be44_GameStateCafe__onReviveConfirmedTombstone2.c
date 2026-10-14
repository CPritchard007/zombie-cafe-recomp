/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011be44 GameStateCafe::onReviveConfirmedTombstone2 */

/* GameStateCafe::onReviveConfirmedTombstone2(GameStateCafe*) */

void GameStateCafe::onReviveConfirmedTombstone2(GameStateCafe *param_1)

{
  undefined4 uVar1;
  int iVar2;
  GameStateCafe *pGVar3;
  float extraout_s0;
  float fVar4;
  
  if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x50)) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((0 < *(int *)(iVar2 + DAT_0011bf18)) && (*(char *)(iVar2 + DAT_0011bf1c) != '\0')) {
      *(int *)(iVar2 + DAT_0011bf18) = *(int *)(iVar2 + DAT_0011bf18) + -1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0011bf20) = 1;
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
                 *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0011bf24 + 0x11bece),param_1);
      CharacterCommandBar::addWorkButton
                (*(CharacterCommandBar **)pGVar3,
                 *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0011bf28 + 0x11bedc),param_1);
      iVar2 = *(int *)(param_1 + 0xc);
      if (*(char *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0011bf2c) == '\0') {
        fVar4 = (float)CapcomMath::random(2);
      }
      else {
        fVar4 = (float)CapcomMath::random(2);
      }
      ZombieCafe::playEffect(iVar2,fVar4);
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0011bf30) = 1;
    }
  }
  return;
}


