/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011add8 GameStateCafe::onScreenshotButtonPressed */

/* GameStateCafe::onScreenshotButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onScreenshotButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_0011ae2c;
  param_1[DAT_0011ae30] = param_1[DAT_0011ae2c];
  param_1[iVar1] = (GameStateCafe)0x8;
  param_1[0x198] = (GameStateCafe)0x0;
  param_1[0x19a] = (GameStateCafe)0x1;
  piVar2 = *(int **)(param_1 + 0xac);
  (**(code **)(*piVar2 + 0x20))(piVar2,0);
  HudElement::setButtonsVisible(*(HudElement **)(param_1 + 200),false);
  select(param_1,(CharacterInstance *)0x0);
  CharacterCommandBar::removeButton(*(int *)(param_1 + 0xac));
  param_1[0x19c] = (GameStateCafe)0x0;
  return;
}


