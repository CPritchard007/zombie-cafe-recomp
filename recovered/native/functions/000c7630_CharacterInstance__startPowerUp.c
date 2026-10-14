/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7630 CharacterInstance::startPowerUp */

/* CharacterInstance::startPowerUp(int) */

void __thiscall CharacterInstance::startPowerUp(CharacterInstance *this,int param_1)

{
  undefined4 uVar1;
  
  this[0xb8] = (CharacterInstance)0x1;
  uVar1 = __fixsfsi(**(undefined4 **)(DAT_000c7658 + 0xc7644));
  *(undefined4 *)(this + 0xbc) = uVar1;
  *(int *)(this + 0xc0) = param_1;
  return;
}


