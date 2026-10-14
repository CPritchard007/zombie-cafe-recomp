/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a752c ImageAnimation::tick */

/* ImageAnimation::tick(long) */

void __thiscall ImageAnimation::tick(ImageAnimation *this,long param_1)

{
  ImageAnimation IVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*(int *)this + 0x1c))();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = (**(code **)(*(int *)this + 0x20))(this);
  if (iVar2 == 0) {
    return;
  }
  iVar5 = *(int *)(this + 0xc);
  iVar2 = param_1 + *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar2;
  if (iVar2 < iVar5) {
    return;
  }
  iVar3 = 1;
  IVar1 = this[9];
  if (((byte)this[6] & 1) != 0) {
    iVar3 = __divsi3(iVar2,iVar5);
  }
  iVar3 = (uint)(byte)IVar1 + iVar3;
  __aeabi_idivmod(iVar2,iVar5);
  *(undefined4 *)(this + 0x10) = extraout_r1;
  iVar2 = *(int *)this;
  if (iVar3 < (int)(uint)(byte)this[8]) {
LAB_002a7598:
    (**(code **)(iVar2 + 0x2c))(this,iVar3);
  }
  else {
    iVar5 = (int)((uint)(byte)this[4] << 0x18) >> 0x18;
    if ((((int)((uint)(byte)this[4] << 0x18) >> 0x1f) - iVar5 < 0) || (iVar5 == -1)) {
      IVar1 = this[5];
      uVar4 = (uint)(byte)IVar1;
      if (uVar4 != 0) {
        __aeabi_idivmod(iVar3);
        iVar3 = extraout_r1_00;
        if (uVar4 != 0 && -1 < (int)(uVar4 * 0x1000000)) {
          this[5] = (ImageAnimation)((char)IVar1 - 1);
        }
        goto LAB_002a7598;
      }
    }
    (**(code **)(iVar2 + 0x18))(this);
    this[6] = (ImageAnimation)((byte)this[6] | 4);
  }
  return;
}


