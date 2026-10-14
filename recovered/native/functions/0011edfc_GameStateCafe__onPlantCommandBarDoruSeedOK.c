/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011edfc GameStateCafe::onPlantCommandBarDoruSeedOK */

/* GameStateCafe::onPlantCommandBarDoruSeedOK(GameStateCafe*) */

void GameStateCafe::onPlantCommandBarDoruSeedOK(GameStateCafe *param_1)

{
  int iVar1;
  ZombieCafe *this;
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  ZombieCafe::addCash(this,DAT_0011ee30);
  ZombieCafe::setZombieFlowerPlantState(this,0);
  startFlowerPlant(param_1);
  PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
  sendFlowerZomibeStartLog(param_1);
  return;
}


