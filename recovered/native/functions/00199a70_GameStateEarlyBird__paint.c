/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199a70 GameStateEarlyBird::paint */

/* GameStateEarlyBird::paint(CapcomGraphics*) */

void __thiscall GameStateEarlyBird::paint(GameStateEarlyBird *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  GameStateEarlyBird *pGVar8;
  int iVar9;
  int local_24;
  
  iVar9 = DAT_00199b54;
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  pGVar8 = this + 0x104;
  local_24 = 0;
  iVar9 = iVar9 + 0x199a8e;
  do {
    if (*(int *)pGVar8 != 0) {
      uVar5 = *(undefined4 *)(this + 0x354);
      iVar1 = SmDev();
      uVar2 = __floatsisf(local_24);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar9));
      uVar2 = __addsf3(uVar5,uVar2);
      iVar1 = SmDev();
      piVar6 = *(int **)pGVar8;
      pcVar7 = *(code **)(*piVar6 + 0xc);
      __addsf3(uVar2,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
      iVar1 = __fixsfsi();
      iVar3 = SmDev();
      uVar4 = __fixsfsi(*(undefined4 *)(iVar9 + iVar3 * 4 + 0x30));
      (*pcVar7)(piVar6,uVar4 & 0xffff | iVar1 << 0x10);
      (**(code **)(**(int **)pGVar8 + 8))(*(int **)pGVar8,param_1);
    }
    pGVar8 = pGVar8 + 4;
    local_24 = local_24 + 1;
  } while (local_24 != 0x14);
  iVar9 = 0;
  do {
    piVar6 = *(int **)(this + iVar9 + 200);
    if ((char)piVar6[5] != '\0') {
      (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
    }
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x20);
  piVar6 = *(int **)(this + 0x374);
  if ((char)piVar6[5] != '\0') {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
  }
  piVar6 = *(int **)(this + 900);
  if ((char)piVar6[5] != '\0') {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
  }
  return;
}


