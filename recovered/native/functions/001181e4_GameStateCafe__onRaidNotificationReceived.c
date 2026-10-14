/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001181e4 GameStateCafe::onRaidNotificationReceived */

/* GameStateCafe::onRaidNotificationReceived(GameStateCafe*, String) */

void GameStateCafe::onRaidNotificationReceived(int param_1)

{
  HudElement::setButtonNewIndicator(*(HudElement **)(param_1 + 200),3,true);
  return;
}


