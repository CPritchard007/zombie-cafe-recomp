/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b268 FUN_0025b268 */

/* WARNING: Removing unreachable block (ram,0x0025b3d4) */
/* WARNING: Removing unreachable block (ram,0x0025b34a) */
/* WARNING: Removing unreachable block (ram,0x0025b52e) */

bool FUN_0025b268(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int extraout_r1;
  int extraout_r1_00;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48;
  undefined4 local_44;
  int local_3c;
  int local_38;
  int local_30;
  int local_24;
  int local_20;
  
  uVar9 = DAT_0025b53c;
  local_48 = 2;
  if (param_4 == 1) {
    local_48 = 1;
  }
  pbVar3 = (byte *)(param_1 + param_3);
  *(undefined4 *)param_2 = DAT_0025b538;
  *(undefined4 *)((int)param_2 + 4) = uVar9;
  iVar5 = DAT_0025b54c;
  pbVar8 = (byte *)(param_1 + (uint)(param_4 == 3));
  while( true ) {
    if (pbVar3 <= pbVar8) goto LAB_0025b6da;
    uVar4 = (uint)*pbVar8;
    if ((*(byte *)(DAT_0025b548 + 0x25b2d8 + uVar4) & 1) == 0) break;
    pbVar8 = pbVar8 + local_48;
  }
  if (uVar4 == 0x2d) {
    pbVar8 = pbVar8 + local_48;
    local_20 = -1;
  }
  else {
    local_20 = 1;
    if (uVar4 == 0x2b) {
      pbVar8 = pbVar8 + local_48;
    }
  }
  local_3c = 0;
  for (; (pbVar8 < pbVar3 && (*pbVar8 == 0x30)); pbVar8 = pbVar8 + local_48) {
    local_3c = local_3c + 1;
  }
  lVar11 = 0;
  while( true ) {
    iVar7 = DAT_0025b55c;
    if (((pbVar3 <= pbVar8) ||
        (bVar1 = *pbVar8, (*(byte *)(iVar5 + 0x25b35e + (uint)bVar1) & 4) == 0)) ||
       (CONCAT44(DAT_0025b554,DAT_0025b558) < lVar11)) break;
    lVar11 = __muldi3((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),10,0);
    lVar11 = lVar11 + (int)(bVar1 - 0x30);
    local_3c = local_3c + 1;
    pbVar8 = pbVar8 + local_48;
  }
  local_38 = 0;
  for (; local_24 = local_38 + local_3c, pbVar8 < pbVar3; pbVar8 = pbVar8 + local_48) {
    if ((*(byte *)(DAT_0025b550 + 0x25b372 + (uint)*pbVar8) & 4) == 0) {
      if (*pbVar8 != 0x2e) goto LAB_0025b404;
      goto LAB_0025b3b6;
    }
    local_38 = local_38 + 1;
  }
  iVar5 = 1;
  bVar2 = true;
  iVar7 = 0;
  goto LAB_0025b4da;
LAB_0025b3b6:
  pbVar8 = pbVar8 + local_48;
  if (pbVar3 <= pbVar8) goto LAB_0025b4c2;
  bVar1 = *pbVar8;
  if (((*(byte *)(iVar7 + 0x25b3c8 + (uint)bVar1) & 4) == 0) ||
     (CONCAT44(DAT_0025b554,DAT_0025b558) < lVar11)) goto LAB_0025b3f2;
  lVar11 = __muldi3((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),10,0);
  lVar11 = lVar11 + (int)(bVar1 - 0x30);
  local_24 = local_24 + 1;
  local_38 = local_38 + -1;
  goto LAB_0025b3b6;
LAB_0025b3f2:
  for (; pbVar8 < pbVar3; pbVar8 = pbVar8 + local_48) {
    if ((*(byte *)(DAT_0025b560 + 0x25b432 + (uint)*pbVar8) & 4) == 0) goto LAB_0025b404;
    local_24 = local_24 + 1;
  }
LAB_0025b4c2:
  bVar2 = true;
  iVar7 = 0;
  iVar5 = 1;
  goto LAB_0025b4da;
LAB_0025b404:
  if ((*pbVar8 == 0x45) || (*pbVar8 == 0x65)) {
    pbVar8 = pbVar8 + local_48;
    if (pbVar3 <= pbVar8) {
      bVar2 = false;
      iVar7 = 0;
      iVar5 = 1;
      goto LAB_0025b4da;
    }
    if (*pbVar8 == 0x2d) {
      iVar5 = -1;
      pbVar8 = pbVar8 + local_48;
    }
    else {
      iVar5 = 1;
      if (*pbVar8 == 0x2b) {
        pbVar8 = pbVar8 + local_48;
      }
    }
    bVar2 = false;
    iVar7 = 0;
    while ((pbVar8 < pbVar3 && ((*(byte *)(DAT_0025b564 + 0x25b484 + (uint)*pbVar8) & 4) != 0))) {
      iVar6 = DAT_0025b56c;
      if (iVar7 <= DAT_0025b568) {
        iVar6 = iVar7 * 10 + (*pbVar8 - 0x30);
      }
      bVar2 = true;
      pbVar8 = pbVar8 + local_48;
      iVar7 = iVar6;
    }
  }
  else {
    iVar5 = 1;
    bVar2 = true;
    iVar7 = 0;
  }
  if ((bVar2) && (local_24 != 0)) {
    for (; pbVar8 < pbVar3; pbVar8 = pbVar8 + local_48) {
      if ((*(byte *)(DAT_0025b570 + 0x25b4de + (uint)*pbVar8) & 1) == 0) {
        bVar2 = true;
        goto LAB_0025b4da;
      }
    }
    bVar2 = true;
  }
LAB_0025b4da:
  uVar13 = CONCAT44(DAT_0025b544,DAT_0025b540);
  local_30 = 1;
  local_38 = iVar5 * iVar7 + local_38;
  if (local_38 < 0) {
    local_38 = -local_38;
    local_30 = -1;
  }
  if (lVar11 == 0) {
    if ((local_24 == 0) || (-1 < local_20)) {
      uVar13 = CONCAT44(DAT_0025b6fc,DAT_0025b6f8);
    }
  }
  else {
    if (local_30 == 1) {
      while( true ) {
        if ((local_38 < 1) || (CONCAT44(DAT_0025b554,DAT_0025b574) < lVar11)) break;
        lVar11 = __muldi3((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),10,0);
        local_38 = local_38 + -1;
      }
    }
    else {
      while( true ) {
        uVar9 = (undefined4)((ulonglong)lVar11 >> 0x20);
        iVar5 = 10;
        iVar7 = 0;
        __aeabi_ldivmod((int)lVar11,uVar9);
        if ((iVar5 != 0 || iVar7 != 0) || (local_38 < 1)) break;
        lVar11 = __aeabi_ldivmod((int)lVar11,uVar9,10,0);
        local_38 = local_38 + -1;
      }
    }
    if (local_20 == -1) {
      lVar11 = CONCAT44(-(uint)((int)lVar11 != 0) - (int)((ulonglong)lVar11 >> 0x20),-(int)lVar11);
    }
    uVar10 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uVar9 = (undefined4)lVar11;
    if (local_38 == 0) {
      uVar13 = __floatdidf(uVar9,uVar10);
    }
    else {
      if ((uint)(local_38 + DAT_0025b708) < 0x22) {
        uVar13 = CONCAT44(DAT_0025b6e4,DAT_0025b6e0);
        while( true ) {
          local_44 = (undefined4)((ulonglong)uVar13 >> 0x20);
          local_48 = (int)uVar13;
          __aeabi_idivmod(local_38,0x134);
          if (extraout_r1 == 0) break;
          uVar13 = __muldf3(local_48,local_44,DAT_0025b6e8,DAT_0025b6ec);
          local_38 = local_38 + -1;
        }
        if (local_30 == -1) {
          uVar13 = __floatdidf(uVar9,uVar10);
          uVar13 = __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),local_48,local_44);
          uVar12 = CONCAT44(DAT_0025b6f4,DAT_0025b6f0);
LAB_0025b69e:
          uVar13 = __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
          goto LAB_0025b6c0;
        }
        uVar13 = __floatdidf(uVar9,uVar10);
        uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),local_48,local_44);
        uVar12 = CONCAT44(DAT_0025b6f4,DAT_0025b6f0);
      }
      else if (DAT_0025b70c < local_38) {
        if (local_30 == -1) {
          uVar13 = __floatdidf(uVar9,uVar10);
          uVar12 = CONCAT44(DAT_0025b6fc,DAT_0025b6f8);
        }
        else {
          uVar13 = __floatdidf(uVar9,uVar10);
          uVar12 = __muldf3(DAT_0025b6f0,DAT_0025b6f4,DAT_0025b6f0,DAT_0025b6f4);
        }
      }
      else {
        uVar12 = CONCAT44(DAT_0025b6e4,DAT_0025b6e0);
        while( true ) {
          local_44 = (undefined4)((ulonglong)uVar12 >> 0x20);
          local_48 = (int)uVar12;
          __aeabi_idivmod(local_38,0x16);
          if (extraout_r1_00 == 0) break;
          uVar12 = __muldf3(local_48,local_44,DAT_0025b6e8,DAT_0025b6ec);
          local_38 = local_38 + -1;
        }
        while( true ) {
          local_44 = (undefined4)((ulonglong)uVar12 >> 0x20);
          local_48 = (int)uVar12;
          if (local_38 < 1) break;
          uVar12 = __muldf3(local_48,local_44,DAT_0025b700,DAT_0025b704);
          local_38 = local_38 + -0x16;
        }
        if (local_30 == -1) {
          uVar13 = __floatdidf(uVar9,uVar10);
          goto LAB_0025b69e;
        }
        uVar13 = __floatdidf(uVar9,uVar10);
      }
      uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                        (int)((ulonglong)uVar12 >> 0x20));
    }
  }
LAB_0025b6c0:
  *param_2 = uVar13;
  if ((local_24 < 1) || (pbVar8 < pbVar3)) {
LAB_0025b6da:
    bVar2 = false;
  }
  return bVar2;
}


