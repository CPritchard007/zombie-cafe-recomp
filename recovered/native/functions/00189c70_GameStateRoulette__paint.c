/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189c70 GameStateRoulette::paint */

/* GameStateRoulette::paint(CapcomGraphics*) */

void __thiscall GameStateRoulette::paint(GameStateRoulette *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  iVar2 = DAT_00189e20;
  if (this[DAT_00189e14] == (GameStateRoulette)0x0) {
    if (*(int *)(this + 0x28) != -1) {
      piVar6 = *(int **)(this + 0x6c);
      pcVar4 = *(code **)(*piVar6 + 0x14);
      uVar1 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x28) + 0x24) * 4 + 4) +
                                         6));
      iVar5 = SmDev();
      __addsf3(uVar1,*(undefined4 *)(iVar2 + 0x189d3a + iVar5 * 4 + 0x18));
      uVar1 = __fixsfsi();
      uVar3 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x28) + 0x24) * 4 + 4) +
                                         4));
      iVar5 = SmDev();
      __addsf3(uVar3,*(undefined4 *)(iVar2 + 0x189d3a + iVar5 * 4 + 0x30));
      uVar3 = __fixsfsi();
      (*pcVar4)(piVar6,uVar1,uVar3);
      (**(code **)(**(int **)(this + 0x6c) + 0xc))(*(int **)(this + 0x6c),param_1);
    }
    paintRoulette(this,param_1);
  }
  else {
    if (*(int *)(this + DAT_00189e18) != -1) {
      piVar6 = *(int **)(this + 0x6c);
      iVar5 = DAT_00189e1c + 0x189c9a;
      pcVar4 = *(code **)(*piVar6 + 0x14);
      uVar1 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + DAT_00189e18) + 0x288) *
                                                          4) + 6));
      iVar2 = SmDev();
      __addsf3(uVar1,*(undefined4 *)(iVar5 + iVar2 * 4 + 0x18));
      uVar1 = __fixsfsi();
      uVar3 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + DAT_00189e18) + 0x288) *
                                                          4) + 4));
      iVar2 = SmDev();
      __addsf3(uVar3,*(undefined4 *)(iVar5 + iVar2 * 4 + 0x30));
      uVar3 = __fixsfsi();
      (*pcVar4)(piVar6,uVar1,uVar3);
      (**(code **)(**(int **)(this + 0x6c) + 0xc))(*(int **)(this + 0x6c),param_1);
    }
    paintFurniture(this,param_1);
  }
  piVar6 = *(int **)(this + 0x70);
  if (((char)piVar6[5] != '\0') &&
     (((this[0x9f0] == (GameStateRoulette)0x0 || (this[DAT_00189e24] != (GameStateRoulette)0x0)) ||
      (*(int *)(this + DAT_00189e28) < 10)))) {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
  }
  (**(code **)(**(int **)(this + 0x5c) + 0xc))(*(int **)(this + 0x5c),param_1);
  (**(code **)(**(int **)(this + 0x60) + 0xc))(*(int **)(this + 0x60),param_1);
  (**(code **)(**(int **)(this + 0x54) + 0xc))(*(int **)(this + 0x54),param_1);
  (**(code **)(**(int **)(this + 0x50) + 0xc))(*(int **)(this + 0x50),param_1);
  (**(code **)(**(int **)(this + 0x68) + 0xc))(*(int **)(this + 0x68),param_1);
  piVar6 = *(int **)(this + DAT_00189e2c);
  if ((char)piVar6[5] != '\0') {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
  }
  piVar6 = *(int **)(this + DAT_00189e30);
  if ((char)piVar6[5] != '\0') {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1);
  }
  return;
}


