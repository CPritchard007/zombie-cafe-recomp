/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269020 FUN_00269020 */

uint FUN_00269020(int *param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  int *local_1c;
  
  if (param_2 != 0) {
    piVar2 = (int *)*param_1;
    iVar3 = *(int *)(param_2 + 0x2c) + piVar2[0x78];
    if (*(int *)(*piVar2 + 0x58) < iVar3) {
      FUN_00268e48(piVar2,DAT_002690b4 + 0x269044);
      param_2 = 1;
    }
    else {
      piVar2[0x78] = iVar3;
      local_2c = DAT_002690b8;
      bVar1 = *(byte *)(param_1 + 7);
      *(byte *)(param_1 + 7) = bVar1 & 0xfd;
      local_2c = local_2c + 0x269060;
      local_28 = DAT_002690bc + 0x269068;
      local_24 = *param_1;
      local_1c = param_1;
      FUN_0025c882(&local_2c,param_2);
      *(int *)(*param_1 + 0x1e0) = *(int *)(*param_1 + 0x1e0) - *(int *)(param_2 + 0x2c);
      if ((0 < param_1[6]) || (0 < *(int *)(local_24 + 0x44))) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 8;
      }
      if ((*(byte *)(param_1 + 7) & 2) == 0) {
        if ((bVar1 & 2) != 0) {
          *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
        }
      }
      else {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 2;
      }
      param_2 = ((uint)*(ushort *)(param_2 + 2) << 0x1c) >> 0x1f;
    }
  }
  return param_2;
}


