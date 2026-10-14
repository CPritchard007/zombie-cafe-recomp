/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ddb4 GameStateAmpouleRaid::getAmpouleRaidBossMaxEnergy */

/* GameStateAmpouleRaid::getAmpouleRaidBossMaxEnergy(int) */

undefined4 GameStateAmpouleRaid::getAmpouleRaidBossMaxEnergy(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  CapcomApp::getInstance();
  if (4 < param_1) {
    param_1 = 4;
  }
  iVar1 = ZombieCafe::isAmpouleRaid_FirstHalf();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(DAT_0010dde8 + param_1 * 8 + 0x10de4a);
  }
  else {
    uVar2 = *(undefined4 *)(DAT_0010dde4 + param_1 * 8 + 0x10de18);
  }
  return uVar2;
}


