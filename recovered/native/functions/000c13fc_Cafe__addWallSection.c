/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c13fc Cafe::addWallSection */

/* Cafe::addWallSection(int, int, int) */

void __thiscall Cafe::addWallSection(Cafe *this,int param_1,int param_2,int param_3)

{
  CafeWall *this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = (CafeWall *)operator_new(0x48);
  CafeWall::CafeWall(this_00,*(CImage ***)(this + 0x84),(short)param_3,
                     *(long *)(*(int *)(**(short **)(DAT_000c14e8 + 0xc1424) * 4 +
                                       *(int *)(this + 0x94)) + 0x48),param_2 != 0);
  iVar1 = param_1 * 2 + param_2;
  uVar2 = (uint)**(byte **)(DAT_000c14ec + 0xc1450);
  if (param_2 == 0) {
    uVar2 = ~uVar2;
  }
  (**(code **)(*(int *)this_00 + 0xc))
            (this_00,((int)**(short **)(DAT_000c14f4 + 0xc148a) >> 1) + 1 +
                     (uint)*(ushort *)((iVar1 * 4 + 1) * 2 + *(int *)(this + 0xc)) & 0xffff |
                     ((uint)*(ushort *)(iVar1 * 8 + *(int *)(this + 0xc)) +
                     (uVar2 - (int)**(short **)(DAT_000c14f0 + 0xc1464)) + -1) * 0x10000);
  Vector<CafeWall*>::addElement((Vector<CafeWall*> *)(this + 0x48),this_00);
  CapcomOrderableList<CafeObject*>::addOrdered
            ((CapcomOrderableList<CafeObject*> *)(this + 0x20),(CafeObject *)this_00);
  *(CafeWall **)(*(int *)(param_1 * 4 + *(int *)this) + (param_2 + 2) * 4 + 4) = this_00;
  iVar1 = getNextTile(param_1,3 - (uint)(param_2 == 0));
  if (-1 < iVar1) {
    CFPathFinder::unlinkNodes(*(CFPathFinder **)(this + 0x5c),param_1,iVar1);
  }
  return;
}


