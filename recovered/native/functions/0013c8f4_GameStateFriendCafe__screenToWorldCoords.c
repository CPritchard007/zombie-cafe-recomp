/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c8f4 GameStateFriendCafe::screenToWorldCoords */

/* GameStateFriendCafe::screenToWorldCoords(long) */

uint __thiscall GameStateFriendCafe::screenToWorldCoords(GameStateFriendCafe *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = param_1 - *(uint *)(this + 0xa8);
  uVar4 = *(undefined4 *)(this + 0xac);
  uVar1 = __floatsisf((int)((((uint)param_1 >> 0x10) - (*(uint *)(this + 0xa8) >> 0x10)) * 0x10000 |
                           uVar3 & 0xffff) >> 0x10);
  __divsf3(uVar1,uVar4);
  iVar2 = __fixsfsi();
  uVar1 = __floatsisf((int)(short)uVar3);
  __divsf3(uVar1,uVar4);
  uVar3 = __fixsfsi();
  return uVar3 & 0xffff | iVar2 << 0x10;
}


