/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189ab4 GameStateRoulette::paintFurniture */

/* GameStateRoulette::paintFurniture(CapcomGraphics*) */

void __thiscall GameStateRoulette::paintFurniture(GameStateRoulette *this,CapcomGraphics *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  GameStateRoulette *pGVar12;
  int local_34;
  
  iVar11 = 0;
  pGVar12 = this;
  do {
    if (*(int *)(pGVar12 + 0xa20) != 0) {
      paintFurnitureSub(this,iVar11,param_1);
    }
    iVar11 = iVar11 + 1;
    pGVar12 = pGVar12 + 4;
  } while (iVar11 != 0xaa);
  if (this[0x9f0] != (GameStateRoulette)0x0) {
    pGVar12 = this + 0xa20;
    local_34 = 0;
    iVar11 = DAT_00189c60 + 0x189afa;
    do {
      if (*(int *)pGVar12 != 0) {
        sVar1 = *(short *)(*(int *)pGVar12 + 6);
        iVar2 = SmDev();
        uVar3 = __floatsisf(local_34);
        uVar4 = __mulsf3(uVar3,*(undefined4 *)(iVar11 + iVar2 * 4 + 0x10));
        uVar4 = __subsf3(uVar4,*(undefined4 *)(this + DAT_00189c64));
        iVar2 = SmDev();
        iVar8 = DAT_00189c68 + 0x189b36;
        __addsf3(uVar4,*(undefined4 *)(iVar2 * 4 + iVar8));
        __fixsfsi();
        uVar4 = __floatsisf();
        iVar2 = SmDev();
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        uVar5 = __floatsisf(*(undefined4 *)(this + DAT_00189c6c));
        uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar11 + iVar2 * 4 + 0x10));
        __subsf3(uVar4,uVar5);
        iVar2 = __fixsfsi();
        iVar6 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar11 + iVar6 * 4 + 0x58));
        (*pcVar10)(piVar9,uVar7 & 0xffff | iVar2 << 0x10);
        paintFurnitureSub(this,local_34,param_1);
        iVar2 = SmDev();
        uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar11 + iVar2 * 4 + 0x10));
        uVar3 = __subsf3(uVar3,*(undefined4 *)(this + DAT_00189c64));
        iVar2 = SmDev();
        __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar8));
        __fixsfsi();
        uVar3 = __floatsisf();
        iVar2 = SmDev();
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        uVar4 = __floatsisf(*(undefined4 *)(this + DAT_00189c6c));
        uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar11 + iVar2 * 4 + 0x10));
        __addsf3(uVar3,uVar4);
        iVar2 = __fixsfsi();
        iVar6 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar11 + iVar6 * 4 + 0x58));
        (*pcVar10)(piVar9,uVar7 & 0xffff | iVar2 << 0x10);
        paintFurnitureSub(this,local_34,param_1);
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        iVar2 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x58));
        (*pcVar10)(piVar9,(int)sVar1 << 0x10 | uVar7 & 0xffff);
      }
      pGVar12 = pGVar12 + 4;
      local_34 = local_34 + 1;
    } while (local_34 != 0xaa);
  }
  return;
}


