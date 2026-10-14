/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f420 GameStateRaid::screenToWorldCoords */

/* GameStateRaid::screenToWorldCoords(long) */

uint __thiscall GameStateRaid::screenToWorldCoords(GameStateRaid *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = CFPoint::subtract(param_1,*(long *)(this + 0x94));
  uVar5 = *(undefined4 *)(this + 0x98);
  uVar2 = __floatsisf(iVar1 >> 0x10);
  __divsf3(uVar2,uVar5);
  iVar3 = __fixsfsi();
  uVar2 = __floatsisf((int)(short)iVar1);
  __divsf3(uVar2,uVar5);
  uVar4 = __fixsfsi();
  return uVar4 & 0xffff | iVar3 << 0x10;
}


