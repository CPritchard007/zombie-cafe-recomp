/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00156458 GameStateGatya::SetRewardGatyaArr */

/* GameStateGatya::SetRewardGatyaArr() */

void GameStateGatya::SetRewardGatyaArr(void)

{
  char cVar1;
  int iVar2;
  int in_r0;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int local_1c;
  
  iVar7 = DAT_00156528;
  iVar10 = DAT_00156524;
  *(undefined4 *)(in_r0 + DAT_00156520 + 4) = 0xffffffff;
  *(undefined4 *)(in_r0 + iVar10 + 4) = 0xffffffff;
  iVar10 = DAT_00156530;
  iVar8 = *(int *)(DAT_0015652c + 0x15647a);
  *(undefined4 *)(in_r0 + iVar7 + 4) = 0xffffffff;
  *(undefined4 *)(in_r0 + 0xe34) = 0xffffffff;
  puVar9 = (undefined2 *)(in_r0 + iVar10);
  iVar10 = 0;
  local_1c = in_r0;
  do {
    puVar5 = (uint *)(iVar10 * 4 + iVar8);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      *(short *)(local_1c + DAT_00156534) = (short)uVar4;
      *puVar9 = (short)*puVar5;
      iVar7 = DAT_0015653c;
      uVar6 = *(undefined4 *)(*(int *)(DAT_00156538 + 0x1564b0) + iVar10 * 4);
      *(int *)(puVar9 + 2) = iVar10;
      *(char *)(puVar9 + 1) = (char)uVar6;
      *(undefined1 *)((int)puVar9 + 3) = 0;
      cVar1 = *(char *)(*(int *)((uVar4 & 0xffff) * 4 +
                                *(int *)(*(int *)(in_r0 + 0xc) + DAT_00156540)) + 0xb40);
      iVar3 = DAT_00156520;
      if ((cVar1 == '\x06') || (iVar3 = DAT_00156528, iVar2 = DAT_00156524, cVar1 != '\x05')) {
        iVar2 = iVar3;
      }
      iVar7 = in_r0 + (iVar10 + iVar7) * 8;
      Vector<GatyaLotteryData>::addElement
                (in_r0 + iVar2,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
    }
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 4;
    local_1c = local_1c + 2;
  } while (iVar10 != 0xaa);
  iVar7 = 0;
  iVar10 = 0;
  do {
    iVar8 = in_r0 + iVar7;
    iVar7 = iVar7 + 2;
    iVar10 = iVar10 + (uint)((uint)*(ushort *)(iVar8 + DAT_00156534) + DAT_00156544 != 0);
  } while (iVar7 != 0x154);
  *(int *)(in_r0 + DAT_00156548) = iVar10;
  return;
}


