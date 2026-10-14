/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a76ba PathTween::_tick */

/* PathTween::_tick(long) */

undefined8 __thiscall PathTween::_tick(PathTween *this,long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long local_1c;
  
  iVar3 = *(int *)(this + 0xc);
  local_1c = param_1;
  if ((uint)*(ushort *)(this + 0x10) < *(int *)(iVar3 + 8) - 1U) {
    local_1c = *(long *)(this + 0x18);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_1;
    do {
      uVar1 = *(ushort *)(this + 0x10);
      iVar5 = *(int *)(this + 0x14);
      __mulsf3(local_1c,*(undefined4 *)((uint)uVar1 * 4 + *(int *)(iVar3 + 4)));
      iVar2 = __fixsfsi();
      if (iVar5 <= iVar2) goto LAB_002a7708;
      uVar4 = uVar1 + 1;
      *(int *)(this + 0x14) = iVar5 - iVar2;
      *(short *)(this + 0x10) = (short)uVar4;
    } while ((uVar4 & 0xffff) != *(int *)(iVar3 + 8) - 1U);
    *(undefined4 *)(this + 0x14) = 0;
  }
LAB_002a7708:
  return CONCAT44(local_1c,this);
}


