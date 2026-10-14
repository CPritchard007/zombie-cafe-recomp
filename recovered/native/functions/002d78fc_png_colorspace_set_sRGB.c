/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d78fc png_colorspace_set_sRGB */

undefined4 png_colorspace_set_sRGB(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((int)param_2 + 0x4a);
  uVar2 = 0;
  if (-1 < (short)uVar1) {
    if (param_3 < 4) {
      if ((-1 < (int)((uint)uVar1 << 0x1d)) || (*(ushort *)(param_2 + 0x12) == param_3)) {
        if ((int)((uint)uVar1 << 0x1a) < 0) {
          png_benign_error(param_1,DAT_002d79e0 + 0x2d7954);
          return 0;
        }
        if (((uVar1 & 2) != 0) &&
           (iVar3 = FUN_002d55a4(DAT_002d79e4 + 0x2d796a,param_2 + 1,100), iVar3 == 0)) {
          png_chunk_report(param_1,DAT_002d79e8 + 0x2d797a,2);
        }
        uVar2 = DAT_002d79ec;
        FUN_002d7888(param_1,param_2,DAT_002d79ec,2);
        *(short *)(param_2 + 0x12) = (short)param_3;
        iVar3 = DAT_002d79f0;
        uVar5 = *(undefined4 *)(DAT_002d79f0 + 0x2d79a6);
        uVar6 = *(undefined4 *)(DAT_002d79f0 + 0x2d79aa);
        puVar7 = (undefined4 *)(DAT_002d79f0 + 0x2d79ae);
        param_2[1] = *(undefined4 *)(DAT_002d79f0 + 0x2d79a2);
        param_2[2] = uVar5;
        param_2[3] = uVar6;
        uVar5 = *(undefined4 *)(iVar3 + 0x2d79b2);
        uVar6 = *(undefined4 *)(iVar3 + 0x2d79b6);
        param_2[4] = *puVar7;
        param_2[5] = uVar5;
        param_2[6] = uVar6;
        uVar5 = *(undefined4 *)(iVar3 + 0x2d79be);
        param_2[7] = *(undefined4 *)(iVar3 + 0x2d79ba);
        param_2[8] = uVar5;
        uVar5 = *(undefined4 *)(iVar3 + 0x2d7a22);
        uVar6 = *(undefined4 *)(iVar3 + 0x2d7a26);
        param_2[9] = *(undefined4 *)(iVar3 + 0x2d7a1e);
        param_2[10] = uVar5;
        param_2[0xb] = uVar6;
        uVar5 = *(undefined4 *)(iVar3 + 0x2d7a2e);
        uVar6 = *(undefined4 *)(iVar3 + 0x2d7a32);
        param_2[0xc] = *(undefined4 *)(iVar3 + 0x2d7a2a);
        param_2[0xd] = uVar5;
        param_2[0xe] = uVar6;
        uVar5 = *(undefined4 *)(iVar3 + 0x2d7a3a);
        uVar6 = *(undefined4 *)(iVar3 + 0x2d7a3e);
        param_2[0xf] = *(undefined4 *)(iVar3 + 0x2d7a36);
        param_2[0x10] = uVar5;
        param_2[0x11] = uVar6;
        *param_2 = uVar2;
        *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) | 0xe7;
        return 1;
      }
      iVar3 = DAT_002d79d8 + 0x2d793a;
      iVar4 = DAT_002d79dc + 0x2d793c;
    }
    else {
      iVar3 = DAT_002d79d0 + 0x2d7922;
      iVar4 = DAT_002d79d4 + 0x2d7924;
    }
    uVar2 = FUN_002d5844(param_1,param_2,iVar3,param_3,iVar4);
  }
  return uVar2;
}


