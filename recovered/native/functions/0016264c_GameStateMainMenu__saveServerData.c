/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016264c GameStateMainMenu::saveServerData */

/* GameStateMainMenu::saveServerData(ZombieCafe*) */

void GameStateMainMenu::saveServerData(ZombieCafe *param_1)

{
  if (param_1 == (ZombieCafe *)0x0) {
    L_PrintLog((char *)(DAT_00162668 + 0x16265a),(char *)(DAT_0016266c + 0x16265c));
  }
  else {
    ZombieCafe::saveServerData(param_1,true);
  }
  return;
}


