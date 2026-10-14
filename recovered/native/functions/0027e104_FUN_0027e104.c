/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e104 FUN_0027e104 */

uint FUN_0027e104(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  char *local_44;
  uint local_40;
  int local_3c;
  undefined1 auStack_38 [24];
  ushort local_20;
  
  iVar6 = *(int *)(param_2 + 0x48);
  iVar9 = *param_1;
  iVar11 = *(int *)(param_2 + 0x44);
  if (((*(char *)(iVar9 + 0xe) == '\0') || (uVar4 = FUN_002733c4(iVar11), uVar4 == 0)) &&
     ((-1 < (int)((uint)*(ushort *)(iVar11 + 0x18) << 0x1e) ||
      ((iVar5 = FUN_0026189c(iVar11), iVar5 == 0 || (uVar4 = FUN_002602cc(iVar11), uVar4 == 0))))))
  {
    if ((param_6 == 0) && ((int)((uint)*(ushort *)(iVar11 + 0x18) << 0x1d) < 0)) {
      uVar7 = *(uint *)(iVar11 + 0x14);
    }
    else {
      uVar7 = 0;
    }
    *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) & 0xfffb;
    FUN_0025dce0(*(undefined4 *)(iVar9 + 0xb4),param_5,0,&local_3c);
    iVar5 = local_3c;
    if (local_3c != 0) {
      *(ushort *)(iVar11 + 0x18) = *(ushort *)(iVar11 + 0x18) | *(ushort *)(local_3c + 0x18) & 4;
      if (*(char *)(iVar9 + 0xe) == '\0') {
        FUN_0025bcf0(local_3c);
      }
      else {
        FUN_00261ae0(local_3c,*(int *)(iVar9 + 0x18) + 1);
      }
    }
    uVar8 = *(undefined4 *)(iVar11 + 0x14);
    FUN_00261ae0(iVar11,param_5);
    FUN_00261928(iVar11);
    if (*(char *)(iVar9 + 0xe) != '\0') {
      FUN_00261ae0(iVar5,uVar8);
      FUN_002749b4(iVar5);
    }
    uVar4 = uVar7;
    if (uVar7 != 0) {
      uVar4 = FUN_00274878(iVar9,uVar7,&local_3c,0);
      if (uVar4 == 0) {
        *(ushort *)(local_3c + 0x18) = *(ushort *)(local_3c + 0x18) | 4;
        FUN_00261928();
        FUN_002749b4(local_3c);
      }
      else if (uVar7 <= *(uint *)(iVar9 + 0x1c)) {
        FUN_0025dfa4(*(undefined4 *)(iVar9 + 0x38),uVar7,*(undefined4 *)(iVar9 + 0xb0));
      }
    }
  }
  if (uVar4 != 0) {
    return uVar4;
  }
  *(undefined4 *)(param_2 + 0x48) = param_5;
  local_40 = uVar4;
  if ((param_3 == 1) || (param_3 == 5)) {
    uVar4 = FUN_0027dfec(param_2);
    if (uVar4 != 0) {
      return uVar4;
    }
    local_40 = 0;
    if (param_3 == 1) {
      return 0;
    }
  }
  else {
    iVar9 = FUN_0025ba30(*(undefined4 *)(param_2 + 0x38));
    if ((iVar9 != 0) && (FUN_0027df1c(param_1,iVar9,4,param_5,&local_40), local_40 != 0)) {
      return local_40;
    }
  }
  local_40 = FUN_00274984(param_1,param_4,&local_44,0);
  if (local_40 != 0) {
    return local_40;
  }
  local_40 = FUN_002733c4(*(undefined4 *)(local_44 + 0x44));
  pcVar3 = local_44;
  if (local_40 != 0) {
    FUN_00274a30(local_44);
    return local_40;
  }
  if (param_3 == 4) {
    uVar10 = *(undefined4 *)(local_44 + 0x38);
    iVar9 = FUN_0025ba30(uVar10);
    uVar8 = DAT_0027e380;
    if (iVar9 == iVar6) {
      FUN_0025ba48(uVar10,param_5);
      local_40 = 0;
      goto LAB_0027e358;
    }
  }
  else {
    cVar1 = *local_44;
    if (cVar1 == '\0') {
      FUN_0026b81c(local_44);
    }
    uVar2 = *(ushort *)(pcVar3 + 0x10);
    for (uVar4 = 0; (int)uVar4 < (int)(uint)uVar2; uVar4 = uVar4 + 1) {
      iVar9 = *(int *)(pcVar3 + 0x38) +
              (uint)(CONCAT11(*(undefined1 *)(*(int *)(pcVar3 + 0x40) + uVar4 * 2),
                              *(undefined1 *)(*(int *)(pcVar3 + 0x40) + uVar4 * 2 + 1)) &
                    *(ushort *)(pcVar3 + 0x12));
      if (param_3 == 3) {
        FUN_00260a6c(pcVar3,iVar9,auStack_38);
        uVar7 = (uint)local_20;
        if ((uVar7 != 0) &&
           (iVar9 + uVar7 + 3 <= *(int *)(pcVar3 + 0x38) + (uint)*(ushort *)(pcVar3 + 0x12))) {
          iVar9 = iVar9 + uVar7;
          iVar11 = FUN_0025ba30(iVar9);
          goto joined_r0x0027e30a;
        }
      }
      else {
        iVar11 = FUN_0025ba30(iVar9);
joined_r0x0027e30a:
        if (iVar11 == iVar6) {
          FUN_0025ba48(iVar9,param_5);
          break;
        }
      }
    }
    if (uVar4 != uVar2) {
LAB_0027e34e:
      local_40 = 0;
      *pcVar3 = cVar1;
      goto LAB_0027e358;
    }
    uVar8 = DAT_0027e384;
    if (param_3 == 5) {
      iVar11 = *(int *)(pcVar3 + 0x38) + (byte)pcVar3[5] + 8;
      iVar9 = FUN_0025ba30(iVar11);
      uVar8 = DAT_0027e384;
      if (iVar9 == iVar6) {
        FUN_0025ba48(iVar11,param_5);
        goto LAB_0027e34e;
      }
    }
  }
  local_40 = FUN_0026b4e4(uVar8);
LAB_0027e358:
  FUN_00274a30(local_44);
  if (local_40 == 0) {
    FUN_0027df1c(param_1,param_5,param_3,param_4,&local_40);
  }
  return local_40;
}


