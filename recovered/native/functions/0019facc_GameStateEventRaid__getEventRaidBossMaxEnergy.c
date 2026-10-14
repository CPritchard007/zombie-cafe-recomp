/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019facc GameStateEventRaid::getEventRaidBossMaxEnergy */

/* GameStateEventRaid::getEventRaidBossMaxEnergy(int) */

undefined4 GameStateEventRaid::getEventRaidBossMaxEnergy(int param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(iVar1 + 4));
  if (0x28 < param_1) {
    param_1 = 0x28;
  }
  return *(undefined4 *)(param_1 * 8 + *(int *)(iVar1 * 4 + *(int *)(DAT_0019faf0 + 0x19fae2)));
}


