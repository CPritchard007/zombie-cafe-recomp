/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001664d4 GameStateMap::eventFurnitureNumCheck */

/* GameStateMap::eventFurnitureNumCheck() */

int __thiscall GameStateMap::eventFurnitureNumCheck(GameStateMap *this)

{
  uint uVar1;
  
  uVar1 = ZombieCafe::getFeaturedItemCount(*(ZombieCafe **)(this + 0xc));
  return (uint)(uVar1 <= DAT_001664ec) - ((int)uVar1 >> 0x1f);
}


