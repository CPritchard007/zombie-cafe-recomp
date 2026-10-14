/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bebd8 Cafe::worldToDiamondCoords */

/* Cafe::worldToDiamondCoords(int, int) */

uint Cafe::worldToDiamondCoords(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float __x;
  float __x_00;
  
  uVar1 = __floatsisf();
  uVar2 = __floatsisf((int)**(short **)(DAT_000bec70 + 0xbebe8) +
                      (int)**(short **)(DAT_000bec74 + 0xbebf2));
  uVar1 = __divsf3(uVar1,uVar2);
  uVar2 = __floatsisf(param_2);
  uVar3 = __floatsisf((int)**(short **)(DAT_000bec78 + 0xbec14) +
                      (int)**(short **)(DAT_000bec7c + 0xbec1e));
  uVar2 = __divsf3(uVar2,uVar3);
  uVar3 = __addsf3(uVar1,0x3f000000);
  uVar3 = __subsf3(uVar3,uVar2);
  floorf(__x);
  uVar2 = __subsf3(uVar2,0x3f000000);
  __x_00 = (float)__addsf3(uVar2,uVar1);
  floorf(__x_00);
  uVar4 = __fixsfsi();
  iVar5 = __fixsfsi(uVar3);
  return iVar5 << 0x10 | uVar4 & 0xffff;
}


