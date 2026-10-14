/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119674 GameStateCafe::onScreenshotButtonPressed_Twitter */

/* GameStateCafe::onScreenshotButtonPressed_Twitter(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onScreenshotButtonPressed_Twitter(GameStateCafe *param_1,ScreenElement *param_2)

{
  int iVar1;
  
  iVar1 = DAT_001196a8;
  param_1[DAT_001196ac] = param_1[DAT_001196a8];
  param_1[iVar1] = (GameStateCafe)0x8;
  param_1[0x198] = (GameStateCafe)0x0;
  param_1[0x19a] = (GameStateCafe)0x1;
  HudElement::setButtonsVisible(*(HudElement **)(param_1 + 200),false);
  param_1[0x19c] = (GameStateCafe)0x1;
  return;
}


