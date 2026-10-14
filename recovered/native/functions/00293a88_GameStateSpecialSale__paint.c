/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293a88 GameStateSpecialSale::paint */

/* GameStateSpecialSale::paint(CapcomGraphics*) */

void __thiscall GameStateSpecialSale::paint(GameStateSpecialSale *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  GameStateSpecialSale *pGVar10;
  int local_24;
  
  (**(code **)(**(int **)(this + 0x18) + 0xc))();
  if (*(int *)(this + 0x24) != -1) {
    piVar9 = *(int **)(this + 0x2c);
    pcVar6 = *(code **)(*piVar9 + 0x14);
    iVar8 = DAT_00293bdc + 0x293ab0;
    uVar1 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x24) + 0x88) * 4) + 6));
    iVar2 = SmDev();
    __addsf3(uVar1,*(undefined4 *)(iVar2 * 4 + iVar8));
    uVar1 = __fixsfsi();
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + (*(int *)(this + 0x24) + 0x88) * 4) + 4));
    iVar2 = SmDev();
    __addsf3(uVar3,*(undefined4 *)(iVar8 + iVar2 * 4 + 0x18));
    uVar3 = __fixsfsi();
    (*pcVar6)(piVar9,uVar1,uVar3);
    (**(code **)(**(int **)(this + 0x2c) + 0xc))(*(int **)(this + 0x2c),param_1);
  }
  pGVar10 = this + 0x220;
  local_24 = 0;
  iVar2 = DAT_00293be0 + 0x293b18;
  do {
    if (*(int *)pGVar10 != 0) {
      __fixsfsi(*(undefined4 *)(this + DAT_00293be4));
      uVar1 = __floatsisf();
      iVar8 = SmDev();
      uVar3 = __floatsisf(local_24);
      uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + iVar8 * 4 + 0x30));
      uVar1 = __addsf3(uVar1,uVar3);
      iVar8 = SmDev();
      __addsf3(uVar1,*(undefined4 *)(iVar2 + iVar8 * 4 + 0x48));
      iVar8 = __fixsfsi();
      iVar4 = SmDev();
      piVar9 = *(int **)pGVar10;
      iVar7 = *piVar9;
      uVar5 = __fixsfsi(*(undefined4 *)(iVar2 + iVar4 * 4 + 0x60));
      (**(code **)(iVar7 + 0xc))(piVar9,uVar5 & 0xffff | iVar8 << 0x10);
      (**(code **)(**(int **)pGVar10 + 8))(*(int **)pGVar10,param_1);
    }
    pGVar10 = pGVar10 + 4;
    local_24 = local_24 + 1;
  } while (local_24 != 100);
  (**(code **)(**(int **)(this + 0x54) + 0xc))(*(int **)(this + 0x54),param_1);
  (**(code **)(**(int **)(this + 0x58) + 0xc))(*(int **)(this + 0x58),param_1);
  piVar9 = *(int **)(this + 0x438);
  if ((char)piVar9[5] != '\0') {
    (**(code **)(*piVar9 + 0xc))(piVar9,param_1);
  }
  piVar9 = *(int **)(this + 0x448);
  if ((char)piVar9[5] != '\0') {
    (**(code **)(*piVar9 + 0xc))(piVar9,param_1);
  }
  return;
}


