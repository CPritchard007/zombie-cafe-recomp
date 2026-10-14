/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7388 FrameAnimation::setFrame */

/* FrameAnimation::setFrame(int) */

void __thiscall FrameAnimation::setFrame(FrameAnimation *this,int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if ((-1 < param_1) && (param_1 < (int)(uint)(byte)this[8])) {
    *(undefined4 *)(this + 0x10) = 0;
    this[9] = SUB41(param_1,0);
    piVar5 = (int *)(*(int *)(this + 0x20) + (param_1 & 0xffU) * 4);
    iVar4 = *piVar5;
    uVar2 = __floatsisf((int)*(short *)(iVar4 + 0x20));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar4 + 0x2c));
    uVar3 = __floatsisf((int)*(short *)(iVar4 + 0x2a));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __floatsisf((int)*(short *)(iVar4 + 0x26));
    __addsf3(uVar2,uVar3);
    uVar1 = __fixsfsi();
    *(undefined2 *)(this + 0x1c) = uVar1;
    iVar4 = *piVar5;
    uVar2 = __floatsisf((int)*(short *)(iVar4 + 0x22));
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar4 + 0x2c));
    uVar3 = __floatsisf((int)*(short *)(iVar4 + 0x24));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar3 = __floatsisf((int)*(short *)(iVar4 + 0x28));
    __addsf3(uVar2,uVar3);
    uVar1 = __fixsfsi();
    *(undefined2 *)(this + 0x1e) = uVar1;
  }
  return;
}


