/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001896d0 GameStateRoulette::paintRoulette */

/* GameStateRoulette::paintRoulette(CapcomGraphics*) */

void __thiscall GameStateRoulette::paintRoulette(GameStateRoulette *this,CapcomGraphics *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  GameStateRoulette *pGVar11;
  int iVar12;
  int local_34;
  
  iVar10 = 0;
  pGVar11 = this;
  do {
    if (*(int *)(pGVar11 + 0x94) != 0) {
      paintRouletteSub(this,iVar10,param_1);
    }
    iVar10 = iVar10 + 1;
    pGVar11 = pGVar11 + 4;
  } while (iVar10 != 0xaa);
  if (this[0x9f0] != (GameStateRoulette)0x0) {
    iVar10 = DAT_00189880 + 0x18970e;
    pGVar11 = this + 0x94;
    local_34 = 0;
    do {
      iVar12 = DAT_00189884;
      if (*(int *)pGVar11 != 0) {
        sVar1 = *(short *)(*(int *)pGVar11 + 6);
        iVar2 = SmDev();
        uVar3 = __floatsisf(local_34);
        uVar4 = __mulsf3(uVar3,*(undefined4 *)(iVar10 + iVar2 * 4 + 0x10));
        iVar12 = iVar12 + 0x189742;
        uVar4 = __subsf3(uVar4,*(undefined4 *)(this + DAT_00189888));
        iVar2 = SmDev();
        __addsf3(uVar4,*(undefined4 *)(iVar2 * 4 + iVar12));
        __fixsfsi();
        uVar4 = __floatsisf();
        iVar2 = SmDev();
        piVar8 = *(int **)pGVar11;
        pcVar9 = *(code **)(*piVar8 + 0xc);
        uVar5 = __floatsisf(*(undefined4 *)(this + 0x738));
        uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar10 + iVar2 * 4 + 0x10));
        __subsf3(uVar4,uVar5);
        iVar2 = __fixsfsi();
        iVar6 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar12 + iVar6 * 4 + 0x78));
        (*pcVar9)(piVar8,uVar7 & 0xffff | iVar2 << 0x10);
        paintRouletteSub(this,local_34,param_1);
        iVar2 = SmDev();
        uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar10 + iVar2 * 4 + 0x10));
        uVar3 = __subsf3(uVar3,*(undefined4 *)(this + DAT_00189888));
        iVar2 = SmDev();
        __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar12));
        __fixsfsi();
        uVar3 = __floatsisf();
        iVar2 = SmDev();
        piVar8 = *(int **)pGVar11;
        pcVar9 = *(code **)(*piVar8 + 0xc);
        uVar4 = __floatsisf(*(undefined4 *)(this + 0x738));
        uVar4 = __mulsf3(uVar4,*(undefined4 *)(iVar10 + iVar2 * 4 + 0x10));
        __addsf3(uVar3,uVar4);
        iVar2 = __fixsfsi();
        iVar6 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar12 + iVar6 * 4 + 0x78));
        (*pcVar9)(piVar8,uVar7 & 0xffff | iVar2 << 0x10);
        paintRouletteSub(this,local_34,param_1);
        piVar8 = *(int **)pGVar11;
        pcVar9 = *(code **)(*piVar8 + 0xc);
        iVar2 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar12 + iVar2 * 4 + 0x78));
        (*pcVar9)(piVar8,(int)sVar1 << 0x10 | uVar7 & 0xffff);
      }
      pGVar11 = pGVar11 + 4;
      local_34 = local_34 + 1;
    } while (local_34 != 0xaa);
  }
  return;
}


