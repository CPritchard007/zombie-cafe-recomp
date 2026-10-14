/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f464 GameStateRaid::worldToScreenCoords */

/* GameStateRaid::worldToScreenCoords(long) */

uint __thiscall GameStateRaid::worldToScreenCoords(GameStateRaid *this,long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x98);
  uVar1 = __floatsisf(param_1 >> 0x10);
  __mulsf3(uVar1,uVar4);
  uVar2 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)param_1);
  __mulsf3(uVar1,uVar4);
  uVar3 = __fixsfsi();
  return ((uVar2 & 0xffff) + (*(uint *)(this + 0x94) >> 0x10)) * 0x10000 |
         (uVar3 & 0xffff) + *(uint *)(this + 0x94) & 0xffff;
}


