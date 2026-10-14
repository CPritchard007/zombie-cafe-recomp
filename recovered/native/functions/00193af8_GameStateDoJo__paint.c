/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193af8 GameStateDoJo::paint */

/* GameStateDoJo::paint(CapcomGraphics*) */

void __thiscall GameStateDoJo::paint(GameStateDoJo *this,CapcomGraphics *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  GameStateDoJo *pGVar12;
  int local_28;
  
  (**(code **)(**(int **)(this + 0x14) + 0xc))();
  iVar3 = DAT_00193e80;
  iVar10 = DAT_00193e7c;
  iVar9 = *(int *)(this + 0x28);
  if (this[0x6c8] == (GameStateDoJo)0x0) {
    if (iVar9 != -1) {
      piVar11 = *(int **)(this + 0xb0);
      pcVar7 = *(code **)(*piVar11 + 0x14);
      uVar2 = __floatsisf((int)*(short *)(*(int *)(this + (iVar9 + 0x186) * 4) + 6));
      iVar10 = SmDev();
      __addsf3(uVar2,*(undefined4 *)(iVar3 + 0x193bda + iVar10 * 4 + 0x60));
      uVar2 = __fixsfsi();
      uVar4 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x28) + 0x186) * 4) + 4))
      ;
      iVar10 = SmDev();
      __addsf3(uVar4,*(undefined4 *)(iVar3 + 0x193bda + iVar10 * 4 + 0x78));
      uVar4 = __fixsfsi();
      (*pcVar7)(piVar11,uVar2,uVar4);
      piVar11 = *(int **)(this + 0xb0);
      (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
    }
    iVar10 = 0;
    pGVar12 = this;
    do {
      if (*(int *)(pGVar12 + 0x618) != 0) {
        rouletteInstructorPaintSub(this,iVar10,param_1);
      }
      iVar10 = iVar10 + 1;
      pGVar12 = pGVar12 + 4;
    } while (iVar10 != 0x14);
    if (this[DAT_00193e84] != (GameStateDoJo)0x0) {
      iVar10 = DAT_00193e88 + 0x193c60;
      pGVar12 = this + 0x618;
      local_28 = 0;
      do {
        if (*(int *)pGVar12 != 0) {
          sVar1 = *(short *)(*(int *)pGVar12 + 6);
          iVar3 = SmDev();
          uVar2 = __floatsisf(local_28);
          uVar4 = __mulsf3(uVar2,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x18));
          uVar4 = __subsf3(uVar4,*(undefined4 *)(this + DAT_00193e8c));
          iVar3 = SmDev();
          __addsf3(uVar4,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x30));
          __fixsfsi();
          uVar4 = __floatsisf();
          iVar3 = SmDev();
          piVar11 = *(int **)pGVar12;
          pcVar7 = *(code **)(*piVar11 + 0xc);
          uVar5 = __floatsisf(*(undefined4 *)(this + 0x690));
          uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x18));
          __subsf3(uVar4,uVar5);
          iVar3 = __fixsfsi();
          iVar9 = SmDev();
          iVar8 = DAT_00193e90 + 0x193cf2;
          uVar6 = __fixsfsi(*(undefined4 *)(iVar8 + iVar9 * 4 + 0x10));
          (*pcVar7)(piVar11,uVar6 & 0xffff | iVar3 << 0x10);
          rouletteInstructorPaintSub(this,local_28,param_1);
          iVar3 = SmDev();
          uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x18));
          uVar2 = __subsf3(uVar2,*(undefined4 *)(this + DAT_00193e8c));
          iVar3 = SmDev();
          __addsf3(uVar2,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x30));
          __fixsfsi();
          uVar2 = __floatsisf();
          iVar3 = SmDev();
          piVar11 = *(int **)pGVar12;
          pcVar7 = *(code **)(*piVar11 + 0xc);
          uVar4 = __floatsisf(*(undefined4 *)(this + 0x690));
          uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar10 + iVar3 * 4 + 0x18));
          __addsf3(uVar2,uVar4);
          iVar3 = __fixsfsi();
          iVar9 = SmDev();
          uVar6 = __fixsfsi(*(undefined4 *)(iVar8 + iVar9 * 4 + 0x10));
          (*pcVar7)(piVar11,uVar6 & 0xffff | iVar3 << 0x10);
          rouletteInstructorPaintSub(this,local_28,param_1);
          piVar11 = *(int **)pGVar12;
          pcVar7 = *(code **)(*piVar11 + 0xc);
          iVar3 = SmDev();
          uVar6 = __fixsfsi(*(undefined4 *)(iVar8 + iVar3 * 4 + 0x10));
          (*pcVar7)(piVar11,(int)sVar1 << 0x10 | uVar6 & 0xffff);
        }
        pGVar12 = pGVar12 + 4;
        local_28 = local_28 + 1;
      } while (local_28 != 0x14);
    }
  }
  else {
    if (iVar9 != -1) {
      piVar11 = *(int **)(this + 0xb0);
      pcVar7 = *(code **)(*piVar11 + 0x14);
      uVar2 = __floatsisf((int)*(short *)(*(int *)(this + (iVar9 + 0x38) * 4) + 6));
      iVar3 = SmDev();
      __addsf3(uVar2,*(undefined4 *)(iVar10 + 0x193b40 + iVar3 * 4 + 0x60));
      uVar2 = __fixsfsi();
      uVar4 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x28) + 0x38) * 4) + 4));
      iVar3 = SmDev();
      __addsf3(uVar4,*(undefined4 *)(iVar10 + 0x193b40 + iVar3 * 4 + 0x78));
      uVar4 = __fixsfsi();
      (*pcVar7)(piVar11,uVar2,uVar4);
      piVar11 = *(int **)(this + 0xb0);
      (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
    }
    iVar10 = 0;
    do {
      piVar11 = *(int **)(this + iVar10 + 0xe0);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 8))(piVar11,param_1);
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 != 0x378);
  }
  piVar11 = *(int **)(this + 0xb4);
  if (((char)piVar11[5] != '\0') &&
     (((this[DAT_00193e84] == (GameStateDoJo)0x0 || (this[DAT_00193e94] != (GameStateDoJo)0x0)) ||
      (*(int *)(this + 0x6f0) < 10)))) {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  (**(code **)(**(int **)(this + 0xa0) + 0xc))(*(int **)(this + 0xa0),param_1);
  (**(code **)(**(int **)(this + 0xa4) + 0xc))(*(int **)(this + 0xa4),param_1);
  (**(code **)(**(int **)(this + 0x98) + 0xc))(*(int **)(this + 0x98),param_1);
  (**(code **)(**(int **)(this + 0x94) + 0xc))(*(int **)(this + 0x94),param_1);
  (**(code **)(**(int **)(this + 0xac) + 0xc))(*(int **)(this + 0xac),param_1);
  piVar11 = *(int **)(this + 0x700);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  piVar11 = *(int **)(this + 0x710);
  if ((char)piVar11[5] != '\0') {
    (**(code **)(*piVar11 + 0xc))(piVar11,param_1);
  }
  return;
}


