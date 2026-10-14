/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272288 FUN_00272288 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00272298) */
/* WARNING: Removing unreachable block (ram,0x00272298) */
/* WARNING: Removing unreachable block (ram,0x00272318) */

undefined4 FUN_00272288(int param_1,undefined4 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_80 [48];
  uint local_50;
  int local_4c;
  int local_48;
  
  switch(param_2) {
  case 1:
    uVar5 = (uint)*(byte *)(param_1 + 0x10);
    goto LAB_002722b0;
  default:
    return 0xc;
  case 4:
    uVar5 = *(uint *)(param_1 + 0x14);
    goto LAB_002722b0;
  case 5:
    uVar7 = param_3[1];
    uVar5 = *param_3;
    if (*(int *)(param_1 + 0x28) < 1) {
      return 0;
    }
    iVar2 = (**(code **)(DAT_002723f0 + 0x272318))(*(undefined4 *)(param_1 + 0xc),auStack_80);
    if (iVar2 != 0) {
      return DAT_00272404;
    }
    uVar8 = *(uint *)(param_1 + 0x28);
    iVar9 = (int)uVar8 >> 0x1f;
    iVar2 = uVar5 + uVar8;
    uVar11 = __aeabi_ldivmod(iVar2 + -1,
                             uVar7 + iVar9 + (uint)CARRY4(uVar5,uVar8) + -1 + (uint)(iVar2 != 0),
                             uVar8,iVar9);
    lVar12 = __muldi3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar8,iVar9);
    iVar2 = (int)((ulonglong)lVar12 >> 0x20);
    if (lVar12 <= CONCAT44(local_4c,local_50)) {
      return 0;
    }
    iVar9 = FUN_0025e730(*(undefined4 *)(param_1 + 0xc),iVar2,(uint)lVar12,iVar2);
    if (iVar9 == 0) {
      uVar5 = local_48 * 2;
      uVar11 = __aeabi_ldivmod(local_50 + uVar5 + -1,
                               local_4c + ((int)uVar5 >> 0x1f) + (uint)CARRY4(local_50,uVar5) + -1 +
                               (uint)(local_50 + uVar5 != 0),local_48,local_48 >> 0x1f);
      lVar13 = __muldi3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_48,local_48 >> 0x1f);
      uVar4 = (undefined4)((ulonglong)lVar13 >> 0x20);
      lVar13 = lVar13 + -1;
      iVar9 = DAT_00272400 + 0x272378;
      do {
        iVar10 = (int)((ulonglong)lVar13 >> 0x20);
        if (iVar2 == iVar10 || iVar2 < iVar10) {
          if (iVar2 != iVar10) {
            return 0;
          }
          if ((uint)lVar12 <= (uint)lVar13) {
            return 0;
          }
        }
        uVar11 = FUN_0025e7e8(param_1,uVar4,(uint)lVar13,iVar10,iVar9,1);
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 1) {
          return DAT_00272408;
        }
        lVar13 = lVar13 + local_48;
      } while( true );
    }
    puVar3 = (undefined4 *)__errno();
    iVar2 = DAT_002723f4 + 0x27233c;
    *(undefined4 *)(param_1 + 0x14) = *puVar3;
    uVar4 = FUN_0026c154(DAT_002723f8,iVar2,*(undefined4 *)(param_1 + 0x20),DAT_002723fc);
    return uVar4;
  case 6:
    *(uint *)(param_1 + 0x28) = *param_3;
    return 0;
  case 10:
    uVar5 = *param_3;
    uVar1 = *(ushort *)(param_1 + 0x12);
    uVar6 = 4;
    break;
  case 0xc:
    uVar5 = sqlite3_mprintf(DAT_0027240c + 0x2723e2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10));
    *param_3 = uVar5;
    return 0;
  case 0xd:
    uVar1 = *(ushort *)(param_1 + 0x12);
    uVar5 = *param_3;
    uVar6 = 0x10;
  }
  if (-1 < (int)uVar5) {
    if (uVar5 != 0) {
      *(ushort *)(param_1 + 0x12) = uVar1 | uVar6;
      return 0;
    }
    *(ushort *)(param_1 + 0x12) = uVar1 & ~uVar6;
    return 0;
  }
  uVar5 = (uint)((uVar1 & uVar6) != 0);
LAB_002722b0:
  *param_3 = uVar5;
  return 0;
}


