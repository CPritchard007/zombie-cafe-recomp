/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f828 GameStateMeetLocker::paint */

/* GameStateMeetLocker::paint(CapcomGraphics*) */

void __thiscall GameStateMeetLocker::paint(GameStateMeetLocker *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  GameStateMeetLocker *pGVar8;
  int local_24;
  int local_20;
  
  iVar1 = DAT_0016f980;
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  pGVar8 = this + 0xb8;
  local_20 = 0;
  do {
    if (*(int *)pGVar8 != 0) {
      uVar2 = __mulsf3(*(undefined4 *)(this + 0x400),*(undefined4 *)(this + 0x20));
      iVar3 = SmDev();
      uVar4 = __mulsf3(*(undefined4 *)(iVar3 * 4 + iVar1 + 0x16f846),*(undefined4 *)(this + 0x20));
      uVar5 = __floatsisf(local_20);
      uVar4 = __mulsf3(uVar4,uVar5);
      uVar2 = __addsf3(uVar2,uVar4);
      iVar3 = SmDev();
      uVar4 = __mulsf3(*(undefined4 *)(iVar1 + 0x16f846 + iVar3 * 4 + 0x18),
                       *(undefined4 *)(this + 0x20));
      __addsf3(uVar2,uVar4);
      local_24 = __fixsfsi();
      iVar3 = SmDev();
      uVar6 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + DAT_0016f984 + 0x16f8aa));
      if (DAT_0016f988 < local_24 + 1000U) {
        local_24 = DAT_0016f98c;
      }
      (**(code **)(**(int **)pGVar8 + 0xc))(*(int **)pGVar8,local_24 << 0x10 | uVar6 & 0xffff);
      (**(code **)(**(int **)pGVar8 + 8))(*(int **)pGVar8,param_1);
    }
    pGVar8 = pGVar8 + 4;
    local_20 = local_20 + 1;
  } while (local_20 != 0xd2);
  piVar7 = *(int **)(this + 0x90);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  piVar7 = *(int **)(this + 0x98);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  piVar7 = *(int **)(this + 0xa8);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  piVar7 = *(int **)(this + 0xa0);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  (**(code **)(**(int **)(this + 0x418) + 0xc))(*(int **)(this + 0x418),param_1);
  (**(code **)(**(int **)(this + DAT_0016f990) + 0xc))(*(int **)(this + DAT_0016f990),param_1);
  piVar7 = *(int **)(this + DAT_0016f994);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  piVar7 = *(int **)(this + DAT_0016f998);
  if ((char)piVar7[5] != '\0') {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1);
  }
  return;
}


