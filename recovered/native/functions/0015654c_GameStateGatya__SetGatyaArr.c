/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015654c GameStateGatya::SetGatyaArr */

/* GameStateGatya::SetGatyaArr(int) */

void __thiscall GameStateGatya::SetGatyaArr(GameStateGatya *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  GameStateGatya *pGVar9;
  int iVar10;
  GameStateGatya *local_24;
  
  iVar3 = DAT_00156670;
  iVar4 = DAT_0015666c;
  *(undefined4 *)(this + DAT_00156668 + 4) = 0xffffffff;
  *(undefined4 *)(this + iVar4 + 4) = 0xffffffff;
  *(undefined4 *)(this + iVar3 + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xe34) = 0xffffffff;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 2;
    *(undefined2 *)(this + DAT_00156674 + iVar4) = 0xffff;
    iVar4 = iVar3;
  } while (iVar3 != 0x154);
  iVar4 = (param_1 + 0xc) * 0x2a8;
  iVar8 = 0;
  pGVar9 = this + DAT_0015667c;
  iVar3 = iVar4 + *(int *)(DAT_00156678 + 0x156598);
  iVar10 = 0;
  local_24 = this;
  do {
    uVar7 = *(uint *)(iVar3 + iVar8);
    if (1 < uVar7 + 1) {
      *(short *)(local_24 + DAT_00156674) = (short)uVar7;
      *(short *)pGVar9 = (short)*(undefined4 *)(iVar3 + iVar8);
      uVar5 = *(undefined4 *)(iVar4 + *(int *)(DAT_00156680 + 0x1565ca) + iVar8);
      *(int *)(pGVar9 + 4) = iVar10;
      pGVar9[2] = SUB41(uVar5,0);
      pGVar9[3] = (GameStateGatya)0x0;
      cVar1 = *(char *)(*(int *)((uVar7 & 0xffff) * 4 +
                                *(int *)(*(int *)(this + 0xc) + DAT_00156684)) + 0xb40);
      iVar6 = DAT_00156668;
      if ((cVar1 == '\x06') || (iVar6 = DAT_00156670, iVar2 = DAT_0015666c, cVar1 != '\x05')) {
        iVar2 = iVar6;
      }
      Vector<GatyaLotteryData>::addElement
                (this + iVar2,*(undefined4 *)(this + (iVar10 + DAT_00156688) * 8 + 4),
                 *(undefined4 *)(this + (iVar10 + DAT_00156688) * 8 + 8));
      if (*(int *)(iVar4 + *(int *)(DAT_0015668c + 0x156612) + iVar8) == 1) {
        Vector<GatyaLotteryData>::addElement
                  (this + 0xe30,*(undefined4 *)(this + (iVar10 + DAT_00156688) * 8 + 4),
                   *(undefined4 *)(this + (iVar10 + DAT_00156688) * 8 + 8));
      }
    }
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 4;
    local_24 = local_24 + 2;
    pGVar9 = pGVar9 + 8;
  } while (iVar10 != 0xaa);
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar8 = DAT_00156674 + iVar3;
    iVar3 = iVar3 + 2;
    iVar4 = iVar4 + (uint)((uint)*(ushort *)(this + iVar8) + DAT_00156690 != 0);
  } while (iVar3 != 0x154);
  *(int *)(this + DAT_00156694) = iVar4;
  return;
}


