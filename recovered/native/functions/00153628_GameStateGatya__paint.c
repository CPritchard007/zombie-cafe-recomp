/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153628 GameStateGatya::paint */

/* GameStateGatya::paint(CapcomGraphics*) */

void __thiscall GameStateGatya::paint(GameStateGatya *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  iVar7 = DAT_001537d4;
  if (this[DAT_001537d0] == (GameStateGatya)0x1) {
    if (this[0xe40] == (GameStateGatya)0x0) goto LAB_00153774;
    iVar7 = 0;
    (**(code **)(**(int **)(this + 0x18) + 0xc))(*(int **)(this + 0x18),param_1);
    if (*(int *)(this + 0x1d8) != 0) {
      for (; iVar7 < *(int *)(*(int *)(this + 0x1d8) + 4) + 1; iVar7 = iVar7 + 1) {
        piVar5 = *(int **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x1d8) + 8));
        (**(code **)(*piVar5 + 8))(piVar5,param_1);
      }
    }
    iVar7 = 0;
    if (*(int *)(this + 0x1dc) != 0) {
      for (; iVar7 < *(int *)(*(int *)(this + 0x1dc) + 4) + 1; iVar7 = iVar7 + 1) {
        piVar5 = *(int **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x1dc) + 8));
        (**(code **)(*piVar5 + 8))(piVar5,param_1);
      }
    }
    piVar5 = *(int **)(this + 0x1c);
  }
  else {
    if ((this[DAT_001537d0] != (GameStateGatya)0x2) || (this[0xe40] == (GameStateGatya)0x0))
    goto LAB_00153774;
    if (*(int *)(this + 0x38) != -1) {
      piVar5 = *(int **)(this + 0x204);
      pcVar6 = *(code **)(*piVar5 + 0x14);
      uVar1 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x38) + 0x84) * 4 + 4) +
                                         6));
      iVar2 = SmDev();
      uVar3 = __mulsf3(*(undefined4 *)(iVar7 + 0x1536ea + iVar2 * 4 + 0x24),
                       *(undefined4 *)(this + 0xf10));
      __addsf3(uVar1,uVar3);
      uVar1 = __fixsfsi();
      uVar3 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x38) + 0x84) * 4 + 4) +
                                         4));
      iVar2 = SmDev();
      uVar4 = __mulsf3(*(undefined4 *)(iVar7 + 0x1536ea + iVar2 * 4 + 0x3c),
                       *(undefined4 *)(this + DAT_001537d8));
      __addsf3(uVar3,uVar4);
      uVar3 = __fixsfsi();
      (*pcVar6)(piVar5,uVar1,uVar3);
      (**(code **)(**(int **)(this + 0x204) + 0xc))(*(int **)(this + 0x204),param_1);
    }
    paintRoulette(this,param_1);
    (**(code **)(**(int **)(this + 500) + 0xc))(*(int **)(this + 500),param_1);
    piVar5 = *(int **)(this + 0x1f0);
  }
  (**(code **)(*piVar5 + 0xc))(piVar5,param_1);
LAB_00153774:
  (**(code **)(**(int **)(this + 0x20) + 0xc))(*(int **)(this + 0x20),param_1);
  piVar5 = *(int **)(this + DAT_001537dc);
  if ((char)piVar5[5] != '\0') {
    (**(code **)(*piVar5 + 0xc))(piVar5,param_1);
  }
  piVar5 = *(int **)(this + 0xed0);
  if ((char)piVar5[5] != '\0') {
    (**(code **)(*piVar5 + 0xc))(piVar5,param_1);
  }
  piVar5 = *(int **)(this + DAT_001537e0);
  if ((char)piVar5[5] != '\0') {
    (**(code **)(*piVar5 + 0xc))(piVar5,param_1);
  }
  piVar5 = *(int **)(this + 0xf00);
  if ((char)piVar5[5] != '\0') {
    (**(code **)(*piVar5 + 0xc))(piVar5,param_1);
  }
  return;
}


