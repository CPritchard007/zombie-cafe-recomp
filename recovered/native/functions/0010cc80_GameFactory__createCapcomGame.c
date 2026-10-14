/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cc80 GameFactory::createCapcomGame */

/* GameFactory::createCapcomGame() */

ZombieCafe * GameFactory::createCapcomGame(void)

{
  ZombieCafe *this;
  
  L_PrintLog((char *)(DAT_0010ccac + 0x10cc8a),(char *)(DAT_0010ccb0 + 0x10cc8c));
  this = (ZombieCafe *)operator_new(DAT_0010ccb4);
  ZombieCafe::ZombieCafe(this,false);
  return this;
}


