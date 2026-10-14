/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a727c FrameAnimation::getBounds */

/* FrameAnimation::getBounds() */

uint __thiscall FrameAnimation::getBounds(FrameAnimation *this)

{
  FrameAnimation FVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_24;
  
  FVar1 = this[8];
  local_24 = 0;
  iVar9 = 0;
  for (iVar8 = 0; iVar8 < (int)(uint)(byte)FVar1; iVar8 = iVar8 + 1) {
    iVar7 = *(int *)(iVar8 * 4 + *(int *)(this + 0x20));
    uVar6 = *(undefined4 *)(iVar7 + 0x2c);
    uVar2 = __floatsisf((int)*(short *)(iVar7 + 0x20));
    uVar2 = __mulsf3(uVar2,uVar6);
    uVar3 = __floatsisf((int)*(short *)(iVar7 + 0x2a));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __floatsisf((int)*(short *)(iVar7 + 0x26));
    __addsf3(uVar2,uVar3);
    iVar4 = __fixsfsi();
    if (iVar9 < iVar4) {
      iVar9 = iVar4;
    }
    uVar2 = __floatsisf((int)*(short *)(iVar7 + 0x22));
    uVar2 = __mulsf3(uVar2,uVar6);
    uVar3 = __floatsisf((int)*(short *)(iVar7 + 0x24));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __floatsisf((int)*(short *)(iVar7 + 0x28));
    __addsf3(uVar2,uVar3);
    uVar5 = __fixsfsi();
    if ((int)local_24 < (int)uVar5) {
      local_24 = uVar5;
    }
  }
  return iVar9 << 0x10 | local_24 & 0xffff;
}


