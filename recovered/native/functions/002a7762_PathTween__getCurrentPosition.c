/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7762 PathTween::getCurrentPosition */

/* PathTween::getCurrentPosition() */

undefined8 __thiscall PathTween::getCurrentPosition(PathTween *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  PathTween *local_20;
  
  iVar4 = *(int *)((uint)*(ushort *)(this + 0x10) * 4 + **(int **)(this + 0xc));
  lVar1 = CFPathFinder::getNodePosition(*(CFPathFinder **)(this + 8),iVar4);
  local_20 = this;
  if (*(int *)(this + 0x14) != 0) {
    iVar5 = *(int *)((*(ushort *)(this + 0x10) + 1) * 4 + **(int **)(this + 0xc));
    local_20 = (PathTween *)CFPathFinder::getNodePosition(*(CFPathFinder **)(this + 8),iVar5);
    uVar2 = __floatsisf(*(undefined4 *)(this + 0x14));
    uVar3 = CFPathFinder::getLinkCost(*(CFPathFinder **)(this + 8),iVar4,iVar5);
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x18));
    fVar6 = (float)__divsf3(uVar2,uVar3);
    lVar1 = CFPoint::interpolate(lVar1,(long)local_20,fVar6);
  }
  return CONCAT44(local_20,lVar1);
}


