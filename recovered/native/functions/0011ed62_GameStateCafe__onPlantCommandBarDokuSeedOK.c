/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ed62 GameStateCafe::onPlantCommandBarDokuSeedOK */

/* GameStateCafe::onPlantCommandBarDokuSeedOK(GameStateCafe*) */

void GameStateCafe::onPlantCommandBarDokuSeedOK(GameStateCafe *param_1)

{
  int iVar1;
  ZombieCafe *this;
  
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  ZombieCafe::setZombieFlowerPlantState(this,1);
  startFlowerPlant(param_1);
  ZombieCafe::spendToxin(this,0xf);
  PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
  sendFlowerZomibeStartLog(param_1);
  return;
}


