/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e924 GameStateCafe::changeFlowerPlant */

/* GameStateCafe::changeFlowerPlant(int) */

void __thiscall GameStateCafe::changeFlowerPlant(GameStateCafe *this,int param_1)

{
  int iVar1;
  CapcomOrderableList<Furniture*> *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    iVar4 = *(int *)(*(int *)(this + 0x14) + 0x94);
    iVar3 = DAT_0011e9a8;
  }
  else if (param_1 == 1) {
    iVar1 = ZombieCafe::getZombieFlowerFlowerType(*(ZombieCafe **)(this + 0xc));
    iVar4 = *(int *)(*(int *)(this + 0x14) + 0x94);
    iVar3 = DAT_0011e9b0;
    if (iVar1 == 0) {
      iVar3 = DAT_0011e9ac;
    }
  }
  else {
    iVar1 = ZombieCafe::getZombieFlowerFlowerType(*(ZombieCafe **)(this + 0xc));
    iVar4 = *(int *)(*(int *)(this + 0x14) + 0x94);
    iVar3 = DAT_0011e9b4;
    if (iVar1 == 0) {
      iVar3 = 0x830;
    }
  }
  piVar5 = *(int **)(iVar4 + iVar3);
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x11',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar3 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar3 != 0) {
    *(int **)(iVar3 + 0x38) = piVar5;
    uVar2 = CImage::getSize(*(CImage **)
                             (*(short *)((int)piVar5 + (*(byte *)(iVar3 + 0x34) + 0x1c) * 2 + 4) * 4
                             + *piVar5));
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
  }
  return;
}


