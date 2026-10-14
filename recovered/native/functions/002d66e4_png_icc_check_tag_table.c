/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d66e4 png_icc_check_tag_table */

undefined4
png_icc_check_tag_table
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int local_40;
  
  bVar1 = *(byte *)(param_5 + 0x80);
  bVar2 = *(byte *)(param_5 + 0x81);
  bVar3 = *(byte *)(param_5 + 0x83);
  bVar4 = *(byte *)(param_5 + 0x82);
  pbVar11 = (byte *)(param_5 + 0x84);
  iVar12 = DAT_002d67b8 + 0x2d6718;
  local_40 = 0;
  while( true ) {
    if (local_40 ==
        (uint)bVar1 * 0x1000000 + (uint)bVar2 * 0x10000 + (uint)bVar3 + (uint)bVar4 * 0x100) {
      return 1;
    }
    bVar5 = pbVar11[8];
    iVar10 = (uint)*pbVar11 * 0x1000000 + (uint)pbVar11[1] * 0x10000 + (uint)pbVar11[3] +
             (uint)pbVar11[2] * 0x100;
    bVar6 = pbVar11[10];
    uVar13 = (uint)pbVar11[4] * 0x1000000 + (uint)pbVar11[5] * 0x10000 + (uint)pbVar11[7] +
             (uint)pbVar11[6] * 0x100;
    bVar7 = pbVar11[9];
    bVar8 = pbVar11[0xb];
    if ((pbVar11[7] & 3) != 0) {
      FUN_002d5844(param_1,0,param_3,iVar10,iVar12);
    }
    if ((param_4 < uVar13) ||
       (param_4 - uVar13 <
        (uint)bVar5 * 0x1000000 + (uint)bVar7 * 0x10000 + (uint)bVar8 + (uint)bVar6 * 0x100)) break;
    pbVar11 = pbVar11 + 0xc;
    local_40 = local_40 + 1;
  }
  uVar9 = FUN_002d5844(param_1,param_2,param_3,iVar10,DAT_002d67bc + 0x2d6796);
  return uVar9;
}


