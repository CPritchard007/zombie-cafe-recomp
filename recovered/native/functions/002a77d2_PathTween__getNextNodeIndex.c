/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a77d2 PathTween::getNextNodeIndex */

/* PathTween::getNextNodeIndex() */

undefined4 __thiscall PathTween::getNextNodeIndex(PathTween *this)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(ushort *)(this + 0x10) + 1;
  iVar3 = **(int **)(this + 0xc);
  if (uVar2 < (uint)(*(int **)(this + 0xc))[2]) {
    uVar1 = *(undefined4 *)(iVar3 + uVar2 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(iVar3 + (uint)*(ushort *)(this + 0x10) * 4);
  }
  return uVar1;
}


