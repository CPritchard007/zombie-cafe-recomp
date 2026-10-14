/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266dd0 FUN_00266dd0 */

int FUN_00266dd0(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 0x20) < param_2 + *(int *)(param_1 + 0x1c)) &&
     (iVar2 = FUN_0026622e(), iVar2 != 0)) {
    return 0;
  }
  iVar2 = DAT_00266e5c;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (0 < param_2) {
    iVar6 = iVar3 * 0x14;
    iVar4 = 0;
    do {
      bVar1 = *param_3;
      pbVar5 = (byte *)(*(int *)(param_1 + 4) + iVar6);
      uVar7 = (uint)(char)param_3[2];
      *pbVar5 = bVar1;
      *(int *)(pbVar5 + 4) = (int)(char)param_3[1];
      if (((int)uVar7 < 0) && ((*(byte *)(iVar2 + 0x266e50 + (uint)bVar1) & 1) != 0)) {
        uVar7 = ~uVar7 + iVar3;
      }
      *(uint *)(pbVar5 + 8) = uVar7;
      bVar1 = param_3[3];
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[3] = 0;
      *(int *)(pbVar5 + 0xc) = (int)(char)bVar1;
      iVar4 = iVar4 + 1;
      pbVar5[1] = 0;
      param_3 = param_3 + 4;
      iVar6 = iVar6 + 0x14;
    } while (iVar4 != param_2);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar4;
  }
  return iVar3;
}


