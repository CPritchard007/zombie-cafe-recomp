/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178464 GameStatePowerup::isSelectTomoguiZombie_LvUp */

/* GameStatePowerup::isSelectTomoguiZombie_LvUp(Character*, Character*) */

bool __thiscall
GameStatePowerup::isSelectTomoguiZombie_LvUp
          (GameStatePowerup *this,Character *param_1,Character *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(*(int *)param_2 + DAT_001784a0);
  if (uVar2 == DAT_001784a4) {
    bVar1 = 4;
  }
  else if (uVar2 == DAT_001784a8) {
    bVar1 = 5;
  }
  else {
    if (uVar2 != DAT_001784ac) {
      return false;
    }
    bVar1 = 6;
  }
  return *(byte *)(*(int *)param_1 + 0xb40) <= bVar1;
}


