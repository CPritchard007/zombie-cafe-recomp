/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b130 GameStateCafe::isOpenEquipStorage */

/* GameStateCafe::isOpenEquipStorage() */

uint __thiscall GameStateCafe::isOpenEquipStorage(GameStateCafe *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0xbc);
  uVar2 = uVar1;
  if ((uVar1 != 0) && (uVar2 = 0, *(byte *)(uVar1 + 0x8c) - 1 < 2)) {
    uVar2 = (uint)(*(char *)(uVar1 + 0x65) == '\x01');
  }
  return uVar2;
}


