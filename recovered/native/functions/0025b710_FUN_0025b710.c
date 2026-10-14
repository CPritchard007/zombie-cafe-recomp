/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b710 FUN_0025b710 */

uint FUN_0025b710(int param_1,longlong *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  uint local_38;
  int local_34;
  byte *local_28;
  
  iVar11 = 2;
  if (param_4 == 1) {
    iVar11 = 1;
  }
  pbVar4 = (byte *)(param_1 + param_3);
  for (pbVar9 = (byte *)(param_1 + (uint)(param_4 == 3)); pbVar10 = pbVar9, pbVar9 < pbVar4;
      pbVar9 = pbVar9 + iVar11) {
    uVar6 = (uint)*pbVar9;
    bVar1 = *(byte *)(DAT_0025b878 + 0x25b774 + uVar6);
    bVar2 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      if (uVar6 == 0x2d) {
        pbVar9 = pbVar9 + iVar11;
        bVar2 = 1;
        pbVar10 = pbVar9;
      }
      else if (uVar6 == 0x2b) {
        pbVar9 = pbVar9 + iVar11;
        pbVar10 = pbVar9;
      }
      goto LAB_0025b768;
    }
  }
  bVar2 = 0;
LAB_0025b768:
  for (; (pbVar9 < pbVar4 && (*pbVar9 == 0x30)); pbVar9 = pbVar9 + iVar11) {
  }
  local_38 = 0;
  local_34 = 0;
  lVar13 = 0;
  pbVar12 = pbVar9;
  while( true ) {
    iVar3 = (int)((ulonglong)lVar13 >> 0x20);
    iVar8 = (int)lVar13;
    if (pbVar4 <= pbVar12) break;
    local_38 = (uint)*pbVar12;
    if ((local_38 < 0x30) || (0x39 < local_38)) break;
    lVar13 = __muldi3(iVar8,iVar3,10,0);
    lVar13 = lVar13 + -0x30 + (ulonglong)local_38;
    local_34 = local_34 + iVar11;
    pbVar12 = pbVar12 + iVar11;
  }
  iVar5 = DAT_0025b870;
  iVar7 = DAT_0025b874;
  if (-1 < lVar13) {
    if (bVar2 == 0) {
      *param_2 = lVar13;
      goto LAB_0025b7ea;
    }
    iVar5 = -iVar8;
    iVar7 = -(uint)(iVar8 != 0) - iVar3;
  }
  *(int *)param_2 = iVar5;
  *(int *)((int)param_2 + 4) = iVar7;
LAB_0025b7ea:
  if (((local_38 == 0) || (uVar6 = 1, pbVar4 <= pbVar12)) &&
     ((local_34 != 0 || (uVar6 = 1, pbVar10 != pbVar9)))) {
    iVar8 = iVar11 * 0x13;
    uVar6 = 1;
    if ((local_34 == iVar8 || local_34 + iVar11 * -0x13 < 0 != SBORROW4(local_34,iVar8)) &&
       (uVar6 = 0, local_34 + iVar11 * -0x13 < 0 == SBORROW4(local_34,iVar8))) {
      iVar8 = 0;
      local_28 = pbVar9;
      while (((uint)(uVar6 < 0x12) != (int)uVar6 >> 0x1f && (iVar8 == 0))) {
        bVar1 = *local_28;
        pbVar4 = (byte *)(uVar6 + DAT_0025b87c + 0x25b822);
        uVar6 = uVar6 + 1;
        local_28 = local_28 + iVar11;
        iVar8 = ((uint)bVar1 - (uint)*pbVar4) * 10;
      }
      if (iVar8 == 0) {
        iVar8 = pbVar9[iVar11 * 0x12] - 0x38;
      }
      uVar6 = 0;
      if ((-1 < iVar8) && (uVar6 = 1, iVar8 == 0)) {
        uVar6 = (uint)(bVar2 == 0) * 2;
      }
    }
  }
  return uVar6;
}


