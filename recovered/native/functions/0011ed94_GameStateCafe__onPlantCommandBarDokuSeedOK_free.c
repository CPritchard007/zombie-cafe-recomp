/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ed94 GameStateCafe::onPlantCommandBarDokuSeedOK_free */

/* GameStateCafe::onPlantCommandBarDokuSeedOK_free(GameStateCafe*) */

void GameStateCafe::onPlantCommandBarDokuSeedOK_free(GameStateCafe *param_1)

{
  int iVar1;
  ZombieCafe *this;
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  ZombieCafe::setZombieFlowerPlantState(this,1);
  startFlowerPlant(param_1);
  PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
  sendFlowerZomibeStartLog(param_1);
  ZombieCafe::setZombieFlowerFreeFlag(this);
  return;
}


