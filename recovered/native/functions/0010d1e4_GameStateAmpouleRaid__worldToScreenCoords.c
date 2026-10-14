/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d1e4 GameStateAmpouleRaid::worldToScreenCoords */

/* GameStateAmpouleRaid::worldToScreenCoords(long) */

uint __thiscall GameStateAmpouleRaid::worldToScreenCoords(GameStateAmpouleRaid *this,long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x34);
  uVar1 = __floatsisf(param_1 >> 0x10);
  __mulsf3(uVar1,uVar4);
  uVar2 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)param_1);
  __mulsf3(uVar1,uVar4);
  uVar3 = __fixsfsi();
  return ((uVar2 & 0xffff) + (*(uint *)(this + 0x30) >> 0x10)) * 0x10000 |
         (uVar3 & 0xffff) + *(uint *)(this + 0x30) & 0xffff;
}


