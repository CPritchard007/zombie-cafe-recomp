/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272d70 sqlite3_test_control */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00272d84) */
/* WARNING: Removing unreachable block (ram,0x00272d84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint sqlite3_test_control(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  void *__dest;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  void *__src;
  uint uVar9;
  uint extraout_r1;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  uint local_2c [2];
  
  iVar7 = DAT_00273064;
  switch(param_1) {
  case 5:
    __dest = (void *)(DAT_0027304c + 0x272e0f);
    __src = (void *)(DAT_00273050 + 0x272e0e);
    goto LAB_00272dbe;
  case 6:
    __src = (void *)(DAT_00273058 + 0x272e1f);
    __dest = (void *)(DAT_00273054 + 0x272e1a);
LAB_00272dbe:
    memcpy(__dest,__src,DAT_0027305c);
    break;
  case 7:
    *(undefined1 *)(DAT_00273060 + 0x272e2e) = 0;
    return 0;
  case 8:
    piVar1 = (int *)FUN_0025f3c2(param_2);
    iVar7 = FUN_0025f3a8(((int)(((uint)((int)(param_2 + 7) >> 0x1f) >> 0x1d) + param_2 + 7) >> 3) +
                         1);
    iVar2 = sqlite3_malloc(0x200);
    if (((iVar7 != 0) && (piVar1 != (int *)0x0)) && (iVar2 != 0)) {
      FUN_00260168(0,1);
      FUN_0025dfa4(0,1,iVar2);
      iVar3 = 0;
      do {
        while( true ) {
          uVar13 = param_3[iVar3];
          if (uVar13 == 0) {
            iVar3 = FUN_00261810(0,0);
            iVar4 = FUN_00261810(piVar1,param_2 + 1);
            iVar5 = FUN_00261810(piVar1,0);
            iVar12 = *piVar1;
            local_2c[0] = 1;
            goto LAB_00272f34;
          }
          if ((uVar13 < 6) && ((1 << (uVar13 & 0xff) & 0x26U) != 0)) {
            piVar11 = param_3 + iVar3 + 2;
            local_2c[0] = *piVar11 - 1;
            *piVar11 = *piVar11 + param_3[iVar3 + 3];
            uVar6 = 4;
          }
          else {
            sqlite3_randomness(4,local_2c);
            uVar6 = 2;
          }
          uVar9 = param_3[iVar3 + 1];
          uVar10 = uVar9 - 1;
          param_3[iVar3 + 1] = uVar10;
          iVar3 = iVar3 + (uVar6 & (int)(uVar9 - 2 | uVar10) >> 0x1f);
          __aeabi_idivmod(local_2c[0] & 0x7fffffff,param_2);
          uVar6 = extraout_r1 + 1;
          local_2c[0] = extraout_r1;
          if ((uVar13 & 1) != 0) break;
          pbVar14 = (byte *)(iVar7 + ((int)uVar6 >> 3));
          *pbVar14 = *pbVar14 & ~(byte)(1 << (uVar6 & 7));
          FUN_0025dfa4(piVar1,extraout_r1 + 1,iVar2);
        }
        pbVar14 = (byte *)(((int)uVar6 >> 3) + iVar7);
        *pbVar14 = (byte)(1 << (uVar6 & 7)) | *pbVar14;
      } while ((uVar13 == 5) || (iVar4 = FUN_00260168(piVar1,extraout_r1 + 1), iVar4 == 0));
    }
    uVar13 = 0xffffffff;
    goto LAB_00272f50;
  case 10:
    *(uint *)(DAT_00273064 + 0x272fcc) = param_2;
    *(undefined4 **)(iVar7 + 0x272fd0) = param_3;
    break;
  case 0xb:
    uVar13 = *(uint *)(DAT_00273068 + 0x272ff6);
    if (param_2 == 0) {
      return uVar13;
    }
    *(uint *)(DAT_00273068 + 0x272ff6) = param_2;
    return uVar13;
  case 0xc:
    return 0;
  case 0xd:
    return param_2;
  case 0xe:
    sqlite3_mutex_enter(*(undefined4 *)(param_2 + 0xc));
    FUN_00262148(*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),0,param_3,0);
    sqlite3_mutex_leave(*(undefined4 *)(param_2 + 0xc));
    break;
  case 0xf:
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffffff00 | (uint)param_3 & 0xff;
    break;
  case 0x10:
    iVar7 = FUN_0025b154(param_2);
    if ((1 < iVar7) && (iVar7 = FUN_00262a48(param_2,iVar7), iVar7 != 0x1a)) {
      return 0x79;
    }
    break;
  case 0x11:
    if (param_2 != 0) {
      uVar8 = FUN_0025af60();
      *param_3 = uVar8;
    }
    FUN_0025b000(param_4);
    break;
  case 0x12:
    *(uint *)(DAT_0027306c + 0x273124) = param_2;
  }
  return 0;
LAB_00272f34:
  uVar13 = local_2c[0];
  if ((int)param_2 < (int)local_2c[0]) goto code_r0x00272f3a;
  uVar6 = FUN_00261810(piVar1,local_2c[0]);
  if (((int)(uint)*(byte *)(iVar7 + ((int)uVar13 >> 3)) >> (uVar13 & 7) & 1U) != uVar6)
  goto LAB_00272f50;
  local_2c[0] = uVar13 + 1;
  goto LAB_00272f34;
code_r0x00272f3a:
  uVar13 = (iVar12 - param_2) + iVar3 + iVar4 + iVar5;
LAB_00272f50:
  sqlite3_free(iVar2);
  sqlite3_free(iVar7);
  FUN_0025f68e(piVar1);
  return uVar13;
}


