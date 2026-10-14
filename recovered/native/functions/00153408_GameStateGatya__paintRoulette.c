/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153408 GameStateGatya::paintRoulette */

/* GameStateGatya::paintRoulette(CapcomGraphics*) */

void __thiscall GameStateGatya::paintRoulette(GameStateGatya *this,CapcomGraphics *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  GameStateGatya *pGVar12;
  int local_30;
  
  iVar11 = 0;
  pGVar12 = this;
  do {
    if (*(int *)(pGVar12 + 0x214) != 0) {
      paintRouletteSub(this,iVar11,param_1);
    }
    iVar11 = iVar11 + 1;
    pGVar12 = pGVar12 + 4;
  } while (iVar11 != 0xaa);
  if (this[DAT_00153614] != (GameStateGatya)0x0) {
    pGVar12 = this + 0x214;
    local_30 = 0;
    iVar11 = DAT_00153618 + 0x15344c;
    do {
      if (*(int *)pGVar12 != 0) {
        sVar1 = *(short *)(*(int *)pGVar12 + 6);
        iVar2 = SmDev();
        uVar3 = __floatsisf(local_30);
        uVar4 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
        uVar4 = __mulsf3(uVar4,uVar3);
        uVar4 = __subsf3(uVar4,*(undefined4 *)(this + DAT_0015361c));
        iVar2 = SmDev();
        uVar5 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x20),*(undefined4 *)(this + 0xf10));
        __addsf3(uVar4,uVar5);
        __fixsfsi();
        uVar4 = __floatsisf();
        iVar2 = SmDev();
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        uVar5 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
        uVar6 = __floatsisf(*(undefined4 *)(this + DAT_00153620));
        uVar5 = __mulsf3(uVar5,uVar6);
        __subsf3(uVar4,uVar5);
        iVar2 = __fixsfsi();
        iVar7 = SmDev();
        __mulsf3(*(undefined4 *)(iVar11 + iVar7 * 4 + 0x38),*(undefined4 *)(this + DAT_00153624));
        uVar8 = __fixsfsi();
        (*pcVar10)(piVar9,uVar8 & 0xffff | iVar2 << 0x10);
        paintRouletteSub(this,local_30,param_1);
        iVar2 = SmDev();
        uVar4 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
        uVar3 = __mulsf3(uVar4,uVar3);
        uVar3 = __subsf3(uVar3,*(undefined4 *)(this + DAT_0015361c));
        iVar2 = SmDev();
        uVar4 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x20),*(undefined4 *)(this + 0xf10));
        __addsf3(uVar3,uVar4);
        __fixsfsi();
        uVar3 = __floatsisf();
        iVar2 = SmDev();
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        uVar4 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
        uVar5 = __floatsisf(*(undefined4 *)(this + DAT_00153620));
        uVar4 = __mulsf3(uVar4,uVar5);
        __addsf3(uVar3,uVar4);
        iVar2 = __fixsfsi();
        iVar7 = SmDev();
        __mulsf3(*(undefined4 *)(iVar11 + iVar7 * 4 + 0x38),*(undefined4 *)(this + DAT_00153624));
        uVar8 = __fixsfsi();
        (*pcVar10)(piVar9,uVar8 & 0xffff | iVar2 << 0x10);
        paintRouletteSub(this,local_30,param_1);
        piVar9 = *(int **)pGVar12;
        pcVar10 = *(code **)(*piVar9 + 0xc);
        iVar2 = SmDev();
        __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x38),*(undefined4 *)(this + DAT_00153624));
        uVar8 = __fixsfsi();
        (*pcVar10)(piVar9,(int)sVar1 << 0x10 | uVar8 & 0xffff);
      }
      pGVar12 = pGVar12 + 4;
      local_30 = local_30 + 1;
    } while (local_30 != 0xaa);
  }
  return;
}


