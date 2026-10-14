/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6d2a ComponentAnimation::setFrame */

/* ComponentAnimation::setFrame(int) */

void __thiscall ComponentAnimation::setFrame(ComponentAnimation *this,int param_1)

{
  short sVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < (int)(uint)(byte)this[8])) {
    iVar2 = **(int **)(this + 0x20) + param_1 * 0x14;
    sVar1 = *(short *)(iVar2 + 0x10);
    this[9] = SUB41(param_1,0);
    *(int *)(this + 0xc) = (int)sVar1;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = *(undefined2 *)(iVar2 + 0xc);
    *(undefined2 *)(this + 0x16) = *(undefined2 *)(iVar2 + 0xe);
    *(undefined2 *)(this + 0x18) = *(undefined2 *)(iVar2 + 4);
    *(undefined2 *)(this + 0x1a) = *(undefined2 *)(iVar2 + 6);
    *(undefined2 *)(this + 0x1c) = *(undefined2 *)(iVar2 + 8);
    *(undefined2 *)(this + 0x1e) = *(undefined2 *)(iVar2 + 10);
  }
  return;
}


