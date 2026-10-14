/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011edc4 GameStateCafe::onPlantCommandBarDoruSeed2OK */

/* GameStateCafe::onPlantCommandBarDoruSeed2OK(GameStateCafe*) */

void GameStateCafe::onPlantCommandBarDoruSeed2OK(GameStateCafe *param_1)

{
  int iVar1;
  ZombieCafe *this;
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  ZombieCafe::addCash(this,DAT_0011edf8);
  ZombieCafe::setZombieFlowerPlantState(this,1);
  startFlowerPlant(param_1);
  PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
  sendFlowerZomibeStartLog(param_1);
  return;
}


